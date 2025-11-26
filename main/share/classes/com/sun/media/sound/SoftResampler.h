#ifndef _com_sun_media_sound_SoftResampler_h_
#define _com_sun_media_sound_SoftResampler_h_
//$ interface com.sun.media.sound.SoftResampler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftResamplerStreamer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftResampler : public ::java::lang::Object {
	$interface(SoftResampler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::media::sound::SoftResamplerStreamer* openStreamer() {return nullptr;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftResampler_h_