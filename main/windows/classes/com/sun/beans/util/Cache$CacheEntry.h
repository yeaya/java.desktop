#ifndef _com_sun_beans_util_Cache$CacheEntry_h_
#define _com_sun_beans_util_Cache$CacheEntry_h_
//$ class com.sun.beans.util.Cache$CacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache;
				class Cache$Ref;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

class Cache$CacheEntry : public ::java::lang::Object {
	$class(Cache$CacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Cache$CacheEntry();
	void init$(::com::sun::beans::util::Cache* this$0, int32_t hash, Object$* key, Object$* value, ::com::sun::beans::util::Cache$CacheEntry* next);
	bool matches(int32_t hash, Object$* object);
	void unlink();
	::com::sun::beans::util::Cache* this$0 = nullptr;
	int32_t hash = 0;
	::com::sun::beans::util::Cache$Ref* key = nullptr;
	::com::sun::beans::util::Cache$Ref* value = nullptr;
	$volatile(::com::sun::beans::util::Cache$CacheEntry*) next = nullptr;
};

			} // util
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_util_Cache$CacheEntry_h_