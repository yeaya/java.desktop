#include <com/sun/media/sound/AudioFloatInputStream$DirectAudioFloatInputStream.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef PCM_SIGNED

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatInputStream$DirectAudioFloatInputStream_FieldInfo_[] = {
	{"stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$DirectAudioFloatInputStream, stream)},
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE, $field(AudioFloatInputStream$DirectAudioFloatInputStream, converter)},
	{"framesize_pc", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$DirectAudioFloatInputStream, framesize_pc)},
	{"buffer", "[B", nullptr, $PRIVATE, $field(AudioFloatInputStream$DirectAudioFloatInputStream, buffer)},
	{}
};

$MethodInfo _AudioFloatInputStream$DirectAudioFloatInputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, 0, $method(static_cast<void(AudioFloatInputStream$DirectAudioFloatInputStream::*)($AudioInputStream*)>(&AudioFloatInputStream$DirectAudioFloatInputStream::init$))},
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

$InnerClassInfo _AudioFloatInputStream$DirectAudioFloatInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream", "com.sun.media.sound.AudioFloatInputStream", "DirectAudioFloatInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatInputStream$DirectAudioFloatInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream",
	"com.sun.media.sound.AudioFloatInputStream",
	nullptr,
	_AudioFloatInputStream$DirectAudioFloatInputStream_FieldInfo_,
	_AudioFloatInputStream$DirectAudioFloatInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatInputStream$DirectAudioFloatInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatInputStream"
};

$Object* allocate$AudioFloatInputStream$DirectAudioFloatInputStream($Class* clazz) {
	return $of($alloc(AudioFloatInputStream$DirectAudioFloatInputStream));
}

void AudioFloatInputStream$DirectAudioFloatInputStream::init$($AudioInputStream* stream$renamed) {
	$var($AudioInputStream, stream, stream$renamed);
	$AudioFloatInputStream::init$();
	$set(this, converter, $AudioFloatConverter::getConverter($($nc(stream)->getFormat())));
	if (this->converter == nullptr) {
		$var($AudioFormat, format, $nc(stream)->getFormat());
		$var($AudioFormat, newformat, nullptr);
		$init($AudioFormat$Encoding);
		$var($AudioFormatArray, formats, $AudioSystem::getTargetFormats($AudioFormat$Encoding::PCM_SIGNED, format));
		if ($nc(formats)->length != 0) {
			$assign(newformat, formats->get(0));
		} else {
			float samplerate = $nc(format)->getSampleRate();
			int32_t samplesizeinbits = format->getSampleSizeInBits();
			int32_t framesize = format->getFrameSize();
			float framerate = format->getFrameRate();
			samplesizeinbits = 16;
			framesize = format->getChannels() * (samplesizeinbits / 8);
			framerate = samplerate;
			$assign(newformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, samplerate, samplesizeinbits, format->getChannels(), framesize, framerate, false));
		}
		$assign(stream, $AudioSystem::getAudioInputStream(newformat, stream));
		$set(this, converter, $AudioFloatConverter::getConverter($(stream->getFormat())));
	}
	int32_t var$0 = $nc($($nc(stream)->getFormat()))->getFrameSize();
	this->framesize_pc = $div(var$0, $nc($(stream->getFormat()))->getChannels());
	$set(this, stream, stream);
}

$AudioFormat* AudioFloatInputStream$DirectAudioFloatInputStream::getFormat() {
	return $nc(this->stream)->getFormat();
}

int64_t AudioFloatInputStream$DirectAudioFloatInputStream::getFrameLength() {
	return $nc(this->stream)->getFrameLength();
}

int32_t AudioFloatInputStream$DirectAudioFloatInputStream::read($floats* b, int32_t off, int32_t len) {
	int32_t b_len = len * this->framesize_pc;
	if (this->buffer == nullptr || $nc(this->buffer)->length < b_len) {
		$set(this, buffer, $new($bytes, b_len));
	}
	int32_t ret = $nc(this->stream)->read(this->buffer, 0, b_len);
	if (ret == -1) {
		return -1;
	}
	$nc(this->converter)->toFloatArray(this->buffer, b, off, $div(ret, this->framesize_pc));
	return $div(ret, this->framesize_pc);
}

int64_t AudioFloatInputStream$DirectAudioFloatInputStream::skip(int64_t len) {
	int64_t b_len = len * this->framesize_pc;
	int64_t ret = $nc(this->stream)->skip(b_len);
	if (ret == -1) {
		return -1;
	}
	return $div(ret, this->framesize_pc);
}

int32_t AudioFloatInputStream$DirectAudioFloatInputStream::available() {
	return $div($nc(this->stream)->available(), this->framesize_pc);
}

void AudioFloatInputStream$DirectAudioFloatInputStream::close() {
	$nc(this->stream)->close();
}

void AudioFloatInputStream$DirectAudioFloatInputStream::mark(int32_t readlimit) {
	$nc(this->stream)->mark(readlimit * this->framesize_pc);
}

bool AudioFloatInputStream$DirectAudioFloatInputStream::markSupported() {
	return $nc(this->stream)->markSupported();
}

void AudioFloatInputStream$DirectAudioFloatInputStream::reset() {
	$nc(this->stream)->reset();
}

AudioFloatInputStream$DirectAudioFloatInputStream::AudioFloatInputStream$DirectAudioFloatInputStream() {
}

$Class* AudioFloatInputStream$DirectAudioFloatInputStream::load$($String* name, bool initialize) {
	$loadClass(AudioFloatInputStream$DirectAudioFloatInputStream, name, initialize, &_AudioFloatInputStream$DirectAudioFloatInputStream_ClassInfo_, allocate$AudioFloatInputStream$DirectAudioFloatInputStream);
	return class$;
}

$Class* AudioFloatInputStream$DirectAudioFloatInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com