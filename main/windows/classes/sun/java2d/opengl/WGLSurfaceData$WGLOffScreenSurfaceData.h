#ifndef _sun_java2d_opengl_WGLSurfaceData$WGLOffScreenSurfaceData_h_
#define _sun_java2d_opengl_WGLSurfaceData$WGLOffScreenSurfaceData_h_
//$ class sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData
//$ extends sun.java2d.opengl.WGLSurfaceData

#include <sun/java2d/opengl/WGLSurfaceData.h>

namespace java {
	namespace awt {
		class Image;
		class Rectangle;
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

class WGLSurfaceData$WGLOffScreenSurfaceData : public ::sun::java2d::opengl::WGLSurfaceData {
	$class(WGLSurfaceData$WGLOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::WGLSurfaceData)
public:
	WGLSurfaceData$WGLOffScreenSurfaceData();
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::opengl::WGLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	::java::awt::Image* offscreenImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLSurfaceData$WGLOffScreenSurfaceData_h_