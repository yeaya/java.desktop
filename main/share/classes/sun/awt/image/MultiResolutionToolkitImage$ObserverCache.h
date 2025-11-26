#ifndef _sun_awt_image_MultiResolutionToolkitImage$ObserverCache_h_
#define _sun_awt_image_MultiResolutionToolkitImage$ObserverCache_h_
//$ class sun.awt.image.MultiResolutionToolkitImage$ObserverCache
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionToolkitImage$ObserverCache : public ::java::awt::image::ImageObserver {
	$class(MultiResolutionToolkitImage$ObserverCache, 0, ::java::awt::image::ImageObserver)
public:
	MultiResolutionToolkitImage$ObserverCache();
	void init$(::java::awt::image::ImageObserver* obs, bool concat, ::java::awt::Image* img);
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::java::util::Map* INSTANCE;
	bool concat = false;
	::java::lang::ref::WeakReference* imageRef = nullptr;
	::java::lang::ref::WeakReference* observerRef = nullptr;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_awt_image_MultiResolutionToolkitImage$ObserverCache_h_