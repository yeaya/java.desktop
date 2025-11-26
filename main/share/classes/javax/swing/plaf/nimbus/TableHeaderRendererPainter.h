#ifndef _javax_swing_plaf_nimbus_TableHeaderRendererPainter_h_
#define _javax_swing_plaf_nimbus_TableHeaderRendererPainter_h_
//$ class javax.swing.plaf.nimbus.TableHeaderRendererPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_DISABLED_SORTED")
#undef BACKGROUND_DISABLED_SORTED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_FOCUSED")
#undef BACKGROUND_ENABLED_FOCUSED
#pragma push_macro("BACKGROUND_ENABLED_FOCUSED_SORTED")
#undef BACKGROUND_ENABLED_FOCUSED_SORTED
#pragma push_macro("BACKGROUND_ENABLED_SORTED")
#undef BACKGROUND_ENABLED_SORTED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED

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

class TableHeaderRendererPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TableHeaderRendererPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TableHeaderRendererPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundDisabledAndSorted(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndFocusedAndSorted(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndSorted(::java::awt::Graphics2D* g);
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundPressed(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_ENABLED_FOCUSED = 3;
	static const int32_t BACKGROUND_MOUSEOVER = 4;
	static const int32_t BACKGROUND_PRESSED = 5;
	static const int32_t BACKGROUND_ENABLED_SORTED = 6;
	static const int32_t BACKGROUND_ENABLED_FOCUSED_SORTED = 7;
	static const int32_t BACKGROUND_DISABLED_SORTED = 8;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_DISABLED_SORTED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_FOCUSED")
#pragma pop_macro("BACKGROUND_ENABLED_FOCUSED_SORTED")
#pragma pop_macro("BACKGROUND_ENABLED_SORTED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_PRESSED")

#endif // _javax_swing_plaf_nimbus_TableHeaderRendererPainter_h_