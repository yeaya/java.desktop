#ifndef _sun_java2d_d3d_D3DRTTSurfaceToSurfaceBlit_h_
#define _sun_java2d_d3d_D3DRTTSurfaceToSurfaceBlit_h_
//$ class sun.java2d.d3d.D3DRTTSurfaceToSurfaceBlit
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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DRTTSurfaceToSurfaceBlit : public ::sun::java2d::loops::Blit {
	$class(D3DRTTSurfaceToSurfaceBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	D3DRTTSurfaceToSurfaceBlit();
	void init$();
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DRTTSurfaceToSurfaceBlit_h_