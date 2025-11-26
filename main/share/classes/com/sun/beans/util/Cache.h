#ifndef _com_sun_beans_util_Cache_h_
#define _com_sun_beans_util_Cache_h_
//$ class com.sun.beans.util.Cache
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache$CacheEntry;
				class Cache$Kind;
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

class Cache : public ::java::lang::Object {
	$class(Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Cache();
	void init$(::com::sun::beans::util::Cache$Kind* keyKind, ::com::sun::beans::util::Cache$Kind* valueKind);
	void init$(::com::sun::beans::util::Cache$Kind* keyKind, ::com::sun::beans::util::Cache$Kind* valueKind, bool identity);
	void clear();
	virtual $Object* create(Object$* key) {return nullptr;}
	$Object* get(Object$* key);
	$Object* getEntryValue(Object$* key, int32_t hash, ::com::sun::beans::util::Cache$CacheEntry* entry);
	int32_t hash(Object$* key);
	static int32_t index(int32_t hash, $ObjectArray* table);
	$Array<::com::sun::beans::util::Cache$CacheEntry>* newTable(int32_t size);
	void remove(Object$* key);
	void removeStaleEntries();
	void transfer($Array<::com::sun::beans::util::Cache$CacheEntry>* oldTable, $Array<::com::sun::beans::util::Cache$CacheEntry>* newTable);
	static const int32_t MAXIMUM_CAPACITY = 0x40000000; // 1 << 30
	bool identity = false;
	::com::sun::beans::util::Cache$Kind* keyKind = nullptr;
	::com::sun::beans::util::Cache$Kind* valueKind = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	$volatile($Array<::com::sun::beans::util::Cache$CacheEntry>*) table = nullptr;
	int32_t threshold = 0;
	int32_t size = 0;
};

			} // util
		} // beans
	} // sun
} // com

#pragma pop_macro("MAXIMUM_CAPACITY")

#endif // _com_sun_beans_util_Cache_h_