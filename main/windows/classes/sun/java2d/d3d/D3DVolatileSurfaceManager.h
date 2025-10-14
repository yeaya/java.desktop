#ifndef _sun_java2d_d3d_D3DVolatileSurfaceManager_h_
#define _sun_java2d_d3d_D3DVolatileSurfaceManager_h_
//$ class sun.java2d.d3d.D3DVolatileSurfaceManager
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
		namespace d3d {

class D3DVolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(D3DVolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	D3DVolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	static void handleVItoScreenOp(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst);
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual void initContents() override;
	virtual bool isAccelerationEnabled() override;
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc) override;
	virtual void restoreAcceleratedSurface() override;
	virtual ::sun::java2d::SurfaceData* restoreContents() override;
	virtual void setAccelerationEnabled(bool accelerationEnabled);
	void setRestoreCountdown(int32_t count);
	bool accelerationEnabled = false;
	int32_t restoreCountdown = 0;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DVolatileSurfaceManager_h_