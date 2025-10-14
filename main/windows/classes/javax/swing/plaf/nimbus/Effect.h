#ifndef _javax_swing_plaf_nimbus_Effect_h_
#define _javax_swing_plaf_nimbus_Effect_h_
//$ class javax.swing.plaf.nimbus.Effect
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				class Effect$ArrayCache;
				class Effect$EffectType;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class Effect : public ::java::lang::Object {
	$class(Effect, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Effect();
	void init$();
	virtual ::java::awt::image::BufferedImage* applyEffect(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, int32_t w, int32_t h) {return nullptr;}
	static ::javax::swing::plaf::nimbus::Effect$ArrayCache* getArrayCache();
	virtual ::javax::swing::plaf::nimbus::Effect$EffectType* getEffectType() {return nullptr;}
	virtual float getOpacity() {return 0.0;}
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_Effect_h_