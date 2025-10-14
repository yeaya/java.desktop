#ifndef _sun_java2d_d3d_D3DGeneralTransformedBlit_h_
#define _sun_java2d_d3d_D3DGeneralTransformedBlit_h_
//$ class sun.java2d.d3d.D3DGeneralTransformedBlit
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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGeneralTransformedBlit : public ::sun::java2d::loops::TransformBlit {
	$class(D3DGeneralTransformedBlit, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	D3DGeneralTransformedBlit();
	void init$(::sun::java2d::loops::TransformBlit* performop);
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	::sun::java2d::loops::TransformBlit* performop = nullptr;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGeneralTransformedBlit_h_