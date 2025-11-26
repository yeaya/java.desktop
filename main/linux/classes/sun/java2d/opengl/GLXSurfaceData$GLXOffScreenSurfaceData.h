#ifndef _sun_java2d_opengl_GLXSurfaceData$GLXOffScreenSurfaceData_h_
#define _sun_java2d_opengl_GLXSurfaceData$GLXOffScreenSurfaceData_h_
//$ class sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData
//$ extends sun.java2d.opengl.GLXSurfaceData

#include <sun/java2d/opengl/GLXSurfaceData.h>

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

class GLXSurfaceData$GLXOffScreenSurfaceData : public ::sun::java2d::opengl::GLXSurfaceData {
	$class(GLXSurfaceData$GLXOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::GLXSurfaceData)
public:
	GLXSurfaceData$GLXOffScreenSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::opengl::GLXGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	::java::awt::Image* offscreenImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t scale = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXSurfaceData$GLXOffScreenSurfaceData_h_