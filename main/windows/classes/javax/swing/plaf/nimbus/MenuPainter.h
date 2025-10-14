#ifndef _javax_swing_plaf_nimbus_MenuPainter_h_
#define _javax_swing_plaf_nimbus_MenuPainter_h_
//$ class javax.swing.plaf.nimbus.MenuPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("ARROWICON_DISABLED")
#undef ARROWICON_DISABLED
#pragma push_macro("ARROWICON_ENABLED")
#undef ARROWICON_ENABLED
#pragma push_macro("ARROWICON_ENABLED_SELECTED")
#undef ARROWICON_ENABLED_SELECTED
#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_SELECTED")
#undef BACKGROUND_ENABLED_SELECTED

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

class MenuPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(MenuPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	MenuPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Rectangle2D* decodeRect1();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundEnabledAndSelected(::java::awt::Graphics2D* g);
	void paintarrowIconDisabled(::java::awt::Graphics2D* g);
	void paintarrowIconEnabled(::java::awt::Graphics2D* g);
	void paintarrowIconEnabledAndSelected(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_ENABLED_SELECTED = 3;
	static const int32_t ARROWICON_DISABLED = 4;
	static const int32_t ARROWICON_ENABLED = 5;
	static const int32_t ARROWICON_ENABLED_SELECTED = 6;
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
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ARROWICON_DISABLED")
#pragma pop_macro("ARROWICON_ENABLED")
#pragma pop_macro("ARROWICON_ENABLED_SELECTED")
#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_SELECTED")

#endif // _javax_swing_plaf_nimbus_MenuPainter_h_