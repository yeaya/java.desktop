#ifndef _sun_java2d_opengl_CGLSurfaceData$CGLOffScreenSurfaceData_h_
#define _sun_java2d_opengl_CGLSurfaceData$CGLOffScreenSurfaceData_h_
//$ class sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData
//$ extends sun.java2d.opengl.CGLSurfaceData

#include <sun/java2d/opengl/CGLSurfaceData.h>

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
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class CGLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLSurfaceData$CGLOffScreenSurfaceData : public ::sun::java2d::opengl::CGLSurfaceData {
	$class(CGLSurfaceData$CGLOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::CGLSurfaceData)
public:
	CGLSurfaceData$CGLOffScreenSurfaceData();
	void init$(::sun::java2d::opengl::CGLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	::java::awt::Image* offscreenImage = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLSurfaceData$CGLOffScreenSurfaceData_h_