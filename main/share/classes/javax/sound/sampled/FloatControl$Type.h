#ifndef _javax_sound_sampled_FloatControl$Type_h_
#define _javax_sound_sampled_FloatControl$Type_h_
//$ class javax.sound.sampled.FloatControl$Type
//$ extends javax.sound.sampled.Control$Type

#include <javax/sound/sampled/Control$Type.h>

#pragma push_macro("AUX_RETURN")
#undef AUX_RETURN
#pragma push_macro("AUX_SEND")
#undef AUX_SEND
#pragma push_macro("BALANCE")
#undef BALANCE
#pragma push_macro("MASTER_GAIN")
#undef MASTER_GAIN
#pragma push_macro("PAN")
#undef PAN
#pragma push_macro("REVERB_RETURN")
#undef REVERB_RETURN
#pragma push_macro("REVERB_SEND")
#undef REVERB_SEND
#pragma push_macro("SAMPLE_RATE")
#undef SAMPLE_RATE
#pragma push_macro("VOLUME")
#undef VOLUME

namespace javax {
	namespace sound {
		namespace sampled {

class $export FloatControl$Type : public ::javax::sound::sampled::Control$Type {
	$class(FloatControl$Type, 0, ::javax::sound::sampled::Control$Type)
public:
	FloatControl$Type();
	void init$($String* name);
	static ::javax::sound::sampled::FloatControl$Type* MASTER_GAIN;
	static ::javax::sound::sampled::FloatControl$Type* AUX_SEND;
	static ::javax::sound::sampled::FloatControl$Type* AUX_RETURN;
	static ::javax::sound::sampled::FloatControl$Type* REVERB_SEND;
	static ::javax::sound::sampled::FloatControl$Type* REVERB_RETURN;
	static ::javax::sound::sampled::FloatControl$Type* VOLUME;
	static ::javax::sound::sampled::FloatControl$Type* PAN;
	static ::javax::sound::sampled::FloatControl$Type* BALANCE;
	static ::javax::sound::sampled::FloatControl$Type* SAMPLE_RATE;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("AUX_RETURN")
#pragma pop_macro("AUX_SEND")
#pragma pop_macro("BALANCE")
#pragma pop_macro("MASTER_GAIN")
#pragma pop_macro("PAN")
#pragma pop_macro("REVERB_RETURN")
#pragma pop_macro("REVERB_SEND")
#pragma pop_macro("SAMPLE_RATE")
#pragma pop_macro("VOLUME")

#endif // _javax_sound_sampled_FloatControl$Type_h_