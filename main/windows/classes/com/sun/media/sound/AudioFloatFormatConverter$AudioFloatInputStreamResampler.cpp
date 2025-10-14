#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatInputStreamResampler.h>

#include <com/sun/media/sound/AudioFloatFormatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <com/sun/media/sound/SoftCubicResampler.h>
#include <com/sun/media/sound/SoftLanczosResampler.h>
#include <com/sun/media/sound/SoftLinearResampler.h>
#include <com/sun/media/sound/SoftLinearResampler2.h>
#include <com/sun/media/sound/SoftPointResampler.h>
#include <com/sun/media/sound/SoftSincResampler.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $floatArray2 = $Array<float, 2>;
using $AudioFloatFormatConverter = ::com::sun::media::sound::AudioFloatFormatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $SoftCubicResampler = ::com::sun::media::sound::SoftCubicResampler;
using $SoftLanczosResampler = ::com::sun::media::sound::SoftLanczosResampler;
using $SoftLinearResampler = ::com::sun::media::sound::SoftLinearResampler;
using $SoftLinearResampler2 = ::com::sun::media::sound::SoftLinearResampler2;
using $SoftPointResampler = ::com::sun::media::sound::SoftPointResampler;
using $SoftSincResampler = ::com::sun::media::sound::SoftSincResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatFormatConverter$AudioFloatInputStreamResampler_FieldInfo_[] = {
	{"ais", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ais)},
	{"targetFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, targetFormat)},
	{"skipbuffer", "[F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, skipbuffer)},
	{"resampler", "Lcom/sun/media/sound/SoftAbstractResampler;", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, resampler)},
	{"pitch", "[F", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, pitch)},
	{"ibuffer2", "[F", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ibuffer2)},
	{"ibuffer", "[[F", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ibuffer)},
	{"ibuffer_index", "F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ibuffer_index)},
	{"ibuffer_len", "I", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ibuffer_len)},
	{"nrofchannels", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, nrofchannels)},
	{"cbuffer", "[[F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, cbuffer)},
	{"buffer_len", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AudioFloatFormatConverter$AudioFloatInputStreamResampler, buffer_len)},
	{"pad", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, pad)},
	{"pad2", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, pad2)},
	{"ix", "[F", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ix)},
	{"ox", "[I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, ox)},
	{"mark_ibuffer", "[[F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, mark_ibuffer)},
	{"mark_ibuffer_index", "F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, mark_ibuffer_index)},
	{"mark_ibuffer_len", "I", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamResampler, mark_ibuffer_len)},
	{}
};

$MethodInfo _AudioFloatFormatConverter$AudioFloatInputStreamResampler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AudioFloatInputStream;Ljavax/sound/sampled/AudioFormat;)V", nullptr, 0, $method(static_cast<void(AudioFloatFormatConverter$AudioFloatInputStreamResampler::*)($AudioFloatInputStream*,$AudioFormat*)>(&AudioFloatFormatConverter$AudioFloatInputStreamResampler::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()J", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([FII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readNextBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatFormatConverter$AudioFloatInputStreamResampler::*)()>(&AudioFloatFormatConverter$AudioFloatInputStreamResampler::readNextBuffer)), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AudioFloatFormatConverter$AudioFloatInputStreamResampler_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamResampler", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatInputStreamResampler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatFormatConverter$AudioFloatInputStreamResampler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamResampler",
	"com.sun.media.sound.AudioFloatInputStream",
	nullptr,
	_AudioFloatFormatConverter$AudioFloatInputStreamResampler_FieldInfo_,
	_AudioFloatFormatConverter$AudioFloatInputStreamResampler_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatFormatConverter$AudioFloatInputStreamResampler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatFormatConverter"
};

$Object* allocate$AudioFloatFormatConverter$AudioFloatInputStreamResampler($Class* clazz) {
	return $of($alloc(AudioFloatFormatConverter$AudioFloatInputStreamResampler));
}

