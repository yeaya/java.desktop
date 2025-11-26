#include <com/sun/media/sound/SoftMixingClip.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMixingClip$1.h>
#include <com/sun/media/sound/SoftMixingDataLine$AudioFloatInputStreamResampler.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <com/sun/media/sound/SoftMixingMainMixer.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
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
#undef START
#undef STOP

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftMixingClip$1 = ::com::sun::media::sound::SoftMixingClip$1;
using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $SoftMixingDataLine$AudioFloatInputStreamResampler = ::com::sun::media::sound::SoftMixingDataLine$AudioFloatInputStreamResampler;
using $SoftMixingMainMixer = ::com::sun::media::sound::SoftMixingMainMixer;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingClip_FieldInfo_[] = {
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftMixingClip, format)},
	{"framesize", "I", nullptr, $PRIVATE, $field(SoftMixingClip, framesize)},
	{"data", "[B", nullptr, $PRIVATE, $field(SoftMixingClip, data)},
	{"datastream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingClip, datastream)},
	{"offset", "I", nullptr, $PRIVATE, $field(SoftMixingClip, offset)},
	{"bufferSize", "I", nullptr, $PRIVATE, $field(SoftMixingClip, bufferSize)},
	{"readbuffer", "[F", nullptr, $PRIVATE, $field(SoftMixingClip, readbuffer)},
	{"open", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, open$)},
	{"outputformat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftMixingClip, outputformat)},
	{"out_nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMixingClip, out_nrofchannels)},
	{"in_nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMixingClip, in_nrofchannels)},
	{"frameposition", "I", nullptr, $PRIVATE, $field(SoftMixingClip, frameposition)},
	{"frameposition_sg", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, frameposition_sg)},
	{"active_sg", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, active_sg)},
	{"loopstart", "I", nullptr, $PRIVATE, $field(SoftMixingClip, loopstart)},
	{"loopend", "I", nullptr, $PRIVATE, $field(SoftMixingClip, loopend)},
	{"active", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, active)},
	{"loopcount", "I", nullptr, $PRIVATE, $field(SoftMixingClip, loopcount)},
	{"_active", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, _active)},
	{"_frameposition", "I", nullptr, $PRIVATE, $field(SoftMixingClip, _frameposition)},
	{"loop_sg", "Z", nullptr, $PRIVATE, $field(SoftMixingClip, loop_sg)},
	{"_loopcount", "I", nullptr, $PRIVATE, $field(SoftMixingClip, _loopcount)},
	{"_loopstart", "I", nullptr, $PRIVATE, $field(SoftMixingClip, _loopstart)},
	{"_loopend", "I", nullptr, $PRIVATE, $field(SoftMixingClip, _loopend)},
	{"_rightgain", "F", nullptr, $PRIVATE, $field(SoftMixingClip, _rightgain)},
	{"_leftgain", "F", nullptr, $PRIVATE, $field(SoftMixingClip, _leftgain)},
	{"_eff1gain", "F", nullptr, $PRIVATE, $field(SoftMixingClip, _eff1gain)},
	{"_eff2gain", "F", nullptr, $PRIVATE, $field(SoftMixingClip, _eff2gain)},
	{"afis", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PRIVATE, $field(SoftMixingClip, afis)},
	{}
};

$MethodInfo _SoftMixingClip_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/media/sound/SoftMixingMixer;Ljavax/sound/sampled/DataLine$Info;)V", nullptr, 0, $method(static_cast<void(SoftMixingClip::*)($SoftMixingMixer*,$DataLine$Info*)>(&SoftMixingClip::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"drain", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBufferSize", "()I", nullptr, $PUBLIC},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()I", nullptr, $PUBLIC},
	{"getFramePosition", "()I", nullptr, $PUBLIC},
	{"getLevel", "()F", nullptr, $PUBLIC},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isRunning", "()Z", nullptr, $PUBLIC},
	{"loop", "(I)V", nullptr, $PUBLIC},
	{"open", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException,java.io.IOException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;[BII)V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"processAudioLogic", "([Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PROTECTED},
	{"processControlLogic", "()V", nullptr, $PROTECTED},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"setFramePosition", "(I)V", nullptr, $PUBLIC},
	{"setLoopPoints", "(II)V", nullptr, $PUBLIC},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingClip_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingClip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingClip_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingClip",
	"com.sun.media.sound.SoftMixingDataLine",
	"javax.sound.sampled.Clip",
	_SoftMixingClip_FieldInfo_,
	_SoftMixingClip_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingClip_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingClip$1"
};

