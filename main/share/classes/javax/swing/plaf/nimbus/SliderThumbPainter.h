#ifndef _javax_swing_plaf_nimbus_SliderThumbPainter_h_
#define _javax_swing_plaf_nimbus_SliderThumbPainter_h_
//$ class javax.swing.plaf.nimbus.SliderThumbPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_DISABLED_ARROWSHAPE")
#undef BACKGROUND_DISABLED_ARROWSHAPE
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_ARROWSHAPE")
#undef BACKGROUND_ENABLED_ARROWSHAPE
#pragma push_macro("BACKGROUND_FOCUSED")
#undef BACKGROUND_FOCUSED
#pragma push_macro("BACKGROUND_FOCUSED_ARROWSHAPE")
#undef BACKGROUND_FOCUSED_ARROWSHAPE
#pragma push_macro("BACKGROUND_FOCUSED_MOUSEOVER")
#undef BACKGROUND_FOCUSED_MOUSEOVER
#pragma push_macro("BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE")
#undef BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE
#pragma push_macro("BACKGROUND_FOCUSED_PRESSED")
#undef BACKGROUND_FOCUSED_PRESSED
#pragma push_macro("BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE")
#undef BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_MOUSEOVER_ARROWSHAPE")
#undef BACKGROUND_MOUSEOVER_ARROWSHAPE
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED
#pragma push_macro("BACKGROUND_PRESSED_ARROWSHAPE")
#undef BACKGROUND_PRESSED_ARROWSHAPE

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

class SliderThumbPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(SliderThumbPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	SliderThumbPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Ellipse2D* decodeEllipse1();
	::java::awt::geom::Ellipse2D* decodeEllipse2();
	::java::awt::geom::Ellipse2D* decodeEllipse3();
	::java::awt::geom::Ellipse2D* decodeEllipse4();
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient14(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient15(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient16(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient17(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Path2D* decodePath3();
	::java::awt::geom::Path2D* decodePath4();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundDisabledAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundFocused(::java::awt::Graphics2D* g);
	void paintBackgroundFocusedAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundFocusedAndMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundFocusedAndMouseOverAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundFocusedAndPressed(::java::awt::Graphics2D* g);
	void paintBackgroundFocusedAndPressedAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndArrowShape(::java::awt::Graphics2D* g);
	void paintBackgroundPressed(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndArrowShape(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_FOCUSED = 3;
	static const int32_t BACKGROUND_FOCUSED_MOUSEOVER = 4;
	static const int32_t BACKGROUND_FOCUSED_PRESSED = 5;
	static const int32_t BACKGROUND_MOUSEOVER = 6;
	static const int32_t BACKGROUND_PRESSED = 7;
	static const int32_t BACKGROUND_ENABLED_ARROWSHAPE = 8;
	static const int32_t BACKGROUND_DISABLED_ARROWSHAPE = 9;
	static const int32_t BACKGROUND_MOUSEOVER_ARROWSHAPE = 10;
	static const int32_t BACKGROUND_PRESSED_ARROWSHAPE = 11;
	static const int32_t BACKGROUND_FOCUSED_ARROWSHAPE = 12;
	static const int32_t BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE = 13;
	static const int32_t BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE = 14;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_DISABLED_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_FOCUSED")
#pragma pop_macro("BACKGROUND_FOCUSED_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_FOCUSED_MOUSEOVER")
#pragma pop_macro("BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_FOCUSED_PRESSED")
#pragma pop_macro("BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_MOUSEOVER_ARROWSHAPE")
#pragma pop_macro("BACKGROUND_PRESSED")
#pragma pop_macro("BACKGROUND_PRESSED_ARROWSHAPE")

#endif // _javax_swing_plaf_nimbus_SliderThumbPainter_h_