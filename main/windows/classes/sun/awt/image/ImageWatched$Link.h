#ifndef _sun_awt_image_ImageWatched$Link_h_
#define _sun_awt_image_ImageWatched$Link_h_
//$ class sun.awt.image.ImageWatched$Link
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

class ImageWatched$Link : public ::java::lang::Object {
	$class(ImageWatched$Link, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageWatched$Link();
	void init$();
	virtual bool isWatcher(::java::awt::image::ImageObserver* iw);
	virtual bool newInfo(::java::awt::Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual ::sun::awt::image::ImageWatched$Link* removeWatcher(::java::awt::image::ImageObserver* iw);
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageWatched$Link_h_