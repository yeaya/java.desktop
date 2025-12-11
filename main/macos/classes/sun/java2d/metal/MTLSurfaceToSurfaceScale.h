#ifndef _sun_java2d_metal_MTLSurfaceToSurfaceScale_h_
#define _sun_java2d_metal_MTLSurfaceToSurfaceScale_h_
//$ class sun.java2d.metal.MTLSurfaceToSurfaceScale
//$ extends sun.java2d.loops.ScaledBlit

#include <sun/java2d/loops/ScaledBlit.h>

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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLSurfaceToSurfaceScale : public ::sun::java2d::loops::ScaledBlit {
	$class(MTLSurfaceToSurfaceScale, $NO_CLASS_INIT, ::sun::java2d::loops::ScaledBlit)
public:
	MTLSurfaceToSurfaceScale();
	void init$();
	virtual void Scale(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceToSurfaceScale_h_