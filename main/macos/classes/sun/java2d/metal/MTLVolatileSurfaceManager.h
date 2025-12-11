#ifndef _sun_java2d_metal_MTLVolatileSurfaceManager_h_
#define _sun_java2d_metal_MTLVolatileSurfaceManager_h_
//$ class sun.java2d.metal.MTLVolatileSurfaceManager
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
		namespace metal {

class MTLVolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(MTLVolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	MTLVolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual void initContents() override;
	virtual bool isAccelerationEnabled() override;
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc) override;
	bool accelerationEnabled = false;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLVolatileSurfaceManager_h_