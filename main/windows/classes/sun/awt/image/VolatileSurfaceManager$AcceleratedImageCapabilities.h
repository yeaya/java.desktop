#ifndef _sun_awt_image_VolatileSurfaceManager$AcceleratedImageCapabilities_h_
#define _sun_awt_image_VolatileSurfaceManager$AcceleratedImageCapabilities_h_
//$ class sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace awt {
		namespace image {
			class VolatileSurfaceManager;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class VolatileSurfaceManager$AcceleratedImageCapabilities : public ::java::awt::ImageCapabilities {
	$class(VolatileSurfaceManager$AcceleratedImageCapabilities, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	VolatileSurfaceManager$AcceleratedImageCapabilities();
	void init$(::sun::awt::image::VolatileSurfaceManager* this$0);
	virtual bool isAccelerated() override;
	virtual bool isTrueVolatile() override;
	::sun::awt::image::VolatileSurfaceManager* this$0 = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_VolatileSurfaceManager$AcceleratedImageCapabilities_h_