#ifndef _com_sun_beans_introspect_EventSetInfo_h_
#define _com_sun_beans_introspect_EventSetInfo_h_
//$ class com.sun.beans.introspect.EventSetInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {
				class MethodInfo;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class EventSetInfo : public ::java::lang::Object {
	$class(EventSetInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventSetInfo();
	void init$();
	static ::java::util::Map* get($Class* type);
	::java::lang::reflect::Method* getAddMethod();
	::java::lang::reflect::Method* getGetMethod();
	static ::com::sun::beans::introspect::MethodInfo* getInfo(::com::sun::beans::introspect::MethodInfo* info, ::java::lang::reflect::Method* method, int32_t prefix, int32_t postfix);
	static ::com::sun::beans::introspect::EventSetInfo* getInfo(::java::util::Map* map, $String* key);
	$Class* getListenerType();
	::java::lang::reflect::Method* getRemoveMethod();
	bool initialize();
	bool isUnicast();
	::com::sun::beans::introspect::MethodInfo* add = nullptr;
	::com::sun::beans::introspect::MethodInfo* remove = nullptr;
	::com::sun::beans::introspect::MethodInfo* get$ = nullptr;
};

			} // introspect
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_introspect_EventSetInfo_h_