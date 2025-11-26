#ifndef _sun_java2d_xr_XRPMBlitLoops_h_
#define _sun_java2d_xr_XRPMBlitLoops_h_
//$ class sun.java2d.xr.XRPMBlitLoops
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		namespace xr {
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRPMBlitLoops : public ::java::lang::Object {
	$class(XRPMBlitLoops, 0, ::java::lang::Object)
public:
	XRPMBlitLoops();
	void init$();
	static ::sun::java2d::xr::XRSurfaceData* cacheToTmpSurface(::sun::java2d::SurfaceData* src, ::sun::java2d::xr::XRSurfaceData* dst, int32_t w, int32_t h, int32_t sx, int32_t sy);
	static void register$();
	static ::java::lang::ref::WeakReference* argbTmpPM;
	static ::java::lang::ref::WeakReference* rgbTmpPM;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRPMBlitLoops_h_