#ifndef _com_sun_beans_util_Cache$Kind$2_h_
#define _com_sun_beans_util_Cache$Kind$2_h_
//$ class com.sun.beans.util.Cache$Kind$2
//$ extends com.sun.beans.util.Cache$Kind

#include <com/sun/beans/util/Cache$Kind.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache$Ref;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

class Cache$Kind$2 : public ::com::sun::beans::util::Cache$Kind {
	$class(Cache$Kind$2, $NO_CLASS_INIT, ::com::sun::beans::util::Cache$Kind)
public:
	Cache$Kind$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::beans::util::Cache$Ref* create(Object$* owner, Object$* referent, ::java::lang::ref::ReferenceQueue* queue) override;
};

			} // util
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_util_Cache$Kind$2_h_