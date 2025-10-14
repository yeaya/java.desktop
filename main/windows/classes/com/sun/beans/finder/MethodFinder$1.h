#ifndef _com_sun_beans_finder_MethodFinder$1_h_
#define _com_sun_beans_finder_MethodFinder$1_h_
//$ class com.sun.beans.finder.MethodFinder$1
//$ extends com.sun.beans.util.Cache

#include <com/sun/beans/util/Cache.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {
				class Signature;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache$Kind;
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

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class MethodFinder$1 : public ::com::sun::beans::util::Cache {
	$class(MethodFinder$1, $NO_CLASS_INIT, ::com::sun::beans::util::Cache)
public:
	MethodFinder$1();
	void init$(::com::sun::beans::util::Cache$Kind* keyKind, ::com::sun::beans::util::Cache$Kind* valueKind);
	virtual ::java::lang::reflect::Method* create(::com::sun::beans::finder::Signature* signature);
	virtual $Object* create(Object$* signature) override;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_MethodFinder$1_h_