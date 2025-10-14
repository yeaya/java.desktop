#ifndef _javax_sound_sampled_BooleanControl$Type_h_
#define _javax_sound_sampled_BooleanControl$Type_h_
//$ class javax.sound.sampled.BooleanControl$Type
//$ extends javax.sound.sampled.Control$Type

#include <javax/sound/sampled/Control$Type.h>

#pragma push_macro("APPLY_REVERB")
#undef APPLY_REVERB
#pragma push_macro("MUTE")
#undef MUTE

namespace javax {
	namespace sound {
		namespace sampled {

class $import BooleanControl$Type : public ::javax::sound::sampled::Control$Type {
	$class(BooleanControl$Type, 0, ::javax::sound::sampled::Control$Type)
public:
	BooleanControl$Type();
	void init$($String* name);
	static ::javax::sound::sampled::BooleanControl$Type* MUTE;
	static ::javax::sound::sampled::BooleanControl$Type* APPLY_REVERB;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("APPLY_REVERB")
#pragma pop_macro("MUTE")

#endif // _javax_sound_sampled_BooleanControl$Type_h_