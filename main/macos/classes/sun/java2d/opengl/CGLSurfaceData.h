#ifndef _sun_java2d_opengl_CGLSurfaceData_h_
#define _sun_java2d_opengl_CGLSurfaceData_h_
//$ class sun.java2d.opengl.CGLSurfaceData
//$ extends sun.java2d.opengl.OGLSurfaceData

#include <sun/java2d/opengl/OGLSurfaceData.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
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
	namespace java2d {
		namespace opengl {
			class CGLGraphicsConfig;
			class CGLLayer;
			class CGLSurfaceData$CGLLayerSurfaceData;
			class CGLSurfaceData$CGLOffScreenSurfaceData;
			class OGLGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLSurfaceData : public ::sun::java2d::opengl::OGLSurfaceData {
	$class(CGLSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLSurfaceData)
public:
	CGLSurfaceData();
	void init$(::sun::java2d::opengl::CGLLayer* layer, ::sun::java2d::opengl::CGLGraphicsConfig* gc, ::java::awt::image::ColorModel* cm, int32_t type, int32_t width, int32_t height);
	virtual void clearWindow();
	static ::sun::java2d::opengl::CGLSurfaceData$CGLLayerSurfaceData* createData(::sun::java2d::opengl::CGLLayer* layer);
	static ::sun::java2d::opengl::CGLSurfaceData$CGLOffScreenSurfaceData* createData(::sun::java2d::opengl::CGLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int32_t type);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	void initOps(::sun::java2d::opengl::OGLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque);
	int32_t scale = 0;
	int32_t width = 0;
	int32_t height = 0;
	::sun::java2d::opengl::CGLGraphicsConfig* graphicsConfig = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLSurfaceData_h_