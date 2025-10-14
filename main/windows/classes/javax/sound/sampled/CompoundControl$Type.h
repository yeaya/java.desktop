#ifndef _javax_sound_sampled_CompoundControl$Type_h_
#define _javax_sound_sampled_CompoundControl$Type_h_
//$ class javax.sound.sampled.CompoundControl$Type
//$ extends javax.sound.sampled.Control$Type

#include <javax/sound/sampled/Control$Type.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $export CompoundControl$Type : public ::javax::sound::sampled::Control$Type {
	$class(CompoundControl$Type, $NO_CLASS_INIT, ::javax::sound::sampled::Control$Type)
public:
	CompoundControl$Type();
	void init$($String* name);
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_CompoundControl$Type_h_