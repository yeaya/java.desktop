#include <com/sun/media/sound/PortMixer$PortMixerPort.h>

#include <com/sun/media/sound/AbstractLine.h>
#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/PortMixer$BoolCtrl.h>
#include <com/sun/media/sound/PortMixer$FloatCtrl.h>
#include <com/sun/media/sound/PortMixer.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/CompoundControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <javax/sound/sampled/Port$Info.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AbstractLine = ::com::sun::media::sound::AbstractLine;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixer$BoolCtrl = ::com::sun::media::sound::PortMixer$BoolCtrl;
using $PortMixer$FloatCtrl = ::com::sun::media::sound::PortMixer$FloatCtrl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Vector = ::java::util::Vector;
using $CompoundControl = ::javax::sound::sampled::CompoundControl;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;
using $Port = ::javax::sound::sampled::Port;
using $Port$Info = ::javax::sound::sampled::Port$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _PortMixer$PortMixerPort_FieldInfo_[] = {
	{"portIndex", "I", nullptr, $PRIVATE | $FINAL, $field(PortMixer$PortMixerPort, portIndex)},
	{"id", "J", nullptr, $PRIVATE, $field(PortMixer$PortMixerPort, id)},
	{}
};

$MethodInfo _PortMixer$PortMixerPort_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/Port$Info;Lcom/sun/media/sound/PortMixer;I)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$PortMixerPort::*)($Port$Info*,$PortMixer*,int32_t)>(&PortMixer$PortMixerPort::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"disposeControls", "()V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$PortMixerPort::*)()>(&PortMixer$PortMixerPort::disposeControls))},
	{"enableControls", "([Ljavax/sound/sampled/Control;Z)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$PortMixerPort::*)($ControlArray*,bool)>(&PortMixer$PortMixerPort::enableControls))},
	{"implClose", "()V", nullptr, 0, $method(static_cast<void(PortMixer$PortMixerPort::*)()>(&PortMixer$PortMixerPort::implClose))},
	{"implOpen", "()V", nullptr, 0, $method(static_cast<void(PortMixer$PortMixerPort::*)()>(&PortMixer$PortMixerPort::implOpen)), "javax.sound.sampled.LineUnavailableException"},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PortMixer$PortMixerPort_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$PortMixerPort", "com.sun.media.sound.PortMixer", "PortMixerPort", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixer$PortMixerPort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$PortMixerPort",
	"com.sun.media.sound.AbstractLine",
	"javax.sound.sampled.Port",
	_PortMixer$PortMixerPort_FieldInfo_,
	_PortMixer$PortMixerPort_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$PortMixerPort_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$PortMixerPort($Class* clazz) {
	return $of($alloc(PortMixer$PortMixerPort));
}

$Line$Info* PortMixer$PortMixerPort::getLineInfo() {
	 return this->$AbstractLine::getLineInfo();
}

bool PortMixer$PortMixerPort::isOpen() {
	 return this->$AbstractLine::isOpen();
}

void PortMixer$PortMixerPort::addLineListener($LineListener* listener) {
	this->$AbstractLine::addLineListener(listener);
}

void PortMixer$PortMixerPort::removeLineListener($LineListener* listener) {
	this->$AbstractLine::removeLineListener(listener);
}

$ControlArray* PortMixer$PortMixerPort::getControls() {
	 return this->$AbstractLine::getControls();
}

bool PortMixer$PortMixerPort::isControlSupported($Control$Type* controlType) {
	 return this->$AbstractLine::isControlSupported(controlType);
}

$Control* PortMixer$PortMixerPort::getControl($Control$Type* controlType) {
	 return this->$AbstractLine::getControl(controlType);
}

int32_t PortMixer$PortMixerPort::hashCode() {
	 return this->$AbstractLine::hashCode();
}

bool PortMixer$PortMixerPort::equals(Object$* arg0) {
	 return this->$AbstractLine::equals(arg0);
}

$Object* PortMixer$PortMixerPort::clone() {
	 return this->$AbstractLine::clone();
}

$String* PortMixer$PortMixerPort::toString() {
	 return this->$AbstractLine::toString();
}

void PortMixer$PortMixerPort::finalize() {
	this->$AbstractLine::finalize();
}

void PortMixer$PortMixerPort::init$($Port$Info* info, $PortMixer* mixer, int32_t portIndex) {
	$AbstractLine::init$(info, mixer, nullptr);
	this->portIndex = portIndex;
}

void PortMixer$PortMixerPort::implOpen() {
	$useLocalCurrentObjectStackCache();
	int64_t newID = $nc(($cast($PortMixer, this->mixer)))->getID();
	if ((this->id == 0) || (newID != this->id) || ($nc(this->controls)->length == 0)) {
		this->id = newID;
		$var($Vector, vector, $new($Vector));
		$synchronized(vector) {
			$PortMixer::nGetControls(this->id, this->portIndex, vector);
			$set(this, controls, $new($ControlArray, vector->size()));
			for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
				$nc(this->controls)->set(i, $cast($Control, $(vector->elementAt(i))));
			}
		}
	} else {
		enableControls(this->controls, true);
	}
}

void PortMixer$PortMixerPort::enableControls($ControlArray* controls, bool enable) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(controls)->length; ++i) {
		if ($instanceOf($PortMixer$BoolCtrl, controls->get(i))) {
			$nc(($cast($PortMixer$BoolCtrl, controls->get(i))))->closed = !enable;
		} else if ($instanceOf($PortMixer$FloatCtrl, controls->get(i))) {
			$nc(($cast($PortMixer$FloatCtrl, controls->get(i))))->closed = !enable;
		} else if ($instanceOf($CompoundControl, controls->get(i))) {
			enableControls($($nc(($cast($CompoundControl, controls->get(i))))->getMemberControls()), enable);
		}
	}
}

void PortMixer$PortMixerPort::disposeControls() {
	enableControls(this->controls, false);
	$set(this, controls, $new($ControlArray, 0));
}

void PortMixer$PortMixerPort::implClose() {
	enableControls(this->controls, false);
}

void PortMixer$PortMixerPort::open() {
	$synchronized(this->mixer) {
		if (!isOpen()) {
			$nc(this->mixer)->open(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
			try {
				implOpen();
				setOpen(true);
			} catch ($LineUnavailableException& e) {
				$nc(this->mixer)->close(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
				$throw(e);
			}
		}
	}
}

void PortMixer$PortMixerPort::close() {
	$synchronized(this->mixer) {
		if (isOpen()) {
			setOpen(false);
			implClose();
			$nc(this->mixer)->close(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
		}
	}
}

PortMixer$PortMixerPort::PortMixer$PortMixerPort() {
}

$Class* PortMixer$PortMixerPort::load$($String* name, bool initialize) {
	$loadClass(PortMixer$PortMixerPort, name, initialize, &_PortMixer$PortMixerPort_ClassInfo_, allocate$PortMixer$PortMixerPort);
	return class$;
}

$Class* PortMixer$PortMixerPort::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com