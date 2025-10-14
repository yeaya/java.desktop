#ifndef _sun_java2d_pipe_AlphaPaintPipe$TileContext_h_
#define _sun_java2d_pipe_AlphaPaintPipe$TileContext_h_
//$ class sun.java2d.pipe.AlphaPaintPipe$TileContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class PaintContext;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
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
			class Blit;
			class MaskBlit;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class AlphaPaintPipe$TileContext : public ::java::lang::Object {
	$class(AlphaPaintPipe$TileContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlphaPaintPipe$TileContext();
	void init$(::sun::java2d::SunGraphics2D* sg, ::java::awt::PaintContext* pc);
	::sun::java2d::SunGraphics2D* sunG2D = nullptr;
	::java::awt::PaintContext* paintCtxt = nullptr;
	::java::awt::image::ColorModel* paintModel = nullptr;
	::java::lang::ref::WeakReference* lastRaster = nullptr;
	::java::lang::ref::WeakReference* lastData = nullptr;
	::sun::java2d::loops::MaskBlit* lastMask = nullptr;
	::sun::java2d::loops::Blit* lastBlit = nullptr;
	::sun::java2d::SurfaceData* dstData = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_AlphaPaintPipe$TileContext_h_