#ifndef _sun_java2d_xr_XrSwToPMTransformedBlit_h_
#define _sun_java2d_xr_XrSwToPMTransformedBlit_h_
//$ class sun.java2d.xr.XrSwToPMTransformedBlit
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

class XrSwToPMTransformedBlit : public ::sun::java2d::loops::TransformBlit {
	$class(XrSwToPMTransformedBlit, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	XrSwToPMTransformedBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* xform, int32_t hint, int32_t sx, int32_t sy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) override;
	::sun::java2d::loops::TransformBlit* pmToSurfaceBlit = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XrSwToPMTransformedBlit_h_