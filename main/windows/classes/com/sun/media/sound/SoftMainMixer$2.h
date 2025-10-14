#ifndef _com_sun_media_sound_SoftMainMixer$2_h_
#define _com_sun_media_sound_SoftMainMixer$2_h_
//$ class com.sun.media.sound.SoftMainMixer$2
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftMainMixer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMainMixer$2 : public ::java::io::InputStream {
	$class(SoftMainMixer$2, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SoftMainMixer$2();
	void init$(::com::sun::media::sound::SoftMainMixer* this$0);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void fillBuffer();
	using ::java::io::InputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	::com::sun::media::sound::SoftMainMixer* this$0 = nullptr;
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

#endif // _com_sun_media_sound_SoftMainMixer$2_h_