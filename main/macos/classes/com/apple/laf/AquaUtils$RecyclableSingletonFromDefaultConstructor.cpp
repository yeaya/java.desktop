#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/lang/ReflectiveOperationException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtils$RecyclableSingletonFromDefaultConstructor_FieldInfo_[] = {
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(AquaUtils$RecyclableSingletonFromDefaultConstructor, clazz)},
	{}
};

$MethodInfo _AquaUtils$RecyclableSingletonFromDefaultConstructor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", 0, $method(static_cast<void(AquaUtils$RecyclableSingletonFromDefaultConstructor::*)($Class*)>(&AquaUtils$RecyclableSingletonFromDefaultConstructor::init$))},
	{"getInstance", "()Ljava/lang/Object;", "()TT;", 0},
	{}
};

$InnerClassInfo _AquaUtils$RecyclableSingletonFromDefaultConstructor_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor", "com.apple.laf.AquaUtils", "RecyclableSingletonFromDefaultConstructor", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$RecyclableSingletonFromDefaultConstructor_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaUtils$RecyclableSingletonFromDefaultConstructor_FieldInfo_,
	_AquaUtils$RecyclableSingletonFromDefaultConstructor_MethodInfo_,
	"<T:Ljava/lang/Object;>Lcom/apple/laf/AquaUtils$RecyclableSingleton<TT;>;",
	nullptr,
	_AquaUtils$RecyclableSingletonFromDefaultConstructor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$RecyclableSingletonFromDefaultConstructor($Class* clazz) {
	return $of($alloc(AquaUtils$RecyclableSingletonFromDefaultConstructor));
}

void AquaUtils$RecyclableSingletonFromDefaultConstructor::init$($Class* clazz) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, clazz, clazz);
}

$Object* AquaUtils$RecyclableSingletonFromDefaultConstructor::getInstance() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->clazz);
		return $of($nc(this->clazz)->newInstance());
	} catch ($ReflectiveOperationException& ignored) {
	}
	return $of(nullptr);
}

AquaUtils$RecyclableSingletonFromDefaultConstructor::AquaUtils$RecyclableSingletonFromDefaultConstructor() {
}

$Class* AquaUtils$RecyclableSingletonFromDefaultConstructor::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$RecyclableSingletonFromDefaultConstructor, name, initialize, &_AquaUtils$RecyclableSingletonFromDefaultConstructor_ClassInfo_, allocate$AquaUtils$RecyclableSingletonFromDefaultConstructor);
	return class$;
}

$Class* AquaUtils$RecyclableSingletonFromDefaultConstructor::class$ = nullptr;

		} // laf
	} // apple
} // com