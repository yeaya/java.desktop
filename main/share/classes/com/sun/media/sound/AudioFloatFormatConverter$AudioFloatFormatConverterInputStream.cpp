#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatFormatConverterInputStream.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatFormatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatFormatConverter = ::com::sun::media::sound::AudioFloatFormatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_FieldInfo_[] = {
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, converter)},
	{"stream", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, stream)},
	{"readfloatbuffer", "[F", nullptr, $PRIVATE, $field(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, readfloatbuffer)},
	{"fsize", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, fsize)},
	{}
};

$MethodInfo _AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFormat;Lcom/sun/media/sound/AudioFloatInputStream;)V", nullptr, 0, $method(static_cast<void(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::*)($AudioFormat*,$AudioFloatInputStream*)>(&AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatFormatConverterInputStream", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatFormatConverterInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatFormatConverterInputStream",
	"java.io.InputStream",
	nullptr,
	_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_FieldInfo_,
	_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatFormatConverter"
};

$Object* allocate$AudioFloatFormatConverter$AudioFloatFormatConverterInputStream($Class* clazz) {
	return $of($alloc(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream));
}

void AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::init$($AudioFormat* targetFormat, $AudioFloatInputStream* stream) {
	$InputStream::init$();
	$set(this, stream, stream);
	$set(this, converter, $AudioFloatConverter::getConverter(targetFormat));
	this->fsize = (($nc(targetFormat)->getSampleSizeInBits() + 7) / 8);
}

int32_t AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	if (ret < 0) {
		return ret;
	}
	return (int32_t)(b->get(0) & (uint32_t)255);
}

int32_t AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t flen = $div(len, this->fsize);
	if (this->readfloatbuffer == nullptr || $nc(this->readfloatbuffer)->length < flen) {
		$set(this, readfloatbuffer, $new($floats, flen));
	}
	int32_t ret = $nc(this->stream)->read(this->readfloatbuffer, 0, flen);
	if (ret < 0) {
		return ret;
	}
	$nc(this->converter)->toByteArray(this->readfloatbuffer, 0, ret, b, off);
	return ret * this->fsize;
}

int32_t AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::available() {
	int32_t ret = $nc(this->stream)->available();
	if (ret < 0) {
		return ret;
	}
	return ret * this->fsize;
}

void AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::close() {
	$nc(this->stream)->close();
}

void AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		$nc(this->stream)->mark(readlimit * this->fsize);
	}
}

bool AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::markSupported() {
	return $nc(this->stream)->markSupported();
}

void AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::reset() {
	$synchronized(this) {
		$nc(this->stream)->reset();
	}
}

int64_t AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::skip(int64_t n) {
	int64_t ret = $nc(this->stream)->skip($div(n, this->fsize));
	if (ret < 0) {
		return ret;
	}
	return ret * this->fsize;
}

AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::AudioFloatFormatConverter$AudioFloatFormatConverterInputStream() {
}

$Class* AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::load$($String* name, bool initialize) {
	$loadClass(AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, name, initialize, &_AudioFloatFormatConverter$AudioFloatFormatConverterInputStream_ClassInfo_, allocate$AudioFloatFormatConverter$AudioFloatFormatConverterInputStream);
	return class$;
}

$Class* AudioFloatFormatConverter$AudioFloatFormatConverterInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com