#ifndef _com_sun_beans_TypeResolver_h_
#define _com_sun_beans_TypeResolver_h_
//$ class com.sun.beans.TypeResolver
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CACHE")
#undef CACHE

namespace com {
	namespace sun {
		namespace beans {
			class WeakCache;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Type;
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

class TypeResolver : public ::java::lang::Object {
	$class(TypeResolver, 0, ::java::lang::Object)
public:
	TypeResolver();
	void init$();
	static $Class* erase(::java::lang::reflect::Type* type);
	static $ClassArray* erase($Array<::java::lang::reflect::Type>* types);
	static ::java::lang::reflect::Type* fixGenericArray(::java::lang::reflect::Type* type);
	static ::java::lang::reflect::Type* getActualType($Class* inClass);
	static void prepare(::java::util::Map* map, ::java::lang::reflect::Type* type);
	static ::java::lang::reflect::Type* resolve(::java::lang::reflect::Type* actual, ::java::lang::reflect::Type* formal);
	static $Array<::java::lang::reflect::Type>* resolve(::java::lang::reflect::Type* actual, $Array<::java::lang::reflect::Type>* formals);
	static ::java::lang::reflect::Type* resolveInClass($Class* inClass, ::java::lang::reflect::Type* type);
	static $Array<::java::lang::reflect::Type>* resolveInClass($Class* inClass, $Array<::java::lang::reflect::Type>* types);
	static bool $assertionsDisabled;
	static ::com::sun::beans::WeakCache* CACHE;
};

		} // beans
	} // sun
} // com

#pragma pop_macro("CACHE")

#endif // _com_sun_beans_TypeResolver_h_