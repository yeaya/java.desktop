#include <com/apple/laf/AquaInternalFrameBorder$1.h>

#include <apple/laf/JRSUIConstants$WindowType.h>
#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef DOCUMENT

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

$MethodInfo _AquaInternalFrameBorder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorder$1::*)()>(&AquaInternalFrameBorder$1::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorder$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorder",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorder$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorder$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameBorder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorder$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorder$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;",
	&_AquaInternalFrameBorder$1_EnclosingMethodInfo_,
	_AquaInternalFrameBorder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorder"
};

$Object* allocate$AquaInternalFrameBorder$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorder$1));
}

void AquaInternalFrameBorder$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorder$1::getInstance() {
	$init($JRSUIConstants$WindowType);
	return $of($new($AquaInternalFrameBorder, $JRSUIConstants$WindowType::DOCUMENT));
}

AquaInternalFrameBorder$1::AquaInternalFrameBorder$1() {
}

$Class* AquaInternalFrameBorder$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorder$1, name, initialize, &_AquaInternalFrameBorder$1_ClassInfo_, allocate$AquaInternalFrameBorder$1);
	return class$;
}

$Class* AquaInternalFrameBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com