#ifndef _javax_swing_plaf_nimbus_DerivedColor_h_
#define _javax_swing_plaf_nimbus_DerivedColor_h_
//$ class javax.swing.plaf.nimbus.DerivedColor
//$ extends java.awt.Color

#include <java/awt/Color.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class DerivedColor : public ::java::awt::Color {
	$class(DerivedColor, $NO_CLASS_INIT, ::java::awt::Color)
public:
	DerivedColor();
	void init$($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset);
	float clamp(float value);
	int32_t clamp(int32_t value);
	virtual bool equals(Object$* o) override;
	virtual int32_t getAlphaOffset();
	virtual float getBrightnessOffset();
	virtual float getHueOffset();
	virtual int32_t getRGB() override;
	virtual float getSaturationOffset();
	virtual $String* getUiDefaultParentName();
	virtual int32_t hashCode() override;
	virtual void rederiveColor();
	virtual $String* toString() override;
	$String* uiDefaultParentName = nullptr;
	float hOffset = 0.0;
	float sOffset = 0.0;
	float bOffset = 0.0;
	int32_t aOffset = 0;
	int32_t argbValue = 0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_DerivedColor_h_