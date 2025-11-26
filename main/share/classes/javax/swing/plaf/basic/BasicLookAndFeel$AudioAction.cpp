#include <javax/swing/plaf/basic/BasicLookAndFeel$AudioAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

#undef STOP

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLookAndFeel$AudioAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$AudioAction, this$0)},
	{"audioResource", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicLookAndFeel$AudioAction, audioResource)},
	{"audioBuffer", "[B", nullptr, $PRIVATE, $field(BasicLookAndFeel$AudioAction, audioBuffer)},
	{}
};

$MethodInfo _BasicLookAndFeel$AudioAction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$AudioAction::*)($BasicLookAndFeel*,$String*,$String*)>(&BasicLookAndFeel$AudioAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cancelCurrentSound", "(Ljavax/sound/sampled/Clip;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLookAndFeel$AudioAction::*)($Clip*)>(&BasicLookAndFeel$AudioAction::cancelCurrentSound))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicLookAndFeel$AudioAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$AudioAction", "javax.swing.plaf.basic.BasicLookAndFeel", "AudioAction", $PRIVATE},
	{}
};

$ClassInfo _BasicLookAndFeel$AudioAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLookAndFeel$AudioAction",
	"javax.swing.AbstractAction",
	"javax.sound.sampled.LineListener",
	_BasicLookAndFeel$AudioAction_FieldInfo_,
	_BasicLookAndFeel$AudioAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicLookAndFeel$AudioAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel"
};

$Object* allocate$BasicLookAndFeel$AudioAction($Class* clazz) {
	return $of($alloc(BasicLookAndFeel$AudioAction));
}

$Object* BasicLookAndFeel$AudioAction::clone() {
	 return this->$AbstractAction::clone();
}

int32_t BasicLookAndFeel$AudioAction::hashCode() {
	 return this->$AbstractAction::hashCode();
}

bool BasicLookAndFeel$AudioAction::equals(Object$* arg0) {
	 return this->$AbstractAction::equals(arg0);
}

$String* BasicLookAndFeel$AudioAction::toString() {
	 return this->$AbstractAction::toString();
}

void BasicLookAndFeel$AudioAction::finalize() {
	this->$AbstractAction::finalize();
}

void BasicLookAndFeel$AudioAction::init$($BasicLookAndFeel* this$0, $String* name, $String* resource) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	$set(this, audioResource, resource);
}

void BasicLookAndFeel$AudioAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->audioBuffer == nullptr) {
		$set(this, audioBuffer, this->this$0->loadAudioData(this->audioResource));
	}
	if (this->audioBuffer != nullptr) {
		cancelCurrentSound(nullptr);
		try {
			$var($AudioInputStream, soundStream, $AudioSystem::getAudioInputStream(static_cast<$InputStream*>($$new($ByteArrayInputStream, this->audioBuffer))));
			$load($Clip);
			$var($DataLine$Info, info, $new($DataLine$Info, $Clip::class$, $($nc(soundStream)->getFormat())));
			$var($Clip, clip, $cast($Clip, $AudioSystem::getLine(info)));
			$nc(clip)->open(soundStream);
			clip->addLineListener(this);
			$synchronized(this->this$0->audioLock) {
				$set(this->this$0, clipPlaying, clip);
			}
			clip->start();
		} catch ($Exception& ex) {
		}
	}
}

void BasicLookAndFeel$AudioAction::update($LineEvent* event) {
	$init($LineEvent$Type);
	if ($nc(event)->getType() == $LineEvent$Type::STOP) {
		cancelCurrentSound($cast($Clip, $(event->getLine())));
	}
}

void BasicLookAndFeel$AudioAction::cancelCurrentSound($Clip* clip) {
	$var($Clip, lastClip, nullptr);
	$synchronized(this->this$0->audioLock) {
		if (clip == nullptr || clip == this->this$0->clipPlaying) {
			$assign(lastClip, this->this$0->clipPlaying);
			$set(this->this$0, clipPlaying, nullptr);
		}
	}
	if (lastClip != nullptr) {
		lastClip->removeLineListener(this);
		lastClip->close();
	}
}

BasicLookAndFeel$AudioAction::BasicLookAndFeel$AudioAction() {
}

$Class* BasicLookAndFeel$AudioAction::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$AudioAction, name, initialize, &_BasicLookAndFeel$AudioAction_ClassInfo_, allocate$BasicLookAndFeel$AudioAction);
	return class$;
}

$Class* BasicLookAndFeel$AudioAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax