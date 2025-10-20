#include <com/sun/beans/util/Cache.h>

#include <com/sun/beans/util/Cache$CacheEntry.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef MAXIMUM_CAPACITY
#undef MAX_VALUE

using $Cache$CacheEntryArray = $Array<::com::sun::beans::util::Cache$CacheEntry>;
using $Cache$CacheEntry = ::com::sun::beans::util::Cache$CacheEntry;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache_FieldInfo_[] = {
	{"MAXIMUM_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Cache, MAXIMUM_CAPACITY)},
	{"identity", "Z", nullptr, $PRIVATE | $FINAL, $field(Cache, identity)},
	{"keyKind", "Lcom/sun/beans/util/Cache$Kind;", nullptr, $PRIVATE | $FINAL, $field(Cache, keyKind)},
	{"valueKind", "Lcom/sun/beans/util/Cache$Kind;", nullptr, $PRIVATE | $FINAL, $field(Cache, valueKind)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(Cache, queue)},
	{"table", "[Lcom/sun/beans/util/Cache$CacheEntry;", "[Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;", $PRIVATE | $VOLATILE, $field(Cache, table)},
	{"threshold", "I", nullptr, $PRIVATE, $field(Cache, threshold)},
	{"size", "I", nullptr, $PRIVATE, $field(Cache, size)},
	{}
};

$MethodInfo _Cache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, $PUBLIC, $method(static_cast<void(Cache::*)($Cache$Kind*,$Cache$Kind*)>(&Cache::init$))},
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Cache::*)($Cache$Kind*,$Cache$Kind*,bool)>(&Cache::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Cache::*)()>(&Cache::clear))},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(Cache::*)(Object$*)>(&Cache::get))},
	{"getEntryValue", "(Ljava/lang/Object;ILcom/sun/beans/util/Cache$CacheEntry;)Ljava/lang/Object;", "(TK;ILcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;)TV;", $PRIVATE, $method(static_cast<$Object*(Cache::*)(Object$*,int32_t,$Cache$CacheEntry*)>(&Cache::getEntryValue))},
	{"hash", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Cache::*)(Object$*)>(&Cache::hash))},
	{"index", "(I[Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$ObjectArray*)>(&Cache::index))},
	{"newTable", "(I)[Lcom/sun/beans/util/Cache$CacheEntry;", "(I)[Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;", $PRIVATE, $method(static_cast<$Cache$CacheEntryArray*(Cache::*)(int32_t)>(&Cache::newTable))},
	{"remove", "(Ljava/lang/Object;)V", "(TK;)V", $PUBLIC | $FINAL, $method(static_cast<void(Cache::*)(Object$*)>(&Cache::remove))},
	{"removeStaleEntries", "()V", nullptr, $PRIVATE, $method(static_cast<void(Cache::*)()>(&Cache::removeStaleEntries))},
	{"transfer", "([Lcom/sun/beans/util/Cache$CacheEntry;[Lcom/sun/beans/util/Cache$CacheEntry;)V", "([Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;[Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(Cache::*)($Cache$CacheEntryArray*,$Cache$CacheEntryArray*)>(&Cache::transfer))},
	{}
};

$InnerClassInfo _Cache_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.beans.util.Cache$CacheEntry", "com.sun.beans.util.Cache", "CacheEntry", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _Cache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.beans.util.Cache",
	"java.lang.Object",
	nullptr,
	_Cache_FieldInfo_,
	_Cache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache$Kind,com.sun.beans.util.Cache$Kind$Weak,com.sun.beans.util.Cache$Kind$Soft,com.sun.beans.util.Cache$Kind$Strong,com.sun.beans.util.Cache$Kind$3,com.sun.beans.util.Cache$Kind$2,com.sun.beans.util.Cache$Kind$1,com.sun.beans.util.Cache$Ref,com.sun.beans.util.Cache$CacheEntry"
};

$Object* allocate$Cache($Class* clazz) {
	return $of($alloc(Cache));
}

void Cache::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	Cache::init$(keyKind, valueKind, false);
}

void Cache::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind, bool identity) {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, table, newTable(1 << 3));
	this->threshold = 6;
	$Objects::requireNonNull($of(keyKind), "keyKind"_s);
	$Objects::requireNonNull($of(valueKind), "valueKind"_s);
	$set(this, keyKind, keyKind);
	$set(this, valueKind, valueKind);
	this->identity = identity;
}

$Object* Cache::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(key, "key"_s);
	removeStaleEntries();
	int32_t hash = this->hash(key);
	$var($Cache$CacheEntryArray, table, this->table);
	$var($Object, current, getEntryValue(key, hash, $nc(table)->get(Cache::index(hash, table))));
	if (current != nullptr) {
		return $of(current);
	}
	$synchronized(this->queue) {
		$assign(current, getEntryValue(key, hash, $nc(this->table)->get(Cache::index(hash, this->table))));
		if (current != nullptr) {
			return $of(current);
		}
		$var($Object, value, create(key));
		$Objects::requireNonNull(value, "value"_s);
		int32_t index = Cache::index(hash, this->table);
		$nc(this->table)->set(index, $$new($Cache$CacheEntry, this, hash, key, value, $nc(this->table)->get(index)));
		int32_t var$0 = ++this->size;
		if (var$0 >= this->threshold) {
			if ($nc(this->table)->length == Cache::MAXIMUM_CAPACITY) {
				this->threshold = $Integer::MAX_VALUE;
			} else {
				removeStaleEntries();
				$assign(table, newTable($nc(this->table)->length << 1));
				transfer(this->table, table);
				if (this->size >= this->threshold / 2) {
					$set(this, table, table);
					this->threshold <<= 1;
				} else {
					transfer(table, this->table);
				}
				removeStaleEntries();
			}
		}
		return $of(value);
	}
}

