#ifndef _javax_swing_plaf_nimbus_CheckBoxMenuItemPainter_h_
#define _javax_swing_plaf_nimbus_CheckBoxMenuItemPainter_h_
//$ class javax.swing.plaf.nimbus.CheckBoxMenuItemPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_SELECTED_MOUSEOVER")
#undef BACKGROUND_SELECTED_MOUSEOVER
#pragma push_macro("CHECKICON_DISABLED_SELECTED")
#undef CHECKICON_DISABLED_SELECTED
#pragma push_macro("CHECKICON_ENABLED_SELECTED")
#undef CHECKICON_ENABLED_SELECTED
#pragma push_macro("CHECKICON_SELECTED_MOUSEOVER")
#undef CHECKICON_SELECTED_MOUSEOVER

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

class CheckBoxMenuItemPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(CheckBoxMenuItemPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	CheckBoxMenuItemPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Rectangle2D* decodeRect1();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundMouseOver(::java::awt::Graphics2D* g);
	void paintBackgroundSelectedAndMouseOver(::java::awt::Graphics2D* g);
	void paintcheckIconDisabledAndSelected(::java::awt::Graphics2D* g);
	void paintcheckIconEnabledAndSelected(::java::awt::Graphics2D* g);
	void paintcheckIconSelectedAndMouseOver(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_MOUSEOVER = 3;
	static const int32_t BACKGROUND_SELECTED_MOUSEOVER = 4;
	static const int32_t CHECKICON_DISABLED_SELECTED = 5;
	static const int32_t CHECKICON_ENABLED_SELECTED = 6;
	static const int32_t CHECKICON_SELECTED_MOUSEOVER = 7;
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

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_SELECTED_MOUSEOVER")
#pragma pop_macro("CHECKICON_DISABLED_SELECTED")
#pragma pop_macro("CHECKICON_ENABLED_SELECTED")
#pragma pop_macro("CHECKICON_SELECTED_MOUSEOVER")

#endif // _javax_swing_plaf_nimbus_CheckBoxMenuItemPainter_h_