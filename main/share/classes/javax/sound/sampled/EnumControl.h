#ifndef _javax_sound_sampled_EnumControl_h_
#define _javax_sound_sampled_EnumControl_h_
//$ class javax.sound.sampled.EnumControl
//$ extends javax.sound.sampled.Control

#include <java/lang/Array.h>
#include <javax/sound/sampled/Control.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class EnumControl$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export EnumControl : public ::javax::sound::sampled::Control {
	$class(EnumControl, $NO_CLASS_INIT, ::javax::sound::sampled::Control)
public:
	EnumControl();
	void init$(::javax::sound::sampled::EnumControl$Type* type, $ObjectArray* values, Object$* value);
	virtual $Object* getValue();
	virtual $ObjectArray* getValues();
	bool isValueSupported(Object$* value);
	virtual void setValue(Object$* value);
	virtual $String* toString() override;
	$ObjectArray* values = nullptr;
	$Object* value = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_EnumControl_h_