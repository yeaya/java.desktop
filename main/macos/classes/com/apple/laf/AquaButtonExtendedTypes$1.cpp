#include <com/apple/laf/AquaButtonExtendedTypes$1.h>

#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$1::*)()>(&AquaButtonExtendedTypes$1::init$))},
	{"getInstance", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaButtonExtendedTypes$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;>;",
	&_AquaButtonExtendedTypes$1_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$1($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$1));
}

void AquaButtonExtendedTypes$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonExtendedTypes$1::getInstance() {
	return $of($AquaButtonExtendedTypes::getAllTypes());
}

AquaButtonExtendedTypes$1::AquaButtonExtendedTypes$1() {
}

$Class* AquaButtonExtendedTypes$1::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$1, name, initialize, &_AquaButtonExtendedTypes$1_ClassInfo_, allocate$AquaButtonExtendedTypes$1);
	return class$;
}

$Class* AquaButtonExtendedTypes$1::class$ = nullptr;

		} // laf
	} // apple
} // com