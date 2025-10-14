#ifndef _com_sun_media_sound_SoftLanczosResampler_h_
#define _com_sun_media_sound_SoftLanczosResampler_h_
//$ class com.sun.media.sound.SoftLanczosResampler
//$ extends com.sun.media.sound.SoftAbstractResampler

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftLanczosResampler : public ::com::sun::media::sound::SoftAbstractResampler {
	$class(SoftLanczosResampler, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAbstractResampler)
public:
	SoftLanczosResampler();
	void init$();
	virtual int32_t getPadding() override;
	virtual void interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) override;
	static double sinc(double x);
	static $floats* sincTable(int32_t size, float offset);
	$Array<float, 2>* sinc_table = nullptr;
	int32_t sinc_table_fsize = 0;
	int32_t sinc_table_size = 0;
	int32_t sinc_table_center = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftLanczosResampler_h_