#ifndef _java_awt_MultipleGradientPaintContext_h_
#define _java_awt_MultipleGradientPaintContext_h_
//$ class java.awt.MultipleGradientPaintContext
//$ extends java.awt.PaintContext

#include <java/awt/PaintContext.h>
#include <java/lang/Array.h>

#pragma push_macro("GRADIENT_SIZE")
#undef GRADIENT_SIZE
#pragma push_macro("GRADIENT_SIZE_INDEX")
#undef GRADIENT_SIZE_INDEX
#pragma push_macro("MAX_GRADIENT_ARRAY_SIZE")
#undef MAX_GRADIENT_ARRAY_SIZE

namespace java {
	namespace awt {
		class Color;
		class MultipleGradientPaint;
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
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}

namespace java {
	namespace awt {

class MultipleGradientPaintContext : public ::java::awt::PaintContext {
	$class(MultipleGradientPaintContext, 0, ::java::awt::PaintContext)
public:
	MultipleGradientPaintContext();
	void init$(::java::awt::MultipleGradientPaint* mgp, ::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* t, ::java::awt::RenderingHints* hints, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace);
	void calculateLookupData($Array<::java::awt::Color>* colors);
	void calculateMultipleArrayGradient($Array<::java::awt::Color>* colors);
	void calculateSingleArrayGradient($Array<::java::awt::Color>* colors, float Imin);
	int32_t convertEntireColorLinearRGBtoSRGB(int32_t rgb);
	static int32_t convertLinearRGBtoSRGB(int32_t color);
	static int32_t convertSRGBtoLinearRGB(int32_t color);
	virtual void dispose() override;
	virtual void fillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) {}
	static ::java::awt::image::Raster* getCachedRaster(::java::awt::image::ColorModel* cm, int32_t w, int32_t h);
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	int32_t indexIntoGradientsArrays(float position);
	void interpolate(int32_t rgb1, int32_t rgb2, $ints* output);
	static void putCachedRaster(::java::awt::image::ColorModel* cm, ::java::awt::image::Raster* ras);
	::java::awt::image::ColorModel* model = nullptr;
	static ::java::awt::image::ColorModel* xrgbmodel;
	static ::java::awt::image::ColorModel* cachedModel;
	static ::java::lang::ref::WeakReference* cached;
	::java::awt::image::Raster* saved = nullptr;
	::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod = nullptr;
	::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace = nullptr;
	float a00 = 0.0;
	float a01 = 0.0;
	float a10 = 0.0;
	float a11 = 0.0;
	float a02 = 0.0;
	float a12 = 0.0;
	bool isSimpleLookup = false;
	int32_t fastGradientArraySize = 0;
	$ints* gradient = nullptr;
	$Array<int32_t, 2>* gradients = nullptr;
	$floats* normalizedIntervals = nullptr;
	$floats* fractions = nullptr;
	int32_t transparencyTest = 0;
	static $ints* SRGBtoLinearRGB;
	static $ints* LinearRGBtoSRGB;
	static const int32_t GRADIENT_SIZE = 256;
	static const int32_t GRADIENT_SIZE_INDEX = 255; // GRADIENT_SIZE - 1
	static const int32_t MAX_GRADIENT_ARRAY_SIZE = 5000;
};

	} // awt
} // java

#pragma pop_macro("GRADIENT_SIZE")
#pragma pop_macro("GRADIENT_SIZE_INDEX")
#pragma pop_macro("MAX_GRADIENT_ARRAY_SIZE")

#endif // _java_awt_MultipleGradientPaintContext_h_