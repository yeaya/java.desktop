#ifndef _java_awt_image_BufferedImageOp_h_
#define _java_awt_image_BufferedImageOp_h_
//$ interface java.awt.image.BufferedImageOp
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
			class BufferedImage;
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export BufferedImageOp : public ::java::lang::Object {
	$interface(BufferedImageOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) {return nullptr;}
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dest) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) {return nullptr;}
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) {return nullptr;}
	virtual ::java::awt::RenderingHints* getRenderingHints() {return nullptr;}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BufferedImageOp_h_