$Object* allocate$SoftMixingClip($Class* clazz) {
	return $of($alloc(SoftMixingClip));
}

void SoftMixingClip::addLineListener($LineListener* listener) {
	this->$SoftMixingDataLine::addLineListener(listener);
}

void SoftMixingClip::removeLineListener($LineListener* listener) {
	this->$SoftMixingDataLine::removeLineListener(listener);
}

$Line$Info* SoftMixingClip::getLineInfo() {
	 return this->$SoftMixingDataLine::getLineInfo();
}

$Control* SoftMixingClip::getControl($Control$Type* control) {
	 return this->$SoftMixingDataLine::getControl(control);
}

$ControlArray* SoftMixingClip::getControls() {
	 return this->$SoftMixingDataLine::getControls();
}

bool SoftMixingClip::isControlSupported($Control$Type* control) {
	 return this->$SoftMixingDataLine::isControlSupported(control);
}

int32_t SoftMixingClip::hashCode() {
	 return this->$SoftMixingDataLine::hashCode();
}

bool SoftMixingClip::equals(Object$* arg0) {
	 return this->$SoftMixingDataLine::equals(arg0);
}

$Object* SoftMixingClip::clone() {
	 return this->$SoftMixingDataLine::clone();
}

$String* SoftMixingClip::toString() {
	 return this->$SoftMixingDataLine::toString();
}

void SoftMixingClip::finalize() {
	this->$SoftMixingDataLine::finalize();
}

void SoftMixingClip::init$($SoftMixingMixer* mixer, $DataLine$Info* info) {
	$SoftMixingDataLine::init$(mixer, info);
	$set(this, datastream, $new($SoftMixingClip$1, this));
	this->open$ = false;
	this->frameposition = 0;
	this->frameposition_sg = false;
	this->active_sg = false;
	this->loopstart = 0;
	this->loopend = -1;
	this->active = false;
	this->loopcount = 0;
	this->_active = false;
	this->_frameposition = 0;
	this->loop_sg = false;
	this->_loopcount = 0;
	this->_loopstart = 0;
	this->_loopend = -1;
}

void SoftMixingClip::processControlLogic() {
	this->_rightgain = this->rightgain;
	this->_leftgain = this->leftgain;
	this->_eff1gain = this->eff1gain;
	this->_eff2gain = this->eff2gain;
	if (this->active_sg) {
		this->_active = this->active;
		this->active_sg = false;
	} else {
		this->active = this->_active;
	}
	if (this->frameposition_sg) {
		this->_frameposition = this->frameposition;
		this->frameposition_sg = false;
		$set(this, afis, nullptr);
	} else {
		this->frameposition = this->_frameposition;
	}
	if (this->loop_sg) {
		this->_loopcount = this->loopcount;
		this->_loopstart = this->loopstart;
		this->_loopend = this->loopend;
	}
	if (this->afis == nullptr) {
		$set(this, afis, $AudioFloatInputStream::getInputStream($$new($AudioInputStream, this->datastream, this->format, $AudioSystem::NOT_SPECIFIED)));
		float var$0 = $nc(this->format)->getSampleRate();
		if ($Math::abs(var$0 - $nc(this->outputformat)->getSampleRate()) > 1.0E-6) {
			$set(this, afis, $new($SoftMixingDataLine$AudioFloatInputStreamResampler, this->afis, this->outputformat));
		}
	}
}

