#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/SoftAudioPusher.h>
#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream$1.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $SoftAudioPusher = ::com::sun::media::sound::SoftAudioPusher;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $SoftSynthesizer$WeakAudioStream$1 = ::com::sun::media::sound::SoftSynthesizer$WeakAudioStream$1;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftSynthesizer$WeakAudioStream_FieldInfo_[] = {
	{"stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $VOLATILE, $field(SoftSynthesizer$WeakAudioStream, stream)},
	{"pusher", "Lcom/sun/media/sound/SoftAudioPusher;", nullptr, $PUBLIC, $field(SoftSynthesizer$WeakAudioStream, pusher)},
	{"jitter_stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $field(SoftSynthesizer$WeakAudioStream, jitter_stream)},
	{"sourceDataLine", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PUBLIC, $field(SoftSynthesizer$WeakAudioStream, sourceDataLine)},
	{"silent_samples", "J", nullptr, $PUBLIC | $VOLATILE, $field(SoftSynthesizer$WeakAudioStream, silent_samples)},
	{"framesize", "I", nullptr, $PRIVATE, $field(SoftSynthesizer$WeakAudioStream, framesize)},
	{"weak_stream_link", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/sound/sampled/AudioInputStream;>;", $PRIVATE | $FINAL, $field(SoftSynthesizer$WeakAudioStream, weak_stream_link)},
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE | $FINAL, $field(SoftSynthesizer$WeakAudioStream, converter)},
	{"silentbuffer", "[F", nullptr, $PRIVATE, $field(SoftSynthesizer$WeakAudioStream, silentbuffer)},
	{"samplesize", "I", nullptr, $PRIVATE | $FINAL, $field(SoftSynthesizer$WeakAudioStream, samplesize)},
	{}
};

$MethodInfo _SoftSynthesizer$WeakAudioStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftSynthesizer$WeakAudioStream::*)($AudioInputStream*)>(&SoftSynthesizer$WeakAudioStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAudioInputStream", "()Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(static_cast<$AudioInputStream*(SoftSynthesizer$WeakAudioStream::*)()>(&SoftSynthesizer$WeakAudioStream::getAudioInputStream))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setInputStream", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftSynthesizer$WeakAudioStream::*)($AudioInputStream*)>(&SoftSynthesizer$WeakAudioStream::setInputStream))},
	{}
};

$InnerClassInfo _SoftSynthesizer$WeakAudioStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$WeakAudioStream", "com.sun.media.sound.SoftSynthesizer", "WeakAudioStream", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.media.sound.SoftSynthesizer$WeakAudioStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer$WeakAudioStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$WeakAudioStream",
	"java.io.InputStream",
	nullptr,
	_SoftSynthesizer$WeakAudioStream_FieldInfo_,
	_SoftSynthesizer$WeakAudioStream_MethodInfo_,
	nullptr,
	nullptr,
	_SoftSynthesizer$WeakAudioStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$WeakAudioStream($Class* clazz) {
	return $of($alloc(SoftSynthesizer$WeakAudioStream));
}

void SoftSynthesizer$WeakAudioStream::setInputStream($AudioInputStream* stream) {
	$set(this, stream, stream);
}

int32_t SoftSynthesizer$WeakAudioStream::available() {
	$var($AudioInputStream, local_stream, this->stream);
	if (local_stream != nullptr) {
		return local_stream->available();
	}
	return 0;
}

int32_t SoftSynthesizer$WeakAudioStream::read() {
	$var($bytes, b, $new($bytes, 1));
	if (read(b) == -1) {
		return -1;
	}
	return (int32_t)(b->get(0) & (uint32_t)255);
}

int32_t SoftSynthesizer$WeakAudioStream::read($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, local_stream, this->stream);
	if (local_stream != nullptr) {
		return local_stream->read(b, off, len);
	} else {
		int32_t flen = $div(len, this->samplesize);
		if (this->silentbuffer == nullptr || $nc(this->silentbuffer)->length < flen) {
			$set(this, silentbuffer, $new($floats, flen));
		}
		$nc(this->converter)->toByteArray(this->silentbuffer, flen, b, off);
		this->silent_samples += (int64_t)($div(len, this->framesize));
		if (this->pusher != nullptr) {
			if ($nc(this->weak_stream_link)->get() == nullptr) {
				$var($Runnable, runnable, $new($SoftSynthesizer$WeakAudioStream$1, this));
				$set(this, pusher, nullptr);
				$set(this, jitter_stream, nullptr);
				$set(this, sourceDataLine, nullptr);
				$$new($Thread, nullptr, runnable, "Synthesizer"_s, 0, false)->start();
			}
		}
		return len;
	}
}

void SoftSynthesizer$WeakAudioStream::init$($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$InputStream::init$();
	$set(this, pusher, nullptr);
	$set(this, jitter_stream, nullptr);
	$set(this, sourceDataLine, nullptr);
	this->silent_samples = 0;
	this->framesize = 0;
	$set(this, silentbuffer, nullptr);
	$set(this, stream, stream);
	$set(this, weak_stream_link, $new($WeakReference, stream));
	$set(this, converter, $AudioFloatConverter::getConverter($($nc(stream)->getFormat())));
	int32_t var$0 = $nc($($nc(stream)->getFormat()))->getFrameSize();
	this->samplesize = $div(var$0, $nc($(stream->getFormat()))->getChannels());
	this->framesize = $nc($(stream->getFormat()))->getFrameSize();
}

$AudioInputStream* SoftSynthesizer$WeakAudioStream::getAudioInputStream() {
	return $new($AudioInputStream, this, $($nc(this->stream)->getFormat()), $AudioSystem::NOT_SPECIFIED);
}

void SoftSynthesizer$WeakAudioStream::close() {
	$var($AudioInputStream, astream, $cast($AudioInputStream, $nc(this->weak_stream_link)->get()));
	if (astream != nullptr) {
		astream->close();
	}
}

SoftSynthesizer$WeakAudioStream::SoftSynthesizer$WeakAudioStream() {
}

$Class* SoftSynthesizer$WeakAudioStream::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$WeakAudioStream, name, initialize, &_SoftSynthesizer$WeakAudioStream_ClassInfo_, allocate$SoftSynthesizer$WeakAudioStream);
	return class$;
}

$Class* SoftSynthesizer$WeakAudioStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com