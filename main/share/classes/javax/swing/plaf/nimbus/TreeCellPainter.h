#ifndef _javax_swing_plaf_nimbus_TreeCellPainter_h_
#define _javax_swing_plaf_nimbus_TreeCellPainter_h_
//$ class javax.swing.plaf.nimbus.TreeCellPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_FOCUSED")
#undef BACKGROUND_ENABLED_FOCUSED
#pragma push_macro("BACKGROUND_ENABLED_SELECTED")
#undef BACKGROUND_ENABLED_SELECTED
#pragma push_macro("BACKGROUND_SELECTED_FOCUSED")
#undef BACKGROUND_SELECTED_FOCUSED

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

class TreeCellPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TreeCellPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TreeCellPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Rectangle2D* decodeRect1();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundEnabledAndFocused(::java::awt::Graphics2D* g);
	void paintBackgroundEnabledAndSelected(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BACKGROUND_ENABLED_FOCUSED = 2;
	static const int32_t BACKGROUND_ENABLED_SELECTED = 3;
	static const int32_t BACKGROUND_SELECTED_FOCUSED = 4;
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
#pragma pop_macro("BACKGROUND_ENABLED_FOCUSED")
#pragma pop_macro("BACKGROUND_ENABLED_SELECTED")
#pragma pop_macro("BACKGROUND_SELECTED_FOCUSED")

#endif // _javax_swing_plaf_nimbus_TreeCellPainter_h_