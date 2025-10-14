#ifndef _sun_java2d_opengl_WGLSurfaceData_h_
#define _sun_java2d_opengl_WGLSurfaceData_h_
//$ class sun.java2d.opengl.WGLSurfaceData
//$ extends sun.java2d.opengl.OGLSurfaceData

#include <sun/java2d/opengl/OGLSurfaceData.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class OGLGraphicsConfig;
			class WGLGraphicsConfig;
			class WGLSurfaceData$WGLOffScreenSurfaceData;
			class WGLSurfaceData$WGLWindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLSurfaceData : public ::sun::java2d::opengl::OGLSurfaceData {
	$class(WGLSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLSurfaceData)
public:
	WGLSurfaceData();
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::opengl::WGLGraphicsConfig* gc, ::java::awt::image::ColorModel* cm, int32_t type);
	static ::sun::java2d::opengl::WGLSurfaceData$WGLWindowSurfaceData* createData(::sun::awt::windows::WComponentPeer* peer);
	static ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData* createData(::sun::awt::windows::WComponentPeer* peer, ::java::awt::Image* image, int32_t type);
	static ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData* createData(::sun::java2d::opengl::WGLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int32_t type);
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	static ::sun::java2d::opengl::WGLGraphicsConfig* getGC(::sun::awt::windows::WComponentPeer* peer);
	void initOps(::sun::java2d::opengl::OGLGraphicsConfig* gc, int64_t pConfigInfo, ::sun::awt::windows::WComponentPeer* peer, int64_t hwnd);
	static bool updateWindowAccelImpl(int64_t psdops, ::sun::awt::windows::WComponentPeer* peer, int32_t w, int32_t h);
	::sun::awt::windows::WComponentPeer* peer = nullptr;
	::sun::java2d::opengl::WGLGraphicsConfig* graphicsConfig = nullptr;
	double scaleX = 0.0;
	double scaleY = 0.0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLSurfaceData_h_