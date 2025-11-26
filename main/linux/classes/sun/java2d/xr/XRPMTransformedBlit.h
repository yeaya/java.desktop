#ifndef _sun_java2d_xr_XRPMTransformedBlit_h_
#define _sun_java2d_xr_XRPMTransformedBlit_h_
//$ class sun.java2d.xr.XRPMTransformedBlit
//$ extends sun.java2d.loops.TransformBlit

#include <java/lang/Array.h>
#include <sun/java2d/loops/TransformBlit.h>

namespace java {
	namespace awt {
		class Composite;
		class Rectangle;
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
		namespace xr {

class XRPMTransformedBlit : public ::sun::java2d::loops::TransformBlit {
	$class(XRPMTransformedBlit, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	XRPMTransformedBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* xform, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	virtual void adjustCompositeBounds(bool isQuadrantRotated, ::java::awt::geom::AffineTransform* tr, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	::java::awt::Rectangle* compositeBounds = nullptr;
	$doubles* srcCoords = nullptr;
	$doubles* dstCoords = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRPMTransformedBlit_h_