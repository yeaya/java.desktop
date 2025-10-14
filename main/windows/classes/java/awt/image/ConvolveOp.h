#ifndef _java_awt_image_ConvolveOp_h_
#define _java_awt_image_ConvolveOp_h_
//$ class java.awt.image.ConvolveOp
//$ extends java.awt.image.BufferedImageOp
//$ implements java.awt.image.RasterOp

#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/RasterOp.h>

#pragma push_macro("EDGE_NO_OP")
#undef EDGE_NO_OP
#pragma push_macro("EDGE_ZERO_FILL")
#undef EDGE_ZERO_FILL

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
			class Kernel;
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ConvolveOp : public ::java::awt::image::BufferedImageOp, public ::java::awt::image::RasterOp {
	$class(ConvolveOp, $NO_CLASS_INIT, ::java::awt::image::BufferedImageOp, ::java::awt::image::RasterOp)
public:
	ConvolveOp();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::image::Kernel* kernel, int32_t edgeCondition, ::java::awt::RenderingHints* hints);
	void init$(::java::awt::image::Kernel* kernel);
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	virtual int32_t getEdgeCondition();
	::java::awt::image::Kernel* getKernel();
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	virtual $String* toString() override;
	::java::awt::image::Kernel* kernel = nullptr;
	int32_t edgeHint = 0;
	::java::awt::RenderingHints* hints = nullptr;
	static const int32_t EDGE_ZERO_FILL = 0;
	static const int32_t EDGE_NO_OP = 1;
};

		} // image
	} // awt
} // java

#pragma pop_macro("EDGE_NO_OP")
#pragma pop_macro("EDGE_ZERO_FILL")

#endif // _java_awt_image_ConvolveOp_h_