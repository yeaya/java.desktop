#ifndef _sun_java2d_d3d_D3DSurfaceDataProxy_h_
#define _sun_java2d_d3d_D3DSurfaceDataProxy_h_
//$ class sun.java2d.d3d.D3DSurfaceDataProxy
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
		namespace d3d {
			class D3DGraphicsConfig;
		}
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
		namespace d3d {

class D3DSurfaceDataProxy : public ::sun::java2d::SurfaceDataProxy {
	$class(D3DSurfaceDataProxy, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy)
public:
	D3DSurfaceDataProxy();
	void init$(::sun::java2d::d3d::D3DGraphicsConfig* d3dgc, int32_t transparency);
	static ::sun::java2d::SurfaceDataProxy* createProxy(::sun::java2d::SurfaceData* srcData, ::sun::java2d::d3d::D3DGraphicsConfig* dstConfig);
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
	::sun::java2d::d3d::D3DGraphicsConfig* d3dgc = nullptr;
	int32_t transparency = 0;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceDataProxy_h_