#ifndef _sun_java2d_opengl_WGLSurfaceData$WGLWindowSurfaceData_h_
#define _sun_java2d_opengl_WGLSurfaceData$WGLWindowSurfaceData_h_
//$ class sun.java2d.opengl.WGLSurfaceData$WGLWindowSurfaceData
//$ extends sun.java2d.opengl.WGLSurfaceData

#include <sun/java2d/opengl/WGLSurfaceData.h>

namespace java {
	namespace awt {
		class Rectangle;
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

class WGLSurfaceData$WGLWindowSurfaceData : public ::sun::java2d::opengl::WGLSurfaceData {
	$class(WGLSurfaceData$WGLWindowSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::WGLSurfaceData)
public:
	WGLSurfaceData$WGLWindowSurfaceData();
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::opengl::WGLGraphicsConfig* gc);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLSurfaceData$WGLWindowSurfaceData_h_