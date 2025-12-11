#include <com/apple/laf/AquaSpinnerUI$2.h>

#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaSpinnerUI$ArrowButtonHandler = ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSpinnerUI$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSpinnerUI$2::*)()>(&AquaSpinnerUI$2::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaSpinnerUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSpinnerUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSpinnerUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaSpinnerUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaSpinnerUI$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;",
	&_AquaSpinnerUI$2_EnclosingMethodInfo_,
	_AquaSpinnerUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$2($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$2));
}

void AquaSpinnerUI$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSpinnerUI$2::getInstance() {
	return $of($new($AquaSpinnerUI$ArrowButtonHandler, "decrement"_s, false));
}

AquaSpinnerUI$2::AquaSpinnerUI$2() {
}

$Class* AquaSpinnerUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$2, name, initialize, &_AquaSpinnerUI$2_ClassInfo_, allocate$AquaSpinnerUI$2);
	return class$;
}

$Class* AquaSpinnerUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com