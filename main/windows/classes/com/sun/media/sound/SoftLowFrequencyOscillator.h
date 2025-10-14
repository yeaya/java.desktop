#ifndef _com_sun_media_sound_SoftLowFrequencyOscillator_h_
#define _com_sun_media_sound_SoftLowFrequencyOscillator_h_
//$ class com.sun.media.sound.SoftLowFrequencyOscillator
//$ extends com.sun.media.sound.SoftProcess

#include <com/sun/media/sound/SoftProcess.h>
#include <java/lang/Array.h>
#include <java/lang/Math.h>

#pragma push_macro("PI2")
#undef PI2

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftSynthesizer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftLowFrequencyOscillator : public ::com::sun::media::sound::SoftProcess {
	$class(SoftLowFrequencyOscillator, 0, ::com::sun::media::sound::SoftProcess)
public:
	SoftLowFrequencyOscillator();
	void init$();
	virtual $doubles* get(int32_t instance, $String* name) override;
	virtual void init(::com::sun::media::sound::SoftSynthesizer* synth) override;
	virtual void processControlLogic() override;
	virtual void reset() override;
	static const int32_t max_count = 10;
	int32_t used_count = 0;
	$Array<double, 2>* out = nullptr;
	$Array<double, 2>* delay = nullptr;
	$Array<double, 2>* delay2 = nullptr;
	$Array<double, 2>* freq = nullptr;
	$ints* delay_counter = nullptr;
	$doubles* sin_phase = nullptr;
	$doubles* sin_stepfreq = nullptr;
	$doubles* sin_step = nullptr;
	double control_time = 0.0;
	double sin_factor = 0.0;
	static double PI2;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("PI2")

#endif // _com_sun_media_sound_SoftLowFrequencyOscillator_h_