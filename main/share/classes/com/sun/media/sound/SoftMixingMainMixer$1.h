#ifndef _com_sun_media_sound_SoftMixingMainMixer$1_h_
#define _com_sun_media_sound_SoftMixingMainMixer$1_h_
//$ class com.sun.media.sound.SoftMixingMainMixer$1
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftMixingMainMixer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingMainMixer$1 : public ::java::io::InputStream {
	$class(SoftMixingMainMixer$1, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SoftMixingMainMixer$1();
	void init$(::com::sun::media::sound::SoftMixingMainMixer* this$0);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void fillBuffer();
	using ::java::io::InputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	::com::sun::media::sound::SoftMixingMainMixer* this$0 = nullptr;
	$Array<::com::sun::media::sound::SoftAudioBuffer>* buffers = nullptr;
	int32_t nrofchannels = 0;
	int32_t buffersize = 0;
	$bytes* bbuffer = nullptr;
	int32_t bbuffer_pos = 0;
	$bytes* single = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingMainMixer$1_h_