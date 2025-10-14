#ifndef _javax_swing_plaf_nimbus_ScrollPanePainter_h_
#define _javax_swing_plaf_nimbus_ScrollPanePainter_h_
//$ class javax.swing.plaf.nimbus.ScrollPanePainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BORDER_ENABLED")
#undef BORDER_ENABLED
#pragma push_macro("BORDER_ENABLED_FOCUSED")
#undef BORDER_ENABLED_FOCUSED

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
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

class ScrollPanePainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ScrollPanePainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ScrollPanePainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBorderEnabled(::java::awt::Graphics2D* g);
	void paintBorderEnabledAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BORDER_ENABLED_FOCUSED = 2;
	static const int32_t BORDER_ENABLED = 3;
	int32_t state = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	::java::awt::geom::Path2D* path = nullptr;
	::java::awt::geom::Rectangle2D* rect = nullptr;
	::java::awt::geom::RoundRectangle2D* roundRect = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	::java::awt::Color* color1 = nullptr;
	::java::awt::Color* color2 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BORDER_ENABLED")
#pragma pop_macro("BORDER_ENABLED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_ScrollPanePainter_h_