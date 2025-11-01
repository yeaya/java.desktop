#ifndef _java_awt_image_AffineTransformOp_h_
#define _java_awt_image_AffineTransformOp_h_
//$ class java.awt.image.AffineTransformOp
//$ extends java.awt.image.BufferedImageOp
//$ implements java.awt.image.RasterOp

#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/RasterOp.h>

#pragma push_macro("TYPE_BICUBIC")
#undef TYPE_BICUBIC
#pragma push_macro("TYPE_BILINEAR")
#undef TYPE_BILINEAR
#pragma push_macro("TYPE_NEAREST_NEIGHBOR")
#undef TYPE_NEAREST_NEIGHBOR

namespace java {
	namespace awt {
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
			class BufferedImage;
			class ColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import AffineTransformOp : public ::java::awt::image::BufferedImageOp, public ::java::awt::image::RasterOp {
	$class(AffineTransformOp, $NO_CLASS_INIT, ::java::awt::image::BufferedImageOp, ::java::awt::image::RasterOp)
public:
	AffineTransformOp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints);
	void init$(::java::awt::geom::AffineTransform* xform, int32_t interpolationType);
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	int32_t getInterpolationType();
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	::java::awt::geom::AffineTransform* getTransform();
	virtual $String* toString() override;
	virtual void validateTransform(::java::awt::geom::AffineTransform* xform);
	::java::awt::geom::AffineTransform* xform = nullptr;
	::java::awt::RenderingHints* hints = nullptr;
	static const int32_t TYPE_NEAREST_NEIGHBOR = 1;
	static const int32_t TYPE_BILINEAR = 2;
	static const int32_t TYPE_BICUBIC = 3;
	int32_t interpolationType = 0;
};

		} // image
	} // awt
} // java

#pragma pop_macro("TYPE_BICUBIC")
#pragma pop_macro("TYPE_BILINEAR")
#pragma pop_macro("TYPE_NEAREST_NEIGHBOR")

#endif // _java_awt_image_AffineTransformOp_h_