#include <com/apple/laf/AquaSpinnerUI$1.h>

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

$MethodInfo _AquaSpinnerUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSpinnerUI$1::*)()>(&AquaSpinnerUI$1::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaSpinnerUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSpinnerUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSpinnerUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaSpinnerUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaSpinnerUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;",
	&_AquaSpinnerUI$1_EnclosingMethodInfo_,
	_AquaSpinnerUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$1($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$1));
}

void AquaSpinnerUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSpinnerUI$1::getInstance() {
	return $of($new($AquaSpinnerUI$ArrowButtonHandler, "increment"_s, true));
}

AquaSpinnerUI$1::AquaSpinnerUI$1() {
}

$Class* AquaSpinnerUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$1, name, initialize, &_AquaSpinnerUI$1_ClassInfo_, allocate$AquaSpinnerUI$1);
	return class$;
}

$Class* AquaSpinnerUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com