#include <com/sun/media/sound/DirectAudioDevice$DirectClip.h>

#include <com/sun/media/sound/AbstractDataLine.h>
#include <com/sun/media/sound/AbstractLine.h>
#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectBAOS.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <jcpp.h>

#undef LOOP_CONTINUOUSLY
#undef MAX_PRIORITY
#undef NORM_PRIORITY
#undef NOT_SPECIFIED

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDevice$DirectBAOS = ::com::sun::media::sound::DirectAudioDevice$DirectBAOS;
using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runnable = ::java::lang::Runnable;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DirectAudioDevice$DirectClip_FieldInfo_[] = {
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, thread)},
	{"audioData", "[B", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, audioData)},
	{"frameSize", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, frameSize)},
	{"m_lengthInFrames", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, m_lengthInFrames)},
	{"loopCount", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, loopCount)},
	{"clipBytePosition", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, clipBytePosition)},
	{"newFramePosition", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, newFramePosition)},
	{"loopStartFrame", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, loopStartFrame)},
	{"loopEndFrame", "I", nullptr, $PRIVATE | $VOLATILE, $field(DirectAudioDevice$DirectClip, loopEndFrame)},
	{"autoclosing", "Z", nullptr, $PRIVATE, $field(DirectAudioDevice$DirectClip, autoclosing)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectClip_MethodInfo_[] = {
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
	{"*getMicrosecondPosition", "()J", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Ljavax/sound/sampled/AudioFormat;ILcom/sun/media/sound/DirectAudioDevice;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectClip::*)($DataLine$Info*,$AudioFormat*,int32_t,$DirectAudioDevice*)>(&DirectAudioDevice$DirectClip::init$))},
	{"getFrameLength", "()I", nullptr, $PUBLIC},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC},
	{"implClose", "()V", nullptr, 0},
	{"implOpen", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, 0, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"implStart", "()V", nullptr, 0},
	{"implStop", "()V", nullptr, 0},
	{"*isActive", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isAutoClosing", "()Z", nullptr, $PUBLIC},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isRunning", "()Z", nullptr, $PUBLIC | $FINAL},
	{"loop", "(I)V", nullptr, $PUBLIC},
	{"*open", "()V", nullptr, $PUBLIC | $FINAL},
	{"open", "(Ljavax/sound/sampled/AudioFormat;[BII)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;[BI)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectClip::*)($AudioFormat*,$bytes*,int32_t)>(&DirectAudioDevice$DirectClip::open)), "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException,java.io.IOException"},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"requiresServicing", "()Z", nullptr, $PROTECTED},
	{"run", "()V", nullptr, $PUBLIC},
	{"setAutoClosing", "(Z)V", nullptr, $PUBLIC},
	{"setFramePosition", "(I)V", nullptr, $PUBLIC},
	{"setLoopPoints", "(II)V", nullptr, $PUBLIC},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC},
	{"*start", "()V", nullptr, $PUBLIC | $FINAL},
	{"*stop", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectClip_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectClip", "com.sun.media.sound.DirectAudioDevice", "DirectClip", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectAudioDevice$DirectClip_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectClip",
	"com.sun.media.sound.DirectAudioDevice$DirectDL",
	"java.lang.Runnable,com.sun.media.sound.AutoClosingClip",
	_DirectAudioDevice$DirectClip_FieldInfo_,
	_DirectAudioDevice$DirectClip_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectClip_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectClip($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectClip));
}

int32_t DirectAudioDevice$DirectClip::available() {
	 return this->$DirectAudioDevice$DirectDL::available();
}

void DirectAudioDevice$DirectClip::drain() {
	this->$DirectAudioDevice$DirectDL::drain();
}

void DirectAudioDevice$DirectClip::flush() {
	this->$DirectAudioDevice$DirectDL::flush();
}

void DirectAudioDevice$DirectClip::start() {
	this->$DirectAudioDevice$DirectDL::start();
}

void DirectAudioDevice$DirectClip::stop() {
	this->$DirectAudioDevice$DirectDL::stop();
}

bool DirectAudioDevice$DirectClip::isRunning() {
	 return this->$DirectAudioDevice$DirectDL::isRunning();
}

bool DirectAudioDevice$DirectClip::isActive() {
	 return this->$DirectAudioDevice$DirectDL::isActive();
}

int64_t DirectAudioDevice$DirectClip::getMicrosecondPosition() {
	 return this->$DirectAudioDevice$DirectDL::getMicrosecondPosition();
}

$AudioFormat* DirectAudioDevice$DirectClip::getFormat() {
	 return this->$DirectAudioDevice$DirectDL::getFormat();
}

