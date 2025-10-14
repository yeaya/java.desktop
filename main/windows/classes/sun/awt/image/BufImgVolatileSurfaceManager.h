#ifndef _sun_awt_image_BufImgVolatileSurfaceManager_h_
#define _sun_awt_image_BufImgVolatileSurfaceManager_h_
//$ class sun.awt.image.BufImgVolatileSurfaceManager
//$ extends sun.awt.image.VolatileSurfaceManager

#include <sun/awt/image/VolatileSurfaceManager.h>

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
	namespace awt {
		namespace image {

class BufImgVolatileSurfaceManager : public ::sun::awt::image::VolatileSurfaceManager {
	$class(BufImgVolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::VolatileSurfaceManager)
public:
	BufImgVolatileSurfaceManager();
	using ::sun::awt::image::VolatileSurfaceManager::flush;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() override;
	virtual bool isAccelerationEnabled() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_BufImgVolatileSurfaceManager_h_