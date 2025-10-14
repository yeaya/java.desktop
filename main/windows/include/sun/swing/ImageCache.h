#ifndef _sun_swing_ImageCache_h_
#define _sun_swing_ImageCache_h_
//$ class sun.swing.ImageCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace sun {
	namespace swing {
		class ImageCache$Entry;
	}
}

namespace sun {
	namespace swing {

class $import ImageCache : public ::java::lang::Object {
	$class(ImageCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageCache();
	void init$(int32_t maxCount);
	virtual void flush();
	::sun::swing::ImageCache$Entry* getEntry(Object$* key, ::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual ::java::awt::Image* getImage(Object$* key, ::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual void setImage(Object$* key, ::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args, ::java::awt::Image* image);
	virtual void setMaxCount(int32_t maxCount);
	int32_t maxCount = 0;
	::java::util::LinkedList* entries = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_ImageCache_h_