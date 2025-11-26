#ifndef _com_sun_media_sound_SoftMixingClip$1_h_
#define _com_sun_media_sound_SoftMixingClip$1_h_
//$ class com.sun.media.sound.SoftMixingClip$1
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftMixingClip;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingClip$1 : public ::java::io::InputStream {
	$class(SoftMixingClip$1, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SoftMixingClip$1();
	void init$(::com::sun::media::sound::SoftMixingClip* this$0);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::com::sun::media::sound::SoftMixingClip* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingClip$1_h_