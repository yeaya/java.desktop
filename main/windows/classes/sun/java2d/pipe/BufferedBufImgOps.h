#ifndef _sun_java2d_pipe_BufferedBufImgOps_h_
#define _sun_java2d_pipe_BufferedBufImgOps_h_
//$ class sun.java2d.pipe.BufferedBufImgOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class BufferedImageOp;
			class ConvolveOp;
			class LookupOp;
			class RescaleOp;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedBufImgOps : public ::java::lang::Object {
	$class(BufferedBufImgOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferedBufImgOps();
	void init$();
	static void disableBufImgOp(::sun::java2d::pipe::RenderQueue* rq, ::java::awt::image::BufferedImageOp* biop);
	static void disableConvolveOp(::sun::java2d::pipe::RenderQueue* rq);
	static void disableLookupOp(::sun::java2d::pipe::RenderQueue* rq);
	static void disableRescaleOp(::sun::java2d::pipe::RenderQueue* rq);
	static void enableBufImgOp(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SurfaceData* srcData, ::java::awt::image::BufferedImage* srcImg, ::java::awt::image::BufferedImageOp* biop);
	static void enableConvolveOp(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SurfaceData* srcData, ::java::awt::image::ConvolveOp* cop);
	static void enableLookupOp(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SurfaceData* srcData, ::java::awt::image::BufferedImage* srcImg, ::java::awt::image::LookupOp* lop);
	static void enableRescaleOp(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SurfaceData* srcData, ::java::awt::image::BufferedImage* srcImg, ::java::awt::image::RescaleOp* rop);
	static bool isConvolveOpValid(::java::awt::image::ConvolveOp* cop);
	static bool isLookupOpValid(::java::awt::image::LookupOp* lop, ::java::awt::image::BufferedImage* srcImg);
	static bool isRescaleOpValid(::java::awt::image::RescaleOp* rop, ::java::awt::image::BufferedImage* srcImg);
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedBufImgOps_h_