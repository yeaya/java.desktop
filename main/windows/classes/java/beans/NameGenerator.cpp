#include <java/beans/NameGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace java {
	namespace beans {

$FieldInfo _NameGenerator_FieldInfo_[] = {
	{"valueToName", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/String;>;", $PRIVATE, $field(NameGenerator, valueToName)},
	{"nameToCount", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(NameGenerator, nameToCount)},
	{}
};

$MethodInfo _NameGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameGenerator::*)()>(&NameGenerator::init$))},
	{"capitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&NameGenerator::capitalize))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"instanceName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"unqualifiedClassName", "(Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Class*)>(&NameGenerator::unqualifiedClassName))},
	{}
};

$ClassInfo _NameGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.NameGenerator",
	"java.lang.Object",
	nullptr,
	_NameGenerator_FieldInfo_,
	_NameGenerator_MethodInfo_
};

$Object* allocate$NameGenerator($Class* clazz) {
	return $of($alloc(NameGenerator));
}

void NameGenerator::init$() {
	$set(this, valueToName, $new($IdentityHashMap));
	$set(this, nameToCount, $new($HashMap));
}

void NameGenerator::clear() {
	$nc(this->valueToName)->clear();
	$nc(this->nameToCount)->clear();
}

$String* NameGenerator::unqualifiedClassName($Class* type) {
	if ($nc(type)->isArray()) {
		return $str({$(unqualifiedClassName(type->getComponentType())), "Array"_s});
	}
	$var($String, name, $nc(type)->getName());
	return $nc(name)->substring(name->lastIndexOf((int32_t)u'.') + 1);
}

$String* NameGenerator::capitalize($String* name) {
	if (name == nullptr || $nc(name)->length() == 0) {
		return name;
	}
	$init($Locale);
	$var($String, var$0, $($($nc(name)->substring(0, 1))->toUpperCase($Locale::ENGLISH)));
	return $concat(var$0, $(name->substring(1)));
}

$String* NameGenerator::instanceName(Object$* instance) {
	if (instance == nullptr) {
		return "null"_s;
	}
	if ($instanceOf($Class, instance)) {
		return unqualifiedClassName($cast($Class, instance));
	} else {
		$var($String, result, $cast($String, $nc(this->valueToName)->get(instance)));
		if (result != nullptr) {
			return result;
		}
		$Class* type = $nc($of(instance))->getClass();
		$var($String, className, unqualifiedClassName(type));
		$var($Integer, size, $cast($Integer, $nc(this->nameToCount)->get(className)));
		int32_t instanceNumber = (size == nullptr) ? 0 : $nc((size))->intValue() + 1;
		$nc(this->nameToCount)->put(className, $($Integer::valueOf(instanceNumber)));
		$assign(result, $str({className, $$str(instanceNumber)}));
		$nc(this->valueToName)->put(instance, result);
		return result;
	}
}

NameGenerator::NameGenerator() {
}

$Class* NameGenerator::load$($String* name, bool initialize) {
	$loadClass(NameGenerator, name, initialize, &_NameGenerator_ClassInfo_, allocate$NameGenerator);
	return class$;
}

$Class* NameGenerator::class$ = nullptr;

	} // beans
} // java