#ifndef _com_sun_beans_finder_ConstructorFinder_h_
#define _com_sun_beans_finder_ConstructorFinder_h_
//$ class com.sun.beans.finder.ConstructorFinder
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
			class Constructor;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class ConstructorFinder : public ::com::sun::beans::finder::AbstractFinder {
	$class(ConstructorFinder, 0, ::com::sun::beans::finder::AbstractFinder)
public:
	ConstructorFinder();
	void init$($ClassArray* args);
	static ::java::lang::reflect::Constructor* findConstructor($Class* type, $ClassArray* args);
	static ::com::sun::beans::util::Cache* CACHE;
};

			} // finder
		} // beans
	} // sun
} // com

#pragma pop_macro("CACHE")

#endif // _com_sun_beans_finder_ConstructorFinder_h_