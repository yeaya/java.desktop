#ifndef _com_sun_beans_introspect_MethodInfo_h_
#define _com_sun_beans_introspect_MethodInfo_h_
//$ class com.sun.beans.introspect.MethodInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class MethodInfo : public ::java::lang::Object {
	$class(MethodInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodInfo();
	void init$(::java::lang::reflect::Method* method, $Class* type);
	void init$(::java::lang::reflect::Method* method, ::java::lang::reflect::Type* type);
	static ::java::util::List* get($Class* type);
	bool isThrow($Class* exception);
	static $Class* resolve(::java::lang::reflect::Method* method, ::java::lang::reflect::Type* type);
	::java::lang::reflect::Method* method = nullptr;
	$Class* type = nullptr;
};

			} // introspect
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_introspect_MethodInfo_h_