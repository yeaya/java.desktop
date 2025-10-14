#ifndef _javax_sound_sampled_BooleanControl_h_
#define _javax_sound_sampled_BooleanControl_h_
//$ class javax.sound.sampled.BooleanControl
//$ extends javax.sound.sampled.Control

#include <javax/sound/sampled/Control.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class BooleanControl$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export BooleanControl : public ::javax::sound::sampled::Control {
	$class(BooleanControl, $NO_CLASS_INIT, ::javax::sound::sampled::Control)
public:
	BooleanControl();
	void init$(::javax::sound::sampled::BooleanControl$Type* type, bool initialValue, $String* trueStateLabel, $String* falseStateLabel);
	void init$(::javax::sound::sampled::BooleanControl$Type* type, bool initialValue);
	virtual $String* getStateLabel(bool state);
	virtual bool getValue();
	virtual void setValue(bool value);
	virtual $String* toString() override;
	$String* trueStateLabel = nullptr;
	$String* falseStateLabel = nullptr;
	bool value = false;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_BooleanControl_h_