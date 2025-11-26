#ifndef _com_sun_beans_finder_MethodFinder_h_
#define _com_sun_beans_finder_MethodFinder_h_
//$ class com.sun.beans.finder.MethodFinder
//$ extends com.sun.beans.finder.AbstractFinder

#include <com/sun/beans/finder/AbstractFinder.h>
#include <java/lang/Array.h>

#pragma push_macro("CACHE")
#undef CACHE

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
	namespace lang {
		namespace reflect {
			class Executable;
			class Method;
			class Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class MethodFinder : public ::com::sun::beans::finder::AbstractFinder {
	$class(MethodFinder, 0, ::com::sun::beans::finder::AbstractFinder)
public:
	MethodFinder();
	void init$($String* name, $ClassArray* args);
	static ::java::lang::reflect::Method* findAccessibleMethod(::java::lang::reflect::Method* method);
	static ::java::lang::reflect::Method* findAccessibleMethod(::java::lang::reflect::Method* method, ::java::lang::reflect::Type* generic);
	static ::java::lang::reflect::Method* findInstanceMethod($Class* type, $String* name, $ClassArray* args);
	static ::java::lang::reflect::Method* findMethod($Class* type, $String* name, $ClassArray* args);
	static ::java::lang::reflect::Method* findStaticMethod($Class* type, $String* name, $ClassArray* args);
	bool isValid(::java::lang::reflect::Method* method);
	virtual bool isValid(::java::lang::reflect::Executable* method) override;
	static ::com::sun::beans::util::Cache* CACHE;
	$String* name = nullptr;
};

			} // finder
		} // beans
	} // sun
} // com

#pragma pop_macro("CACHE")

#endif // _com_sun_beans_finder_MethodFinder_h_