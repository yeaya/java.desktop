#include <com/apple/laf/AquaSliderUI$1.h>

#include <com/apple/laf/AquaSliderUI$1$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaSliderUI$1$1 = ::com::apple::laf::AquaSliderUI$1$1;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSliderUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSliderUI$1::*)()>(&AquaSliderUI$1::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaSliderUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSliderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSliderUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaSliderUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaSliderUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaSliderUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;",
	&_AquaSliderUI$1_EnclosingMethodInfo_,
	_AquaSliderUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$1($Class* clazz) {
	return $of($alloc(AquaSliderUI$1));
}

void AquaSliderUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSliderUI$1::getInstance() {
	return $of($new($AquaSliderUI$1$1, this, $$new($AquaUtilControlSize$SizeVariant, 25, 25)));
}

AquaSliderUI$1::AquaSliderUI$1() {
}

$Class* AquaSliderUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$1, name, initialize, &_AquaSliderUI$1_ClassInfo_, allocate$AquaSliderUI$1);
	return class$;
}

$Class* AquaSliderUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com