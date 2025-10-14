#include <com/sun/media/sound/AbstractMixer.h>

#include <com/sun/media/sound/AbstractDataLine.h>
#include <com/sun/media/sound/AbstractLine.h>
#include <com/sun/media/sound/Printer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <jcpp.h>

#undef ALAW
#undef PCM
#undef ULAW

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $LineArray = $Array<::javax::sound::sampled::Line>;
using $AbstractDataLine = ::com::sun::media::sound::AbstractDataLine;
using $AbstractLine = ::com::sun::media::sound::AbstractLine;
using $Printer = ::com::sun::media::sound::Printer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMixer_FieldInfo_[] = {
	{"PCM", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractMixer, PCM)},
	{"ULAW", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractMixer, ULAW)},
	{"ALAW", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractMixer, ALAW)},
	{"mixerInfo", "Ljavax/sound/sampled/Mixer$Info;", nullptr, $PRIVATE | $FINAL, $field(AbstractMixer, mixerInfo)},
	{"sourceLineInfo", "[Ljavax/sound/sampled/Line$Info;", nullptr, $PROTECTED, $field(AbstractMixer, sourceLineInfo)},
	{"targetLineInfo", "[Ljavax/sound/sampled/Line$Info;", nullptr, $PROTECTED, $field(AbstractMixer, targetLineInfo)},
	{"started", "Z", nullptr, $PRIVATE, $field(AbstractMixer, started)},
	{"manuallyOpened", "Z", nullptr, $PRIVATE, $field(AbstractMixer, manuallyOpened)},
	{"sourceLines", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/sound/sampled/Line;>;", $PRIVATE | $FINAL, $field(AbstractMixer, sourceLines)},
	{"targetLines", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/sound/sampled/Line;>;", $PRIVATE | $FINAL, $field(AbstractMixer, targetLines)},
	{}
};

$MethodInfo _AbstractMixer_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getMaxLines", "(Ljavax/sound/sampled/Line$Info;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/Mixer$Info;[Ljavax/sound/sampled/Control;[Ljavax/sound/sampled/Line$Info;[Ljavax/sound/sampled/Line$Info;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractMixer::*)($Mixer$Info*,$ControlArray*,$Line$InfoArray*,$Line$InfoArray*)>(&AbstractMixer::init$))},
	{"close", "(Ljavax/sound/sampled/Line;)V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMixer::*)($Line*)>(&AbstractMixer::close))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"getLineInfo", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line$Info;", nullptr, $FINAL, $method(static_cast<$Line$Info*(AbstractMixer::*)($Line$Info*)>(&AbstractMixer::getLineInfo))},
	{"getMixerInfo", "()Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC | $FINAL},
	{"getSourceLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getSourceLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getSourceLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $FINAL},
	{"getTargetLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getTargetLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getTargetLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $FINAL},
	{"implClose", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"implOpen", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"implStart", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"implStop", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"isLineSupported", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isSourceLine", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $FINAL, $method(static_cast<bool(AbstractMixer::*)($Line$Info*)>(&AbstractMixer::isSourceLine))},
	{"isSynchronizationSupported", "([Ljavax/sound/sampled/Line;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"isTargetLine", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $FINAL, $method(static_cast<bool(AbstractMixer::*)($Line$Info*)>(&AbstractMixer::isTargetLine))},
	{"open", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Z)V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMixer::*)(bool)>(&AbstractMixer::open)), "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/Line;)V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMixer::*)($Line*)>(&AbstractMixer::open)), "javax.sound.sampled.LineUnavailableException"},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"start", "(Ljavax/sound/sampled/Line;)V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMixer::*)($Line*)>(&AbstractMixer::start))},
	{"stop", "(Ljavax/sound/sampled/Line;)V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMixer::*)($Line*)>(&AbstractMixer::stop))},
	{"synchronize", "([Ljavax/sound/sampled/Line;Z)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unsynchronize", "([Ljavax/sound/sampled/Line;)V", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _AbstractMixer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractMixer",
	"com.sun.media.sound.AbstractLine",
	"javax.sound.sampled.Mixer",
	_AbstractMixer_FieldInfo_,
	_AbstractMixer_MethodInfo_
};

$Object* allocate$AbstractMixer($Class* clazz) {
	return $of($alloc(AbstractMixer));
}

$Line$Info* AbstractMixer::getLineInfo() {
	 return this->$AbstractLine::getLineInfo();
}

bool AbstractMixer::isOpen() {
	 return this->$AbstractLine::isOpen();
}

void AbstractMixer::addLineListener($LineListener* listener) {
	this->$AbstractLine::addLineListener(listener);
}

void AbstractMixer::removeLineListener($LineListener* listener) {
	this->$AbstractLine::removeLineListener(listener);
}

$ControlArray* AbstractMixer::getControls() {
	 return this->$AbstractLine::getControls();
}

bool AbstractMixer::isControlSupported($Control$Type* controlType) {
	 return this->$AbstractLine::isControlSupported(controlType);
}

$Control* AbstractMixer::getControl($Control$Type* controlType) {
	 return this->$AbstractLine::getControl(controlType);
}

int32_t AbstractMixer::hashCode() {
	 return this->$AbstractLine::hashCode();
}

bool AbstractMixer::equals(Object$* arg0) {
	 return this->$AbstractLine::equals(arg0);
}

$Object* AbstractMixer::clone() {
	 return this->$AbstractLine::clone();
}

$String* AbstractMixer::toString() {
	 return this->$AbstractLine::toString();
}

void AbstractMixer::finalize() {
	this->$AbstractLine::finalize();
}

void AbstractMixer::init$($Mixer$Info* mixerInfo, $ControlArray* controls$renamed, $Line$InfoArray* sourceLineInfo, $Line$InfoArray* targetLineInfo) {
	$var($ControlArray, controls, controls$renamed);
	$load($Mixer);
	$AbstractLine::init$($$new($Line$Info, $Mixer::class$), nullptr, controls);
	this->started = false;
	this->manuallyOpened = false;
	$set(this, sourceLines, $new($Vector));
	$set(this, targetLines, $new($Vector));
	$set(this, mixer, this);
	if (controls == nullptr) {
		$assign(controls, $new($ControlArray, 0));
	}
	$set(this, mixerInfo, mixerInfo);
	$set(this, sourceLineInfo, sourceLineInfo);
	$set(this, targetLineInfo, targetLineInfo);
}

$Mixer$Info* AbstractMixer::getMixerInfo() {
	return this->mixerInfo;
}

$Line$InfoArray* AbstractMixer::getSourceLineInfo() {
	$var($Line$InfoArray, localArray, $new($Line$InfoArray, $nc(this->sourceLineInfo)->length));
	$System::arraycopy(this->sourceLineInfo, 0, localArray, 0, $nc(this->sourceLineInfo)->length);
	return localArray;
}

$Line$InfoArray* AbstractMixer::getTargetLineInfo() {
	$var($Line$InfoArray, localArray, $new($Line$InfoArray, $nc(this->targetLineInfo)->length));
	$System::arraycopy(this->targetLineInfo, 0, localArray, 0, $nc(this->targetLineInfo)->length);
	return localArray;
}

$Line$InfoArray* AbstractMixer::getSourceLineInfo($Line$Info* info) {
	int32_t i = 0;
	$var($Vector, vec, $new($Vector));
	for (i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->sourceLineInfo)->get(i))) {
			vec->addElement($nc(this->sourceLineInfo)->get(i));
		}
	}
	$var($Line$InfoArray, returnedArray, $new($Line$InfoArray, vec->size()));
	for (i = 0; i < returnedArray->length; ++i) {
		returnedArray->set(i, $cast($Line$Info, $(vec->elementAt(i))));
	}
	return returnedArray;
}

