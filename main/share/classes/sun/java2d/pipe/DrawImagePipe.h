#ifndef _sun_java2d_pipe_DrawImagePipe_h_
#define _sun_java2d_pipe_DrawImagePipe_h_
//$ interface sun.java2d.pipe.DrawImagePipe
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class ImageObserver;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class DrawImagePipe : public ::java::lang::Object {
	$interface(DrawImagePipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* atfm, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_DrawImagePipe_h_