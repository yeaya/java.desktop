#ifndef _javax_swing_plaf_nimbus_TabbedPaneTabPainter_h_
#define _javax_swing_plaf_nimbus_TabbedPaneTabPainter_h_
//$ class javax.swing.plaf.nimbus.TabbedPaneTabPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_MOUSEOVER")
#undef BACKGROUND_ENABLED_MOUSEOVER
#pragma push_macro("BACKGROUND_ENABLED_PRESSED")
#undef BACKGROUND_ENABLED_PRESSED
#pragma push_macro("BACKGROUND_SELECTED")
#undef BACKGROUND_SELECTED
#pragma push_macro("BACKGROUND_SELECTED_DISABLED")
#undef BACKGROUND_SELECTED_DISABLED
#pragma push_macro("BACKGROUND_SELECTED_FOCUSED")
#undef BACKGROUND_SELECTED_FOCUSED
#pragma push_macro("BACKGROUND_SELECTED_MOUSEOVER")
#undef BACKGROUND_SELECTED_MOUSEOVER
#pragma push_macro("BACKGROUND_SELECTED_MOUSEOVER_FOCUSED")
#undef BACKGROUND_SELECTED_MOUSEOVER_FOCUSED
#pragma push_macro("BACKGROUND_SELECTED_PRESSED")
#undef BACKGROUND_SELECTED_PRESSED
#pragma push_macro("BACKGROUND_SELECTED_PRESSED_FOCUSED")
#undef BACKGROUND_SELECTED_PRESSED_FOCUSED

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

class TabbedPaneTabPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TabbedPaneTabPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TabbedPaneTabPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient14(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath10();
	::java::awt::geom::Path2D* decodePath11();
	::java::awt::geom::Path2D* decodePath12();
	::java::awt::geom::Path2D* decodePath13();
	::java::awt::geom::Path2D* decodePath14();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Path2D* decodePath3();
	::java::awt::geom::Path2D* decodePath4();
	::java::awt::geom::Path2D* decodePath5();
	::java::awt::geom::Path2D* decodePath6();
	::java::awt::geom::Path2D* decodePath7();
	::java::awt::geom::Path2D* decodePath8();
	::java::awt::geom::Path2D* decodePath9();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndPressed(::java::awt::Graphics2D* g);
	void paintBackgroundSelected(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndMouseOverAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndPressed(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndPressedAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BACKGROUND_ENABLED_MOUSEOVER = 2;
	static const int32_t BACKGROUND_ENABLED_PRESSED = 3;
	static const int32_t BACKGROUND_DISABLED = 4;
	static const int32_t BACKGROUND_SELECTED_DISABLED = 5;
	static const int32_t BACKGROUND_SELECTED = 6;
	static const int32_t BACKGROUND_SELECTED_MOUSEOVER = 7;
	static const int32_t BACKGROUND_SELECTED_PRESSED = 8;
	static const int32_t BACKGROUND_SELECTED_FOCUSED = 9;
	static const int32_t BACKGROUND_SELECTED_MOUSEOVER_FOCUSED = 10;
	static const int32_t BACKGROUND_SELECTED_PRESSED_FOCUSED = 11;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_MOUSEOVER")
#pragma pop_macro("BACKGROUND_ENABLED_PRESSED")
#pragma pop_macro("BACKGROUND_SELECTED")
#pragma pop_macro("BACKGROUND_SELECTED_DISABLED")
#pragma pop_macro("BACKGROUND_SELECTED_FOCUSED")
#pragma pop_macro("BACKGROUND_SELECTED_MOUSEOVER")
#pragma pop_macro("BACKGROUND_SELECTED_MOUSEOVER_FOCUSED")
#pragma pop_macro("BACKGROUND_SELECTED_PRESSED")
#pragma pop_macro("BACKGROUND_SELECTED_PRESSED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_TabbedPaneTabPainter_h_