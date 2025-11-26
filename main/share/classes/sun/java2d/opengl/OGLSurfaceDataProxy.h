#ifndef _sun_java2d_opengl_OGLSurfaceDataProxy_h_
#define _sun_java2d_opengl_OGLSurfaceDataProxy_h_
//$ class sun.java2d.opengl.OGLSurfaceDataProxy
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
		namespace opengl {
			class OGLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLSurfaceDataProxy : public ::sun::java2d::SurfaceDataProxy {
	$class(OGLSurfaceDataProxy, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy)
public:
	OGLSurfaceDataProxy();
	void init$(::sun::java2d::opengl::OGLGraphicsConfig* oglgc, int32_t transparency);
	static ::sun::java2d::SurfaceDataProxy* createProxy(::sun::java2d::SurfaceData* srcData, ::sun::java2d::opengl::OGLGraphicsConfig* dstConfig);
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
	::sun::java2d::opengl::OGLGraphicsConfig* oglgc = nullptr;
	int32_t transparency = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLSurfaceDataProxy_h_