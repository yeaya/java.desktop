#ifndef _javax_swing_plaf_nimbus_ImageCache_h_
#define _javax_swing_plaf_nimbus_ImageCache_h_
//$ class javax.swing.plaf.nimbus.ImageCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ImageCache : public ::java::lang::Object {
	$class(ImageCache, 0, ::java::lang::Object)
public:
	ImageCache();
	void init$();
	void init$(int32_t maxPixelCount, int32_t maxSingleImagePixelSize);
	virtual void flush();
	virtual ::java::awt::Image* getImage(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	static ::javax::swing::plaf::nimbus::ImageCache* getInstance();
	int32_t hash(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual bool isImageCachable(int32_t w, int32_t h);
	virtual bool setImage(::java::awt::Image* image, ::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	::java::util::LinkedHashMap* map = nullptr;
	int32_t maxPixelCount = 0;
	int32_t maxSingleImagePixelSize = 0;
	int32_t currentPixelCount = 0;
	::java::util::concurrent::locks::ReadWriteLock* lock = nullptr;
	::java::lang::ref::ReferenceQueue* referenceQueue = nullptr;
	static ::javax::swing::plaf::nimbus::ImageCache* instance;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_ImageCache_h_