#ifndef _sun_java2d_metal_MTLSurfaceDataProxy_h_
#define _sun_java2d_metal_MTLSurfaceDataProxy_h_
//$ class sun.java2d.metal.MTLSurfaceDataProxy
//$ extends sun.java2d.SurfaceDataProxy

#include <sun/java2d/SurfaceDataProxy.h>

namespace java {
	namespace awt {
		class Color;
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
		}
	}
}
namespace sun {
	namespace java2d {
		namespace metal {
			class MTLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLSurfaceDataProxy : public ::sun::java2d::SurfaceDataProxy {
	$class(MTLSurfaceDataProxy, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy)
public:
	MTLSurfaceDataProxy();
	void init$(::sun::java2d::metal::MTLGraphicsConfig* mtlgc, int32_t transparency);
	static ::sun::java2d::SurfaceDataProxy* createProxy(::sun::java2d::SurfaceData* srcData, ::sun::java2d::metal::MTLGraphicsConfig* dstConfig);
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
	::sun::java2d::metal::MTLGraphicsConfig* mtlgc = nullptr;
	int32_t transparency = 0;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceDataProxy_h_