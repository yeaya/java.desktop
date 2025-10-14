#ifndef _sun_java2d_d3d_D3DSurfaceToSurfaceScale_h_
#define _sun_java2d_d3d_D3DSurfaceToSurfaceScale_h_
//$ class sun.java2d.d3d.D3DSurfaceToSurfaceScale
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
		namespace d3d {

class D3DSurfaceToSurfaceScale : public ::sun::java2d::loops::ScaledBlit {
	$class(D3DSurfaceToSurfaceScale, $NO_CLASS_INIT, ::sun::java2d::loops::ScaledBlit)
public:
	D3DSurfaceToSurfaceScale();
	void init$();
	virtual void Scale(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceToSurfaceScale_h_