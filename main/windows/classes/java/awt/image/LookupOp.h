#ifndef _java_awt_image_LookupOp_h_
#define _java_awt_image_LookupOp_h_
//$ class java.awt.image.LookupOp
//$ extends java.awt.image.BufferedImageOp
//$ implements java.awt.image.RasterOp

#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/RasterOp.h>

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
			class ByteLookupTable;
			class ColorModel;
			class LookupTable;
			class Raster;
			class ShortLookupTable;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export LookupOp : public ::java::awt::image::BufferedImageOp, public ::java::awt::image::RasterOp {
	$class(LookupOp, $NO_CLASS_INIT, ::java::awt::image::BufferedImageOp, ::java::awt::image::RasterOp)
public:
	LookupOp();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::image::LookupTable* lookup, ::java::awt::RenderingHints* hints);
	void byteFilter(::java::awt::image::ByteLookupTable* lookup, ::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst, int32_t width, int32_t height, int32_t numBands);
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	::java::awt::image::LookupTable* getTable();
	void shortFilter(::java::awt::image::ShortLookupTable* lookup, ::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst, int32_t width, int32_t height, int32_t numBands);
	virtual $String* toString() override;
	::java::awt::image::LookupTable* ltable = nullptr;
	int32_t numComponents = 0;
	::java::awt::RenderingHints* hints = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_LookupOp_h_