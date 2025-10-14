#ifndef _com_sun_beans_introspect_MethodInfo$MethodOrder_h_
#define _com_sun_beans_introspect_MethodInfo$MethodOrder_h_
//$ class com.sun.beans.introspect.MethodInfo$MethodOrder
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class MethodInfo$MethodOrder : public ::java::util::Comparator {
	$class(MethodInfo$MethodOrder, 0, ::java::util::Comparator)
public:
	MethodInfo$MethodOrder();
	void init$();
	int32_t compare(::java::lang::reflect::Method* a, ::java::lang::reflect::Method* b);
	virtual int32_t compare(Object$* a, Object$* b) override;
	static ::com::sun::beans::introspect::MethodInfo$MethodOrder* instance;
};

			} // introspect
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_introspect_MethodInfo$MethodOrder_h_