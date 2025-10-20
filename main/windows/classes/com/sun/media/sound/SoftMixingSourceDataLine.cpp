#include <com/sun/media/sound/SoftMixingSourceDataLine.h>

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMixingDataLine$AudioFloatInputStreamResampler.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <com/sun/media/sound/SoftMixingMainMixer.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <com/sun/media/sound/SoftMixingSourceDataLine$1.h>
#include <com/sun/media/sound/SoftMixingSourceDataLine$NonBlockingFloatInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

#undef CHANNEL_EFFECT1
#undef CHANNEL_EFFECT2
#undef CHANNEL_LEFT
#undef CHANNEL_RIGHT
#undef CLOSE
#undef NOT_SPECIFIED
#undef OPEN
#undef START
#undef STOP

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $SoftMixingDataLine$AudioFloatInputStreamResampler = ::com::sun::media::sound::SoftMixingDataLine$AudioFloatInputStreamResampler;
using $SoftMixingMainMixer = ::com::sun::media::sound::SoftMixingMainMixer;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $SoftMixingSourceDataLine$1 = ::com::sun::media::sound::SoftMixingSourceDataLine$1;
using $SoftMixingSourceDataLine$NonBlockingFloatInputStream = ::com::sun::media::sound::SoftMixingSourceDataLine$NonBlockingFloatInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingSourceDataLine_FieldInfo_[] = {
	{"open", "Z", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, open$)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, format)},
	{"framesize", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, framesize)},
	{"bufferSize", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, bufferSize)},
	{"readbuffer", "[F", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, readbuffer)},
	{"active", "Z", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, active)},
	{"cycling_buffer", "[B", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, cycling_buffer)},
	{"cycling_read_pos", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, cycling_read_pos)},
	{"cycling_write_pos", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, cycling_write_pos)},
	{"cycling_avail", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, cycling_avail)},
	{"cycling_framepos", "J", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, cycling_framepos)},
	{"afis", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, afis)},
	{"_active", "Z", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, _active)},
	{"outputformat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, outputformat)},
	{"out_nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, out_nrofchannels)},
	{"in_nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, in_nrofchannels)},
	{"_rightgain", "F", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, _rightgain)},
	{"_leftgain", "F", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, _leftgain)},
	{"_eff1gain", "F", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, _eff1gain)},
	{"_eff2gain", "F", nullptr, $PRIVATE, $field(SoftMixingSourceDataLine, _eff2gain)},
	{}
};

$MethodInfo _SoftMixingSourceDataLine_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/media/sound/SoftMixingMixer;Ljavax/sound/sampled/DataLine$Info;)V", nullptr, 0, $method(static_cast<void(SoftMixingSourceDataLine::*)($SoftMixingMixer*,$DataLine$Info*)>(&SoftMixingSourceDataLine::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"drain", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBufferSize", "()I", nullptr, $PUBLIC},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFramePosition", "()I", nullptr, $PUBLIC},
	{"getLevel", "()F", nullptr, $PUBLIC},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isRunning", "()Z", nullptr, $PUBLIC},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"processAudioLogic", "([Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PROTECTED},
	{"processControlLogic", "()V", nullptr, $PROTECTED},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "([BII)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingSourceDataLine_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingSourceDataLine$NonBlockingFloatInputStream", "com.sun.media.sound.SoftMixingSourceDataLine", "NonBlockingFloatInputStream", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftMixingSourceDataLine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingSourceDataLine_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingSourceDataLine",
	"com.sun.media.sound.SoftMixingDataLine",
	"javax.sound.sampled.SourceDataLine",
	_SoftMixingSourceDataLine_FieldInfo_,
	_SoftMixingSourceDataLine_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingSourceDataLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingSourceDataLine$NonBlockingFloatInputStream,com.sun.media.sound.SoftMixingSourceDataLine$1"
};

$Object* allocate$SoftMixingSourceDataLine($Class* clazz) {
	return $of($alloc(SoftMixingSourceDataLine));
}

void SoftMixingSourceDataLine::addLineListener($LineListener* listener) {
	this->$SoftMixingDataLine::addLineListener(listener);
}