$Line$InfoArray* AbstractMixer::getTargetLineInfo($Line$Info* info) {
	int32_t i = 0;
	$var($Vector, vec, $new($Vector));
	for (i = 0; i < $nc(this->targetLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->targetLineInfo)->get(i))) {
			vec->addElement($nc(this->targetLineInfo)->get(i));
		}
	}
	$var($Line$InfoArray, returnedArray, $new($Line$InfoArray, vec->size()));
	for (i = 0; i < returnedArray->length; ++i) {
		returnedArray->set(i, $cast($Line$Info, $(vec->elementAt(i))));
	}
	return returnedArray;
}

bool AbstractMixer::isLineSupported($Line$Info* info) {
	int32_t i = 0;
	for (i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->sourceLineInfo)->get(i))) {
			return true;
		}
	}
	for (i = 0; i < $nc(this->targetLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->targetLineInfo)->get(i))) {
			return true;
		}
	}
	return false;
}

$LineArray* AbstractMixer::getSourceLines() {
	$var($LineArray, localLines, nullptr);
	$synchronized(this->sourceLines) {
		$assign(localLines, $new($LineArray, $nc(this->sourceLines)->size()));
		for (int32_t i = 0; i < localLines->length; ++i) {
			localLines->set(i, $cast($Line, $($nc(this->sourceLines)->elementAt(i))));
		}
	}
	return localLines;
}

$LineArray* AbstractMixer::getTargetLines() {
	$var($LineArray, localLines, nullptr);
	$synchronized(this->targetLines) {
		$assign(localLines, $new($LineArray, $nc(this->targetLines)->size()));
		for (int32_t i = 0; i < localLines->length; ++i) {
			localLines->set(i, $cast($Line, $($nc(this->targetLines)->elementAt(i))));
		}
	}
	return localLines;
}

void AbstractMixer::synchronize($LineArray* lines, bool maintainSync) {
	$throwNew($IllegalArgumentException, "Synchronization not supported by this mixer."_s);
}

