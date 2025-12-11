#include <com/apple/laf/AquaIcon$SystemIconUIResourceSingleton.h>

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$SystemIconUIResourceSingleton_FieldInfo_[] = {
	{"selector", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaIcon$SystemIconUIResourceSingleton, selector)},
	{}
};

$MethodInfo _AquaIcon$SystemIconUIResourceSingleton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$SystemIconUIResourceSingleton::*)($String*)>(&AquaIcon$SystemIconUIResourceSingleton::init$))},
	{"getInstance", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaIcon$SystemIconUIResourceSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$SystemIconUIResourceSingleton", "com.apple.laf.AquaIcon", "SystemIconUIResourceSingleton", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$SystemIconUIResourceSingleton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaIcon$SystemIconUIResourceSingleton",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaIcon$SystemIconUIResourceSingleton_FieldInfo_,
	_AquaIcon$SystemIconUIResourceSingleton_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/IconUIResource;>;",
	nullptr,
	_AquaIcon$SystemIconUIResourceSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$SystemIconUIResourceSingleton($Class* clazz) {
	return $of($alloc(AquaIcon$SystemIconUIResourceSingleton));
}

void AquaIcon$SystemIconUIResourceSingleton::init$($String* selector) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, selector, selector);
}

$Object* AquaIcon$SystemIconUIResourceSingleton::getInstance() {
	return $of($new($IconUIResource, $$new($AquaIcon$SystemIcon, this->selector)));
}

AquaIcon$SystemIconUIResourceSingleton::AquaIcon$SystemIconUIResourceSingleton() {
}

$Class* AquaIcon$SystemIconUIResourceSingleton::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$SystemIconUIResourceSingleton, name, initialize, &_AquaIcon$SystemIconUIResourceSingleton_ClassInfo_, allocate$AquaIcon$SystemIconUIResourceSingleton);
	return class$;
}

$Class* AquaIcon$SystemIconUIResourceSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com