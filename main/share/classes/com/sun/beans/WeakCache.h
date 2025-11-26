#ifndef _com_sun_beans_WeakCache_h_
#define _com_sun_beans_WeakCache_h_
//$ class com.sun.beans.WeakCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace beans {

class WeakCache : public ::java::lang::Object {
	$class(WeakCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WeakCache();
	void init$();
	void clear();
	$Object* get(Object$* key);
	void put(Object$* key, Object$* value);
	::java::util::Map* map = nullptr;
};

		} // beans
	} // sun
} // com

#endif // _com_sun_beans_WeakCache_h_