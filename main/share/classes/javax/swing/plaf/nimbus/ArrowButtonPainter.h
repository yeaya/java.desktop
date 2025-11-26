#ifndef _javax_swing_plaf_nimbus_ArrowButtonPainter_h_
#define _javax_swing_plaf_nimbus_ArrowButtonPainter_h_
//$ class javax.swing.plaf.nimbus.ArrowButtonPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("FOREGROUND_DISABLED")
#undef FOREGROUND_DISABLED
#pragma push_macro("FOREGROUND_ENABLED")
#undef FOREGROUND_ENABLED

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

class ArrowButtonPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ArrowButtonPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ArrowButtonPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Path2D* decodePath1();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintForegroundDisabled(::java::awt::Graphics2D* g);
	void paintForegroundEnabled(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t FOREGROUND_DISABLED = 2;
	static const int32_t FOREGROUND_ENABLED = 3;
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
#pragma pop_macro("FOREGROUND_DISABLED")
#pragma pop_macro("FOREGROUND_ENABLED")

#endif // _javax_swing_plaf_nimbus_ArrowButtonPainter_h_