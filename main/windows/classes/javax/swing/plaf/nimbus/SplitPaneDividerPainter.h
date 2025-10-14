#ifndef _javax_swing_plaf_nimbus_SplitPaneDividerPainter_h_
#define _javax_swing_plaf_nimbus_SplitPaneDividerPainter_h_
//$ class javax.swing.plaf.nimbus.SplitPaneDividerPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_FOCUSED")
#undef BACKGROUND_FOCUSED
#pragma push_macro("FOREGROUND_ENABLED")
#undef FOREGROUND_ENABLED
#pragma push_macro("FOREGROUND_ENABLED_VERTICAL")
#undef FOREGROUND_ENABLED_VERTICAL

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

class SplitPaneDividerPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(SplitPaneDividerPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	SplitPaneDividerPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect1();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect2();
	::java::awt::geom::RoundRectangle2D* decodeRoundRect3();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundFocused(::java::awt::Graphics2D* g);
	void paintForegroundEnabled(::java::awt::Graphics2D* g);
	void paintForegroundEnabledAndVertical(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BACKGROUND_FOCUSED = 2;
	static const int32_t FOREGROUND_ENABLED = 3;
	static const int32_t FOREGROUND_ENABLED_VERTICAL = 4;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_FOCUSED")
#pragma pop_macro("FOREGROUND_ENABLED")
#pragma pop_macro("FOREGROUND_ENABLED_VERTICAL")

#endif // _javax_swing_plaf_nimbus_SplitPaneDividerPainter_h_