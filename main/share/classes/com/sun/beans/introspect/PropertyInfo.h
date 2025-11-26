#ifndef _com_sun_beans_introspect_PropertyInfo_h_
#define _com_sun_beans_introspect_PropertyInfo_h_
//$ class com.sun.beans.introspect.PropertyInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VETO_EXCEPTION")
#undef VETO_EXCEPTION
#pragma push_macro("VETO_EXCEPTION_NAME")
#undef VETO_EXCEPTION_NAME

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {
				class MethodInfo;
				class PropertyInfo$Name;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
			class Type;
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

class PropertyInfo : public ::java::lang::Object {
	$class(PropertyInfo, 0, ::java::lang::Object)
public:
	PropertyInfo();
	void init$();
	static ::java::util::List* add(::java::util::List* list, ::java::lang::reflect::Method* method, ::java::lang::reflect::Type* type);
	$Object* get(::com::sun::beans::introspect::PropertyInfo$Name* name);
	static ::java::util::Map* get($Class* type);
	::com::sun::beans::introspect::PropertyInfo* getIndexed();
	static ::com::sun::beans::introspect::PropertyInfo* getInfo(::java::util::Map* map, $String* key, bool indexed);
	$Class* getPropertyType();
	::java::lang::reflect::Method* getReadMethod();
	::java::lang::reflect::Method* getWriteMethod();
	bool initialize();
	bool initialize(::com::sun::beans::introspect::MethodInfo* info);
	bool is(::com::sun::beans::introspect::PropertyInfo$Name* name);
	bool isConstrained();
	static bool isPrefix($String* name, $String* prefix);
	void put(::com::sun::beans::introspect::PropertyInfo$Name* name, bool value);
	void put(::com::sun::beans::introspect::PropertyInfo$Name* name, $String* value);
	void put(::com::sun::beans::introspect::PropertyInfo$Name* name, Object$* value);
	static $String* VETO_EXCEPTION_NAME;
	static $Class* VETO_EXCEPTION;
	$Class* type = nullptr;
	::com::sun::beans::introspect::MethodInfo* read = nullptr;
	::com::sun::beans::introspect::MethodInfo* write = nullptr;
	::com::sun::beans::introspect::PropertyInfo* indexed = nullptr;
	::java::util::List* readList = nullptr;
	::java::util::List* writeList = nullptr;
	::java::util::Map* map = nullptr;
};

			} // introspect
		} // beans
	} // sun
} // com

#pragma pop_macro("VETO_EXCEPTION")
#pragma pop_macro("VETO_EXCEPTION_NAME")

#endif // _com_sun_beans_introspect_PropertyInfo_h_