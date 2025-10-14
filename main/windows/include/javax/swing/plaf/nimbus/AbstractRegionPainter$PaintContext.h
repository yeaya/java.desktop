#ifndef _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext_h_
#define _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext_h_
//$ class javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY_INSETS")
#undef EMPTY_INSETS

namespace java {
	namespace awt {
		class Dimension;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext$CacheMode;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class $import AbstractRegionPainter$PaintContext : public ::java::lang::Object {
	$class(AbstractRegionPainter$PaintContext, 0, ::java::lang::Object)
public:
	AbstractRegionPainter$PaintContext();
	void init$(::java::awt::Insets* insets, ::java::awt::Dimension* canvasSize, bool inverted);
	void init$(::java::awt::Insets* insets, ::java::awt::Dimension* canvasSize, bool inverted, ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* cacheMode, double maxH, double maxV);
	static ::java::awt::Insets* EMPTY_INSETS;
	::java::awt::Insets* stretchingInsets = nullptr;
	::java::awt::Dimension* canvasSize = nullptr;
	bool inverted = false;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* cacheMode = nullptr;
	double maxHorizontalScaleFactor = 0.0;
	double maxVerticalScaleFactor = 0.0;
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;
	float aPercent = 0.0;
	float bPercent = 0.0;
	float cPercent = 0.0;
	float dPercent = 0.0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("EMPTY_INSETS")

#endif // _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext_h_