void SoftMixingClip::processAudioLogic($SoftAudioBufferArray* buffers) {
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
			if (ret == -1) {
				this->_active = false;
				return;
			}
			if (ret != this->in_nrofchannels) {
				$Arrays::fill(this->readbuffer, ret, readlen, (float)0);
			}
		} catch ($IOException& e) {
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
		if (this->_eff1gain > 2.0E-4) {
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
		if (this->_eff2gain > 2.0E-4) {
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

int32_t SoftMixingClip::getFrameLength() {
	return $div(this->bufferSize, $nc(this->format)->getFrameSize());
}

int64_t SoftMixingClip::getMicrosecondLength() {
	int32_t var$0 = getFrameLength();
	return $cast(int64_t, (var$0 * (1000000.0 / (double)$nc($(getFormat()))->getSampleRate())));
}

void SoftMixingClip::loop(int32_t count) {
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			if (this->active) {
				return;
			}
			this->active = true;
			this->active_sg = true;
			this->loopcount = count;
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::START, getLongFramePosition()));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

void SoftMixingClip::open($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	if (isOpen()) {
		$var($String, var$0, $$str({"Clip is already open with format "_s, $(getFormat()), " and frame lengh of "_s}));
		$throwNew($IllegalStateException, $$concat(var$0, $$str(getFrameLength())));
	}
	if ($AudioFloatConverter::getConverter($($nc(stream)->getFormat())) == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Invalid format : "_s, $($nc($($nc(stream)->getFormat()))->toString())}));
	}
	if ($nc(stream)->getFrameLength() != $AudioSystem::NOT_SPECIFIED) {
		int32_t var$1 = (int32_t)stream->getFrameLength();
		$var($bytes, data, $new($bytes, var$1 * $nc($(stream->getFormat()))->getFrameSize()));
		int32_t readsize = 512 * $nc($(stream->getFormat()))->getFrameSize();
		int32_t len = 0;
		while (len != data->length) {
			if (readsize > data->length - len) {
				readsize = data->length - len;
			}
			int32_t ret = stream->read(data, len, readsize);
			if (ret == -1) {
				break;
			}
			if (ret == 0) {
				$Thread::yield();
			}
			len += ret;
		}
		open($(stream->getFormat()), data, 0, len);
	} else {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($bytes, b, $new($bytes, 512 * $nc($(stream->getFormat()))->getFrameSize()));
		int32_t r = 0;
		while ((r = stream->read(b)) != -1) {
			if (r == 0) {
				$Thread::yield();
			}
			baos->write(b, 0, r);
		}
		$var($AudioFormat, var$2, stream->getFormat());
		$var($bytes, var$3, baos->toByteArray());
		open(var$2, var$3, 0, baos->size());
	}
}

void SoftMixingClip::open($AudioFormat* format, $bytes* data, int32_t offset, int32_t bufferSize) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			$var($String, var$0, $$str({"Clip is already open with format "_s, $(getFormat()), " and frame lengh of "_s}));
			$throwNew($IllegalStateException, $$concat(var$0, $$str(getFrameLength())));
		}
		if ($AudioFloatConverter::getConverter(format) == nullptr) {
			$throwNew($IllegalArgumentException, $$str({"Invalid format : "_s, $($nc(format)->toString())}));
		}
		$Toolkit::validateBuffer($nc(format)->getFrameSize(), bufferSize);
		if (data != nullptr) {
			$set(this, data, $Arrays::copyOf(data, data->length));
		}
		this->offset = offset;
		this->bufferSize = bufferSize;
		$set(this, format, format);
		this->framesize = $nc(format)->getFrameSize();
		this->loopstart = 0;
		this->loopend = -1;
		this->loop_sg = true;
		if (!$nc(this->mixer)->isOpen()) {
			$nc(this->mixer)->open();
			$nc(this->mixer)->implicitOpen = true;
		}
		$set(this, outputformat, $nc(this->mixer)->getFormat());
		this->out_nrofchannels = $nc(this->outputformat)->getChannels();
		this->in_nrofchannels = format->getChannels();
		this->open$ = true;
		$nc($($nc(this->mixer)->getMainMixer()))->openLine(this);
	}
}

