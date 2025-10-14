#ifndef _javax_swing_plaf_nimbus_TabbedPanePainter_h_
#define _javax_swing_plaf_nimbus_TabbedPanePainter_h_
//$ class javax.swing.plaf.nimbus.TabbedPanePainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_FOCUSED")
#undef BACKGROUND_FOCUSED
#pragma push_macro("BACKGROUND_MOUSEOVER")
#undef BACKGROUND_MOUSEOVER
#pragma push_macro("BACKGROUND_PRESSED")
#undef BACKGROUND_PRESSED

namespace java {
	namespace awt {
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

class TabbedPanePainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TabbedPanePainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TabbedPanePainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_FOCUSED = 3;
	static const int32_t BACKGROUND_MOUSEOVER = 4;
	static const int32_t BACKGROUND_PRESSED = 5;
	int32_t state = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	::java::awt::geom::Path2D* path = nullptr;
	::java::awt::geom::Rectangle2D* rect = nullptr;
	::java::awt::geom::RoundRectangle2D* roundRect = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_FOCUSED")
#pragma pop_macro("BACKGROUND_MOUSEOVER")
#pragma pop_macro("BACKGROUND_PRESSED")

#endif // _javax_swing_plaf_nimbus_TabbedPanePainter_h_