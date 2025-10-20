#include <com/sun/media/sound/DirectAudioDevice$DirectTDL.h>

#include <com/sun/media/sound/AbstractDataLine.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AbstractDataLine = ::com::sun::media::sound::AbstractDataLine;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _DirectAudioDevice$DirectTDL_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*available", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*drain", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flush", "()V", nullptr, $PUBLIC},
	{"*getBufferSize", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $FINAL},
	{"*getFramePosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getLevel", "()F", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"*getMicrosecondPosition", "()J", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Ljavax/sound/sampled/AudioFormat;ILcom/sun/media/sound/DirectAudioDevice;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectTDL::*)($DataLine$Info*,$AudioFormat*,int32_t,$DirectAudioDevice*)>(&DirectAudioDevice$DirectTDL::init$))},
	{"*isActive", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isRunning", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $FINAL},
	{"*open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $FINAL},
	{"*open", "()V", nullptr, $PUBLIC | $FINAL},
	{"read", "([BII)I", nullptr, $PUBLIC},
	{"*start", "()V", nullptr, $PUBLIC | $FINAL},
	{"*stop", "()V", nullptr, $PUBLIC | $FINAL},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectTDL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectTDL", "com.sun.media.sound.DirectAudioDevice", "DirectTDL", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectAudioDevice$DirectTDL_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectTDL",
	"com.sun.media.sound.DirectAudioDevice$DirectDL",
	"javax.sound.sampled.TargetDataLine",
	nullptr,
	_DirectAudioDevice$DirectTDL_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectTDL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectTDL($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectTDL));
}

int32_t DirectAudioDevice$DirectTDL::available() {
	 return this->$DirectAudioDevice$DirectDL::available();
}

void DirectAudioDevice$DirectTDL::drain() {
	this->$DirectAudioDevice$DirectDL::drain();
}

void DirectAudioDevice$DirectTDL::flush() {
	this->$DirectAudioDevice$DirectDL::flush();
}

int64_t DirectAudioDevice$DirectTDL::getLongFramePosition() {
	 return this->$DirectAudioDevice$DirectDL::getLongFramePosition();
}

void DirectAudioDevice$DirectTDL::open($AudioFormat* format, int32_t bufferSize) {
	this->$DirectAudioDevice$DirectDL::open(format, bufferSize);
}

void DirectAudioDevice$DirectTDL::open($AudioFormat* format) {
	this->$DirectAudioDevice$DirectDL::open(format);
}

void DirectAudioDevice$DirectTDL::start() {
	this->$DirectAudioDevice$DirectDL::start();
}

void DirectAudioDevice$DirectTDL::stop() {
	this->$DirectAudioDevice$DirectDL::stop();
}

bool DirectAudioDevice$DirectTDL::isRunning() {
	 return this->$DirectAudioDevice$DirectDL::isRunning();
}

bool DirectAudioDevice$DirectTDL::isActive() {
	 return this->$DirectAudioDevice$DirectDL::isActive();
}

int64_t DirectAudioDevice$DirectTDL::getMicrosecondPosition() {
	 return this->$DirectAudioDevice$DirectDL::getMicrosecondPosition();
}

$AudioFormat* DirectAudioDevice$DirectTDL::getFormat() {
	 return this->$DirectAudioDevice$DirectDL::getFormat();
}

int32_t DirectAudioDevice$DirectTDL::getBufferSize() {
	 return this->$DirectAudioDevice$DirectDL::getBufferSize();
}

float DirectAudioDevice$DirectTDL::getLevel() {
	 return this->$DirectAudioDevice$DirectDL::getLevel();
}

void DirectAudioDevice$DirectTDL::open() {
	this->$DirectAudioDevice$DirectDL::open();
}

void DirectAudioDevice$DirectTDL::close() {
	this->$DirectAudioDevice$DirectDL::close();
}

$Line$Info* DirectAudioDevice$DirectTDL::getLineInfo() {
	 return this->$DirectAudioDevice$DirectDL::getLineInfo();
}

bool DirectAudioDevice$DirectTDL::isOpen() {
	 return this->$DirectAudioDevice$DirectDL::isOpen();
}

void DirectAudioDevice$DirectTDL::addLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::addLineListener(listener);
}

void DirectAudioDevice$DirectTDL::removeLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::removeLineListener(listener);
}

$ControlArray* DirectAudioDevice$DirectTDL::getControls() {
	 return this->$DirectAudioDevice$DirectDL::getControls();
}

bool DirectAudioDevice$DirectTDL::isControlSupported($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::isControlSupported(controlType);
}

$Control* DirectAudioDevice$DirectTDL::getControl($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::getControl(controlType);
}

int32_t DirectAudioDevice$DirectTDL::getFramePosition() {
	 return this->$DirectAudioDevice$DirectDL::getFramePosition();
}

int32_t DirectAudioDevice$DirectTDL::hashCode() {
	 return this->$DirectAudioDevice$DirectDL::hashCode();
}

bool DirectAudioDevice$DirectTDL::equals(Object$* arg0) {
	 return this->$DirectAudioDevice$DirectDL::equals(arg0);
}

$Object* DirectAudioDevice$DirectTDL::clone() {
	 return this->$DirectAudioDevice$DirectDL::clone();
}

$String* DirectAudioDevice$DirectTDL::toString() {
	 return this->$DirectAudioDevice$DirectDL::toString();
}

void DirectAudioDevice$DirectTDL::finalize() {
	this->$DirectAudioDevice$DirectDL::finalize();
}

void DirectAudioDevice$DirectTDL::init$($DataLine$Info* info, $AudioFormat* format, int32_t bufferSize, $DirectAudioDevice* mixer) {
	$useLocalCurrentObjectStackCache();
	$var($DataLine$Info, var$0, info);
	$var($DirectAudioDevice, var$1, mixer);
	$var($AudioFormat, var$2, format);
	int32_t var$3 = bufferSize;
	int32_t var$4 = $nc(mixer)->getMixerIndex();
	$DirectAudioDevice$DirectDL::init$(var$0, var$1, var$2, var$3, var$4, mixer->getDeviceID(), false);
}

int32_t DirectAudioDevice$DirectTDL::read($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	this->flushing = false;
	if (len == 0) {
		return 0;
	}
	if (len < 0) {
		$throwNew($IllegalArgumentException, $$str({"illegal len: "_s, $$str(len)}));
	}
	if ($mod(len, $nc($(getFormat()))->getFrameSize()) != 0) {
		$throwNew($IllegalArgumentException, $$str({"illegal request to read non-integral number of frames ("_s, $$str(len), " bytes, frameSize = "_s, $$str($nc($(getFormat()))->getFrameSize()), " bytes)"_s}));
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
	int32_t read = 0;
	while (this->doIO && !this->flushing) {
		int32_t thisRead = 0;
		$synchronized(this->lockNative) {
			thisRead = $DirectAudioDevice::nRead(this->id, b, off, len, this->softwareConversionSize);
			if (thisRead < 0) {
				break;
			}
			this->bytePosition += thisRead;
			if (thisRead > 0) {
				this->drained = false;
			}
		}
		len -= thisRead;
		read += thisRead;
		if (len > 0) {
			off += thisRead;
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
	if (this->flushing) {
		read = 0;
	}
	return read;
}

DirectAudioDevice$DirectTDL::DirectAudioDevice$DirectTDL() {
}

$Class* DirectAudioDevice$DirectTDL::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectTDL, name, initialize, &_DirectAudioDevice$DirectTDL_ClassInfo_, allocate$DirectAudioDevice$DirectTDL);
	return class$;
}

$Class* DirectAudioDevice$DirectTDL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com