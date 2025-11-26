#ifndef _javax_swing_plaf_nimbus_InternalFrameTitlePaneMenuButtonPainter_h_
#define _javax_swing_plaf_nimbus_InternalFrameTitlePaneMenuButtonPainter_h_
//$ class javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("ICON_DISABLED")
#undef ICON_DISABLED
#pragma push_macro("ICON_ENABLED")
#undef ICON_ENABLED
#pragma push_macro("ICON_ENABLED_WINDOWNOTFOCUSED")
#undef ICON_ENABLED_WINDOWNOTFOCUSED
#pragma push_macro("ICON_MOUSEOVER")
#undef ICON_MOUSEOVER
#pragma push_macro("ICON_MOUSEOVER_WINDOWNOTFOCUSED")
#undef ICON_MOUSEOVER_WINDOWNOTFOCUSED
#pragma push_macro("ICON_PRESSED")
#undef ICON_PRESSED
#pragma push_macro("ICON_PRESSED_WINDOWNOTFOCUSED")
#undef ICON_PRESSED_WINDOWNOTFOCUSED

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

class InternalFrameTitlePaneMenuButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(InternalFrameTitlePaneMenuButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	InternalFrameTitlePaneMenuButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
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
	::java::awt::geom::RoundRectangle2D* decodeRoundRect1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect3();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void painticonDisabled(::java::awt::Graphics2D* g);
	void painticonEnabled(::java::awt::Graphics2D* g);
	void painticonEnabledAndWindowNotFocused(::java::awt::Graphics2D* g);
	void painticonMouseOver(::java::awt::Graphics2D* g);
	void painticonMouseOverAndWindowNotFocused(::java::awt::Graphics2D* g);
	void painticonPressed(::java::awt::Graphics2D* g);
	void painticonPressedAndWindowNotFocused(::java::awt::Graphics2D* g);
	static const int32_t ICON_ENABLED = 1;
	static const int32_t ICON_DISABLED = 2;
	static const int32_t ICON_MOUSEOVER = 3;
	static const int32_t ICON_PRESSED = 4;
	static const int32_t ICON_ENABLED_WINDOWNOTFOCUSED = 5;
	static const int32_t ICON_MOUSEOVER_WINDOWNOTFOCUSED = 6;
	static const int32_t ICON_PRESSED_WINDOWNOTFOCUSED = 7;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ICON_DISABLED")
#pragma pop_macro("ICON_ENABLED")
#pragma pop_macro("ICON_ENABLED_WINDOWNOTFOCUSED")
#pragma pop_macro("ICON_MOUSEOVER")
#pragma pop_macro("ICON_MOUSEOVER_WINDOWNOTFOCUSED")
#pragma pop_macro("ICON_PRESSED")
#pragma pop_macro("ICON_PRESSED_WINDOWNOTFOCUSED")

#endif // _javax_swing_plaf_nimbus_InternalFrameTitlePaneMenuButtonPainter_h_