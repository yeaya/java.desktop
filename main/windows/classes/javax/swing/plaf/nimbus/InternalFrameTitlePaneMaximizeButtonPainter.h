#ifndef _javax_swing_plaf_nimbus_InternalFrameTitlePaneMaximizeButtonPainter_h_
#define _javax_swing_plaf_nimbus_InternalFrameTitlePaneMaximizeButtonPainter_h_
//$ class javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_DISABLED_WINDOWMAXIMIZED")
#undef BACKGROUND_DISABLED_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_WINDOWMAXIMIZED")
#undef BACKGROUND_ENABLED_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_ENABLED_WINDOWNOTFOCUSED")
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED
#pragma push_macro("BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED")
#undef BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED")
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED
#pragma push_macro("BACKGROUND_PRESSED_WINDOWMAXIMIZED")
#undef BACKGROUND_PRESSED_WINDOWMAXIMIZED
#pragma push_macro("BACKGROUND_PRESSED_WINDOWNOTFOCUSED")
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED
#pragma push_macro("BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED

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

class InternalFrameTitlePaneMaximizeButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(InternalFrameTitlePaneMaximizeButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	InternalFrameTitlePaneMaximizeButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient14(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient15(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient16(::java::awt::Shape* s);
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
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect10();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	::java::awt::geom::Rectangle2D* decodeRect5();
	::java::awt::geom::Rectangle2D* decodeRect6();
	::java::awt::geom::Rectangle2D* decodeRect7();
	::java::awt::geom::Rectangle2D* decodeRect8();
	::java::awt::geom::Rectangle2D* decodeRect9();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect3();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundDisabledAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndWindowNotFocused(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndWindowNotFocusedAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndWindowNotFocused(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOverAndWindowNotFocusedAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundPressed(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndWindowMaximized(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndWindowNotFocused(::java::awt::Graphics2D* g);
	void paintBackgroundPressedAndWindowNotFocusedAndWindowMaximized(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED_WINDOWMAXIMIZED = 1;
	static const int32_t BACKGROUND_ENABLED_WINDOWMAXIMIZED = 2;
	static const int32_t BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED = 3;
	static const int32_t BACKGROUND_PRESSED_WINDOWMAXIMIZED = 4;
	static const int32_t BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED = 5;
	static const int32_t BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED = 6;
	static const int32_t BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED = 7;
	static const int32_t BACKGROUND_DISABLED = 8;
	static const int32_t BACKGROUND_ENABLED = 9;
	static const int32_t BACKGROUND_MOUSEOVER = 10;
	static const int32_t BACKGROUND_PRESSED = 11;
	static const int32_t BACKGROUND_ENABLED_WINDOWNOTFOCUSED = 12;
	static const int32_t BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED = 13;
	static const int32_t BACKGROUND_PRESSED_WINDOWNOTFOCUSED = 14;
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
	::java::awt::Color* color56 = nullptr;
	::java::awt::Color* color57 = nullptr;
	::java::awt::Color* color58 = nullptr;
	::java::awt::Color* color59 = nullptr;
	::java::awt::Color* color60 = nullptr;
	::java::awt::Color* color61 = nullptr;
	::java::awt::Color* color62 = nullptr;
	::java::awt::Color* color63 = nullptr;
	::java::awt::Color* color64 = nullptr;
	::java::awt::Color* color65 = nullptr;
	::java::awt::Color* color66 = nullptr;
	::java::awt::Color* color67 = nullptr;
	::java::awt::Color* color68 = nullptr;
	::java::awt::Color* color69 = nullptr;
	::java::awt::Color* color70 = nullptr;
	::java::awt::Color* color71 = nullptr;
	::java::awt::Color* color72 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_DISABLED_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_ENABLED_WINDOWNOTFOCUSED")
#pragma pop_macro("BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_PRESSED")
#pragma pop_macro("BACKGROUND_PRESSED_WINDOWMAXIMIZED")
#pragma pop_macro("BACKGROUND_PRESSED_WINDOWNOTFOCUSED")
#pragma pop_macro("BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED")

#endif // _javax_swing_plaf_nimbus_InternalFrameTitlePaneMaximizeButtonPainter_h_