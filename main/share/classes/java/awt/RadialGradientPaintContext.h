#ifndef _java_awt_RadialGradientPaintContext_h_
#define _java_awt_RadialGradientPaintContext_h_
//$ class java.awt.RadialGradientPaintContext
//$ extends java.awt.MultipleGradientPaintContext

#include <java/awt/MultipleGradientPaintContext.h>
#include <java/lang/Array.h>

#pragma push_macro("SCALEBACK")
#undef SCALEBACK
#pragma push_macro("SQRT_LUT_SIZE")
#undef SQRT_LUT_SIZE

namespace java {
	namespace awt {
		class Color;
		class MultipleGradientPaint$ColorSpaceType;
		class MultipleGradientPaint$CycleMethod;
		class RadialGradientPaint;
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
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

class RadialGradientPaintContext : public ::java::awt::MultipleGradientPaintContext {
	$class(RadialGradientPaintContext, 0, ::java::awt::MultipleGradientPaintContext)
public:
	RadialGradientPaintContext();
	void init$(::java::awt::RadialGradientPaint* paint, ::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* t, ::java::awt::RenderingHints* hints, float cx, float cy, float r, float fx, float fy, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace);
	void cyclicCircularGradientFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void fillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void simpleNonCyclicFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h);
	bool isSimpleFocus = false;
	bool isNonCyclic = false;
	float radius = 0.0;
	float centerX = 0.0;
	float centerY = 0.0;
	float focusX = 0.0;
	float focusY = 0.0;
	float radiusSq = 0.0;
	float constA = 0.0;
	float constB = 0.0;
	float gDeltaDelta = 0.0;
	float trivial = 0.0;
	static float SCALEBACK;
	static const int32_t SQRT_LUT_SIZE = 2048; // (1 << 11)
	static $floats* sqrtLut;
};

	} // awt
} // java

#pragma pop_macro("SCALEBACK")
#pragma pop_macro("SQRT_LUT_SIZE")

#endif // _java_awt_RadialGradientPaintContext_h_