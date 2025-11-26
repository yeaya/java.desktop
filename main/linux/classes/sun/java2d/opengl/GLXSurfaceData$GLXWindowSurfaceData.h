#ifndef _sun_java2d_opengl_GLXSurfaceData$GLXWindowSurfaceData_h_
#define _sun_java2d_opengl_GLXSurfaceData$GLXWindowSurfaceData_h_
//$ class sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData
//$ extends sun.java2d.opengl.GLXSurfaceData

#include <sun/java2d/opengl/GLXSurfaceData.h>

namespace java {
	namespace awt {
		class Rectangle;
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

class GLXSurfaceData$GLXWindowSurfaceData : public ::sun::java2d::opengl::GLXSurfaceData {
	$class(GLXSurfaceData$GLXWindowSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::GLXSurfaceData)
public:
	GLXSurfaceData$GLXWindowSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::opengl::GLXGraphicsConfig* gc);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	int32_t scale = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXSurfaceData$GLXWindowSurfaceData_h_