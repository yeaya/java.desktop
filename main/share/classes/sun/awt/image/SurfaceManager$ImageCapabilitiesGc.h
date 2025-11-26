#ifndef _sun_awt_image_SurfaceManager$ImageCapabilitiesGc_h_
#define _sun_awt_image_SurfaceManager$ImageCapabilitiesGc_h_
//$ class sun.awt.image.SurfaceManager$ImageCapabilitiesGc
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SurfaceManager;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class SurfaceManager$ImageCapabilitiesGc : public ::java::awt::ImageCapabilities {
	$class(SurfaceManager$ImageCapabilitiesGc, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	SurfaceManager$ImageCapabilitiesGc();
	void init$(::sun::awt::image::SurfaceManager* this$0, ::java::awt::GraphicsConfiguration* gc);
	virtual bool isAccelerated() override;
	::sun::awt::image::SurfaceManager* this$0 = nullptr;
	::java::awt::GraphicsConfiguration* gc = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SurfaceManager$ImageCapabilitiesGc_h_