#ifndef _com_sun_media_sound_SoftPointResampler_h_
#define _com_sun_media_sound_SoftPointResampler_h_
//$ class com.sun.media.sound.SoftPointResampler
//$ extends com.sun.media.sound.SoftAbstractResampler

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftPointResampler : public ::com::sun::media::sound::SoftAbstractResampler {
	$class(SoftPointResampler, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAbstractResampler)
public:
	SoftPointResampler();
	void init$();
	virtual int32_t getPadding() override;
	virtual void interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftPointResampler_h_