#ifndef _com_sun_beans_finder_PrimitiveWrapperMap_h_
#define _com_sun_beans_finder_PrimitiveWrapperMap_h_
//$ class com.sun.beans.finder.PrimitiveWrapperMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class PrimitiveWrapperMap : public ::java::lang::Object {
	$class(PrimitiveWrapperMap, 0, ::java::lang::Object)
public:
	PrimitiveWrapperMap();
	void init$();
	static $Class* getType($String* name);
	static void replacePrimitivesWithWrappers($ClassArray* types);
	static ::java::util::Map* map;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_PrimitiveWrapperMap_h_