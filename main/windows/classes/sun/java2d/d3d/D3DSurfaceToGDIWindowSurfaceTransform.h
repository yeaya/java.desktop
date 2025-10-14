#ifndef _sun_java2d_d3d_D3DSurfaceToGDIWindowSurfaceTransform_h_
#define _sun_java2d_d3d_D3DSurfaceToGDIWindowSurfaceTransform_h_
//$ class sun.java2d.d3d.D3DSurfaceToGDIWindowSurfaceTransform
//$ extends sun.java2d.loops.TransformBlit

#include <sun/java2d/loops/TransformBlit.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
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
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceToGDIWindowSurfaceTransform : public ::sun::java2d::loops::TransformBlit {
	$class(D3DSurfaceToGDIWindowSurfaceTransform, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	D3DSurfaceToGDIWindowSurfaceTransform();
	void init$();
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceToGDIWindowSurfaceTransform_h_