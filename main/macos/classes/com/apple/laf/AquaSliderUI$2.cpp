#include <com/apple/laf/AquaSliderUI$2.h>

#include <com/apple/laf/AquaSliderUI$2$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaSliderUI$2$1 = ::com::apple::laf::AquaSliderUI$2$1;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSliderUI$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSliderUI$2::*)()>(&AquaSliderUI$2::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaSliderUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSliderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSliderUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaSliderUI$2$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaSliderUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaSliderUI$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;",
	&_AquaSliderUI$2_EnclosingMethodInfo_,
	_AquaSliderUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$2($Class* clazz) {
	return $of($alloc(AquaSliderUI$2));
}

void AquaSliderUI$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSliderUI$2::getInstance() {
	return $of($new($AquaSliderUI$2$1, this, $$new($AquaUtilControlSize$SizeVariant, 23, 26)));
}

AquaSliderUI$2::AquaSliderUI$2() {
}

$Class* AquaSliderUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$2, name, initialize, &_AquaSliderUI$2_ClassInfo_, allocate$AquaSliderUI$2);
	return class$;
}

$Class* AquaSliderUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com