#ifndef _javax_swing_plaf_nimbus_ShadowEffect_h_
#define _javax_swing_plaf_nimbus_ShadowEffect_h_
//$ class javax.swing.plaf.nimbus.ShadowEffect
//$ extends javax.swing.plaf.nimbus.Effect

#include <javax/swing/plaf/nimbus/Effect.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ShadowEffect : public ::javax::swing::plaf::nimbus::Effect {
	$class(ShadowEffect, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::Effect)
public:
	ShadowEffect();
	void init$();
	virtual int32_t getAngle();
	virtual ::java::awt::Color* getColor();
	virtual int32_t getDistance();
	virtual float getOpacity() override;
	virtual int32_t getSize();
	virtual int32_t getSpread();
	virtual void setAngle(int32_t angle);
	virtual void setColor(::java::awt::Color* color);
	virtual void setDistance(int32_t distance);
	virtual void setOpacity(float opacity);
	virtual void setSize(int32_t size);
	virtual void setSpread(int32_t spread);
	::java::awt::Color* color = nullptr;
	float opacity = 0.0;
	int32_t angle = 0;
	int32_t distance = 0;
	int32_t spread = 0;
	int32_t size = 0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_ShadowEffect_h_