#ifndef _sun_java2d_xr_XRMaskBlit_h_
#define _sun_java2d_xr_XRMaskBlit_h_
//$ class sun.java2d.xr.XRMaskBlit
//$ extends sun.java2d.loops.MaskBlit

#include <java/lang/Array.h>
#include <sun/java2d/loops/MaskBlit.h>

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
			class CompositeType;
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

class XRMaskBlit : public ::sun::java2d::loops::MaskBlit {
	$class(XRMaskBlit, $NO_CLASS_INIT, ::sun::java2d::loops::MaskBlit)
public:
	XRMaskBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void MaskBlit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) override;
	virtual void maskBlit(int64_t srcXsdo, int64_t dstxsdo, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	static void register$();
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRMaskBlit_h_