#ifndef _javax_swing_plaf_nimbus_InnerShadowEffect_h_
#define _javax_swing_plaf_nimbus_InnerShadowEffect_h_
//$ class javax.swing.plaf.nimbus.InnerShadowEffect
//$ extends javax.swing.plaf.nimbus.ShadowEffect

#include <javax/swing/plaf/nimbus/ShadowEffect.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class Effect$EffectType;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class InnerShadowEffect : public ::javax::swing::plaf::nimbus::ShadowEffect {
	$class(InnerShadowEffect, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::ShadowEffect)
public:
	InnerShadowEffect();
	void init$();
	virtual ::java::awt::image::BufferedImage* applyEffect(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, int32_t w, int32_t h) override;
	virtual ::javax::swing::plaf::nimbus::Effect$EffectType* getEffectType() override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_InnerShadowEffect_h_