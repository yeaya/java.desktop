#ifndef _sun_java2d_metal_MTLGeneralTransformedBlit_h_
#define _sun_java2d_metal_MTLGeneralTransformedBlit_h_
//$ class sun.java2d.metal.MTLGeneralTransformedBlit
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
		namespace metal {

class MTLGeneralTransformedBlit : public ::sun::java2d::loops::TransformBlit {
	$class(MTLGeneralTransformedBlit, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	MTLGeneralTransformedBlit();
	void init$(::sun::java2d::loops::TransformBlit* performop);
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	::sun::java2d::loops::TransformBlit* performop = nullptr;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLGeneralTransformedBlit_h_