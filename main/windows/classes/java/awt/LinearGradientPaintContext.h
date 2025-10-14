#ifndef _java_awt_LinearGradientPaintContext_h_
#define _java_awt_LinearGradientPaintContext_h_
//$ class java.awt.LinearGradientPaintContext
//$ extends java.awt.MultipleGradientPaintContext

#include <java/awt/MultipleGradientPaintContext.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class LinearGradientPaint;
		class MultipleGradientPaint$ColorSpaceType;
		class MultipleGradientPaint$CycleMethod;
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {

class LinearGradientPaintContext : public ::java::awt::MultipleGradientPaintContext {
	$class(LinearGradientPaintContext, $NO_CLASS_INIT, ::java::awt::MultipleGradientPaintContext)
public:
	LinearGradientPaintContext();
	void init$(::java::awt::LinearGradientPaint* paint, ::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* t, ::java::awt::RenderingHints* hints, ::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace);
	virtual void fillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) override;
	float dgdX = 0.0;
	float dgdY = 0.0;
	float gc = 0.0;
};

	} // awt
} // java

#endif // _java_awt_LinearGradientPaintContext_h_