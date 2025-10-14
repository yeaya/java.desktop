#include <com/sun/beans/WeakCache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace beans {

$FieldInfo _WeakCache_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<TK;Ljava/lang/ref/Reference<TV;>;>;", $PRIVATE | $FINAL, $field(WeakCache, map)},
	{}
};

$MethodInfo _WeakCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WeakCache::*)()>(&WeakCache::init$))},
	{"clear", "()V", nullptr, $PUBLIC, $method(static_cast<void(WeakCache::*)()>(&WeakCache::clear))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $method(static_cast<$Object*(WeakCache::*)(Object$*)>(&WeakCache::get))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC, $method(static_cast<void(WeakCache::*)(Object$*,Object$*)>(&WeakCache::put))},
	{}
};

$ClassInfo _WeakCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.WeakCache",
	"java.lang.Object",
	nullptr,
	_WeakCache_FieldInfo_,
	_WeakCache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$WeakCache($Class* clazz) {
	return $of($alloc(WeakCache));
}

void WeakCache::init$() {
	$set(this, map, $new($WeakHashMap));
}

$Object* WeakCache::get(Object$* key) {
	$var($Reference, reference, $cast($Reference, $nc(this->map)->get(key)));
	if (reference == nullptr) {
		return $of(nullptr);
	}
	$var($Object, value, $nc(reference)->get());
	if (value == nullptr) {
		$nc(this->map)->remove(key);
	}
	return $of(value);
}

void WeakCache::put(Object$* key, Object$* value) {
	if (value != nullptr) {
		$nc(this->map)->put(key, $$new($WeakReference, value));
	} else {
		$nc(this->map)->remove(key);
	}
}

void WeakCache::clear() {
	$nc(this->map)->clear();
}

WeakCache::WeakCache() {
}

$Class* WeakCache::load$($String* name, bool initialize) {
	$loadClass(WeakCache, name, initialize, &_WeakCache_ClassInfo_, allocate$WeakCache);
	return class$;
}

$Class* WeakCache::class$ = nullptr;

		} // beans
	} // sun
} // com