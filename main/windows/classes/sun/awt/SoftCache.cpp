#include <sun/awt/SoftCache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SoftCache$EntrySet.h>
#include <sun/awt/SoftCache$ValueCell.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SoftCache$EntrySet = ::sun::awt::SoftCache$EntrySet;
using $SoftCache$ValueCell = ::sun::awt::SoftCache$ValueCell;

namespace sun {
	namespace awt {
$CompoundAttribute _SoftCache_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _SoftCache_FieldInfo_[] = {
	{"hash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache, hash)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache, queue)},
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PRIVATE, $field(SoftCache, entrySet$)},
	{}
};

$MethodInfo _SoftCache_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(SoftCache::*)(int32_t,float)>(&SoftCache::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftCache::*)(int32_t)>(&SoftCache::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftCache::*)()>(&SoftCache::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"fill", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"processQueue", "()V", nullptr, $PRIVATE, $method(static_cast<void(SoftCache::*)()>(&SoftCache::processQueue))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"valEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&SoftCache::valEquals))},
	{}
};

$InnerClassInfo _SoftCache_InnerClassesInfo_[] = {
	{"sun.awt.SoftCache$EntrySet", "sun.awt.SoftCache", "EntrySet", $PRIVATE},
	{"sun.awt.SoftCache$Entry", "sun.awt.SoftCache", "Entry", $PRIVATE},
	{"sun.awt.SoftCache$ValueCell", "sun.awt.SoftCache", "ValueCell", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SoftCache",
	"java.util.AbstractMap",
	nullptr,
	_SoftCache_FieldInfo_,
	_SoftCache_MethodInfo_,
	"Ljava/util/AbstractMap<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;",
	nullptr,
	_SoftCache_InnerClassesInfo_,
	_SoftCache_Annotations_,
	nullptr,
	"sun.awt.SoftCache$EntrySet,sun.awt.SoftCache$EntrySet$1,sun.awt.SoftCache$Entry,sun.awt.SoftCache$ValueCell"
};

$Object* allocate$SoftCache($Class* clazz) {
	return $of($alloc(SoftCache));
}

void SoftCache::processQueue() {
	$var($SoftCache$ValueCell, vc, nullptr);
	while (($assign(vc, $cast($SoftCache$ValueCell, $nc(this->queue)->poll()))) != nullptr) {
		if ($nc(vc)->isValid()) {
			$nc(this->hash)->remove(vc->key);
		} else {
			$init($SoftCache$ValueCell);
			--$SoftCache$ValueCell::dropped;
		}
	}
}

void SoftCache::init$(int32_t initialCapacity, float loadFactor) {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap, initialCapacity, loadFactor));
}

void SoftCache::init$(int32_t initialCapacity) {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap, initialCapacity));
}

void SoftCache::init$() {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap));
}

int32_t SoftCache::size() {
	return $nc($(entrySet()))->size();
}

bool SoftCache::isEmpty() {
	return $nc($(entrySet()))->isEmpty();
}

bool SoftCache::containsKey(Object$* key) {
	return $SoftCache$ValueCell::strip($($nc(this->hash)->get(key)), false) != nullptr;
}

$Object* SoftCache::fill(Object$* key) {
	return $of(nullptr);
}

$Object* SoftCache::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	processQueue();
	$var($Object, v, $nc(this->hash)->get(key));
	if (v == nullptr) {
		$assign(v, fill(key));
		if (v != nullptr) {
			$nc(this->hash)->put(key, $($SoftCache$ValueCell::create(key, v, this->queue)));
			return $of(v);
		}
	}
	return $of($SoftCache$ValueCell::strip(v, false));
}

$Object* SoftCache::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	processQueue();
	$var($SoftCache$ValueCell, vc, $SoftCache$ValueCell::create(key, value, this->queue));
	return $of($SoftCache$ValueCell::strip($($nc(this->hash)->put(key, vc)), true));
}

$Object* SoftCache::remove(Object$* key) {
	processQueue();
	return $of($SoftCache$ValueCell::strip($($nc(this->hash)->remove(key)), true));
}

void SoftCache::clear() {
	processQueue();
	$nc(this->hash)->clear();
}

bool SoftCache::valEquals(Object$* o1, Object$* o2) {
	$init(SoftCache);
	return (o1 == nullptr) ? (o2 == nullptr) : $nc($of(o1))->equals(o2);
}

$Set* SoftCache::entrySet() {
	if (this->entrySet$ == nullptr) {
		$set(this, entrySet$, $new($SoftCache$EntrySet, this));
	}
	return this->entrySet$;
}

SoftCache::SoftCache() {
}

$Class* SoftCache::load$($String* name, bool initialize) {
	$loadClass(SoftCache, name, initialize, &_SoftCache_ClassInfo_, allocate$SoftCache);
	return class$;
}

$Class* SoftCache::class$ = nullptr;

	} // awt
} // sun