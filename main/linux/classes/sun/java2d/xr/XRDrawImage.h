#ifndef _sun_java2d_xr_XRDrawImage_h_
#define _sun_java2d_xr_XRDrawImage_h_
//$ class sun.java2d.xr.XRDrawImage
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
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRDrawImage : public ::sun::java2d::pipe::DrawImage {
	$class(XRDrawImage, $NO_CLASS_INIT, ::sun::java2d::pipe::DrawImage)
public:
	XRDrawImage();
	void init$();
	virtual void renderImageXform(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor) override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRDrawImage_h_