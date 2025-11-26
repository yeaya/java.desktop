#ifndef _sun_java2d_opengl_GLXSurfaceData_h_
#define _sun_java2d_opengl_GLXSurfaceData_h_
//$ class sun.java2d.opengl.GLXSurfaceData
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
		class X11ComponentPeer;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class GLXGraphicsConfig;
			class GLXSurfaceData$GLXOffScreenSurfaceData;
			class GLXSurfaceData$GLXWindowSurfaceData;
			class OGLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class GLXSurfaceData : public ::sun::java2d::opengl::OGLSurfaceData {
	$class(GLXSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLSurfaceData)
public:
	GLXSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::opengl::GLXGraphicsConfig* gc, ::java::awt::image::ColorModel* cm, int32_t type);
	static ::sun::java2d::opengl::GLXSurfaceData$GLXWindowSurfaceData* createData(::sun::awt::X11ComponentPeer* peer);
	static ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData* createData(::sun::awt::X11ComponentPeer* peer, ::java::awt::Image* image, int32_t type);
	static ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData* createData(::sun::java2d::opengl::GLXGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int32_t type);
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	static ::sun::java2d::opengl::GLXGraphicsConfig* getGC(::sun::awt::X11ComponentPeer* peer);
	void initOps(::sun::java2d::opengl::OGLGraphicsConfig* gc, ::sun::awt::X11ComponentPeer* peer, int64_t aData);
	::sun::awt::X11ComponentPeer* peer = nullptr;
	::sun::java2d::opengl::GLXGraphicsConfig* graphicsConfig = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXSurfaceData_h_