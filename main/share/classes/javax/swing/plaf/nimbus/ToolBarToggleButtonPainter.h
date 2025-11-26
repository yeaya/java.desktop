#ifndef _javax_swing_plaf_nimbus_ToolBarToggleButtonPainter_h_
#define _javax_swing_plaf_nimbus_ToolBarToggleButtonPainter_h_
//$ class javax.swing.plaf.nimbus.ToolBarToggleButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED_SELECTED")
#undef BACKGROUND_DISABLED_SELECTED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_FOCUSED")
#undef BACKGROUND_FOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_MOUSEOVER_FOCUSED")
#undef BACKGROUND_MOUSEOVER_FOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER_SELECTED")
#undef BACKGROUND_MOUSEOVER_SELECTED
#pragma push_macro("BACKGROUND_MOUSEOVER_SELECTED_FOCUSED")
#undef BACKGROUND_MOUSEOVER_SELECTED_FOCUSED
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED
#pragma push_macro("BACKGROUND_PRESSED_FOCUSED")
#undef BACKGROUND_PRESSED_FOCUSED
#pragma push_macro("BACKGROUND_PRESSED_SELECTED")
#undef BACKGROUND_PRESSED_SELECTED
#pragma push_macro("BACKGROUND_PRESSED_SELECTED_FOCUSED")
#undef BACKGROUND_PRESSED_SELECTED_FOCUSED
#pragma push_macro("BACKGROUND_SELECTED")
#undef BACKGROUND_SELECTED
#pragma push_macro("BACKGROUND_SELECTED_FOCUSED")
#undef BACKGROUND_SELECTED_FOCUSED

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

class ToolBarToggleButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ToolBarToggleButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ToolBarToggleButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect3();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect4();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect5();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect6();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect7();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect8();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabledAndSelected(::java::awt::Graphics2D* g);
	void paintBackgroundFocused(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndSelected(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndSelectedAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundPressed(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndSelected(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndSelectedAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundSelected(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BACKGROUND_FOCUSED = 2;
	static const int32_t BACKGROUND_MOUSEOVER = 3;
	static const int32_t BACKGROUND_MOUSEOVER_FOCUSED = 4;
	static const int32_t BACKGROUND_PRESSED = 5;
	static const int32_t BACKGROUND_PRESSED_FOCUSED = 6;
	static const int32_t BACKGROUND_SELECTED = 7;
	static const int32_t BACKGROUND_SELECTED_FOCUSED = 8;
	static const int32_t BACKGROUND_PRESSED_SELECTED = 9;
	static const int32_t BACKGROUND_PRESSED_SELECTED_FOCUSED = 10;
	static const int32_t BACKGROUND_MOUSEOVER_SELECTED = 11;
	static const int32_t BACKGROUND_MOUSEOVER_SELECTED_FOCUSED = 12;
	static const int32_t BACKGROUND_DISABLED_SELECTED = 13;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED_SELECTED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_FOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_MOUSEOVER_FOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER_SELECTED")
#pragma pop_macro("BACKGROUND_MOUSEOVER_SELECTED_FOCUSED")
#pragma pop_macro("BACKGROUND_PRESSED")
#pragma pop_macro("BACKGROUND_PRESSED_FOCUSED")
#pragma pop_macro("BACKGROUND_PRESSED_SELECTED")
#pragma pop_macro("BACKGROUND_PRESSED_SELECTED_FOCUSED")
#pragma pop_macro("BACKGROUND_SELECTED")
#pragma pop_macro("BACKGROUND_SELECTED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_ToolBarToggleButtonPainter_h_