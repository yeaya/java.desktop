#ifndef _sun_java2d_opengl_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_h_
#define _sun_java2d_opengl_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_h_
//$ class sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData
//$ extends sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData

#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>

namespace java {
	namespace awt {
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
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class GLXGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class GLXSurfaceData$GLXVSyncOffScreenSurfaceData : public ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData {
	$class(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData)
public:
	GLXSurfaceData$GLXVSyncOffScreenSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::opengl::GLXGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual void flush() override;
	virtual ::sun::java2d::SurfaceData* getFlipSurface();
	::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData* flipSurface = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXSurfaceData$GLXVSyncOffScreenSurfaceData_h_