void AudioFloatFormatConverter$AudioFloatInputStreamResampler::init$($AudioFloatInputStream* ais, $AudioFormat* format) {
	$AudioFloatInputStream::init$();
	$set(this, pitch, $new($floats, 1));
	this->ibuffer_index = (float)0;
	this->ibuffer_len = 0;
	$set(this, ix, $new($floats, 1));
	$set(this, ox, $new($ints, 1));
	$set(this, mark_ibuffer, nullptr);
	this->mark_ibuffer_index = (float)0;
	this->mark_ibuffer_len = 0;
	$set(this, ais, ais);
	$var($AudioFormat, sourceFormat, $nc(ais)->getFormat());
	$var($AudioFormat$Encoding, var$0, $nc(sourceFormat)->getEncoding());
	float var$1 = $nc(format)->getSampleRate();
	int32_t var$2 = sourceFormat->getSampleSizeInBits();
	int32_t var$3 = sourceFormat->getChannels();
	int32_t var$4 = sourceFormat->getFrameSize();
	float var$5 = format->getSampleRate();
	$set(this, targetFormat, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, var$5, sourceFormat->isBigEndian()));
	this->nrofchannels = $nc(this->targetFormat)->getChannels();
	$var($Object, interpolation, $nc(format)->getProperty("interpolation"_s));
	if (interpolation != nullptr && ($instanceOf($String, interpolation))) {
		$var($String, resamplerType, $cast($String, interpolation));
		if (resamplerType->equalsIgnoreCase("point"_s)) {
			$set(this, resampler, $new($SoftPointResampler));
		}
		if (resamplerType->equalsIgnoreCase("linear"_s)) {
			$set(this, resampler, $new($SoftLinearResampler2));
		}
		if (resamplerType->equalsIgnoreCase("linear1"_s)) {
			$set(this, resampler, $new($SoftLinearResampler));
		}
		if (resamplerType->equalsIgnoreCase("linear2"_s)) {
			$set(this, resampler, $new($SoftLinearResampler2));
		}
		if (resamplerType->equalsIgnoreCase("cubic"_s)) {
			$set(this, resampler, $new($SoftCubicResampler));
		}
		if (resamplerType->equalsIgnoreCase("lanczos"_s)) {
			$set(this, resampler, $new($SoftLanczosResampler));
		}
		if (resamplerType->equalsIgnoreCase("sinc"_s)) {
			$set(this, resampler, $new($SoftSincResampler));
		}
	}
	if (this->resampler == nullptr) {
		$set(this, resampler, $new($SoftLinearResampler2));
	}
	float var$6 = $nc(sourceFormat)->getSampleRate();
	$nc(this->pitch)->set(0, var$6 / format->getSampleRate());
	this->pad = $nc(this->resampler)->getPadding();
	this->pad2 = this->pad * 2;
	$set(this, ibuffer, $new($floatArray2, this->nrofchannels, this->buffer_len + this->pad2));
	$set(this, ibuffer2, $new($floats, this->nrofchannels * this->buffer_len));
	this->ibuffer_index = (float)(this->buffer_len + this->pad);
	this->ibuffer_len = this->buffer_len;
}

int32_t AudioFloatFormatConverter$AudioFloatInputStreamResampler::available() {
	return 0;
}

void AudioFloatFormatConverter$AudioFloatInputStreamResampler::close() {
	$nc(this->ais)->close();
}

$AudioFormat* AudioFloatFormatConverter$AudioFloatInputStreamResampler::getFormat() {
	return this->targetFormat;
}

int64_t AudioFloatFormatConverter$AudioFloatInputStreamResampler::getFrameLength() {
	return $AudioSystem::NOT_SPECIFIED;
}

void AudioFloatFormatConverter$AudioFloatInputStreamResampler::mark(int32_t readlimit) {
	$nc(this->ais)->mark($cast(int32_t, (readlimit * $nc(this->pitch)->get(0))));
	this->mark_ibuffer_index = this->ibuffer_index;
	this->mark_ibuffer_len = this->ibuffer_len;
	if (this->mark_ibuffer == nullptr) {
		$set(this, mark_ibuffer, $new($floatArray2, $nc(this->ibuffer)->length, $nc($nc(this->ibuffer)->get(0))->length));
	}
	for (int32_t c = 0; c < $nc(this->ibuffer)->length; ++c) {
		$var($floats, from, $nc(this->ibuffer)->get(c));
		$var($floats, to, $nc(this->mark_ibuffer)->get(c));
		for (int32_t i = 0; i < $nc(to)->length; ++i) {
			to->set(i, $nc(from)->get(i));
		}
	}
}

bool AudioFloatFormatConverter$AudioFloatInputStreamResampler::markSupported() {
	return $nc(this->ais)->markSupported();
}

void AudioFloatFormatConverter$AudioFloatInputStreamResampler::readNextBuffer() {
	if (this->ibuffer_len == -1) {
		return;
	}
	for (int32_t c = 0; c < this->nrofchannels; ++c) {
		$var($floats, buff, $nc(this->ibuffer)->get(c));
		int32_t buffer_len_pad = this->ibuffer_len + this->pad2;
		{
			int32_t i = this->ibuffer_len;
			int32_t ix = 0;
			for (; i < buffer_len_pad; ++i, ++ix) {
				$nc(buff)->set(ix, buff->get(i));
			}
		}
	}
	this->ibuffer_index -= (this->ibuffer_len);
	this->ibuffer_len = $nc(this->ais)->read(this->ibuffer2);
	if (this->ibuffer_len >= 0) {
		while (this->ibuffer_len < $nc(this->ibuffer2)->length) {
			int32_t ret = $nc(this->ais)->read(this->ibuffer2, this->ibuffer_len, $nc(this->ibuffer2)->length - this->ibuffer_len);
			if (ret == -1) {
				break;
			}
			this->ibuffer_len += ret;
		}
		$Arrays::fill(this->ibuffer2, this->ibuffer_len, $nc(this->ibuffer2)->length, (float)0);
		this->ibuffer_len /= this->nrofchannels;
	} else {
		$Arrays::fill(this->ibuffer2, 0, $nc(this->ibuffer2)->length, (float)0);
	}
	int32_t ibuffer2_len = $nc(this->ibuffer2)->length;
	for (int32_t c = 0; c < this->nrofchannels; ++c) {
		$var($floats, buff, $nc(this->ibuffer)->get(c));
		{
			int32_t i = c;
			int32_t ix = this->pad2;
			for (; i < ibuffer2_len; i += this->nrofchannels, ++ix) {
				$nc(buff)->set(ix, $nc(this->ibuffer2)->get(i));
			}
		}
	}
}

