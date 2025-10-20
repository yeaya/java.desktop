#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>

#include <com/sun/media/sound/AbstractDataLine.h>
#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Balance.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Gain.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Mute.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Pan.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDLI.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/FloatControl.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <jcpp.h>

#undef ALAW
#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef ULAW

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AbstractDataLine = ::com::sun::media::sound::AbstractDataLine;
using $AbstractLine = ::com::sun::media::sound::AbstractLine;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDevice$DirectDL$Balance = ::com::sun::media::sound::DirectAudioDevice$DirectDL$Balance;
using $DirectAudioDevice$DirectDL$Gain = ::com::sun::media::sound::DirectAudioDevice$DirectDL$Gain;
using $DirectAudioDevice$DirectDL$Mute = ::com::sun::media::sound::DirectAudioDevice$DirectDL$Mute;
using $DirectAudioDevice$DirectDL$Pan = ::com::sun::media::sound::DirectAudioDevice$DirectDL$Pan;
using $DirectAudioDevice$DirectDLI = ::com::sun::media::sound::DirectAudioDevice$DirectDLI;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $EventDispatcher$LineMonitor = ::com::sun::media::sound::EventDispatcher$LineMonitor;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Printer = ::com::sun::media::sound::Printer;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $BooleanControl = ::javax::sound::sampled::BooleanControl;
using $Control = ::javax::sound::sampled::Control;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DirectAudioDevice$DirectDL_FieldInfo_[] = {
	{"mixerIndex", "I", nullptr, $PROTECTED | $FINAL, $field(DirectAudioDevice$DirectDL, mixerIndex)},
	{"deviceID", "I", nullptr, $PROTECTED | $FINAL, $field(DirectAudioDevice$DirectDL, deviceID)},
	{"id", "J", nullptr, $PROTECTED, $field(DirectAudioDevice$DirectDL, id)},
	{"waitTime", "I", nullptr, $PROTECTED, $field(DirectAudioDevice$DirectDL, waitTime)},
	{"flushing", "Z", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, flushing)},
	{"isSource", "Z", nullptr, $PROTECTED | $FINAL, $field(DirectAudioDevice$DirectDL, isSource)},
	{"bytePosition", "J", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, bytePosition)},
	{"doIO", "Z", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, doIO)},
	{"stoppedWritten", "Z", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, stoppedWritten)},
	{"drained", "Z", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, drained)},
	{"monitoring", "Z", nullptr, $PROTECTED, $field(DirectAudioDevice$DirectDL, monitoring)},
	{"softwareConversionSize", "I", nullptr, $PROTECTED, $field(DirectAudioDevice$DirectDL, softwareConversionSize)},
	{"hardwareFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PROTECTED, $field(DirectAudioDevice$DirectDL, hardwareFormat)},
	{"gainControl", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL$Gain;", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDevice$DirectDL, gainControl)},
	{"muteControl", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL$Mute;", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDevice$DirectDL, muteControl)},
	{"balanceControl", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL$Balance;", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDevice$DirectDL, balanceControl)},
	{"panControl", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL$Pan;", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDevice$DirectDL, panControl)},
	{"leftGain", "F", nullptr, $PRIVATE, $field(DirectAudioDevice$DirectDL, leftGain)},
	{"rightGain", "F", nullptr, $PRIVATE, $field(DirectAudioDevice$DirectDL, rightGain)},
	{"noService", "Z", nullptr, $PROTECTED | $VOLATILE, $field(DirectAudioDevice$DirectDL, noService)},
	{"lockNative", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(DirectAudioDevice$DirectDL, lockNative)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectDL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Lcom/sun/media/sound/DirectAudioDevice;Ljavax/sound/sampled/AudioFormat;IIIZ)V", nullptr, $PROTECTED, $method(static_cast<void(DirectAudioDevice$DirectDL::*)($DataLine$Info*,$DirectAudioDevice*,$AudioFormat*,int32_t,int32_t,int32_t,bool)>(&DirectAudioDevice$DirectDL::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"calcVolume", "()V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectDL::*)()>(&DirectAudioDevice$DirectDL::calcVolume))},
	{"checkLine", "()V", nullptr, $PUBLIC},
	{"drain", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"implClose", "()V", nullptr, 0},
	{"implOpen", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, 0, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"implStart", "()V", nullptr, 0},
	{"implStop", "()V", nullptr, 0},
	{"requiresServicing", "()Z", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "([BII)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectDL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.EventDispatcher$LineMonitor", "com.sun.media.sound.EventDispatcher", "LineMonitor", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Pan", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Pan", $PRIVATE | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Balance", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Balance", $PRIVATE | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Mute", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Mute", $PRIVATE | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Gain", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Gain", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _DirectAudioDevice$DirectDL_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectDL",
	"com.sun.media.sound.AbstractDataLine",
	"com.sun.media.sound.EventDispatcher$LineMonitor",
	_DirectAudioDevice$DirectDL_FieldInfo_,
	_DirectAudioDevice$DirectDL_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectDL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectDL($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectDL));
}

int32_t DirectAudioDevice$DirectDL::hashCode() {
	 return this->$AbstractDataLine::hashCode();
}

bool DirectAudioDevice$DirectDL::equals(Object$* arg0) {
	 return this->$AbstractDataLine::equals(arg0);
}

$Object* DirectAudioDevice$DirectDL::clone() {
	 return this->$AbstractDataLine::clone();
}

$String* DirectAudioDevice$DirectDL::toString() {
	 return this->$AbstractDataLine::toString();
}

void DirectAudioDevice$DirectDL::finalize() {
	this->$AbstractDataLine::finalize();
}

void DirectAudioDevice$DirectDL::init$($DataLine$Info* info, $DirectAudioDevice* mixer, $AudioFormat* format, int32_t bufferSize, int32_t mixerIndex, int32_t deviceID, bool isSource) {
	$AbstractDataLine::init$(info, mixer, nullptr, format, bufferSize);
	this->flushing = false;
	this->doIO = false;
	this->stoppedWritten = false;
	this->drained = false;
	this->monitoring = false;
	this->softwareConversionSize = 0;
	$set(this, gainControl, $new($DirectAudioDevice$DirectDL$Gain, this));
	$set(this, muteControl, $new($DirectAudioDevice$DirectDL$Mute, this));
	$set(this, balanceControl, $new($DirectAudioDevice$DirectDL$Balance, this));
	$set(this, panControl, $new($DirectAudioDevice$DirectDL$Pan, this));
	this->noService = false;
	$set(this, lockNative, $new($Object));
	this->mixerIndex = mixerIndex;
	this->deviceID = deviceID;
	this->waitTime = 10;
	this->isSource = isSource;
}

void DirectAudioDevice$DirectDL::implOpen($AudioFormat* format, int32_t bufferSize) {
	$useLocalCurrentObjectStackCache();
	$Toolkit::isFullySpecifiedAudioFormat(format);
	if (!this->isSource) {
		$JSSecurityManager::checkRecordPermission();
	}
	int32_t encoding = 0;
	$init($AudioFormat$Encoding);
	if ($nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::ULAW)) {
		encoding = 1;
	} else {
		if ($nc($(format->getEncoding()))->equals($AudioFormat$Encoding::ALAW)) {
			encoding = 2;
		}
	}
	if (bufferSize <= $AudioSystem::NOT_SPECIFIED) {
		bufferSize = (int32_t)$Toolkit::millis2bytes(format, 500);
	}
	$var($DirectAudioDevice$DirectDLI, ddli, nullptr);
	if ($instanceOf($DirectAudioDevice$DirectDLI, this->info)) {
		$assign(ddli, $cast($DirectAudioDevice$DirectDLI, this->info));
	}
	if (this->isSource) {
		bool var$0 = !$nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
		if (var$0 && !$nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			$set(this, controls, $new($ControlArray, 0));
		} else {
			bool var$2 = format->getChannels() > 2;
			if (var$2 || format->getSampleSizeInBits() > 16) {
				$set(this, controls, $new($ControlArray, 0));
			} else {
				if (format->getChannels() == 1) {
					$set(this, controls, $new($ControlArray, 2));
				} else {
					$set(this, controls, $new($ControlArray, 4));
					$nc(this->controls)->set(2, this->balanceControl);
					$nc(this->controls)->set(3, this->panControl);
				}
				$nc(this->controls)->set(0, this->gainControl);
				$nc(this->controls)->set(1, this->muteControl);
			}
		}
	}
	$set(this, hardwareFormat, format);
	this->softwareConversionSize = 0;
	if (ddli != nullptr && !ddli->isFormatSupportedInHardware(format)) {
		$var($AudioFormat, newFormat, $DirectAudioDevice::getSignOrEndianChangedFormat(format));
		if (ddli->isFormatSupportedInHardware(newFormat)) {
			$set(this, hardwareFormat, newFormat);
			int32_t var$3 = $nc(format)->getFrameSize();
			this->softwareConversionSize = $div(var$3, format->getChannels());
		}
	}
	int32_t var$4 = ($div(bufferSize, $nc(format)->getFrameSize()));
	bufferSize = var$4 * format->getFrameSize();
	int32_t var$5 = this->mixerIndex;
	int32_t var$6 = this->deviceID;
	bool var$7 = this->isSource;
	int32_t var$8 = encoding;
	float var$9 = $nc(this->hardwareFormat)->getSampleRate();
	int32_t var$10 = $nc(this->hardwareFormat)->getSampleSizeInBits();
	int32_t var$11 = $nc(this->hardwareFormat)->getFrameSize();
	int32_t var$12 = $nc(this->hardwareFormat)->getChannels();
	bool var$13 = $nc($($nc(this->hardwareFormat)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
	this->id = $DirectAudioDevice::nOpen(var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, $nc(this->hardwareFormat)->isBigEndian(), bufferSize);
	if (this->id == 0) {
		$throwNew($LineUnavailableException, $$str({"line with format "_s, format, " not supported."_s}));
	}
	this->bufferSize = $DirectAudioDevice::nGetBufferSize(this->id, this->isSource);
	if (this->bufferSize < 1) {
		this->bufferSize = bufferSize;
	}
	$set(this, format, format);
	this->waitTime = (int32_t)$Toolkit::bytes2millis(format, this->bufferSize) / 4;
	if (this->waitTime < 10) {
		this->waitTime = 1;
	} else if (this->waitTime > 1000) {
		this->waitTime = 1000;
	}
	this->bytePosition = 0;
	this->stoppedWritten = false;
	this->doIO = false;
	calcVolume();
}

void DirectAudioDevice$DirectDL::implStart() {
	if (!this->isSource) {
		$JSSecurityManager::checkRecordPermission();
	}
	$synchronized(this->lockNative) {
		$DirectAudioDevice::nStart(this->id, this->isSource);
	}
	this->monitoring = requiresServicing();
	if (this->monitoring) {
		$nc($(getEventDispatcher()))->addLineMonitor(this);
	}
	$synchronized(this->lock) {
		this->doIO = true;
		if (this->isSource && this->stoppedWritten) {
			setStarted(true);
			setActive(true);
		}
	}
}

void DirectAudioDevice$DirectDL::implStop() {
	if (!this->isSource) {
		$JSSecurityManager::checkRecordPermission();
	}
	if (this->monitoring) {
		$nc($(getEventDispatcher()))->removeLineMonitor(this);
		this->monitoring = false;
	}
	$synchronized(this->lockNative) {
		$DirectAudioDevice::nStop(this->id, this->isSource);
	}
	$synchronized(this->lock) {
		this->doIO = false;
		setActive(false);
		setStarted(false);
		$nc($of(this->lock))->notifyAll();
	}
	this->stoppedWritten = false;
}

void DirectAudioDevice$DirectDL::implClose() {
	if (!this->isSource) {
		$JSSecurityManager::checkRecordPermission();
	}
	if (this->monitoring) {
		$nc($(getEventDispatcher()))->removeLineMonitor(this);
		this->monitoring = false;
	}
	this->doIO = false;
	int64_t oldID = this->id;
	this->id = 0;
	$synchronized(this->lockNative) {
		$DirectAudioDevice::nClose(oldID, this->isSource);
	}
	this->bytePosition = 0;
	this->softwareConversionSize = 0;
}

int32_t DirectAudioDevice$DirectDL::available() {
	if (this->id == 0) {
		return 0;
	}
	int32_t a = 0;
	$synchronized(this->lockNative) {
		a = $DirectAudioDevice::nAvailable(this->id, this->isSource);
	}
	return a;
}

void DirectAudioDevice$DirectDL::drain() {
	this->noService = true;
	int32_t counter = 0;
	int64_t startPos = getLongFramePosition();
	bool posChanged = false;
	while (!this->drained) {
		$synchronized(this->lockNative) {
			if ((this->id == 0) || (!this->doIO) || !$DirectAudioDevice::nIsStillDraining(this->id, this->isSource)) {
				break;
			}
		}
		if ((counter % 5) == 4) {
			int64_t thisFramePos = getLongFramePosition();
			posChanged = posChanged | (thisFramePos != startPos);
			if ((counter % 50) > 45) {
				if (!posChanged) {
					$init($Printer);
					if ($Printer::err$) {
						$Printer::err("Native reports isDraining, but frame position does not increase!"_s);
					}
					break;
				}
				posChanged = false;
				startPos = thisFramePos;
			}
		}
		++counter;
		$synchronized(this->lock) {
			try {
				$nc($of(this->lock))->wait(10);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
	if (this->doIO && this->id != 0) {
		this->drained = true;
	}
	this->noService = false;
}

void DirectAudioDevice$DirectDL::flush() {
	if (this->id != 0) {
		this->flushing = true;
		$synchronized(this->lock) {
			$nc($of(this->lock))->notifyAll();
		}
		$synchronized(this->lockNative) {
			if (this->id != 0) {
				$DirectAudioDevice::nFlush(this->id, this->isSource);
			}
		}
		this->drained = true;
	}
}

int64_t DirectAudioDevice$DirectDL::getLongFramePosition() {
	int64_t pos = 0;
	$synchronized(this->lockNative) {
		pos = $DirectAudioDevice::nGetBytePosition(this->id, this->isSource, this->bytePosition);
	}
	if (pos < 0) {
		pos = 0;
	}
	return ($div(pos, $nc($(getFormat()))->getFrameSize()));
}

int32_t DirectAudioDevice$DirectDL::write($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	this->flushing = false;
	if (len == 0) {
		return 0;
	}
	if (len < 0) {
		$throwNew($IllegalArgumentException, $$str({"illegal len: "_s, $$str(len)}));
	}
	if ($mod(len, $nc($(getFormat()))->getFrameSize()) != 0) {
		$throwNew($IllegalArgumentException, $$str({"illegal request to write non-integral number of frames ("_s, $$str(len), " bytes, frameSize = "_s, $$str($nc($(getFormat()))->getFrameSize()), " bytes)"_s}));
	}
	if (off < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, off);
	}
	if ((int64_t)off + (int64_t)len > (int64_t)$nc(b)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, b->length);
	}
	$synchronized(this->lock) {
		if (!isActive() && this->doIO) {
			setActive(true);
			setStarted(true);
		}
	}
	int32_t written = 0;
	while (!this->flushing) {
		int32_t thisWritten = 0;
		$synchronized(this->lockNative) {
			thisWritten = $DirectAudioDevice::nWrite(this->id, b, off, len, this->softwareConversionSize, this->leftGain, this->rightGain);
			if (thisWritten < 0) {
				break;
			}
			this->bytePosition += thisWritten;
			if (thisWritten > 0) {
				this->drained = false;
			}
		}
		len -= thisWritten;
		written += thisWritten;
		if (this->doIO && len > 0) {
			off += thisWritten;
			$synchronized(this->lock) {
				try {
					$nc($of(this->lock))->wait(this->waitTime);
				} catch ($InterruptedException&) {
					$catch();
				}
			}
		} else {
			break;
		}
	}
	if (written > 0 && !this->doIO) {
		this->stoppedWritten = true;
	}
	return written;
}

bool DirectAudioDevice$DirectDL::requiresServicing() {
	return $DirectAudioDevice::nRequiresServicing(this->id, this->isSource);
}

void DirectAudioDevice$DirectDL::checkLine() {
	$synchronized(this->lockNative) {
		if (this->monitoring && this->doIO && this->id != 0 && !this->flushing && !this->noService) {
			$DirectAudioDevice::nService(this->id, this->isSource);
		}
	}
}

void DirectAudioDevice$DirectDL::calcVolume() {
	if (getFormat() == nullptr) {
		return;
	}
	if ($nc(this->muteControl)->getValue()) {
		this->leftGain = 0.0f;
		this->rightGain = 0.0f;
		return;
	}
	float gain = $nc(this->gainControl)->getLinearGain();
	if ($nc($(getFormat()))->getChannels() == 1) {
		this->leftGain = gain;
		this->rightGain = gain;
	} else {
		float bal = $nc(this->balanceControl)->getValue();
		if (bal < 0.0f) {
			this->leftGain = gain;
			this->rightGain = gain * (bal + 1.0f);
		} else {
			this->leftGain = gain * (1.0f - bal);
			this->rightGain = gain;
		}
	}
}

DirectAudioDevice$DirectDL::DirectAudioDevice$DirectDL() {
}

$Class* DirectAudioDevice$DirectDL::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectDL, name, initialize, &_DirectAudioDevice$DirectDL_ClassInfo_, allocate$DirectAudioDevice$DirectDL);
	return class$;
}

$Class* DirectAudioDevice$DirectDL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com