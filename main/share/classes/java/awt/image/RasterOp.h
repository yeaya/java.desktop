#ifndef _java_awt_image_RasterOp_h_
#define _java_awt_image_RasterOp_h_
//$ interface java.awt.image.RasterOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export RasterOp : public ::java::lang::Object {
	$interface(RasterOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) {return nullptr;}
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dest) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) {return nullptr;}
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) {return nullptr;}
	virtual ::java::awt::RenderingHints* getRenderingHints() {return nullptr;}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_RasterOp_h_