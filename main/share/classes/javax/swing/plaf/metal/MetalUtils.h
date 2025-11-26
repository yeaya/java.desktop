#ifndef _javax_swing_plaf_metal_MetalUtils_h_
#define _javax_swing_plaf_metal_MetalUtils_h_
//$ class javax.swing.plaf.metal.MetalUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Image;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalUtils : public ::java::lang::Object {
	$class(MetalUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetalUtils();
	void init$();
	static void drawActiveButtonBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static void drawButtonBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool active);
	static void drawDark3DBorder(::java::awt::Graphics* g, ::java::awt::Rectangle* r);
	static void drawDark3DBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static void drawDefaultButtonBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool active);
	static void drawDefaultButtonPressedBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static void drawDisabledBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static void drawFlush3DBorder(::java::awt::Graphics* g, ::java::awt::Rectangle* r);
	static void drawFlush3DBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static bool drawGradient(::java::awt::Component* c, ::java::awt::Graphics* g, $String* key, int32_t x, int32_t y, int32_t w, int32_t h, bool vertical);
	static void drawPressed3DBorder(::java::awt::Graphics* g, ::java::awt::Rectangle* r);
	static void drawPressed3DBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static int32_t getInt(Object$* key, int32_t defaultValue);
	static ::javax::swing::Icon* getOceanDisabledButtonIcon(::java::awt::Image* image);
	static ::javax::swing::Icon* getOceanToolBarIcon(::java::awt::Image* i);
	static bool isLeftToRight(::java::awt::Component* c);
	static bool isToolBarButton(::javax::swing::JComponent* c);
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalUtils_h_