int32_t DirectAudioDevice$DirectClip::getBufferSize() {
	 return this->$DirectAudioDevice$DirectDL::getBufferSize();
}

float DirectAudioDevice$DirectClip::getLevel() {
	 return this->$DirectAudioDevice$DirectDL::getLevel();
}

void DirectAudioDevice$DirectClip::open() {
	this->$DirectAudioDevice$DirectDL::open();
}

void DirectAudioDevice$DirectClip::close() {
	this->$DirectAudioDevice$DirectDL::close();
}

$Line$Info* DirectAudioDevice$DirectClip::getLineInfo() {
	 return this->$DirectAudioDevice$DirectDL::getLineInfo();
}

bool DirectAudioDevice$DirectClip::isOpen() {
	 return this->$DirectAudioDevice$DirectDL::isOpen();
}

void DirectAudioDevice$DirectClip::addLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::addLineListener(listener);
}

void DirectAudioDevice$DirectClip::removeLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::removeLineListener(listener);
}

$ControlArray* DirectAudioDevice$DirectClip::getControls() {
	 return this->$DirectAudioDevice$DirectDL::getControls();
}

bool DirectAudioDevice$DirectClip::isControlSupported($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::isControlSupported(controlType);
}

$Control* DirectAudioDevice$DirectClip::getControl($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::getControl(controlType);
}

int32_t DirectAudioDevice$DirectClip::getFramePosition() {
	 return this->$DirectAudioDevice$DirectDL::getFramePosition();
}

int32_t DirectAudioDevice$DirectClip::hashCode() {
	 return this->$DirectAudioDevice$DirectDL::hashCode();
}

bool DirectAudioDevice$DirectClip::equals(Object$* arg0) {
	 return this->$DirectAudioDevice$DirectDL::equals(arg0);
}

$Object* DirectAudioDevice$DirectClip::clone() {
	 return this->$DirectAudioDevice$DirectDL::clone();
}

$String* DirectAudioDevice$DirectClip::toString() {
	 return this->$DirectAudioDevice$DirectDL::toString();
}

void DirectAudioDevice$DirectClip::finalize() {
	this->$DirectAudioDevice$DirectDL::finalize();
}

void DirectAudioDevice$DirectClip::init$($DataLine$Info* info, $AudioFormat* format, int32_t bufferSize, $DirectAudioDevice* mixer) {
	$useLocalCurrentObjectStackCache();
	$var($DataLine$Info, var$0, info);
	$var($DirectAudioDevice, var$1, mixer);
	$var($AudioFormat, var$2, format);
	int32_t var$3 = bufferSize;
	int32_t var$4 = $nc(mixer)->getMixerIndex();
	$DirectAudioDevice$DirectDL::init$(var$0, var$1, var$2, var$3, var$4, mixer->getDeviceID(), true);
	$set(this, audioData, nullptr);
	this->autoclosing = false;
}

void DirectAudioDevice$DirectClip::open($AudioFormat* format, $bytes* data, int32_t offset, int32_t bufferSize) {
	$Toolkit::isFullySpecifiedAudioFormat(format);
	$Toolkit::validateBuffer($nc(format)->getFrameSize(), bufferSize);
	$var($bytes, newData, $new($bytes, bufferSize));
	$System::arraycopy(data, offset, newData, 0, bufferSize);
	open(format, newData, $div(bufferSize, $nc(format)->getFrameSize()));
}

void DirectAudioDevice$DirectClip::open($AudioFormat* format, $bytes* data, int32_t frameLength) {
	$useLocalCurrentObjectStackCache();
	$Toolkit::isFullySpecifiedAudioFormat(format);
	$synchronized(this->mixer) {
		if (isOpen()) {
			$var($String, var$0, $$str({"Clip is already open with format "_s, $(getFormat()), " and frame lengh of "_s}));
			$throwNew($IllegalStateException, $$concat(var$0, $$str(getFrameLength())));
		} else {
			$set(this, audioData, data);
			this->frameSize = $nc(format)->getFrameSize();
			this->m_lengthInFrames = frameLength;
			this->bytePosition = 0;
			this->clipBytePosition = 0;
			this->newFramePosition = -1;
			this->loopStartFrame = 0;
			this->loopEndFrame = frameLength - 1;
			this->loopCount = 0;
			try {
				open(format, (int32_t)$Toolkit::millis2bytes(format, 1000));
			} catch ($LineUnavailableException& lue) {
				$set(this, audioData, nullptr);
				$throw(lue);
			} catch ($IllegalArgumentException& iae) {
				$set(this, audioData, nullptr);
				$throw(iae);
			}
			int32_t priority = $Thread::NORM_PRIORITY + ($Thread::MAX_PRIORITY - $Thread::NORM_PRIORITY) / 3;
			$set(this, thread, $JSSecurityManager::createThread(this, "Direct Clip"_s, true, priority, false));
			$nc(this->thread)->start();
		}
	}
	if (isAutoClosing()) {
		$nc($(getEventDispatcher()))->autoClosingClipOpened(this);
	}
}

