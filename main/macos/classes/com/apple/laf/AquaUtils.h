#ifndef _com_apple_laf_AquaUtils_h_
#define _com_apple_laf_AquaUtils_h_
//$ class com.apple.laf.AquaUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANIMATIONS_PROPERTY")
#undef ANIMATIONS_PROPERTY
#pragma push_macro("MENU_BLINK_DELAY")
#undef MENU_BLINK_DELAY
#pragma push_macro("OPAQUE_SET_FLAG")
#undef OPAQUE_SET_FLAG

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
			class AquaUtils$Selectable;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class ComponentOrientation;
		class Font;
		class FontMetrics;
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageFilter;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils : public ::java::lang::Object {
	$class(AquaUtils, 0, ::java::lang::Object)
public:
	AquaUtils();
	void init$();
	static bool animationsEnabled();
	static void blinkMenu(::com::apple::laf::AquaUtils$Selectable* selectable);
	static void enforceComponentOrientation(::java::awt::Component* c, ::java::awt::ComponentOrientation* orientation);
	static void fillRect(::java::awt::Graphics* g, ::java::awt::Component* c);
	static void fillRect(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Color* color, int32_t x, int32_t y, int32_t w, int32_t h);
	static ::java::awt::Image* generateDisabledImage(::java::awt::Image* image);
	static ::java::awt::Image* generateFilteredImage(::java::awt::Image* image, ::java::awt::image::ImageFilter* filter);
	static ::java::awt::Image* generateLightenedImage(::java::awt::Image* image, int32_t percent);
	static ::java::awt::Image* generateSelectedDarkImage(::java::awt::Image* image);
	static bool hasOpaqueBeenExplicitlySet(::javax::swing::JComponent* c);
	static bool isLeftToRight(::java::awt::Component* c);
	static bool isWindowTextured(::java::awt::Component* c);
	static ::java::awt::Image* lambda$map$0(::java::awt::image::ImageFilter* filter, ::java::awt::Image* img);
	static ::java::awt::Image* map(::java::awt::Image* image, ::java::awt::image::ImageFilter* filter);
	static void paintDropShadowText(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, int32_t x, int32_t y, int32_t offsetX, int32_t offsetY, ::java::awt::Color* textColor, ::java::awt::Color* shadowColor, $String* text);
	static ::java::awt::Color* resetAlpha(::java::awt::Color* color);
	static $String* ANIMATIONS_PROPERTY;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* enableAnimations;
	static const int32_t MENU_BLINK_DELAY = 50;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* getJComponentGetFlagMethod;
	static const int32_t OPAQUE_SET_FLAG = 24;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("ANIMATIONS_PROPERTY")
#pragma pop_macro("MENU_BLINK_DELAY")
#pragma pop_macro("OPAQUE_SET_FLAG")

#endif // _com_apple_laf_AquaUtils_h_