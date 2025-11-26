#ifndef _sun_awt_image_ImageCache$ImageSoftReference_h_
#define _sun_awt_image_ImageCache$ImageSoftReference_h_
//$ class sun.awt.image.ImageCache$ImageSoftReference
//$ extends java.lang.ref.SoftReference

#include <java/lang/ref/SoftReference.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ImageCache$PixelsKey;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageCache$ImageSoftReference : public ::java::lang::ref::SoftReference {
	$class(ImageCache$ImageSoftReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	ImageCache$ImageSoftReference();
	void init$(::sun::awt::image::ImageCache$PixelsKey* key, ::java::awt::Image* referent, ::java::lang::ref::ReferenceQueue* q);
	::sun::awt::image::ImageCache$PixelsKey* key = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageCache$ImageSoftReference_h_