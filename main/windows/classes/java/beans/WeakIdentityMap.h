#ifndef _java_beans_WeakIdentityMap_h_
#define _java_beans_WeakIdentityMap_h_
//$ class java.beans.WeakIdentityMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY
#pragma push_macro("NULL")
#undef NULL

namespace java {
	namespace beans {
		class WeakIdentityMap$Entry;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace beans {

class WeakIdentityMap : public ::java::lang::Object {
	$class(WeakIdentityMap, 0, ::java::lang::Object)
public:
	WeakIdentityMap();
	void init$();
	virtual $Object* create(Object$* key) {return nullptr;}
	virtual $Object* get(Object$* key);
	static int32_t getIndex($Array<::java::beans::WeakIdentityMap$Entry>* table, int32_t hash);
	$Array<::java::beans::WeakIdentityMap$Entry>* newTable(int32_t length);
	void removeStaleEntries();
	void transfer($Array<::java::beans::WeakIdentityMap$Entry>* oldTable, $Array<::java::beans::WeakIdentityMap$Entry>* newTable);
	static const int32_t MAXIMUM_CAPACITY = 0x40000000; // 1 << 30
	static $Object* NULL;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	$volatile($Array<::java::beans::WeakIdentityMap$Entry>*) table = nullptr;
	int32_t threshold = 0;
	int32_t size = 0;
};

	} // beans
} // java

#pragma pop_macro("MAXIMUM_CAPACITY")
#pragma pop_macro("NULL")

#endif // _java_beans_WeakIdentityMap_h_