#include <java/beans/WeakIdentityMap.h>

#include <java/beans/WeakIdentityMap$Entry.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAXIMUM_CAPACITY
#undef MAX_VALUE
#undef NULL

using $WeakIdentityMap$EntryArray = $Array<::java::beans::WeakIdentityMap$Entry>;
using $WeakIdentityMap$Entry = ::java::beans::WeakIdentityMap$Entry;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace beans {

$FieldInfo _WeakIdentityMap_FieldInfo_[] = {
	{"MAXIMUM_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WeakIdentityMap, MAXIMUM_CAPACITY)},
	{"NULL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WeakIdentityMap, NULL)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(WeakIdentityMap, queue)},
	{"table", "[Ljava/beans/WeakIdentityMap$Entry;", "[Ljava/beans/WeakIdentityMap$Entry<TT;>;", $PRIVATE | $VOLATILE, $field(WeakIdentityMap, table)},
	{"threshold", "I", nullptr, $PRIVATE, $field(WeakIdentityMap, threshold)},
	{"size", "I", nullptr, $PRIVATE, $field(WeakIdentityMap, size)},
	{}
};

$MethodInfo _WeakIdentityMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WeakIdentityMap::*)()>(&WeakIdentityMap::init$))},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TT;", $PROTECTED | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TT;", $PUBLIC},
	{"getIndex", "([Ljava/beans/WeakIdentityMap$Entry;I)I", "([Ljava/beans/WeakIdentityMap$Entry<*>;I)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($WeakIdentityMap$EntryArray*,int32_t)>(&WeakIdentityMap::getIndex))},
	{"newTable", "(I)[Ljava/beans/WeakIdentityMap$Entry;", "(I)[Ljava/beans/WeakIdentityMap$Entry<TT;>;", $PRIVATE, $method(static_cast<$WeakIdentityMap$EntryArray*(WeakIdentityMap::*)(int32_t)>(&WeakIdentityMap::newTable))},
	{"removeStaleEntries", "()V", nullptr, $PRIVATE, $method(static_cast<void(WeakIdentityMap::*)()>(&WeakIdentityMap::removeStaleEntries))},
	{"transfer", "([Ljava/beans/WeakIdentityMap$Entry;[Ljava/beans/WeakIdentityMap$Entry;)V", "([Ljava/beans/WeakIdentityMap$Entry<TT;>;[Ljava/beans/WeakIdentityMap$Entry<TT;>;)V", $PRIVATE, $method(static_cast<void(WeakIdentityMap::*)($WeakIdentityMap$EntryArray*,$WeakIdentityMap$EntryArray*)>(&WeakIdentityMap::transfer))},
	{}
};

$InnerClassInfo _WeakIdentityMap_InnerClassesInfo_[] = {
	{"java.beans.WeakIdentityMap$Entry", "java.beans.WeakIdentityMap", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WeakIdentityMap_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.beans.WeakIdentityMap",
	"java.lang.Object",
	nullptr,
	_WeakIdentityMap_FieldInfo_,
	_WeakIdentityMap_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WeakIdentityMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.WeakIdentityMap$Entry"
};

$Object* allocate$WeakIdentityMap($Class* clazz) {
	return $of($alloc(WeakIdentityMap));
}

$Object* WeakIdentityMap::NULL = nullptr;

void WeakIdentityMap::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, table, newTable(1 << 3));
	this->threshold = 6;
	this->size = 0;
}

