#ifndef _com_sun_media_sound_SoftSynthesizer$WeakAudioStream_h_
#define _com_sun_media_sound_SoftSynthesizer$WeakAudioStream_h_
//$ class com.sun.media.sound.SoftSynthesizer$WeakAudioStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatConverter;
				class SoftAudioPusher;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer$WeakAudioStream : public ::java::io::InputStream {
	$class(SoftSynthesizer$WeakAudioStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SoftSynthesizer$WeakAudioStream();
	void init$(::javax::sound::sampled::AudioInputStream* stream);
	virtual int32_t available() override;
	virtual void close() override;
	::javax::sound::sampled::AudioInputStream* getAudioInputStream();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	void setInputStream(::javax::sound::sampled::AudioInputStream* stream);
	$volatile(::javax::sound::sampled::AudioInputStream*) stream = nullptr;
	::com::sun::media::sound::SoftAudioPusher* pusher = nullptr;
	::javax::sound::sampled::AudioInputStream* jitter_stream = nullptr;
	::javax::sound::sampled::SourceDataLine* sourceDataLine = nullptr;
	$volatile(int64_t) silent_samples = 0;
	int32_t framesize = 0;
	::java::lang::ref::WeakReference* weak_stream_link = nullptr;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	$floats* silentbuffer = nullptr;
	int32_t samplesize = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSynthesizer$WeakAudioStream_h_