void SoftMixingSourceDataLine::removeLineListener($LineListener* listener) {
	this->$SoftMixingDataLine::removeLineListener(listener);
}

$Line$Info* SoftMixingSourceDataLine::getLineInfo() {
	 return this->$SoftMixingDataLine::getLineInfo();
}

$Control* SoftMixingSourceDataLine::getControl($Control$Type* control) {
	 return this->$SoftMixingDataLine::getControl(control);
}

$ControlArray* SoftMixingSourceDataLine::getControls() {
	 return this->$SoftMixingDataLine::getControls();
}

bool SoftMixingSourceDataLine::isControlSupported($Control$Type* control) {
	 return this->$SoftMixingDataLine::isControlSupported(control);
}

int32_t SoftMixingSourceDataLine::hashCode() {
	 return this->$SoftMixingDataLine::hashCode();
}

bool SoftMixingSourceDataLine::equals(Object$* arg0) {
	 return this->$SoftMixingDataLine::equals(arg0);
}

$Object* SoftMixingSourceDataLine::clone() {
	 return this->$SoftMixingDataLine::clone();
}

$String* SoftMixingSourceDataLine::toString() {
	 return this->$SoftMixingDataLine::toString();
}

void SoftMixingSourceDataLine::finalize() {
	this->$SoftMixingDataLine::finalize();
}

void SoftMixingSourceDataLine::init$($SoftMixingMixer* mixer, $DataLine$Info* info) {
	$SoftMixingDataLine::init$(mixer, info);
	this->open$ = false;
	$set(this, format, $new($AudioFormat, 44100.0f, 16, 2, true, false));
	this->bufferSize = -1;
	this->active = false;
	this->cycling_read_pos = 0;
	this->cycling_write_pos = 0;
	this->cycling_avail = 0;
	this->cycling_framepos = 0;
	this->_active = false;
}

int32_t SoftMixingSourceDataLine::write($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		return 0;
	}
	if ($mod(len, this->framesize) != 0) {
		$throwNew($IllegalArgumentException, "Number of bytes does not represent an integral number of sample frames."_s);
	}
	if (off < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, off);
	}
	if ((int64_t)off + (int64_t)len > (int64_t)$nc(b)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, b->length);
	}
	$var($bytes, buff, this->cycling_buffer);
	int32_t buff_len = $nc(this->cycling_buffer)->length;
	int32_t l = 0;
	while (l != len) {
		int32_t avail = 0;
		$synchronized(this->cycling_buffer) {
			int32_t pos = this->cycling_write_pos;
			avail = this->cycling_avail;
			while (l != len) {
				if (avail == buff_len) {
					break;
				}
				$nc(buff)->set(pos++, $nc(b)->get(off++));
				++l;
				++avail;
				if (pos == buff_len) {
					pos = 0;
				}
			}
			this->cycling_avail = avail;
			this->cycling_write_pos = pos;
			if (l == len) {
				return l;
			}
		}
		if (avail == buff_len) {
			try {
				$Thread::sleep(1);
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				return l;
			}
			if (!isRunning()) {
				return l;
			}
		}
	}
	return l;
}

void SoftMixingSourceDataLine::processControlLogic() {
	this->_active = this->active;
	this->_rightgain = this->rightgain;
	this->_leftgain = this->leftgain;
	this->_eff1gain = this->eff1gain;
	this->_eff2gain = this->eff2gain;
}

