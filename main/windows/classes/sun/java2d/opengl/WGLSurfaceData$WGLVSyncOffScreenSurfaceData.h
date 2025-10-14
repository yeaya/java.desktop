#ifndef _sun_java2d_opengl_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_h_
#define _sun_java2d_opengl_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_h_
//$ class sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData
//$ extends sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData

#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>

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
		namespace windows {
			class WComponentPeer;
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
		namespace opengl {
			class WGLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLSurfaceData$WGLVSyncOffScreenSurfaceData : public ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData {
	$class(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData)
public:
	WGLSurfaceData$WGLVSyncOffScreenSurfaceData();
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::opengl::WGLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual void flush() override;
	virtual ::sun::java2d::SurfaceData* getFlipSurface();
	::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData* flipSurface = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLSurfaceData$WGLVSyncOffScreenSurfaceData_h_