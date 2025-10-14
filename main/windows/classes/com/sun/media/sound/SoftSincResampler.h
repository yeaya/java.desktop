#ifndef _com_sun_media_sound_SoftSincResampler_h_
#define _com_sun_media_sound_SoftSincResampler_h_
//$ class com.sun.media.sound.SoftSincResampler
//$ extends com.sun.media.sound.SoftAbstractResampler

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSincResampler : public ::com::sun::media::sound::SoftAbstractResampler {
	$class(SoftSincResampler, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAbstractResampler)
public:
	SoftSincResampler();
	void init$();
	virtual int32_t getPadding() override;
	virtual void interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) override;
	static double sinc(double x);
	static $floats* sincTable(int32_t size, float offset, float scale);
	static $floats* wHanning(int32_t size, float offset);
	$Array<float, 3>* sinc_table = nullptr;
	int32_t sinc_scale_size = 0;
	int32_t sinc_table_fsize = 0;
	int32_t sinc_table_size = 0;
	int32_t sinc_table_center = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSincResampler_h_