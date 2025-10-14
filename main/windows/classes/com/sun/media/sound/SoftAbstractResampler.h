#ifndef _com_sun_media_sound_SoftAbstractResampler_h_
#define _com_sun_media_sound_SoftAbstractResampler_h_
//$ class com.sun.media.sound.SoftAbstractResampler
//$ extends com.sun.media.sound.SoftResampler

#include <com/sun/media/sound/SoftResampler.h>
#include <java/lang/Array.h>

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

class SoftAbstractResampler : public ::com::sun::media::sound::SoftResampler {
	$class(SoftAbstractResampler, $NO_CLASS_INIT, ::com::sun::media::sound::SoftResampler)
public:
	SoftAbstractResampler();
	void init$();
	virtual int32_t getPadding() {return 0;}
	virtual void interpolate($floats* in, $floats* in_offset, float in_end, $floats* pitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {}
	virtual ::com::sun::media::sound::SoftResamplerStreamer* openStreamer() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftAbstractResampler_h_