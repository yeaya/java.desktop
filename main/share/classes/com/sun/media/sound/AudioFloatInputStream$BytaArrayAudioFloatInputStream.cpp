#include <com/sun/media/sound/AudioFloatInputStream$BytaArrayAudioFloatInputStream.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatInputStream$BytaArrayAudioFloatInputStream_FieldInfo_[] = {
	{"pos", "I", nullptr, $PRIVATE, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, pos)},
	{"markpos", "I", nullptr, $PRIVATE, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, markpos)},
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, converter)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, format)},
	{"buffer", "[B", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, buffer)},
	{"buffer_offset", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, buffer_offset)},
	{"buffer_len", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, buffer_len)},
	{"framesize_pc", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$BytaArrayAudioFloatInputStream, framesize_pc)},
	{}
};

$MethodInfo _AudioFloatInputStream$BytaArrayAudioFloatInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AudioFloatConverter;[BII)V", nullptr, 0, $method(static_cast<void(AudioFloatInputStream$BytaArrayAudioFloatInputStream::*)($AudioFloatConverter*,$bytes*,int32_t,int32_t)>(&AudioFloatInputStream$BytaArrayAudioFloatInputStream::init$))},
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

$InnerClassInfo _AudioFloatInputStream$BytaArrayAudioFloatInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatInputStream$BytaArrayAudioFloatInputStream", "com.sun.media.sound.AudioFloatInputStream", "BytaArrayAudioFloatInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatInputStream$BytaArrayAudioFloatInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatInputStream$BytaArrayAudioFloatInputStream",
	"com.sun.media.sound.AudioFloatInputStream",
	nullptr,
	_AudioFloatInputStream$BytaArrayAudioFloatInputStream_FieldInfo_,
	_AudioFloatInputStream$BytaArrayAudioFloatInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatInputStream$BytaArrayAudioFloatInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatInputStream"
};

$Object* allocate$AudioFloatInputStream$BytaArrayAudioFloatInputStream($Class* clazz) {
	return $of($alloc(AudioFloatInputStream$BytaArrayAudioFloatInputStream));
}

void AudioFloatInputStream$BytaArrayAudioFloatInputStream::init$($AudioFloatConverter* converter, $bytes* buffer, int32_t offset, int32_t len) {
	$AudioFloatInputStream::init$();
	this->pos = 0;
	this->markpos = 0;
	$set(this, converter, converter);
	$set(this, format, $nc(converter)->getFormat());
	$set(this, buffer, buffer);
	this->buffer_offset = offset;
	int32_t var$0 = $nc(this->format)->getFrameSize();
	this->framesize_pc = $div(var$0, $nc(this->format)->getChannels());
	this->buffer_len = $div(len, this->framesize_pc);
}

$AudioFormat* AudioFloatInputStream$BytaArrayAudioFloatInputStream::getFormat() {
	return this->format;
}

int64_t AudioFloatInputStream$BytaArrayAudioFloatInputStream::getFrameLength() {
	return this->buffer_len;
}

int32_t AudioFloatInputStream$BytaArrayAudioFloatInputStream::read($floats* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (off < 0 || len < 0 || len > $nc(b)->length - off) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (this->pos >= this->buffer_len) {
		return -1;
	}
	if (len == 0) {
		return 0;
	}
	if (this->pos + len > this->buffer_len) {
		len = this->buffer_len - this->pos;
	}
	$nc(this->converter)->toFloatArray(this->buffer, this->buffer_offset + this->pos * this->framesize_pc, b, off, len);
	this->pos += len;
	return len;
}

int64_t AudioFloatInputStream$BytaArrayAudioFloatInputStream::skip(int64_t len) {
	if (this->pos >= this->buffer_len) {
		return -1;
	}
	if (len <= 0) {
		return 0;
	}
	if (this->pos + len > this->buffer_len) {
		len = this->buffer_len - this->pos;
	}
	this->pos += len;
	return len;
}

int32_t AudioFloatInputStream$BytaArrayAudioFloatInputStream::available() {
	return this->buffer_len - this->pos;
}

void AudioFloatInputStream$BytaArrayAudioFloatInputStream::close() {
}

void AudioFloatInputStream$BytaArrayAudioFloatInputStream::mark(int32_t readlimit) {
	this->markpos = this->pos;
}

bool AudioFloatInputStream$BytaArrayAudioFloatInputStream::markSupported() {
	return true;
}

void AudioFloatInputStream$BytaArrayAudioFloatInputStream::reset() {
	this->pos = this->markpos;
}

AudioFloatInputStream$BytaArrayAudioFloatInputStream::AudioFloatInputStream$BytaArrayAudioFloatInputStream() {
}

$Class* AudioFloatInputStream$BytaArrayAudioFloatInputStream::load$($String* name, bool initialize) {
	$loadClass(AudioFloatInputStream$BytaArrayAudioFloatInputStream, name, initialize, &_AudioFloatInputStream$BytaArrayAudioFloatInputStream_ClassInfo_, allocate$AudioFloatInputStream$BytaArrayAudioFloatInputStream);
	return class$;
}

$Class* AudioFloatInputStream$BytaArrayAudioFloatInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com