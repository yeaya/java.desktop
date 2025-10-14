#ifndef _sun_java2d_d3d_D3DDrawImage_h_
#define _sun_java2d_d3d_D3DDrawImage_h_
//$ class sun.java2d.d3d.D3DDrawImage
//$ extends sun.java2d.pipe.DrawImage

#include <sun/java2d/pipe/DrawImage.h>

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
		namespace d3d {

class D3DDrawImage : public ::sun::java2d::pipe::DrawImage {
	$class(D3DDrawImage, $NO_CLASS_INIT, ::sun::java2d::pipe::DrawImage)
public:
	D3DDrawImage();
	void init$();
	virtual void renderImageXform(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor) override;
	using ::sun::java2d::pipe::DrawImage::transformImage;
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DDrawImage_h_