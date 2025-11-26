#ifndef _com_sun_java_swing_plaf_motif_MotifGraphicsUtils_h_
#define _com_sun_java_swing_plaf_motif_MotifGraphicsUtils_h_
//$ class com.sun.java.swing.plaf.motif.MotifGraphicsUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifGraphicsUtils : public ::java::lang::Object {
	$class(MotifGraphicsUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MotifGraphicsUtils();
	void init$();
	static void drawGroove(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* shadow, ::java::awt::Color* highlight);
	static void drawStringInRect(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $String* aString, int32_t x, int32_t y, int32_t width, int32_t height, int32_t justification);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifGraphicsUtils_h_