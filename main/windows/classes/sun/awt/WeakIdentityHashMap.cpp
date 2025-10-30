#include <sun/awt/WeakIdentityHashMap.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$1.h>
#include <sun/awt/WeakIdentityHashMap$2.h>
#include <sun/awt/WeakIdentityHashMap$WeakKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $WeakIdentityHashMap$1 = ::sun::awt::WeakIdentityHashMap$1;
using $WeakIdentityHashMap$2 = ::sun::awt::WeakIdentityHashMap$2;
using $WeakIdentityHashMap$WeakKey = ::sun::awt::WeakIdentityHashMap$WeakKey;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/WeakIdentityHashMap$WeakKey<TK;>;TV;>;", $PRIVATE | $FINAL, $field(WeakIdentityHashMap, map)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TK;>;", $PRIVATE | $FINAL | $TRANSIENT, $field(WeakIdentityHashMap, queue)},
	{}
};

$MethodInfo _WeakIdentityHashMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WeakIdentityHashMap::*)()>(&WeakIdentityHashMap::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(WeakIdentityHashMap::*)(int32_t)>(&WeakIdentityHashMap::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"getMap", "()Ljava/util/Map;", "()Ljava/util/Map<Lsun/awt/WeakIdentityHashMap$WeakKey<TK;>;TV;>;", $PRIVATE, $method(static_cast<$Map*(WeakIdentityHashMap::*)()>(&WeakIdentityHashMap::getMap))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _WeakIdentityHashMap_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$WeakKey", "sun.awt.WeakIdentityHashMap", "WeakKey", $PRIVATE | $STATIC},
	{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WeakIdentityHashMap_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap",
	"java.lang.Object",
	"java.util.Map",
	_WeakIdentityHashMap_FieldInfo_,
	_WeakIdentityHashMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;",
	nullptr,
	_WeakIdentityHashMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap$WeakKey,sun.awt.WeakIdentityHashMap$2,sun.awt.WeakIdentityHashMap$2$1,sun.awt.WeakIdentityHashMap$2$1$1,sun.awt.WeakIdentityHashMap$1,sun.awt.WeakIdentityHashMap$1$1"
};

$Object* allocate$WeakIdentityHashMap($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap));
}

void WeakIdentityHashMap::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, map, $new($HashMap, 16));
}

void WeakIdentityHashMap::init$(int32_t initialSize) {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, map, $new($HashMap, initialSize));
}

$Map* WeakIdentityHashMap::getMap() {
	{
		$var($Reference, ref, nullptr);
		for (; ($assign(ref, $nc(this->queue)->poll())) != nullptr;) {
			$nc(this->map)->remove(ref);
		}
	}
	return this->map;
}

int32_t WeakIdentityHashMap::size() {
	return $nc($(getMap()))->size();
}

bool WeakIdentityHashMap::isEmpty() {
	return $nc($(getMap()))->isEmpty();
}

bool WeakIdentityHashMap::containsKey(Object$* key) {
	$useLocalCurrentObjectStackCache();
	return $nc($(getMap()))->containsKey($$new($WeakIdentityHashMap$WeakKey, key, nullptr));
}

bool WeakIdentityHashMap::containsValue(Object$* value) {
	return $nc($(getMap()))->containsValue(value);
}

$Object* WeakIdentityHashMap::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	return $of($nc($(getMap()))->get($$new($WeakIdentityHashMap$WeakKey, key, nullptr)));
}

$Object* WeakIdentityHashMap::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	return $of($nc($(getMap()))->put($$new($WeakIdentityHashMap$WeakKey, key, this->queue), value));
}

$Object* WeakIdentityHashMap::remove(Object$* key) {
	$useLocalCurrentObjectStackCache();
	return $of($nc($(getMap()))->remove($$new($WeakIdentityHashMap$WeakKey, key, nullptr)));
}

void WeakIdentityHashMap::putAll($Map* m) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(m)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, var$0, $nc(entry)->getKey());
				put(var$0, $(entry->getValue()));
			}
		}
	}
}

void WeakIdentityHashMap::clear() {
	$nc($(getMap()))->clear();
}

$Set* WeakIdentityHashMap::keySet() {
	return $new($WeakIdentityHashMap$1, this);
}

$Collection* WeakIdentityHashMap::values() {
	return $nc($(getMap()))->values();
}

$Set* WeakIdentityHashMap::entrySet() {
	return $new($WeakIdentityHashMap$2, this);
}

WeakIdentityHashMap::WeakIdentityHashMap() {
}

$Class* WeakIdentityHashMap::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap, name, initialize, &_WeakIdentityHashMap_ClassInfo_, allocate$WeakIdentityHashMap);
	return class$;
}

$Class* WeakIdentityHashMap::class$ = nullptr;

	} // awt
} // sun