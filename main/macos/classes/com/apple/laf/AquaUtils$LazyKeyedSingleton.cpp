#include <com/apple/laf/AquaUtils$LazyKeyedSingleton.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtils$LazyKeyedSingleton_FieldInfo_[] = {
	{"refs", "Ljava/util/Map;", "Ljava/util/Map<TK;TV;>;", $PRIVATE, $field(AquaUtils$LazyKeyedSingleton, refs)},
	{}
};

$MethodInfo _AquaUtils$LazyKeyedSingleton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$LazyKeyedSingleton::*)()>(&AquaUtils$LazyKeyedSingleton::init$))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", 0},
	{"getInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaUtils$LazyKeyedSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$LazyKeyedSingleton", "com.apple.laf.AquaUtils", "LazyKeyedSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$LazyKeyedSingleton_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaUtils$LazyKeyedSingleton",
	"java.lang.Object",
	nullptr,
	_AquaUtils$LazyKeyedSingleton_FieldInfo_,
	_AquaUtils$LazyKeyedSingleton_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AquaUtils$LazyKeyedSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$LazyKeyedSingleton($Class* clazz) {
	return $of($alloc(AquaUtils$LazyKeyedSingleton));
}

void AquaUtils$LazyKeyedSingleton::init$() {
}

$Object* AquaUtils$LazyKeyedSingleton::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (this->refs == nullptr) {
		$set(this, refs, $new($HashMap));
	}
	$var($Object, cachedValue, $nc(this->refs)->get(key));
	if (cachedValue != nullptr) {
		return $of(cachedValue);
	}
	$var($Object, value, getInstance(key));
	$nc(this->refs)->put(key, value);
	return $of(value);
}

AquaUtils$LazyKeyedSingleton::AquaUtils$LazyKeyedSingleton() {
}

$Class* AquaUtils$LazyKeyedSingleton::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$LazyKeyedSingleton, name, initialize, &_AquaUtils$LazyKeyedSingleton_ClassInfo_, allocate$AquaUtils$LazyKeyedSingleton);
	return class$;
}

$Class* AquaUtils$LazyKeyedSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com