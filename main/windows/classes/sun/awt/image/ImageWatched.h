#ifndef _sun_awt_image_ImageWatched_h_
#define _sun_awt_image_ImageWatched_h_
//$ class sun.awt.image.ImageWatched
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ImageWatched$Link;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageWatched : public ::java::lang::Object {
	$class(ImageWatched, 0, ::java::lang::Object)
public:
	ImageWatched();
	void init$();
	virtual void addWatcher(::java::awt::image::ImageObserver* iw);
	virtual bool isWatcher(::java::awt::image::ImageObserver* iw);
	virtual bool isWatcherListEmpty();
	virtual void newInfo(::java::awt::Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void notifyWatcherListEmpty() {}
	virtual void removeWatcher(::java::awt::image::ImageObserver* iw);
	static ::sun::awt::image::ImageWatched$Link* endlink;
	::sun::awt::image::ImageWatched$Link* watcherList = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageWatched_h_