#ifndef _com_sun_java_swing_plaf_motif_MotifBorders_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifBorders : public ::java::lang::Object {
	$class(MotifBorders, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MotifBorders();
	void init$();
	static void drawBezel(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool isPressed, bool hasFocus, ::java::awt::Color* shadow, ::java::awt::Color* highlight, ::java::awt::Color* darkShadow, ::java::awt::Color* focus);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifBorders_h_