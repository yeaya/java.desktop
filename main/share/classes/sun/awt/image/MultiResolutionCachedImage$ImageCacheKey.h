#ifndef _sun_awt_image_MultiResolutionCachedImage$ImageCacheKey_h_
#define _sun_awt_image_MultiResolutionCachedImage$ImageCacheKey_h_
//$ class sun.awt.image.MultiResolutionCachedImage$ImageCacheKey
//$ extends sun.awt.image.ImageCache$PixelsKey

#include <sun/awt/image/ImageCache$PixelsKey.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionCachedImage$ImageCacheKey : public ::sun::awt::image::ImageCache$PixelsKey {
	$class(MultiResolutionCachedImage$ImageCacheKey, $NO_CLASS_INIT, ::sun::awt::image::ImageCache$PixelsKey)
public:
	MultiResolutionCachedImage$ImageCacheKey();
	void init$(::java::awt::Image* baseImage, int32_t w, int32_t h);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getPixelCount() override;
	int32_t hash();
	virtual int32_t hashCode() override;
	int32_t pixelCount = 0;
	int32_t hash$ = 0;
	int32_t w = 0;
	int32_t h = 0;
	::java::awt::Image* baseImage = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_MultiResolutionCachedImage$ImageCacheKey_h_