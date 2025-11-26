#ifndef _javax_swing_plaf_nimbus_ToolBarPainter_h_
#define _javax_swing_plaf_nimbus_ToolBarPainter_h_
//$ class javax.swing.plaf.nimbus.ToolBarPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BORDER_EAST")
#undef BORDER_EAST
#pragma push_macro("BORDER_NORTH")
#undef BORDER_NORTH
#pragma push_macro("BORDER_SOUTH")
#undef BORDER_SOUTH
#pragma push_macro("BORDER_WEST")
#undef BORDER_WEST
#pragma push_macro("HANDLEICON_ENABLED")
#undef HANDLEICON_ENABLED

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

class ToolBarPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ToolBarPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ToolBarPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBorderEast(::java::awt::Graphics2D* g);
	void paintBorderNorth(::java::awt::Graphics2D* g);
	void paintBorderSouth(::java::awt::Graphics2D* g);
	void paintBorderWest(::java::awt::Graphics2D* g);
	void painthandleIconEnabled(::java::awt::Graphics2D* g);
	static const int32_t BORDER_NORTH = 1;
	static const int32_t BORDER_SOUTH = 2;
	static const int32_t BORDER_EAST = 3;
	static const int32_t BORDER_WEST = 4;
	static const int32_t HANDLEICON_ENABLED = 5;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BORDER_EAST")
#pragma pop_macro("BORDER_NORTH")
#pragma pop_macro("BORDER_SOUTH")
#pragma pop_macro("BORDER_WEST")
#pragma pop_macro("HANDLEICON_ENABLED")

#endif // _javax_swing_plaf_nimbus_ToolBarPainter_h_