void DirectAudioDevice$DirectClip::open($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Toolkit::isFullySpecifiedAudioFormat($($nc(stream)->getFormat()));
	$synchronized(this->mixer) {
		$var($bytes, streamData, nullptr);
		if (isOpen()) {
			$var($String, var$0, $$str({"Clip is already open with format "_s, $(getFormat()), " and frame lengh of "_s}));
			$throwNew($IllegalStateException, $$concat(var$0, $$str(getFrameLength())));
		}
		int32_t lengthInFrames = (int32_t)$nc(stream)->getFrameLength();
		int32_t bytesRead = 0;
		int32_t frameSize = $nc($(stream->getFormat()))->getFrameSize();
		if (lengthInFrames != $AudioSystem::NOT_SPECIFIED) {
			int32_t arraysize = lengthInFrames * frameSize;
			if (arraysize < 0) {
				$throwNew($IllegalArgumentException, "Audio data < 0"_s);
			}
			try {
				$assign(streamData, $new($bytes, arraysize));
			} catch ($OutOfMemoryError& e) {
				$throwNew($IOException, "Audio data is too big"_s);
			}
			int32_t bytesRemaining = arraysize;
			int32_t thisRead = 0;
			while (bytesRemaining > 0 && thisRead >= 0) {
				thisRead = stream->read(streamData, bytesRead, bytesRemaining);
				if (thisRead > 0) {
					bytesRead += thisRead;
					bytesRemaining -= thisRead;
				} else if (thisRead == 0) {
					$Thread::yield();
				}
			}
		} else {
			int32_t maxReadLimit = $Math::max(16384, frameSize);
			$var($DirectAudioDevice$DirectBAOS, dbaos, $new($DirectAudioDevice$DirectBAOS));
			$var($bytes, tmp, nullptr);
			try {
				$assign(tmp, $new($bytes, maxReadLimit));
			} catch ($OutOfMemoryError& e) {
				$throwNew($IOException, "Audio data is too big"_s);
			}
			int32_t thisRead = 0;
			while (thisRead >= 0) {
				thisRead = stream->read(tmp, 0, $nc(tmp)->length);
				if (thisRead > 0) {
					dbaos->write(tmp, 0, thisRead);
					bytesRead += thisRead;
				} else if (thisRead == 0) {
					$Thread::yield();
				}
			}
			$assign(streamData, dbaos->getInternalBuffer());
		}
		lengthInFrames = $div(bytesRead, frameSize);
		open($(stream->getFormat()), streamData, lengthInFrames);
	}
}

int32_t DirectAudioDevice$DirectClip::getFrameLength() {
	return this->m_lengthInFrames;
}

int64_t DirectAudioDevice$DirectClip::getMicrosecondLength() {
	$var($AudioFormat, var$0, getFormat());
	return $Toolkit::frames2micros(var$0, getFrameLength());
}

void DirectAudioDevice$DirectClip::setFramePosition(int32_t frames) {
	if (frames < 0) {
		frames = 0;
	} else if (frames >= getFrameLength()) {
		frames = getFrameLength();
	}
	if (this->doIO) {
		this->newFramePosition = frames;
	} else {
		this->clipBytePosition = frames * this->frameSize;
		this->newFramePosition = -1;
	}
	this->bytePosition = frames * this->frameSize;
	flush();
	$synchronized(this->lockNative) {
		$DirectAudioDevice::nSetBytePosition(this->id, this->isSource, frames * this->frameSize);
	}
}

int64_t DirectAudioDevice$DirectClip::getLongFramePosition() {
	return $DirectAudioDevice$DirectDL::getLongFramePosition();
}

void DirectAudioDevice$DirectClip::setMicrosecondPosition(int64_t microseconds) {
	int64_t frames = $Toolkit::micros2frames($(getFormat()), microseconds);
	setFramePosition((int32_t)frames);
}