void SoftMixingClip::setFramePosition(int32_t frames) {
	$synchronized(this->control_mutex) {
		this->frameposition_sg = true;
		this->frameposition = frames;
	}
}

void SoftMixingClip::setLoopPoints(int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->control_mutex) {
		if (end != -1) {
			if (end < start) {
				$throwNew($IllegalArgumentException, $$str({"Invalid loop points : "_s, $$str(start), " - "_s, $$str(end)}));
			}
			if (end * this->framesize > this->bufferSize) {
				$throwNew($IllegalArgumentException, $$str({"Invalid loop points : "_s, $$str(start), " - "_s, $$str(end)}));
			}
		}
		if (start * this->framesize > this->bufferSize) {
			$throwNew($IllegalArgumentException, $$str({"Invalid loop points : "_s, $$str(start), " - "_s, $$str(end)}));
		}
		if (0 < start) {
			$throwNew($IllegalArgumentException, $$str({"Invalid loop points : "_s, $$str(start), " - "_s, $$str(end)}));
		}
		this->loopstart = start;
		this->loopend = end;
		this->loop_sg = true;
	}
}

void SoftMixingClip::setMicrosecondPosition(int64_t microseconds) {
	setFramePosition($cast(int32_t, (microseconds * (((double)$nc($(getFormat()))->getSampleRate()) / 1000000.0))));
}

int32_t SoftMixingClip::available() {
	return 0;
}

void SoftMixingClip::drain() {
}

void SoftMixingClip::flush() {
}

int32_t SoftMixingClip::getBufferSize() {
	return this->bufferSize;
}

$AudioFormat* SoftMixingClip::getFormat() {
	return this->format;
}

int32_t SoftMixingClip::getFramePosition() {
	$synchronized(this->control_mutex) {
		return this->frameposition;
	}
}

float SoftMixingClip::getLevel() {
	return (float)$AudioSystem::NOT_SPECIFIED;
}

int64_t SoftMixingClip::getLongFramePosition() {
	return getFramePosition();
}

int64_t SoftMixingClip::getMicrosecondPosition() {
	int32_t var$0 = getFramePosition();
	return $cast(int64_t, (var$0 * (1000000.0 / (double)$nc($(getFormat()))->getSampleRate())));
}

bool SoftMixingClip::isActive() {
	$synchronized(this->control_mutex) {
		return this->active;
	}
}

bool SoftMixingClip::isRunning() {
	$synchronized(this->control_mutex) {
		return this->active;
	}
}

void SoftMixingClip::start() {
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			if (this->active) {
				return;
			}
			this->active = true;
			this->active_sg = true;
			this->loopcount = 0;
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::START, getLongFramePosition()));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

void SoftMixingClip::stop() {
	$var($LineEvent, event, nullptr);
	$synchronized(this->control_mutex) {
		if (isOpen()) {
			if (!this->active) {
				return;
			}
			this->active = false;
			this->active_sg = true;
			$init($LineEvent$Type);
			$assign(event, $new($LineEvent, static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>(this))), $LineEvent$Type::STOP, getLongFramePosition()));
		}
	}
	if (event != nullptr) {
		sendEvent(event);
	}
}

void SoftMixingClip::close() {
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

bool SoftMixingClip::isOpen() {
	return this->open$;
}

void SoftMixingClip::open() {
	if (this->data == nullptr) {
		$throwNew($IllegalArgumentException, "Illegal call to open() in interface Clip"_s);
	}
	open(this->format, this->data, this->offset, this->bufferSize);
}

SoftMixingClip::SoftMixingClip() {
}

$Class* SoftMixingClip::load$($String* name, bool initialize) {
	$loadClass(SoftMixingClip, name, initialize, &_SoftMixingClip_ClassInfo_, allocate$SoftMixingClip);
	return class$;
}

$Class* SoftMixingClip::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com