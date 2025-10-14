#ifndef _sun_swing_CachedPainter_h_
#define _sun_swing_CachedPainter_h_
//$ class sun.swing.CachedPainter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace swing {
		class ImageCache;
	}
}

namespace sun {
	namespace swing {

class $import CachedPainter : public ::java::lang::Object {
	$class(CachedPainter, 0, ::java::lang::Object)
public:
	CachedPainter();
	void init$(int32_t cacheCount);
	virtual ::java::awt::Image* createImage(::java::awt::Component* c, int32_t w, int32_t h, ::java::awt::GraphicsConfiguration* config, $ObjectArray* args);
	virtual void flush();
	static ::sun::swing::ImageCache* getCache(Object$* key);
	::java::awt::GraphicsConfiguration* getGraphicsConfiguration(::java::awt::Component* c);
	::java::awt::Image* getImage(Object$* key, ::java::awt::Component* c, int32_t baseWidth, int32_t baseHeight, int32_t w, int32_t h, $ObjectArray* args);
	virtual void paint(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args);
	void paint0(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args);
	virtual void paintImage(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Image* image, $ObjectArray* args);
	virtual void paintToImage(::java::awt::Component* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t w, int32_t h, $ObjectArray* args) {}
	static ::java::util::Map* cacheMap;
};

	} // swing
} // sun

#endif // _sun_swing_CachedPainter_h_