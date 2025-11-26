#ifndef _sun_awt_X11_XPropertyCache_h_
#define _sun_awt_X11_XPropertyCache_h_
//$ class sun.awt.X11.XPropertyCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XPropertyCache$PropertyCacheEntry;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XPropertyCache : public ::java::lang::Object {
	$class(XPropertyCache, 0, ::java::lang::Object)
public:
	XPropertyCache();
	void init$();
	static void clearCache(int64_t window);
	static void clearCache(int64_t window, ::sun::awt::X11::XAtom* property);
	static ::sun::awt::X11::XPropertyCache$PropertyCacheEntry* getCacheEntry(int64_t window, ::sun::awt::X11::XAtom* property);
	static bool isCached(int64_t window, ::sun::awt::X11::XAtom* property);
	static bool isCachingSupported();
	static void storeCache(::sun::awt::X11::XPropertyCache$PropertyCacheEntry* entry, int64_t window, ::sun::awt::X11::XAtom* property);
	static ::java::util::Map* windowToMap;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XPropertyCache_h_