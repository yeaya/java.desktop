#ifndef _sun_java2d_pipe_DrawImage_h_
#define _sun_java2d_pipe_DrawImage_h_
//$ class sun.java2d.pipe.DrawImage
//$ extends sun.java2d.pipe.DrawImagePipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/DrawImagePipe.h>

#pragma push_macro("MAX_TX_ERROR")
#undef MAX_TX_ERROR

namespace java {
	namespace awt {
		class Color;
		class Image;
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
			class BufferedImageOp;
			class ColorModel;
			class ImageObserver;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ToolkitImage;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class DrawImage : public ::sun::java2d::pipe::DrawImagePipe {
	$class(DrawImage, 0, ::sun::java2d::pipe::DrawImagePipe)
public:
	DrawImage();
	void init$();
	static void blitSurfaceData(::sun::java2d::SunGraphics2D* sg, ::sun::java2d::pipe::Region* clip, ::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, ::java::awt::Color* bgColor);
	static bool closeToInteger(int32_t i, double d);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgColor);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, ::java::awt::Color* bgColor);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::image::BufferedImage* getBufferedImage(::java::awt::Image* img);
	::java::awt::image::ColorModel* getTransformColorModel(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* bImg, ::java::awt::geom::AffineTransform* tx);
	static bool imageReady(::sun::awt::image::ToolkitImage* sunimg, ::java::awt::image::ImageObserver* observer);
	static bool isBgOperation(::sun::java2d::SurfaceData* srcData, ::java::awt::Color* bgColor);
	static bool isSimpleTranslate(::sun::java2d::SunGraphics2D* sg);
	::java::awt::image::BufferedImage* makeBufferedImage(::java::awt::Image* img, ::java::awt::Color* bgColor, int32_t type, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2);
	virtual bool renderImageCopy(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::Color* bgColor, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h);
	virtual bool renderImageScale(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::Color* bgColor, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2);
	virtual void renderImageXform(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor);
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgColor);
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor);
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool scaleSurfaceData(::sun::java2d::SunGraphics2D* sg, ::sun::java2d::pipe::Region* clipRegion, ::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2);
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::geom::AffineTransform* extraAT, int32_t interpType);
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor);
	virtual bool transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* atfm, ::java::awt::image::ImageObserver* observer) override;
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
	virtual bool tryCopyOrScale(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, int32_t interpType, $doubles* coords);
	static double MAX_TX_ERROR;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("MAX_TX_ERROR")

#endif // _sun_java2d_pipe_DrawImage_h_