void AbstractMixer::unsynchronize($LineArray* lines) {
	$throwNew($IllegalArgumentException, "Synchronization not supported by this mixer."_s);
}

bool AbstractMixer::isSynchronizationSupported($LineArray* lines, bool maintainSync) {
	return false;
}

void AbstractMixer::open() {
	$synchronized(this) {
		open(true);
	}
}

void AbstractMixer::open(bool manual) {
	$synchronized(this) {
		if (!isOpen()) {
			implOpen();
			setOpen(true);
			if (manual) {
				this->manuallyOpened = true;
			}
		}
	}
}

void AbstractMixer::open($Line* line) {
	$synchronized(this) {
		if ($of(this)->equals(line)) {
			return;
		}
		if (isSourceLine($($nc(line)->getLineInfo()))) {
			if (!$nc(this->sourceLines)->contains(line)) {
				open(false);
				$nc(this->sourceLines)->addElement(line);
			}
		} else if (isTargetLine($($nc(line)->getLineInfo()))) {
			if (!$nc(this->targetLines)->contains(line)) {
				open(false);
				$nc(this->targetLines)->addElement(line);
			}
		} else {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"Unknown line received for AbstractMixer.open(Line): "_s, line}));
			}
		}
	}
}

void AbstractMixer::close($Line* line) {
	$synchronized(this) {
		if ($of(this)->equals(line)) {
			return;
		}
		$nc(this->sourceLines)->removeElement(line);
		$nc(this->targetLines)->removeElement(line);
		bool var$0 = $nc(this->sourceLines)->isEmpty();
		if (var$0 && $nc(this->targetLines)->isEmpty() && !this->manuallyOpened) {
			close();
		}
	}
}

void AbstractMixer::close() {
	$synchronized(this) {
		if (isOpen()) {
			$var($LineArray, localLines, getSourceLines());
			for (int32_t i = 0; i < $nc(localLines)->length; ++i) {
				$nc(localLines->get(i))->close();
			}
			$assign(localLines, getTargetLines());
			for (int32_t i = 0; i < $nc(localLines)->length; ++i) {
				$nc(localLines->get(i))->close();
			}
			implClose();
			setOpen(false);
		}
		this->manuallyOpened = false;
	}
}

void AbstractMixer::start($Line* line) {
	$synchronized(this) {
		if ($of(this)->equals(line)) {
			return;
		}
		if (!this->started) {
			implStart();
			this->started = true;
		}
	}
}

void AbstractMixer::stop($Line* line) {
	$synchronized(this) {
		if ($of(this)->equals(line)) {
			return;
		}
		$var($Vector, localSourceLines, $cast($Vector, $nc(this->sourceLines)->clone()));
		for (int32_t i = 0; i < $nc(localSourceLines)->size(); ++i) {
			if ($instanceOf($AbstractDataLine, $(localSourceLines->elementAt(i)))) {
				$var($AbstractDataLine, sourceLine, $cast($AbstractDataLine, localSourceLines->elementAt(i)));
				bool var$0 = $nc(sourceLine)->isStartedRunning();
				if (var$0 && (!$of(sourceLine)->equals(line))) {
					return;
				}
			}
		}
		$var($Vector, localTargetLines, $cast($Vector, $nc(this->targetLines)->clone()));
		for (int32_t i = 0; i < $nc(localTargetLines)->size(); ++i) {
			if ($instanceOf($AbstractDataLine, $(localTargetLines->elementAt(i)))) {
				$var($AbstractDataLine, targetLine, $cast($AbstractDataLine, localTargetLines->elementAt(i)));
				bool var$1 = $nc(targetLine)->isStartedRunning();
				if (var$1 && (!$of(targetLine)->equals(line))) {
					return;
				}
			}
		}
		this->started = false;
		implStop();
	}
}

bool AbstractMixer::isSourceLine($Line$Info* info) {
	for (int32_t i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->sourceLineInfo)->get(i))) {
			return true;
		}
	}
	return false;
}

bool AbstractMixer::isTargetLine($Line$Info* info) {
	for (int32_t i = 0; i < $nc(this->targetLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->targetLineInfo)->get(i))) {
			return true;
		}
	}
	return false;
}

$Line$Info* AbstractMixer::getLineInfo($Line$Info* info) {
	if (info == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->sourceLineInfo)->get(i))) {
			return $nc(this->sourceLineInfo)->get(i);
		}
	}
	for (int32_t i = 0; i < $nc(this->targetLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->targetLineInfo)->get(i))) {
			return $nc(this->targetLineInfo)->get(i);
		}
	}
	return nullptr;
}

AbstractMixer::AbstractMixer() {
}

$Class* AbstractMixer::load$($String* name, bool initialize) {
	$loadClass(AbstractMixer, name, initialize, &_AbstractMixer_ClassInfo_, allocate$AbstractMixer);
	return class$;
}

$Class* AbstractMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com