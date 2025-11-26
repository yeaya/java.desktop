#ifndef _sun_java2d_x11_X11PMBlitBgLoops_h_
#define _sun_java2d_x11_X11PMBlitBgLoops_h_
//$ class sun.java2d.x11.X11PMBlitBgLoops
//$ extends sun.java2d.loops.BlitBg

#include <sun/java2d/loops/BlitBg.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace sun {
	namespace java2d {
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
		namespace x11 {

class X11PMBlitBgLoops : public ::sun::java2d::loops::BlitBg {
	$class(X11PMBlitBgLoops, $NO_CLASS_INIT, ::sun::java2d::loops::BlitBg)
public:
	X11PMBlitBgLoops();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void BlitBg$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t bgColor, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	void nativeBlitBg(int64_t srcData, int64_t dstData, int64_t xgc, int32_t pixel, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	static void register$();
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11PMBlitBgLoops_h_