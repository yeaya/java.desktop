#ifndef _java_awt_image_RescaleOp_h_
#define _java_awt_image_RescaleOp_h_
//$ class java.awt.image.RescaleOp
//$ extends java.awt.image.BufferedImageOp
//$ implements java.awt.image.RasterOp

#include <java/awt/image/BufferedImageOp.h>
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
			class BufferedImage;
			class ByteLookupTable;
			class ColorModel;
			class Raster;
			class ShortLookupTable;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export RescaleOp : public ::java::awt::image::BufferedImageOp, public ::java::awt::image::RasterOp {
	$class(RescaleOp, $NO_CLASS_INIT, ::java::awt::image::BufferedImageOp, ::java::awt::image::RasterOp)
public:
	RescaleOp();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($floats* scaleFactors, $floats* offsets, ::java::awt::RenderingHints* hints);
	void init$(float scaleFactor, float offset, ::java::awt::RenderingHints* hints);
	bool canUseLookup(::java::awt::image::Raster* src, ::java::awt::image::Raster* dst);
	::java::awt::image::ByteLookupTable* createByteLut($floats* scale, $floats* off, int32_t nBands, int32_t nElems);
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	::java::awt::image::ShortLookupTable* createShortLut($floats* scale, $floats* off, int32_t nBands, int32_t nElems);
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	::java::awt::image::WritableRaster* filterRasterImpl(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst, int32_t scaleConst, bool sCheck);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	int32_t getNumFactors();
	$floats* getOffsets($floats* offsets);
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	$floats* getScaleFactors($floats* scaleFactors);
	virtual $String* toString() override;
	$floats* scaleFactors = nullptr;
	$floats* offsets = nullptr;
	int32_t length = 0;
	::java::awt::RenderingHints* hints = nullptr;
	int32_t srcNbits = 0;
	int32_t dstNbits = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_RescaleOp_h_