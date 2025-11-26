#ifndef _sun_java2d_opengl_OGLBufImgOps_h_
#define _sun_java2d_opengl_OGLBufImgOps_h_
//$ class sun.java2d.opengl.OGLBufImgOps
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
		namespace opengl {

class OGLBufImgOps : public ::sun::java2d::pipe::BufferedBufImgOps {
	$class(OGLBufImgOps, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedBufImgOps)
public:
	OGLBufImgOps();
	void init$();
	static bool renderImageWithOp(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* biop, int32_t x, int32_t y);
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLBufImgOps_h_