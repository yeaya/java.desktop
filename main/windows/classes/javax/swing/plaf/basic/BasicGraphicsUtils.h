#ifndef _javax_swing_plaf_basic_BasicGraphicsUtils_h_
#define _javax_swing_plaf_basic_BasicGraphicsUtils_h_
//$ class javax.swing.plaf.basic.BasicGraphicsUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ETCHED_INSETS")
#undef ETCHED_INSETS
#pragma push_macro("GROOVE_INSETS")
#undef GROOVE_INSETS

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicGraphicsUtils : public ::java::lang::Object {
	$class(BasicGraphicsUtils, 0, ::java::lang::Object)
public:
	BasicGraphicsUtils();
	void init$();
	static void drawBezel(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool isPressed, bool isDefault, ::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight, ::java::awt::Color* lightHighlight);
	static void drawDashedRect(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	static void drawEtchedRect(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight, ::java::awt::Color* lightHighlight);
	static void drawGroove(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* shadow, ::java::awt::Color* highlight);
	static void drawLoweredBezel(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight, ::java::awt::Color* lightHighlight);
	static void drawString(::java::awt::Graphics* g, $String* text, int32_t underlinedChar, int32_t x, int32_t y);
	static void drawString(::javax::swing::JComponent* c, ::java::awt::Graphics2D* g, $String* string, float x, float y);
	static void drawStringUnderlineCharAt(::java::awt::Graphics* g, $String* text, int32_t underlinedIndex, int32_t x, int32_t y);
	static void drawStringUnderlineCharAt(::javax::swing::JComponent* c, ::java::awt::Graphics2D* g, $String* string, int32_t underlinedIndex, float x, float y);
	static $String* getClippedString(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string, int32_t availTextWidth);
	static ::java::awt::Insets* getEtchedInsets();
	static ::java::awt::Insets* getGrooveInsets();
	static ::java::awt::Dimension* getPreferredButtonSize(::javax::swing::AbstractButton* b, int32_t textIconGap);
	static float getStringWidth(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string);
	static bool isLeftToRight(::java::awt::Component* c);
	static bool isMenuShortcutKeyDown(::java::awt::event::InputEvent* event);
	static ::java::awt::Insets* GROOVE_INSETS;
	static ::java::awt::Insets* ETCHED_INSETS;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ETCHED_INSETS")
#pragma pop_macro("GROOVE_INSETS")

#endif // _javax_swing_plaf_basic_BasicGraphicsUtils_h_