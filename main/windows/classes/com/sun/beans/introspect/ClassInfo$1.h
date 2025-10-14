#ifndef _com_sun_beans_introspect_ClassInfo$1_h_
#define _com_sun_beans_introspect_ClassInfo$1_h_
//$ class com.sun.beans.introspect.ClassInfo$1
//$ extends com.sun.beans.util.Cache

#include <com/sun/beans/util/Cache.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {
				class ClassInfo;
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

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class ClassInfo$1 : public ::com::sun::beans::util::Cache {
	$class(ClassInfo$1, $NO_CLASS_INIT, ::com::sun::beans::util::Cache)
public:
	ClassInfo$1();
	void init$(::com::sun::beans::util::Cache$Kind* keyKind, ::com::sun::beans::util::Cache$Kind* valueKind);
	virtual ::com::sun::beans::introspect::ClassInfo* create($Class* type);
	virtual $Object* create(Object$* type) override;
};

			} // introspect
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_introspect_ClassInfo$1_h_