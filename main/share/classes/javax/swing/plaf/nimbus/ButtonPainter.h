#ifndef _javax_swing_plaf_nimbus_ButtonPainter_h_
#define _javax_swing_plaf_nimbus_ButtonPainter_h_
//$ class javax.swing.plaf.nimbus.ButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DEFAULT")
#undef BACKGROUND_DEFAULT
#pragma push_macro("BACKGROUND_DEFAULT_FOCUSED")
#undef BACKGROUND_DEFAULT_FOCUSED
#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_FOCUSED")
#undef BACKGROUND_FOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_MOUSEOVER_DEFAULT")
#undef BACKGROUND_MOUSEOVER_DEFAULT
#pragma push_macro("BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED")
#undef BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER_FOCUSED")
#undef BACKGROUND_MOUSEOVER_FOCUSED
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED
#pragma push_macro("BACKGROUND_PRESSED_DEFAULT")
#undef BACKGROUND_PRESSED_DEFAULT
#pragma push_macro("BACKGROUND_PRESSED_DEFAULT_FOCUSED")
#undef BACKGROUND_PRESSED_DEFAULT_FOCUSED
#pragma push_macro("BACKGROUND_PRESSED_FOCUSED")
#undef BACKGROUND_PRESSED_FOCUSED

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class Paint;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Ellipse2D;
			class Path2D;
			class Rectangle2D;
			class RoundRectangle2D;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::RoundRectangle2D* decodeRoundRect1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect3();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect4();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect5();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual $ObjectArray* getExtendedCacheKeys(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDefault(::java::awt::Graphics2D* g);
	void paintBackgroundDefaultAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundFocused(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndDefault(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndDefaultAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundPressed(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndDefault(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndDefaultAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DEFAULT = 1;
	static const int32_t BACKGROUND_DEFAULT_FOCUSED = 2;
	static const int32_t BACKGROUND_MOUSEOVER_DEFAULT = 3;
	static const int32_t BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED = 4;
	static const int32_t BACKGROUND_PRESSED_DEFAULT = 5;
	static const int32_t BACKGROUND_PRESSED_DEFAULT_FOCUSED = 6;
	static const int32_t BACKGROUND_DISABLED = 7;
	static const int32_t BACKGROUND_ENABLED = 8;
	static const int32_t BACKGROUND_FOCUSED = 9;
	static const int32_t BACKGROUND_MOUSEOVER = 10;
	static const int32_t BACKGROUND_MOUSEOVER_FOCUSED = 11;
	static const int32_t BACKGROUND_PRESSED = 12;
	static const int32_t BACKGROUND_PRESSED_FOCUSED = 13;
	int32_t state = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	::java::awt::geom::Path2D* path = nullptr;
	::java::awt::geom::Rectangle2D* rect = nullptr;
	::java::awt::geom::RoundRectangle2D* roundRect = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	::java::awt::Color* color1 = nullptr;
	::java::awt::Color* color2 = nullptr;
	::java::awt::Color* color3 = nullptr;
	::java::awt::Color* color4 = nullptr;
	::java::awt::Color* color5 = nullptr;
	::java::awt::Color* color6 = nullptr;
	::java::awt::Color* color7 = nullptr;
	::java::awt::Color* color8 = nullptr;
	::java::awt::Color* color9 = nullptr;
	::java::awt::Color* color10 = nullptr;
	::java::awt::Color* color11 = nullptr;
	::java::awt::Color* color12 = nullptr;
	::java::awt::Color* color13 = nullptr;
	::java::awt::Color* color14 = nullptr;
	::java::awt::Color* color15 = nullptr;
	::java::awt::Color* color16 = nullptr;
	::java::awt::Color* color17 = nullptr;
	::java::awt::Color* color18 = nullptr;
	::java::awt::Color* color19 = nullptr;
	::java::awt::Color* color20 = nullptr;
	::java::awt::Color* color21 = nullptr;
	::java::awt::Color* color22 = nullptr;
	::java::awt::Color* color23 = nullptr;
	::java::awt::Color* color24 = nullptr;
	::java::awt::Color* color25 = nullptr;
	::java::awt::Color* color26 = nullptr;
	::java::awt::Color* color27 = nullptr;
	::java::awt::Color* color28 = nullptr;
	::java::awt::Color* color29 = nullptr;
	::java::awt::Color* color30 = nullptr;
	::java::awt::Color* color31 = nullptr;
	::java::awt::Color* color32 = nullptr;
	::java::awt::Color* color33 = nullptr;
	::java::awt::Color* color34 = nullptr;
	::java::awt::Color* color35 = nullptr;
	::java::awt::Color* color36 = nullptr;
	::java::awt::Color* color37 = nullptr;
	::java::awt::Color* color38 = nullptr;
	::java::awt::Color* color39 = nullptr;
	::java::awt::Color* color40 = nullptr;
	::java::awt::Color* color41 = nullptr;
	::java::awt::Color* color42 = nullptr;
	::java::awt::Color* color43 = nullptr;
	::java::awt::Color* color44 = nullptr;
	::java::awt::Color* color45 = nullptr;
	::java::awt::Color* color46 = nullptr;
	::java::awt::Color* color47 = nullptr;
	::java::awt::Color* color48 = nullptr;
	::java::awt::Color* color49 = nullptr;
	::java::awt::Color* color50 = nullptr;
	::java::awt::Color* color51 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DEFAULT")
#pragma pop_macro("BACKGROUND_DEFAULT_FOCUSED")
#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_FOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_MOUSEOVER_DEFAULT")
#pragma pop_macro("BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER_FOCUSED")
#pragma pop_macro("BACKGROUND_PRESSED")
#pragma pop_macro("BACKGROUND_PRESSED_DEFAULT")
#pragma pop_macro("BACKGROUND_PRESSED_DEFAULT_FOCUSED")
#pragma pop_macro("BACKGROUND_PRESSED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_ButtonPainter_h_