void Cache::remove(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (key != nullptr) {
		$synchronized(this->queue) {
			removeStaleEntries();
			int32_t hash = this->hash(key);
			int32_t index = Cache::index(hash, this->table);
			$var($Cache$CacheEntry, prev, $nc(this->table)->get(index));
			$var($Cache$CacheEntry, entry, prev);
			while (entry != nullptr) {
				$var($Cache$CacheEntry, next, entry->next);
				if (entry->matches(hash, key)) {
					if (entry == prev) {
						$nc(this->table)->set(index, next);
					} else {
						$set($nc(prev), next, next);
					}
					entry->unlink();
					break;
				}
				$assign(prev, entry);
				$assign(entry, next);
			}
		}
	}
}

void Cache::clear() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->queue) {
		int32_t index = $nc(this->table)->length;
		while (0 < index--) {
			$var($Cache$CacheEntry, entry, $nc(this->table)->get(index));
			while (entry != nullptr) {
				$var($Cache$CacheEntry, next, entry->next);
				entry->unlink();
				$assign(entry, next);
			}
			$nc(this->table)->set(index, nullptr);
		}
		while (nullptr != $nc(this->queue)->poll()) {
		}
	}
}

int32_t Cache::hash(Object$* key) {
	if (this->identity) {
		int32_t hash = $System::identityHashCode(key);
		return (hash << 1) - (hash << 8);
	}
	int32_t hash = $nc($of(key))->hashCode();
	hash ^= ((int32_t)((uint32_t)hash >> 20)) ^ ((int32_t)((uint32_t)hash >> 12));
	return (hash ^ ((int32_t)((uint32_t)hash >> 7))) ^ ((int32_t)((uint32_t)hash >> 4));
}

int32_t Cache::index(int32_t hash, $ObjectArray* table) {
	return (int32_t)(hash & (uint32_t)($nc(table)->length - 1));
}

$Cache$CacheEntryArray* Cache::newTable(int32_t size) {
	return $new($Cache$CacheEntryArray, size);
}

$Object* Cache::getEntryValue(Object$* key, int32_t hash, $Cache$CacheEntry* entry$renamed) {
	$var($Cache$CacheEntry, entry, entry$renamed);
	while (entry != nullptr) {
		if (entry->matches(hash, key)) {
			return $of($nc(entry->value)->getReferent());
		}
		$assign(entry, entry->next);
	}
	return $of(nullptr);
}

void Cache::removeStaleEntries() {
	$useLocalCurrentObjectStackCache();
	$var($Object, reference, $nc(this->queue)->poll());
	if (reference != nullptr) {
		$synchronized(this->queue) {
			do {
				if ($instanceOf($Cache$Ref, reference)) {
					$var($Cache$Ref, ref, $cast($Cache$Ref, reference));
					$var($Cache$CacheEntry, owner, $cast($Cache$CacheEntry, ref->getOwner()));
					if (owner != nullptr) {
						int32_t index = Cache::index(owner->hash, this->table);
						$var($Cache$CacheEntry, prev, $nc(this->table)->get(index));
						$var($Cache$CacheEntry, entry, prev);
						while (entry != nullptr) {
							$var($Cache$CacheEntry, next, entry->next);
							if (entry == owner) {
								if (entry == prev) {
									$nc(this->table)->set(index, next);
								} else {
									$set($nc(prev), next, next);
								}
								entry->unlink();
								break;
							}
							$assign(prev, entry);
							$assign(entry, next);
						}
					}
				}
				$assign(reference, $nc(this->queue)->poll());
			} while (reference != nullptr);
		}
	}
}

void Cache::transfer($Cache$CacheEntryArray* oldTable, $Cache$CacheEntryArray* newTable) {
	$useLocalCurrentObjectStackCache();
	int32_t oldIndex = $nc(oldTable)->length;
	while (0 < oldIndex--) {
		$var($Cache$CacheEntry, entry, oldTable->get(oldIndex));
		oldTable->set(oldIndex, nullptr);
		while (entry != nullptr) {
			$var($Cache$CacheEntry, next, entry->next);
			bool var$0 = $nc(entry->key)->isStale();
			if (var$0 || $nc(entry->value)->isStale()) {
				entry->unlink();
			} else {
				int32_t newIndex = index(entry->hash, newTable);
				$set(entry, next, $nc(newTable)->get(newIndex));
				newTable->set(newIndex, entry);
			}
			$assign(entry, next);
		}
	}
}

Cache::Cache() {
}

$Class* Cache::load$($String* name, bool initialize) {
	$loadClass(Cache, name, initialize, &_Cache_ClassInfo_, allocate$Cache);
	return class$;
}

$Class* Cache::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com