$Object* WeakIdentityMap::get(Object$* key$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, key$renamed);
	removeStaleEntries();
	if (key == nullptr) {
		$assign(key, WeakIdentityMap::NULL);
	}
	int32_t hash = $nc($of(key))->hashCode();
	$var($WeakIdentityMap$EntryArray, table, this->table);
	int32_t index = getIndex(table, hash);
	{
		$var($WeakIdentityMap$Entry, entry, $nc(table)->get(index));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if (entry->isMatched(key, hash)) {
				return $of(entry->value);
			}
		}
	}
	$synchronized(WeakIdentityMap::NULL) {
		index = getIndex(this->table, hash);
		{
			$var($WeakIdentityMap$Entry, entry, $nc(this->table)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				if (entry->isMatched(key, hash)) {
					return $of(entry->value);
				}
			}
		}
		$var($Object, value, create(key));
		$nc(this->table)->set(index, $$new($WeakIdentityMap$Entry, key, hash, value, this->queue, $nc(this->table)->get(index)));
		int32_t var$0 = ++this->size;
		if (var$0 >= this->threshold) {
			if ($nc(this->table)->length == WeakIdentityMap::MAXIMUM_CAPACITY) {
				this->threshold = $Integer::MAX_VALUE;
			} else {
				removeStaleEntries();
				$assign(table, newTable($nc(this->table)->length * 2));
				transfer(this->table, table);
				if (this->size >= this->threshold / 2) {
					$set(this, table, table);
					this->threshold *= 2;
				} else {
					transfer(table, this->table);
				}
			}
		}
		return $of(value);
	}
}

void WeakIdentityMap::removeStaleEntries() {
	$useLocalCurrentObjectStackCache();
	$var($Object, ref, $nc(this->queue)->poll());
	if (ref != nullptr) {
		$synchronized(WeakIdentityMap::NULL) {
			do {
				$var($WeakIdentityMap$Entry, entry, $cast($WeakIdentityMap$Entry, ref));
				int32_t index = getIndex(this->table, entry->hash);
				$var($WeakIdentityMap$Entry, prev, $nc(this->table)->get(index));
				$var($WeakIdentityMap$Entry, current, prev);
				while (current != nullptr) {
					$var($WeakIdentityMap$Entry, next, current->next);
					if (current == entry) {
						if (prev == entry) {
							$nc(this->table)->set(index, next);
						} else {
							$set($nc(prev), next, next);
						}
						$set(entry, value, nullptr);
						$set(entry, next, nullptr);
						--this->size;
						break;
					}
					$assign(prev, current);
					$assign(current, next);
				}
				$assign(ref, $nc(this->queue)->poll());
			} while (ref != nullptr);
		}
	}
}

void WeakIdentityMap::transfer($WeakIdentityMap$EntryArray* oldTable, $WeakIdentityMap$EntryArray* newTable) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(oldTable)->length; ++i) {
		$var($WeakIdentityMap$Entry, entry, oldTable->get(i));
		oldTable->set(i, nullptr);
		while (entry != nullptr) {
			$var($WeakIdentityMap$Entry, next, entry->next);
			$var($Object, key, entry->get());
			if (key == nullptr) {
				$set(entry, value, nullptr);
				$set(entry, next, nullptr);
				--this->size;
			} else {
				int32_t index = getIndex(newTable, entry->hash);
				$set(entry, next, $nc(newTable)->get(index));
				newTable->set(index, entry);
			}
			$assign(entry, next);
		}
	}
}

$WeakIdentityMap$EntryArray* WeakIdentityMap::newTable(int32_t length) {
	return $new($WeakIdentityMap$EntryArray, length);
}

int32_t WeakIdentityMap::getIndex($WeakIdentityMap$EntryArray* table, int32_t hash) {
	$init(WeakIdentityMap);
	return (int32_t)(hash & (uint32_t)($nc(table)->length - 1));
}

void clinit$WeakIdentityMap($Class* class$) {
	$assignStatic(WeakIdentityMap::NULL, $new($Object));
}

WeakIdentityMap::WeakIdentityMap() {
}

$Class* WeakIdentityMap::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityMap, name, initialize, &_WeakIdentityMap_ClassInfo_, clinit$WeakIdentityMap, allocate$WeakIdentityMap);
	return class$;
}

$Class* WeakIdentityMap::class$ = nullptr;

	} // beans
} // java