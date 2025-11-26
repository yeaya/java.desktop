#ifndef _sun_java2d_xr_XRVolatileSurfaceManager_h_
#define _sun_java2d_xr_XRVolatileSurfaceManager_h_
//$ class sun.java2d.xr.XRVolatileSurfaceManager
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
		namespace xr {

class XRVolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(XRVolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	XRVolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual ::java::awt::ImageCapabilities* getCapabilities(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual bool isAccelerationEnabled() override;
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc) override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRVolatileSurfaceManager_h_