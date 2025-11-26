#ifndef _java_awt_image_BandCombineOp_h_
#define _java_awt_image_BandCombineOp_h_
//$ class java.awt.image.BandCombineOp
//$ extends java.awt.image.RasterOp

#include <java/awt/image/RasterOp.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export BandCombineOp : public ::java::awt::image::RasterOp {
	$class(BandCombineOp, $NO_CLASS_INIT, ::java::awt::image::RasterOp)
public:
	BandCombineOp();
	void init$($Array<float, 2>* matrix, ::java::awt::RenderingHints* hints);
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	$Array<float, 2>* getMatrix();
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	$Array<float, 2>* matrix = nullptr;
	int32_t nrows = 0;
	int32_t ncols = 0;
	::java::awt::RenderingHints* hints = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BandCombineOp_h_