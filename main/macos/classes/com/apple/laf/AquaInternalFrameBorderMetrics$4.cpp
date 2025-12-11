#include <com/apple/laf/AquaInternalFrameBorderMetrics$4.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$4$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$4$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$4$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameBorderMetrics$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$4::*)()>(&AquaInternalFrameBorderMetrics$4::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$4",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorderMetrics$4_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;",
	&_AquaInternalFrameBorderMetrics$4_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$4($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$4));
}

void AquaInternalFrameBorderMetrics$4::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$4::getInstance() {
	return $of($new($AquaInternalFrameBorderMetrics$4$1, this));
}

AquaInternalFrameBorderMetrics$4::AquaInternalFrameBorderMetrics$4() {
}

$Class* AquaInternalFrameBorderMetrics$4::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$4, name, initialize, &_AquaInternalFrameBorderMetrics$4_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$4);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$4::class$ = nullptr;

		} // laf
	} // apple
} // com