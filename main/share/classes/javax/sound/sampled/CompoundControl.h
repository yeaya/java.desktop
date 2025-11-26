#ifndef _javax_sound_sampled_CompoundControl_h_
#define _javax_sound_sampled_CompoundControl_h_
//$ class javax.sound.sampled.CompoundControl
//$ extends javax.sound.sampled.Control

#include <java/lang/Array.h>
#include <javax/sound/sampled/Control.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class CompoundControl$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export CompoundControl : public ::javax::sound::sampled::Control {
	$class(CompoundControl, $NO_CLASS_INIT, ::javax::sound::sampled::Control)
public:
	CompoundControl();
	void init$(::javax::sound::sampled::CompoundControl$Type* type, $Array<::javax::sound::sampled::Control>* memberControls);
	virtual $Array<::javax::sound::sampled::Control>* getMemberControls();
	virtual $String* toString() override;
	$Array<::javax::sound::sampled::Control>* controls = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_CompoundControl_h_