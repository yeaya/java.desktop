#ifndef _sun_java2d_d3d_D3DBufImgOps_h_
#define _sun_java2d_d3d_D3DBufImgOps_h_
//$ class sun.java2d.d3d.D3DBufImgOps
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
		namespace d3d {

class D3DBufImgOps : public ::sun::java2d::pipe::BufferedBufImgOps {
	$class(D3DBufImgOps, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedBufImgOps)
public:
	D3DBufImgOps();
	void init$();
	static bool renderImageWithOp(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* biop, int32_t x, int32_t y);
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DBufImgOps_h_