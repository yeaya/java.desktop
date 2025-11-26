#ifndef _sun_java2d_x11_X11VolatileSurfaceManager_h_
#define _sun_java2d_x11_X11VolatileSurfaceManager_h_
//$ class sun.java2d.x11.X11VolatileSurfaceManager
//$ extends sun.awt.image.VolatileSurfaceManager

#include <sun/awt/image/VolatileSurfaceManager.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class ImageCapabilities;
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
		namespace x11 {

class X11VolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(X11VolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	X11VolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual ::java::awt::ImageCapabilities* getCapabilities(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual bool isAccelerationEnabled() override;
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc) override;
	bool accelerationEnabled = false;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11VolatileSurfaceManager_h_