void DirectAudioDevice$DirectClip::setLoopPoints(int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	if (start < 0 || start >= getFrameLength()) {
		$throwNew($IllegalArgumentException, $$str({"illegal value for start: "_s, $$str(start)}));
	}
	if (end >= getFrameLength()) {
		$throwNew($IllegalArgumentException, $$str({"illegal value for end: "_s, $$str(end)}));
	}
	if (end == -1) {
		end = getFrameLength() - 1;
		if (end < 0) {
			end = 0;
		}
	}
	if (end < start) {
		$throwNew($IllegalArgumentException, $$str({"End position "_s, $$str(end), "  preceeds start position "_s, $$str(start)}));
	}
	this->loopStartFrame = start;
	this->loopEndFrame = end;
}

void DirectAudioDevice$DirectClip::loop(int32_t count) {
	this->loopCount = count;
	start();
}

void DirectAudioDevice$DirectClip::implOpen($AudioFormat* format, int32_t bufferSize) {
	if (this->audioData == nullptr) {
		$throwNew($IllegalArgumentException, "illegal call to open() in interface Clip"_s);
	}
	$DirectAudioDevice$DirectDL::implOpen(format, bufferSize);
}

void DirectAudioDevice$DirectClip::implClose() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, oldThread, this->thread);
	$set(this, thread, nullptr);
	this->doIO = false;
	if (oldThread != nullptr) {
		$synchronized(this->lock) {
			$nc($of(this->lock))->notifyAll();
		}
		try {
			oldThread->join(2000);
		} catch ($InterruptedException& ie) {
		}
	}
	$DirectAudioDevice$DirectDL::implClose();
	$set(this, audioData, nullptr);
	this->newFramePosition = -1;
	$nc($(getEventDispatcher()))->autoClosingClipClosed(this);
}

void DirectAudioDevice$DirectClip::implStart() {
	$DirectAudioDevice$DirectDL::implStart();
}

void DirectAudioDevice$DirectClip::implStop() {
	$DirectAudioDevice$DirectDL::implStop();
	this->loopCount = 0;
}

void DirectAudioDevice$DirectClip::run() {
	$var($Thread, curThread, $Thread::currentThread());
	while (this->thread == curThread) {
		$synchronized(this->lock) {
			while (!this->doIO && this->thread == curThread) {
				try {
					$nc($of(this->lock))->wait();
				} catch ($InterruptedException& ignored) {
				}
			}
		}
		while (this->doIO && this->thread == curThread) {
			if (this->newFramePosition >= 0) {
				this->clipBytePosition = this->newFramePosition * this->frameSize;
				this->newFramePosition = -1;
			}
			int32_t endFrame = getFrameLength() - 1;
			if (this->loopCount > 0 || this->loopCount == $Clip::LOOP_CONTINUOUSLY) {
				endFrame = this->loopEndFrame;
			}
			int64_t framePos = ($div(this->clipBytePosition, this->frameSize));
			int32_t toWriteFrames = (int32_t)(endFrame - framePos + 1);
			int32_t toWriteBytes = toWriteFrames * this->frameSize;
			if (toWriteBytes > getBufferSize()) {
				toWriteBytes = $Toolkit::align(getBufferSize(), this->frameSize);
			}
			int32_t written = write(this->audioData, this->clipBytePosition, toWriteBytes);
			this->clipBytePosition += written;
			if (this->doIO && this->newFramePosition < 0 && written >= 0) {
				framePos = $div(this->clipBytePosition, this->frameSize);
				if (framePos > endFrame) {
					if (this->loopCount > 0 || this->loopCount == $Clip::LOOP_CONTINUOUSLY) {
						if (this->loopCount != $Clip::LOOP_CONTINUOUSLY) {
							--this->loopCount;
						}
						this->newFramePosition = this->loopStartFrame;
					} else {
						drain();
						stop();
					}
				}
			}
		}
	}
}

bool DirectAudioDevice$DirectClip::isAutoClosing() {
	return this->autoclosing;
}

void DirectAudioDevice$DirectClip::setAutoClosing(bool value) {
	$useLocalCurrentObjectStackCache();
	if (value != this->autoclosing) {
		if (isOpen()) {
			if (value) {
				$nc($(getEventDispatcher()))->autoClosingClipOpened(this);
			} else {
				$nc($(getEventDispatcher()))->autoClosingClipClosed(this);
			}
		}
		this->autoclosing = value;
	}
}

bool DirectAudioDevice$DirectClip::requiresServicing() {
	return false;
}

DirectAudioDevice$DirectClip::DirectAudioDevice$DirectClip() {
}

$Class* DirectAudioDevice$DirectClip::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectClip, name, initialize, &_DirectAudioDevice$DirectClip_ClassInfo_, allocate$DirectAudioDevice$DirectClip);
	return class$;
}

$Class* DirectAudioDevice$DirectClip::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com