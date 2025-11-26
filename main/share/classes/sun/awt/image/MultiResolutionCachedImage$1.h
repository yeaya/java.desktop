#ifndef _sun_awt_image_MultiResolutionCachedImage$1_h_
#define _sun_awt_image_MultiResolutionCachedImage$1_h_
//$ class sun.awt.image.MultiResolutionCachedImage$1
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionCachedImage$1 : public ::java::awt::image::ImageObserver {
	$class(MultiResolutionCachedImage$1, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	MultiResolutionCachedImage$1();
	void init$(int32_t val$availableInfo);
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	int32_t val$availableInfo = 0;
	int32_t flags = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_MultiResolutionCachedImage$1_h_