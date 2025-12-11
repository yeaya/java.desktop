#ifndef _sun_java2d_opengl_CGLVolatileSurfaceManager_h_
#define _sun_java2d_opengl_CGLVolatileSurfaceManager_h_
//$ class sun.java2d.opengl.CGLVolatileSurfaceManager
//$ extends sun.awt.image.VolatileSurfaceManager

#include <sun/awt/image/VolatileSurfaceManager.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SunVolatileImage;
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

class CGLVolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(CGLVolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	CGLVolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual void initContents() override;
	virtual bool isAccelerationEnabled() override;
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc) override;
	bool accelerationEnabled = false;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLVolatileSurfaceManager_h_