void SoftMixingSourceDataLine::processAudioLogic($SoftAudioBufferArray* buffers) {
	$useLocalCurrentObjectStackCache();
	if (this->_active) {
		$var($floats, left, $nc($nc(buffers)->get($SoftMixingMainMixer::CHANNEL_LEFT))->array());
		$var($floats, right, $nc(buffers->get($SoftMixingMainMixer::CHANNEL_RIGHT))->array());
		int32_t bufferlen = $nc(buffers->get($SoftMixingMainMixer::CHANNEL_LEFT))->getSize();
		int32_t readlen = bufferlen * this->in_nrofchannels;
		if (this->readbuffer == nullptr || $nc(this->readbuffer)->length < readlen) {
			$set(this, readbuffer, $new($floats, readlen));
		}
		int32_t ret = 0;
		try {
			ret = $nc(this->afis)->read(this->readbuffer);
			if (ret != this->in_nrofchannels) {
				$Arrays::fill(this->readbuffer, ret, readlen, (float)0);
			}
		} catch ($IOException&) {
			$catch();
		}
		int32_t in_c = this->in_nrofchannels;
		{
			int32_t i = 0;
			int32_t ix = 0;
			for (; i < bufferlen; ++i, ix += in_c) {
				(*$nc(left))[i] += $nc(this->readbuffer)->get(ix) * this->_leftgain;
			}
		}
		if (this->out_nrofchannels != 1) {
			if (this->in_nrofchannels == 1) {
				{
					int32_t i = 0;
					int32_t ix = 0;
					for (; i < bufferlen; ++i, ix += in_c) {
						(*$nc(right))[i] += $nc(this->readbuffer)->get(ix) * this->_rightgain;
					}
				}
			} else {
				{
					int32_t i = 0;
					int32_t ix = 1;
					for (; i < bufferlen; ++i, ix += in_c) {
						(*$nc(right))[i] += $nc(this->readbuffer)->get(ix) * this->_rightgain;
					}
				}
			}
		}
		if (this->_eff1gain > 1.0E-4) {
			$var($floats, eff1, $nc(buffers->get($SoftMixingMainMixer::CHANNEL_EFFECT1))->array());
			{
				int32_t i = 0;
				int32_t ix = 0;
				for (; i < bufferlen; ++i, ix += in_c) {
					(*$nc(eff1))[i] += $nc(this->readbuffer)->get(ix) * this->_eff1gain;
				}
			}
			if (this->in_nrofchannels == 2) {
				{
					int32_t i = 0;
					int32_t ix = 1;
					for (; i < bufferlen; ++i, ix += in_c) {
						(*$nc(eff1))[i] += $nc(this->readbuffer)->get(ix) * this->_eff1gain;
					}
				}
			}
		}
		if (this->_eff2gain > 1.0E-4) {
			$var($floats, eff2, $nc(buffers->get($SoftMixingMainMixer::CHANNEL_EFFECT2))->array());
			{
				int32_t i = 0;
				int32_t ix = 0;
				for (; i < bufferlen; ++i, ix += in_c) {
					(*$nc(eff2))[i] += $nc(this->readbuffer)->get(ix) * this->_eff2gain;
				}
			}
			if (this->in_nrofchannels == 2) {
				{
					int32_t i = 0;
					int32_t ix = 1;
					for (; i < bufferlen; ++i, ix += in_c) {
						(*$nc(eff2))[i] += $nc(this->readbuffer)->get(ix) * this->_eff2gain;
					}
				}
			}
		}
	}
}

void SoftMixingSourceDataLine::open() {
	open(this->format);
}

void SoftMixingSourceDataLine::open($AudioFormat* format) {
	if (this->bufferSize == -1) {
		int32_t var$0 = ($cast(int32_t, ($nc(format)->getFrameRate() / 2)));
		this->bufferSize = var$0 * format->getFrameSize();
	}
	open(format, this->bufferSize);
}

