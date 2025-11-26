#ifndef _sun_java2d_x11_X11PMBlitLoops$DelegateBlitLoop_h_
#define _sun_java2d_x11_X11PMBlitLoops$DelegateBlitLoop_h_
//$ class sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop
//$ extends sun.java2d.loops.Blit

#include <sun/java2d/loops/Blit.h>

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

class X11PMBlitLoops$DelegateBlitLoop : public ::sun::java2d::loops::Blit {
	$class(X11PMBlitLoops$DelegateBlitLoop, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	X11PMBlitLoops$DelegateBlitLoop();
	void init$(::sun::java2d::loops::SurfaceType* realDstType, ::sun::java2d::loops::SurfaceType* delegateDstType);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	::sun::java2d::loops::SurfaceType* dstType = nullptr;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11PMBlitLoops$DelegateBlitLoop_h_