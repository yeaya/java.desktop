#ifndef _com_sun_beans_finder_PrimitiveTypeMap_h_
#define _com_sun_beans_finder_PrimitiveTypeMap_h_
//$ class com.sun.beans.finder.PrimitiveTypeMap
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
			namespace finder {

class PrimitiveTypeMap : public ::java::lang::Object {
	$class(PrimitiveTypeMap, 0, ::java::lang::Object)
public:
	PrimitiveTypeMap();
	void init$();
	static $Class* getType($String* name);
	static ::java::util::Map* map;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_PrimitiveTypeMap_h_