int32_t AudioFloatFormatConverter$AudioFloatInputStreamResampler::read($floats* b, int32_t off, int32_t len) {
	if (this->cbuffer == nullptr || $nc($nc(this->cbuffer)->get(0))->length < $div(len, this->nrofchannels)) {
		$set(this, cbuffer, $new($floatArray2, this->nrofchannels, $div(len, this->nrofchannels)));
	}
	if (this->ibuffer_len == -1) {
		return -1;
	}
	if (len < 0) {
		return 0;
	}
	int32_t offlen = off + len;
	int32_t remain = $div(len, this->nrofchannels);
	int32_t destPos = 0;
	int32_t in_end = this->ibuffer_len;
	while (remain > 0) {
		if (this->ibuffer_len >= 0) {
			if (this->ibuffer_index >= (this->ibuffer_len + this->pad)) {
				readNextBuffer();
			}
			in_end = this->ibuffer_len + this->pad;
		}
		if (this->ibuffer_len < 0) {
			in_end = this->pad2;
			if (this->ibuffer_index >= in_end) {
				break;
			}
		}
		if (this->ibuffer_index < 0) {
			break;
		}
		int32_t preDestPos = destPos;
		for (int32_t c = 0; c < this->nrofchannels; ++c) {
			$nc(this->ix)->set(0, this->ibuffer_index);
			$nc(this->ox)->set(0, destPos);
			$var($floats, buff, $nc(this->ibuffer)->get(c));
			$nc(this->resampler)->interpolate(buff, this->ix, (float)in_end, this->pitch, (float)0, $nc(this->cbuffer)->get(c), this->ox, $div(len, this->nrofchannels));
		}
		this->ibuffer_index = $nc(this->ix)->get(0);
		destPos = $nc(this->ox)->get(0);
		remain -= destPos - preDestPos;
	}
	for (int32_t c = 0; c < this->nrofchannels; ++c) {
		int32_t ix = 0;
		$var($floats, buff, $nc(this->cbuffer)->get(c));
		for (int32_t i = c + off; i < offlen; i += this->nrofchannels) {
			$nc(b)->set(i, $nc(buff)->get(ix++));
		}
	}
	return len - remain * this->nrofchannels;
}

void AudioFloatFormatConverter$AudioFloatInputStreamResampler::reset() {
	$nc(this->ais)->reset();
	if (this->mark_ibuffer == nullptr) {
		return;
	}
	this->ibuffer_index = this->mark_ibuffer_index;
	this->ibuffer_len = this->mark_ibuffer_len;
	for (int32_t c = 0; c < $nc(this->ibuffer)->length; ++c) {
		$var($floats, from, $nc(this->mark_ibuffer)->get(c));
		$var($floats, to, $nc(this->ibuffer)->get(c));
		for (int32_t i = 0; i < $nc(to)->length; ++i) {
			to->set(i, $nc(from)->get(i));
		}
	}
}

int64_t AudioFloatFormatConverter$AudioFloatInputStreamResampler::skip(int64_t len) {
	if (len < 0) {
		return 0;
	}
	if (this->skipbuffer == nullptr) {
		$set(this, skipbuffer, $new($floats, 1024 * $nc(this->targetFormat)->getFrameSize()));
	}
	$var($floats, l_skipbuffer, this->skipbuffer);
	int64_t remain = len;
	while (remain > 0) {
		int32_t ret = read(l_skipbuffer, 0, (int32_t)$Math::min(remain, (int64_t)$nc(this->skipbuffer)->length));
		if (ret < 0) {
			if (remain == len) {
				return ret;
			}
			break;
		}
		remain -= ret;
	}
	return len - remain;
}

AudioFloatFormatConverter$AudioFloatInputStreamResampler::AudioFloatFormatConverter$AudioFloatInputStreamResampler() {
}

$Class* AudioFloatFormatConverter$AudioFloatInputStreamResampler::load$($String* name, bool initialize) {
	$loadClass(AudioFloatFormatConverter$AudioFloatInputStreamResampler, name, initialize, &_AudioFloatFormatConverter$AudioFloatInputStreamResampler_ClassInfo_, allocate$AudioFloatFormatConverter$AudioFloatInputStreamResampler);
	return class$;
}

$Class* AudioFloatFormatConverter$AudioFloatInputStreamResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com