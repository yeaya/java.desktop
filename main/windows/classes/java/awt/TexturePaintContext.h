#ifndef _java_awt_TexturePaintContext_h_
#define _java_awt_TexturePaintContext_h_
//$ class java.awt.TexturePaintContext
//$ extends java.awt.PaintContext

#include <java/awt/PaintContext.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class Raster;
			class WritableRaster;
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

class TexturePaintContext : public ::java::awt::PaintContext {
	$class(TexturePaintContext, 0, ::java::awt::PaintContext)
public:
	TexturePaintContext();
	void init$(::java::awt::image::ColorModel* cm, ::java::awt::geom::AffineTransform* xform, int32_t bWidth, int32_t bHeight, int32_t maxw);
	static int32_t blend($ints* rgbs, int32_t xmul, int32_t ymul);
	virtual void dispose() override;
	static void dropByteRaster(::java::awt::image::Raster* outRas);
	static void dropRaster(::java::awt::image::ColorModel* cm, ::java::awt::image::Raster* outRas);
	static int32_t fractAsInt(double d);
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	static ::java::awt::PaintContext* getContext(::java::awt::image::BufferedImage* bufImg, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints, ::java::awt::Rectangle* devBounds);
	static ::java::awt::image::ColorModel* getInternedColorModel(::java::awt::image::ColorModel* cm);
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	static bool isFilterableDCM(::java::awt::image::ColorModel* cm);
	static bool isFilterableICM(::java::awt::image::ColorModel* cm);
	static bool isMaskOK(int32_t mask, bool canbezero);
	static ::java::awt::image::WritableRaster* makeByteRaster(::java::awt::image::Raster* srcRas, int32_t w, int32_t h);
	static ::java::awt::image::WritableRaster* makeRaster(::java::awt::image::ColorModel* cm, ::java::awt::image::Raster* srcRas, int32_t w, int32_t h);
	virtual ::java::awt::image::WritableRaster* makeRaster(int32_t w, int32_t h) {return nullptr;}
	static double mod(double num, double den);
	virtual void setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) {}
	static ::java::awt::image::ColorModel* xrgbmodel;
	static ::java::awt::image::ColorModel* argbmodel;
	::java::awt::image::ColorModel* colorModel = nullptr;
	int32_t bWidth = 0;
	int32_t bHeight = 0;
	int32_t maxWidth = 0;
	::java::awt::image::WritableRaster* outRas = nullptr;
	double xOrg = 0.0;
	double yOrg = 0.0;
	double incXAcross = 0.0;
	double incYAcross = 0.0;
	double incXDown = 0.0;
	double incYDown = 0.0;
	int32_t colincx = 0;
	int32_t colincy = 0;
	int32_t colincxerr = 0;
	int32_t colincyerr = 0;
	int32_t rowincx = 0;
	int32_t rowincy = 0;
	int32_t rowincxerr = 0;
	int32_t rowincyerr = 0;
	static ::java::lang::ref::WeakReference* xrgbRasRef;
	static ::java::lang::ref::WeakReference* argbRasRef;
	static ::java::lang::ref::WeakReference* byteRasRef;
};

	} // awt
} // java

#endif // _java_awt_TexturePaintContext_h_