#ifndef _java_awt_GradientPaintContext_h_
#define _java_awt_GradientPaintContext_h_
//$ class java.awt.GradientPaintContext
//$ extends java.awt.PaintContext

#include <java/awt/PaintContext.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
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

class GradientPaintContext : public ::java::awt::PaintContext {
	$class(GradientPaintContext, 0, ::java::awt::PaintContext)
public:
	GradientPaintContext();
	void init$(::java::awt::image::ColorModel* cm, ::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2, ::java::awt::geom::AffineTransform* xform, ::java::awt::Color* c1, ::java::awt::Color* c2, bool cyclic);
	virtual void clipFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t w, int32_t h, double rowrel, double dx, double dy);
	virtual void cycleFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t w, int32_t h, double rowrel, double dx, double dy);
	virtual void dispose() override;
	static ::java::awt::image::Raster* getCachedRaster(::java::awt::image::ColorModel* cm, int32_t w, int32_t h);
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	static void putCachedRaster(::java::awt::image::ColorModel* cm, ::java::awt::image::Raster* ras);
	static ::java::awt::image::ColorModel* xrgbmodel;
	static ::java::awt::image::ColorModel* xbgrmodel;
	static ::java::awt::image::ColorModel* cachedModel;
	static ::java::lang::ref::WeakReference* cached;
	double x1 = 0.0;
	double y1 = 0.0;
	double dx = 0.0;
	double dy = 0.0;
	bool cyclic = false;
	$ints* interp = nullptr;
	::java::awt::image::Raster* saved = nullptr;
	::java::awt::image::ColorModel* model = nullptr;
};

	} // awt
} // java

#endif // _java_awt_GradientPaintContext_h_