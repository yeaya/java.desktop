#include <com/apple/laf/AquaIcon$SystemIconSingleton.h>

#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$SystemIconSingleton_FieldInfo_[] = {
	{"selector", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaIcon$SystemIconSingleton, selector)},
	{}
};

$MethodInfo _AquaIcon$SystemIconSingleton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$SystemIconSingleton::*)($String*)>(&AquaIcon$SystemIconSingleton::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaIcon$SystemIcon;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaIcon$SystemIconSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$SystemIconSingleton", "com.apple.laf.AquaIcon", "SystemIconSingleton", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$SystemIcon", "com.apple.laf.AquaIcon", "SystemIcon", $STATIC},
	{}
};

$ClassInfo _AquaIcon$SystemIconSingleton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaIcon$SystemIconSingleton",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaIcon$SystemIconSingleton_FieldInfo_,
	_AquaIcon$SystemIconSingleton_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaIcon$SystemIcon;>;",
	nullptr,
	_AquaIcon$SystemIconSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$SystemIconSingleton($Class* clazz) {
	return $of($alloc(AquaIcon$SystemIconSingleton));
}

void AquaIcon$SystemIconSingleton::init$($String* selector) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, selector, selector);
}

$Object* AquaIcon$SystemIconSingleton::getInstance() {
	return $of($new($AquaIcon$SystemIcon, this->selector));
}

AquaIcon$SystemIconSingleton::AquaIcon$SystemIconSingleton() {
}

$Class* AquaIcon$SystemIconSingleton::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$SystemIconSingleton, name, initialize, &_AquaIcon$SystemIconSingleton_ClassInfo_, allocate$AquaIcon$SystemIconSingleton);
	return class$;
}

$Class* AquaIcon$SystemIconSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com