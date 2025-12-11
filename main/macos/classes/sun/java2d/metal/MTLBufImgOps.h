#ifndef _sun_java2d_metal_MTLBufImgOps_h_
#define _sun_java2d_metal_MTLBufImgOps_h_
//$ class sun.java2d.metal.MTLBufImgOps
//$ extends sun.java2d.pipe.BufferedBufImgOps

#include <sun/java2d/pipe/BufferedBufImgOps.h>

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
		namespace metal {

class MTLBufImgOps : public ::sun::java2d::pipe::BufferedBufImgOps {
	$class(MTLBufImgOps, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedBufImgOps)
public:
	MTLBufImgOps();
	void init$();
	static bool renderImageWithOp(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* biop, int32_t x, int32_t y);
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLBufImgOps_h_