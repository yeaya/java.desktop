#ifndef _javax_sound_sampled_EnumControl$Type_h_
#define _javax_sound_sampled_EnumControl$Type_h_
//$ class javax.sound.sampled.EnumControl$Type
//$ extends javax.sound.sampled.Control$Type

#include <javax/sound/sampled/Control$Type.h>

#pragma push_macro("REVERB")
#undef REVERB

namespace javax {
	namespace sound {
		namespace sampled {

class $export EnumControl$Type : public ::javax::sound::sampled::Control$Type {
	$class(EnumControl$Type, 0, ::javax::sound::sampled::Control$Type)
public:
	EnumControl$Type();
	void init$($String* name);
	static ::javax::sound::sampled::EnumControl$Type* REVERB;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("REVERB")

#endif // _javax_sound_sampled_EnumControl$Type_h_