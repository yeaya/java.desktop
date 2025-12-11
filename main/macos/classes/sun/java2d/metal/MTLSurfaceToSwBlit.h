#ifndef _sun_java2d_metal_MTLSurfaceToSwBlit_h_
#define _sun_java2d_metal_MTLSurfaceToSwBlit_h_
//$ class sun.java2d.metal.MTLSurfaceToSwBlit
//$ extends sun.java2d.loops.Blit

#include <sun/java2d/loops/Blit.h>

namespace java {
	namespace awt {
		class Composite;
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
		namespace metal {

class MTLSurfaceToSwBlit : public ::sun::java2d::loops::Blit {
	$class(MTLSurfaceToSwBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	MTLSurfaceToSwBlit();
	void init$(::sun::java2d::loops::SurfaceType* dstType, int32_t typeval);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	void complexClipBlit(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	int32_t typeval = 0;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceToSwBlit_h_