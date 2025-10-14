#ifndef _com_sun_media_sound_SoftEnvelopeGenerator_h_
#define _com_sun_media_sound_SoftEnvelopeGenerator_h_
//$ class com.sun.media.sound.SoftEnvelopeGenerator
//$ extends com.sun.media.sound.SoftProcess

#include <com/sun/media/sound/SoftProcess.h>
#include <java/lang/Array.h>

#pragma push_macro("EG_ATTACK")
#undef EG_ATTACK
#pragma push_macro("EG_DECAY")
#undef EG_DECAY
#pragma push_macro("EG_DELAY")
#undef EG_DELAY
#pragma push_macro("EG_END")
#undef EG_END
#pragma push_macro("EG_HOLD")
#undef EG_HOLD
#pragma push_macro("EG_OFF")
#undef EG_OFF
#pragma push_macro("EG_RELEASE")
#undef EG_RELEASE
#pragma push_macro("EG_SHUTDOWN")
#undef EG_SHUTDOWN
#pragma push_macro("EG_SUSTAIN")
#undef EG_SUSTAIN

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

class SoftEnvelopeGenerator : public ::com::sun::media::sound::SoftProcess {
	$class(SoftEnvelopeGenerator, $NO_CLASS_INIT, ::com::sun::media::sound::SoftProcess)
public:
	SoftEnvelopeGenerator();
	void init$();
	virtual $doubles* get(int32_t instance, $String* name) override;
	virtual void init(::com::sun::media::sound::SoftSynthesizer* synth) override;
	virtual void processControlLogic() override;
	virtual void reset() override;
	static const int32_t EG_OFF = 0;
	static const int32_t EG_DELAY = 1;
	static const int32_t EG_ATTACK = 2;
	static const int32_t EG_HOLD = 3;
	static const int32_t EG_DECAY = 4;
	static const int32_t EG_SUSTAIN = 5;
	static const int32_t EG_RELEASE = 6;
	static const int32_t EG_SHUTDOWN = 7;
	static const int32_t EG_END = 8;
	int32_t max_count = 0;
	int32_t used_count = 0;
	$ints* stage = nullptr;
	$ints* stage_ix = nullptr;
	$doubles* stage_v = nullptr;
	$ints* stage_count = nullptr;
	$Array<double, 2>* on = nullptr;
	$Array<double, 2>* active = nullptr;
	$Array<double, 2>* out = nullptr;
	$Array<double, 2>* delay = nullptr;
	$Array<double, 2>* attack = nullptr;
	$Array<double, 2>* hold = nullptr;
	$Array<double, 2>* decay = nullptr;
	$Array<double, 2>* sustain = nullptr;
	$Array<double, 2>* release = nullptr;
	$Array<double, 2>* shutdown = nullptr;
	$Array<double, 2>* release2 = nullptr;
	$Array<double, 2>* attack2 = nullptr;
	$Array<double, 2>* decay2 = nullptr;
	double control_time = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("EG_ATTACK")
#pragma pop_macro("EG_DECAY")
#pragma pop_macro("EG_DELAY")
#pragma pop_macro("EG_END")
#pragma pop_macro("EG_HOLD")
#pragma pop_macro("EG_OFF")
#pragma pop_macro("EG_RELEASE")
#pragma pop_macro("EG_SHUTDOWN")
#pragma pop_macro("EG_SUSTAIN")

#endif // _com_sun_media_sound_SoftEnvelopeGenerator_h_