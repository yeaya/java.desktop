#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer.h>

#include <com/sun/media/sound/AudioFloatFormatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatFormatConverter = ::com::sun::media::sound::AudioFloatFormatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_FieldInfo_[] = {
	{"targetChannels", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, targetChannels)},
	{"sourceChannels", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, sourceChannels)},
	{"ais", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, ais)},
	{"targetFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, targetFormat)},
	{"conversion_buffer", "[F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, conversion_buffer)},
	{}
};

$MethodInfo _AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AudioFloatInputStream;I)V", nullptr, 0, $method(static_cast<void(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::*)($AudioFloatInputStream*,int32_t)>(&AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()J", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([FII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatInputStreamChannelMixer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer",
	"com.sun.media.sound.AudioFloatInputStream",
	nullptr,
	_AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_FieldInfo_,
	_AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatFormatConverter"
};

$Object* allocate$AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer($Class* clazz) {
	return $of($alloc(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer));
}

void AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::init$($AudioFloatInputStream* ais, int32_t targetChannels) {
	$useLocalCurrentObjectStackCache();
	$AudioFloatInputStream::init$();
	this->sourceChannels = $nc($($nc(ais)->getFormat()))->getChannels();
	this->targetChannels = targetChannels;
	$set(this, ais, ais);
	$var($AudioFormat, format, ais->getFormat());
	$var($AudioFormat$Encoding, var$0, $nc(format)->getEncoding());
	float var$1 = format->getSampleRate();
	int32_t var$2 = format->getSampleSizeInBits();
	int32_t var$3 = targetChannels;
	int32_t var$4 = ($div(format->getFrameSize(), this->sourceChannels)) * targetChannels;
	float var$5 = format->getFrameRate();
	$set(this, targetFormat, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, var$5, format->isBigEndian()));
}

int32_t AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::available() {
	return ($div($nc(this->ais)->available(), this->sourceChannels)) * this->targetChannels;
}

void AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::close() {
	$nc(this->ais)->close();
}

$AudioFormat* AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::getFormat() {
	return this->targetFormat;
}

int64_t AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::getFrameLength() {
	return $nc(this->ais)->getFrameLength();
}

void AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::mark(int32_t readlimit) {
	$nc(this->ais)->mark(($div(readlimit, this->targetChannels)) * this->sourceChannels);
}

bool AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::markSupported() {
	return $nc(this->ais)->markSupported();
}

int32_t AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::read($floats* b, int32_t off, int32_t len) {
	int32_t len2 = ($div(len, this->targetChannels)) * this->sourceChannels;
	if (this->conversion_buffer == nullptr || $nc(this->conversion_buffer)->length < len2) {
		$set(this, conversion_buffer, $new($floats, len2));
	}
	int32_t ret = $nc(this->ais)->read(this->conversion_buffer, 0, len2);
	if (ret < 0) {
		return ret;
	}
	if (this->sourceChannels == 1) {
		int32_t cs = this->targetChannels;
		for (int32_t c = 0; c < this->targetChannels; ++c) {
			{
				int32_t i = 0;
				int32_t ix = off + c;
				for (; i < len2; ++i, ix += cs) {
					$nc(b)->set(ix, $nc(this->conversion_buffer)->get(i));
				}
			}
		}
	} else if (this->targetChannels == 1) {
		int32_t cs = this->sourceChannels;
		{
			int32_t i = 0;
			int32_t ix = off;
			for (; i < len2; i += cs, ++ix) {
				$nc(b)->set(ix, $nc(this->conversion_buffer)->get(i));
			}
		}
		for (int32_t c = 1; c < this->sourceChannels; ++c) {
			{
				int32_t i = c;
				int32_t ix = off;
				for (; i < len2; i += cs, ++ix) {
					(*$nc(b))[ix] += $nc(this->conversion_buffer)->get(i);
				}
			}
		}
		float vol = 1.0f / ((float)this->sourceChannels);
		{
			int32_t i = 0;
			int32_t ix = off;
			for (; i < len2; i += cs, ++ix) {
				(*$nc(b))[ix] *= vol;
			}
		}
	} else {
		int32_t minChannels = $Math::min(this->sourceChannels, this->targetChannels);
		int32_t off_len = off + len;
		int32_t ct = this->targetChannels;
		int32_t cs = this->sourceChannels;
		for (int32_t c = 0; c < minChannels; ++c) {
			{
				int32_t i = off + c;
				int32_t ix = c;
				for (; i < off_len; i += ct, ix += cs) {
					$nc(b)->set(i, $nc(this->conversion_buffer)->get(ix));
				}
			}
		}
		for (int32_t c = minChannels; c < this->targetChannels; ++c) {
			for (int32_t i = off + c; i < off_len; i += ct) {
				$nc(b)->set(i, (float)0);
			}
		}
	}
	return ($div(ret, this->sourceChannels)) * this->targetChannels;
}

void AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::reset() {
	$nc(this->ais)->reset();
}

int64_t AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::skip(int64_t len) {
	int64_t ret = $nc(this->ais)->skip(($div(len, this->targetChannels)) * this->sourceChannels);
	if (ret < 0) {
		return ret;
	}
	return ($div(ret, this->sourceChannels)) * this->targetChannels;
}

AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer() {
}

$Class* AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::load$($String* name, bool initialize) {
	$loadClass(AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, name, initialize, &_AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer_ClassInfo_, allocate$AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer);
	return class$;
}

$Class* AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com