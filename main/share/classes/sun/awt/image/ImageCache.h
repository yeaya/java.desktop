#ifndef _sun_awt_image_ImageCache_h_
#define _sun_awt_image_ImageCache_h_
//$ class sun.awt.image.ImageCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace java {
	namespace util {
		class LinkedHashMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
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

class ImageCache : public ::java::lang::Object {
	$class(ImageCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageCache();
	void init$(int32_t maxPixelCount);
	void init$();
	void flush();
	::java::awt::Image* getImage(::sun::awt::image::ImageCache$PixelsKey* key);
	static ::sun::awt::image::ImageCache* getInstance();
	static ::sun::awt::image::ImageCache* lambda$getInstance$0();
	void setImage(::sun::awt::image::ImageCache$PixelsKey* key, ::java::awt::Image* image);
	::java::util::LinkedHashMap* map = nullptr;
	int32_t maxPixelCount = 0;
	int32_t currentPixelCount = 0;
	::java::util::concurrent::locks::ReadWriteLock* lock = nullptr;
	::java::lang::ref::ReferenceQueue* referenceQueue = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageCache_h_