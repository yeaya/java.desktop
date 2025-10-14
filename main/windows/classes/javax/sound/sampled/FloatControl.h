#ifndef _javax_sound_sampled_FloatControl_h_
#define _javax_sound_sampled_FloatControl_h_
//$ class javax.sound.sampled.FloatControl
//$ extends javax.sound.sampled.Control

#include <javax/sound/sampled/Control.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class FloatControl$Type;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export FloatControl : public ::javax::sound::sampled::Control {
	$class(FloatControl, $NO_CLASS_INIT, ::javax::sound::sampled::Control)
public:
	FloatControl();
	void init$(::javax::sound::sampled::FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units, $String* minLabel, $String* midLabel, $String* maxLabel);
	void init$(::javax::sound::sampled::FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units);
	virtual $String* getMaxLabel();
	virtual float getMaximum();
	virtual $String* getMidLabel();
	virtual $String* getMinLabel();
	virtual float getMinimum();
	virtual float getPrecision();
	virtual $String* getUnits();
	virtual int32_t getUpdatePeriod();
	virtual float getValue();
	virtual void setValue(float newValue);
	virtual void shift(float from, float to, int32_t microseconds);
	virtual $String* toString() override;
	float minimum = 0.0;
	float maximum = 0.0;
	float precision = 0.0;
	int32_t updatePeriod = 0;
	$String* units = nullptr;
	$String* minLabel = nullptr;
	$String* maxLabel = nullptr;
	$String* midLabel = nullptr;
	float value = 0.0;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_FloatControl_h_