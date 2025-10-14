#ifndef _sun_awt_image_ImageWatched$WeakLink_h_
#define _sun_awt_image_ImageWatched$WeakLink_h_
//$ class sun.awt.image.ImageWatched$WeakLink
//$ extends sun.awt.image.ImageWatched$Link

#include <sun/awt/image/ImageWatched$Link.h>

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
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ImageWatched$AccWeakReference;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageWatched$WeakLink : public ::sun::awt::image::ImageWatched$Link {
	$class(ImageWatched$WeakLink, $NO_CLASS_INIT, ::sun::awt::image::ImageWatched$Link)
public:
	ImageWatched$WeakLink();
	void init$(::java::awt::image::ImageObserver* obs, ::sun::awt::image::ImageWatched$Link* next);
	virtual bool isWatcher(::java::awt::image::ImageObserver* iw) override;
	static ::java::lang::Boolean* lambda$update$0(::java::awt::image::ImageObserver* iw, ::java::awt::Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual bool newInfo(::java::awt::Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::awt::image::ImageWatched$Link* removeWatcher(::java::awt::image::ImageObserver* iw) override;
	static bool update(::java::awt::image::ImageObserver* iw, ::java::security::AccessControlContext* acc, ::java::awt::Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h);
	::sun::awt::image::ImageWatched$AccWeakReference* myref = nullptr;
	::sun::awt::image::ImageWatched$Link* next = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageWatched$WeakLink_h_