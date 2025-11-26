#ifndef _com_sun_beans_util_Cache$Kind_h_
#define _com_sun_beans_util_Cache$Kind_h_
//$ class com.sun.beans.util.Cache$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SOFT")
#undef SOFT
#pragma push_macro("STRONG")
#undef STRONG
#pragma push_macro("WEAK")
#undef WEAK

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

class Cache$Kind : public ::java::lang::Enum {
	$class(Cache$Kind, 0, ::java::lang::Enum)
public:
	Cache$Kind();
	static $Array<::com::sun::beans::util::Cache$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::beans::util::Cache$Ref* create(Object$* owner, Object$* referent, ::java::lang::ref::ReferenceQueue* queue) {return nullptr;}
	static ::com::sun::beans::util::Cache$Kind* valueOf($String* name);
	static $Array<::com::sun::beans::util::Cache$Kind>* values();
	static ::com::sun::beans::util::Cache$Kind* STRONG;
	static ::com::sun::beans::util::Cache$Kind* SOFT;
	static ::com::sun::beans::util::Cache$Kind* WEAK;
	static $Array<::com::sun::beans::util::Cache$Kind>* $VALUES;
};

			} // util
		} // beans
	} // sun
} // com

#pragma pop_macro("SOFT")
#pragma pop_macro("STRONG")
#pragma pop_macro("WEAK")

#endif // _com_sun_beans_util_Cache$Kind_h_