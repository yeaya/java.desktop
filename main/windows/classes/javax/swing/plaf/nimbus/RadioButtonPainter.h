#ifndef _javax_swing_plaf_nimbus_RadioButtonPainter_h_
#define _javax_swing_plaf_nimbus_RadioButtonPainter_h_
//$ class javax.swing.plaf.nimbus.RadioButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("ICON_DISABLED")
#undef ICON_DISABLED
#pragma push_macro("ICON_DISABLED_SELECTED")
#undef ICON_DISABLED_SELECTED
#pragma push_macro("ICON_ENABLED")
#undef ICON_ENABLED
#pragma push_macro("ICON_FOCUSED")
#undef ICON_FOCUSED
#pragma push_macro("ICON_MOUSEOVER")
#undef ICON_MOUSEOVER
#pragma push_macro("ICON_MOUSEOVER_FOCUSED")
#undef ICON_MOUSEOVER_FOCUSED
#pragma push_macro("ICON_MOUSEOVER_SELECTED")
#undef ICON_MOUSEOVER_SELECTED
#pragma push_macro("ICON_MOUSEOVER_SELECTED_FOCUSED")
#undef ICON_MOUSEOVER_SELECTED_FOCUSED
#pragma push_macro("ICON_PRESSED")
#undef ICON_PRESSED
#pragma push_macro("ICON_PRESSED_FOCUSED")
#undef ICON_PRESSED_FOCUSED
#pragma push_macro("ICON_PRESSED_SELECTED")
#undef ICON_PRESSED_SELECTED
#pragma push_macro("ICON_PRESSED_SELECTED_FOCUSED")
#undef ICON_PRESSED_SELECTED_FOCUSED
#pragma push_macro("ICON_SELECTED")
#undef ICON_SELECTED
#pragma push_macro("ICON_SELECTED_FOCUSED")
#undef ICON_SELECTED_FOCUSED

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

class RadioButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(RadioButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	RadioButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Ellipse2D* decodeEllipse1();
	::java::awt::geom::Ellipse2D* decodeEllipse2();
	::java::awt::geom::Ellipse2D* decodeEllipse3();
	::java::awt::geom::Ellipse2D* decodeEllipse4();
	::java::awt::geom::Ellipse2D* decodeEllipse5();
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient14(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient15(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient16(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient17(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient18(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient19(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void painticonDisabled(::java::awt::Graphics2D* g);
	void painticonDisabledAndSelected(::java::awt::Graphics2D* g);
	void painticonEnabled(::java::awt::Graphics2D* g);
	void painticonFocused(::java::awt::Graphics2D* g);
	void painticonMouseOver(::java::awt::Graphics2D* g);
	void painticonMouseOverAndFocused(::java::awt::Graphics2D* g);
	void painticonMouseOverAndSelected(::java::awt::Graphics2D* g);
	void painticonMouseOverAndSelectedAndFocused(::java::awt::Graphics2D* g);
	void painticonPressed(::java::awt::Graphics2D* g);
	void painticonPressedAndFocused(::java::awt::Graphics2D* g);
	void painticonPressedAndSelected(::java::awt::Graphics2D* g);
	void painticonPressedAndSelectedAndFocused(::java::awt::Graphics2D* g);
	void painticonSelected(::java::awt::Graphics2D* g);
	void painticonSelectedAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t ICON_DISABLED = 3;
	static const int32_t ICON_ENABLED = 4;
	static const int32_t ICON_FOCUSED = 5;
	static const int32_t ICON_MOUSEOVER = 6;
	static const int32_t ICON_MOUSEOVER_FOCUSED = 7;
	static const int32_t ICON_PRESSED = 8;
	static const int32_t ICON_PRESSED_FOCUSED = 9;
	static const int32_t ICON_SELECTED = 10;
	static const int32_t ICON_SELECTED_FOCUSED = 11;
	static const int32_t ICON_PRESSED_SELECTED = 12;
	static const int32_t ICON_PRESSED_SELECTED_FOCUSED = 13;
	static const int32_t ICON_MOUSEOVER_SELECTED = 14;
	static const int32_t ICON_MOUSEOVER_SELECTED_FOCUSED = 15;
	static const int32_t ICON_DISABLED_SELECTED = 16;
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
	::java::awt::Color* color52 = nullptr;
	::java::awt::Color* color53 = nullptr;
	::java::awt::Color* color54 = nullptr;
	::java::awt::Color* color55 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("ICON_DISABLED")
#pragma pop_macro("ICON_DISABLED_SELECTED")
#pragma pop_macro("ICON_ENABLED")
#pragma pop_macro("ICON_FOCUSED")
#pragma pop_macro("ICON_MOUSEOVER")
#pragma pop_macro("ICON_MOUSEOVER_FOCUSED")
#pragma pop_macro("ICON_MOUSEOVER_SELECTED")
#pragma pop_macro("ICON_MOUSEOVER_SELECTED_FOCUSED")
#pragma pop_macro("ICON_PRESSED")
#pragma pop_macro("ICON_PRESSED_FOCUSED")
#pragma pop_macro("ICON_PRESSED_SELECTED")
#pragma pop_macro("ICON_PRESSED_SELECTED_FOCUSED")
#pragma pop_macro("ICON_SELECTED")
#pragma pop_macro("ICON_SELECTED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_RadioButtonPainter_h_