#include <com/sun/media/sound/AudioFloatInputStream.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream$BytaArrayAudioFloatInputStream.h>
#include <com/sun/media/sound/AudioFloatInputStream$DirectAudioFloatInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatInputStream$BytaArrayAudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream$BytaArrayAudioFloatInputStream;
using $AudioFloatInputStream$DirectAudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream$DirectAudioFloatInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AudioFloatInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AudioFloatInputStream::*)()>(&AudioFloatInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFrameLength", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputStream", "(Ljava/net/URL;)Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatInputStream*(*)($URL*)>(&AudioFloatInputStream::getInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getInputStream", "(Ljava/io/File;)Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatInputStream*(*)($File*)>(&AudioFloatInputStream::getInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getInputStream", "(Ljava/io/InputStream;)Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatInputStream*(*)($InputStream*)>(&AudioFloatInputStream::getInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getInputStream", "(Ljavax/sound/sampled/AudioInputStream;)Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatInputStream*(*)($AudioInputStream*)>(&AudioFloatInputStream::getInputStream))},
	{"getInputStream", "(Ljavax/sound/sampled/AudioFormat;[BII)Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatInputStream*(*)($AudioFormat*,$bytes*,int32_t,int32_t)>(&AudioFloatInputStream::getInputStream))},
	{"mark", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"markSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([FII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([F)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AudioFloatInputStream::*)($floats*)>(&AudioFloatInputStream::read)), "java.io.IOException"},
	{"read", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(AudioFloatInputStream::*)()>(&AudioFloatInputStream::read)), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AudioFloatInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream", "com.sun.media.sound.AudioFloatInputStream", "DirectAudioFloatInputStream", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatInputStream$BytaArrayAudioFloatInputStream", "com.sun.media.sound.AudioFloatInputStream", "BytaArrayAudioFloatInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AudioFloatInputStream",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AudioFloatInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream,com.sun.media.sound.AudioFloatInputStream$BytaArrayAudioFloatInputStream"
};

$Object* allocate$AudioFloatInputStream($Class* clazz) {
	return $of($alloc(AudioFloatInputStream));
}

void AudioFloatInputStream::init$() {
}

AudioFloatInputStream* AudioFloatInputStream::getInputStream($URL* url) {
	return $new($AudioFloatInputStream$DirectAudioFloatInputStream, $($AudioSystem::getAudioInputStream(url)));
}

AudioFloatInputStream* AudioFloatInputStream::getInputStream($File* file) {
	return $new($AudioFloatInputStream$DirectAudioFloatInputStream, $($AudioSystem::getAudioInputStream(file)));
}

AudioFloatInputStream* AudioFloatInputStream::getInputStream($InputStream* stream) {
	return $new($AudioFloatInputStream$DirectAudioFloatInputStream, $($AudioSystem::getAudioInputStream(stream)));
}

AudioFloatInputStream* AudioFloatInputStream::getInputStream($AudioInputStream* stream) {
	return $new($AudioFloatInputStream$DirectAudioFloatInputStream, stream);
}

AudioFloatInputStream* AudioFloatInputStream::getInputStream($AudioFormat* format, $bytes* buffer, int32_t offset, int32_t len) {
	$var($AudioFloatConverter, converter, $AudioFloatConverter::getConverter(format));
	if (converter != nullptr) {
		return $new($AudioFloatInputStream$BytaArrayAudioFloatInputStream, converter, buffer, offset, len);
	}
	$var($InputStream, stream, $new($ByteArrayInputStream, buffer, offset, len));
	int64_t aLen = $nc(format)->getFrameSize() == $AudioSystem::NOT_SPECIFIED ? $AudioSystem::NOT_SPECIFIED : $div(len, $nc(format)->getFrameSize());
	$var($AudioInputStream, astream, $new($AudioInputStream, stream, format, aLen));
	return getInputStream(astream);
}

int32_t AudioFloatInputStream::read($floats* b) {
	return read(b, 0, $nc(b)->length);
}

float AudioFloatInputStream::read() {
	$var($floats, b, $new($floats, 1));
	int32_t ret = read(b, 0, 1);
	if (ret == -1 || ret == 0) {
		return (float)0;
	}
	return b->get(0);
}

AudioFloatInputStream::AudioFloatInputStream() {
}

$Class* AudioFloatInputStream::load$($String* name, bool initialize) {
	$loadClass(AudioFloatInputStream, name, initialize, &_AudioFloatInputStream_ClassInfo_, allocate$AudioFloatInputStream);
	return class$;
}

$Class* AudioFloatInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com