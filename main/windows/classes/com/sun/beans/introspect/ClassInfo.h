#ifndef _com_sun_beans_introspect_ClassInfo_h_
#define _com_sun_beans_introspect_ClassInfo_h_
//$ class com.sun.beans.introspect.ClassInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CACHE")
#undef CACHE
#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class ClassInfo : public ::java::lang::Object {
	$class(ClassInfo, 0, ::java::lang::Object)
public:
	ClassInfo();
	void init$($Class* type);
	static void clear();
	static ::com::sun::beans::introspect::ClassInfo* get($Class* type);
	::java::util::Map* getEventSets();
	::java::util::List* getMethods();
	::java::util::Map* getProperties();
	static void remove($Class* clz);
	static ::com::sun::beans::introspect::ClassInfo* DEFAULT;
	static ::com::sun::beans::util::Cache* CACHE;
	$Object* mutex = nullptr;
	$Class* type = nullptr;
	::java::util::List* methods = nullptr;
	::java::util::Map* properties = nullptr;
	::java::util::Map* eventSets = nullptr;
};

			} // introspect
		} // beans
	} // sun
} // com

#pragma pop_macro("CACHE")
#pragma pop_macro("DEFAULT")

#endif // _com_sun_beans_introspect_ClassInfo_h_