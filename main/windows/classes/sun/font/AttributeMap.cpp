#include <sun/font/AttributeMap.h>

#include <java/awt/font/TextAttribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/font/AttributeValues.h>
#include <jcpp.h>

using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AttributeValues = ::sun::font::AttributeValues;

namespace sun {
	namespace font {

$FieldInfo _AttributeMap_FieldInfo_[] = {
	{"values", "Lsun/font/AttributeValues;", nullptr, $PRIVATE, $field(AttributeMap, values$)},
	{"delegateMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PRIVATE, $field(AttributeMap, delegateMap)},
	{"first", "Z", nullptr, $PRIVATE | $STATIC, $staticField(AttributeMap, first)},
	{}
};

$MethodInfo _AttributeMap_MethodInfo_[] = {
	{"<init>", "(Lsun/font/AttributeValues;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeMap::*)($AttributeValues*)>(&AttributeMap::init$))},
	{"delegate", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Map*(AttributeMap::*)()>(&AttributeMap::delegate))},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;>;", $PUBLIC},
	{"getValues", "()Lsun/font/AttributeValues;", nullptr, $PUBLIC, $method(static_cast<$AttributeValues*(AttributeMap::*)()>(&AttributeMap::getValues))},
	{"put", "(Ljava/awt/font/TextAttribute;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AttributeMap::*)($TextAttribute*,Object$*)>(&AttributeMap::put))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.AttributeMap",
	"java.util.AbstractMap",
	nullptr,
	_AttributeMap_FieldInfo_,
	_AttributeMap_MethodInfo_,
	"Ljava/util/AbstractMap<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;"
};

$Object* allocate$AttributeMap($Class* clazz) {
	return $of($alloc(AttributeMap));
}

bool AttributeMap::first = false;

void AttributeMap::init$($AttributeValues* values) {
	$AbstractMap::init$();
	$set(this, values$, values);
}

$Set* AttributeMap::entrySet() {
	return $nc($(delegate()))->entrySet();
}

$Object* AttributeMap::put($TextAttribute* key, Object$* value) {
	return $of($nc($(delegate()))->put(key, value));
}

$AttributeValues* AttributeMap::getValues() {
	return this->values$;
}

$Map* AttributeMap::delegate() {
	if (this->delegateMap == nullptr) {
		if (AttributeMap::first) {
			AttributeMap::first = false;
			$Thread::dumpStack();
		}
		$set(this, delegateMap, $nc(this->values$)->toMap($$new($HashMap, 27)));
		$set(this, values$, nullptr);
	}
	return this->delegateMap;
}

$String* AttributeMap::toString() {
	if (this->values$ != nullptr) {
		return $str({"map of "_s, $($nc(this->values$)->toString())});
	}
	return $AbstractMap::toString();
}

$Object* AttributeMap::put(Object$* key, Object$* value) {
	return $of(this->put($cast($TextAttribute, key), value));
}

void clinit$AttributeMap($Class* class$) {
	AttributeMap::first = false;
}

AttributeMap::AttributeMap() {
}

$Class* AttributeMap::load$($String* name, bool initialize) {
	$loadClass(AttributeMap, name, initialize, &_AttributeMap_ClassInfo_, clinit$AttributeMap, allocate$AttributeMap);
	return class$;
}

$Class* AttributeMap::class$ = nullptr;

	} // font
} // sun