void SoftMixingSourceDataLine::open($AudioFormat* format, int32_t bufferSize) {
	$useLocalCurrentObjectStackCache();
	$var($LineEvent, event, nullptr);
	if (bufferSize < $nc(format)->getFrameSize() * 32) {
		bufferSize = format->getFrameSize() * 32;
	}
	$synchronized(this->control_mutex) {
		if (!isOpen()) {
			if (!$nc(this->mixer)->isOpen()) {
				$nc(this->mixer)->open();
				$nc(this->mixer)->implicitOpen = true;
			}
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::OPEN, 0));
			this->bufferSize = bufferSize - $mod(bufferSize, $nc(format)->getFrameSize());
			$set(this, format, format);
			this->framesize = format->getFrameSize();
			$set(this, outputformat, $nc(this->mixer)->getFormat());
			this->out_nrofchannels = $nc(this->outputformat)->getChannels();
			this->in_nrofchannels = format->getChannels();
			this->open$ = true;
			$nc($($nc(this->mixer)->getMainMixer()))->openLine(this);
			$set(this, cycling_buffer, $new($bytes, this->framesize * bufferSize));
			this->cycling_read_pos = 0;
			this->cycling_write_pos = 0;
			this->cycling_avail = 0;
			this->cycling_framepos = 0;
			$var($InputStream, cycling_inputstream, $new($SoftMixingSourceDataLine$1, this));
			$set(this, afis, $AudioFloatInputStream::getInputStream($$new($AudioInputStream, cycling_inputstream, format, $AudioSystem::NOT_SPECIFIED)));
			$set(this, afis, $new($SoftMixingSourceDataLine$NonBlockingFloatInputStream, this->afis));
			float var$0 = format->getSampleRate();
			if ($Math::abs(var$0 - $nc(this->outputformat)->getSampleRate()) > 1.0E-6) {
				$set(this, afis, $new($SoftMixingDataLine$AudioFloatInputStreamResampler, this->afis, this->outputformat));
			}
		} else if (!$nc(format)->matches($(getFormat()))) {
			$var($String, var$1, $$str({"Line is already open with format "_s, $(getFormat()), " and bufferSize "_s}));
			$throwNew($IllegalStateException, $$concat(var$1, $$str(getBufferSize())));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

int32_t SoftMixingSourceDataLine::available() {
	$synchronized(this->cycling_buffer) {
		return $nc(this->cycling_buffer)->length - this->cycling_avail;
	}
}

void SoftMixingSourceDataLine::drain() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		int32_t avail = 0;
		$synchronized(this->cycling_buffer) {
			avail = this->cycling_avail;
		}
		if (avail != 0) {
			return;
		}
		try {
			$Thread::sleep(1);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			return;
		}
	}
}

void SoftMixingSourceDataLine::flush() {
	$synchronized(this->cycling_buffer) {
		this->cycling_read_pos = 0;
		this->cycling_write_pos = 0;
		this->cycling_avail = 0;
	}
}

int32_t SoftMixingSourceDataLine::getBufferSize() {
	$synchronized(this->control_mutex) {
		return this->bufferSize;
	}
}

$AudioFormat* SoftMixingSourceDataLine::getFormat() {
	$synchronized(this->control_mutex) {
		return this->format;
	}
}

int32_t SoftMixingSourceDataLine::getFramePosition() {
	return (int32_t)getLongFramePosition();
}

float SoftMixingSourceDataLine::getLevel() {
	return (float)$AudioSystem::NOT_SPECIFIED;
}

int64_t SoftMixingSourceDataLine::getLongFramePosition() {
	$synchronized(this->cycling_buffer) {
		return this->cycling_framepos;
	}
}

int64_t SoftMixingSourceDataLine::getMicrosecondPosition() {
	int64_t var$0 = getLongFramePosition();
	return $cast(int64_t, (var$0 * (1000000.0 / (double)$nc($(getFormat()))->getSampleRate())));
}

bool SoftMixingSourceDataLine::isActive() {
	$synchronized(this->control_mutex) {
		return this->active;
	}
}

bool SoftMixingSourceDataLine::isRunning() {
	$synchronized(this->control_mutex) {
		return this->active;
	}
}

void SoftMixingSourceDataLine::start() {
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			if (this->active) {
				return;
			}
			this->active = true;
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::START, getLongFramePosition()));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

void SoftMixingSourceDataLine::stop() {
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			if (!this->active) {
				return;
			}
			this->active = false;
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::STOP, getLongFramePosition()));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

void SoftMixingSourceDataLine::close() {
	$useLocalCurrentObjectStackCache();
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (!isOpen()) {
			return;
		}
		stop();
		$init($LineEvent$Type);
		$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::CLOSE, getLongFramePosition()));
		this->open$ = false;
		$nc($($nc(this->mixer)->getMainMixer()))->closeLine(this);
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

bool SoftMixingSourceDataLine::isOpen() {
	$synchronized(this->control_mutex) {
		return this->open$;
	}
}

SoftMixingSourceDataLine::SoftMixingSourceDataLine() {
}

$Class* SoftMixingSourceDataLine::load$($String* name, bool initialize) {
	$loadClass(SoftMixingSourceDataLine, name, initialize, &_SoftMixingSourceDataLine_ClassInfo_, allocate$SoftMixingSourceDataLine);
	return class$;
}

$Class* SoftMixingSourceDataLine::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com