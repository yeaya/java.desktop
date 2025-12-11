#include <com/apple/laf/AquaInternalFrameBorder$2.h>

#include <apple/laf/JRSUIConstants$WindowType.h>
#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef UTILITY

using $JRSUIConstants$WindowType = ::apple::laf::JRSUIConstants$WindowType;
using $AquaInternalFrameBorder = ::com::apple::laf::AquaInternalFrameBorder;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameBorder$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorder$2::*)()>(&AquaInternalFrameBorder$2::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorder$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorder",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorder$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorder$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameBorder$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorder$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorder$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;",
	&_AquaInternalFrameBorder$2_EnclosingMethodInfo_,
	_AquaInternalFrameBorder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorder"
};

$Object* allocate$AquaInternalFrameBorder$2($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorder$2));
}

void AquaInternalFrameBorder$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorder$2::getInstance() {
	$init($JRSUIConstants$WindowType);
	return $of($new($AquaInternalFrameBorder, $JRSUIConstants$WindowType::UTILITY));
}

AquaInternalFrameBorder$2::AquaInternalFrameBorder$2() {
}

$Class* AquaInternalFrameBorder$2::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorder$2, name, initialize, &_AquaInternalFrameBorder$2_ClassInfo_, allocate$AquaInternalFrameBorder$2);
	return class$;
}

$Class* AquaInternalFrameBorder$2::class$ = nullptr;

		} // laf
	} // apple
} // com