#include <com/apple/laf/AquaInternalFrameBorderMetrics$3.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$3$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$3$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$3$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameBorderMetrics$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$3::*)()>(&AquaInternalFrameBorderMetrics$3::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$3",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorderMetrics$3_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;",
	&_AquaInternalFrameBorderMetrics$3_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$3($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$3));
}

void AquaInternalFrameBorderMetrics$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$3::getInstance() {
	return $of($new($AquaInternalFrameBorderMetrics$3$1, this));
}

AquaInternalFrameBorderMetrics$3::AquaInternalFrameBorderMetrics$3() {
}

$Class* AquaInternalFrameBorderMetrics$3::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$3, name, initialize, &_AquaInternalFrameBorderMetrics$3_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$3);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$3::class$ = nullptr;

		} // laf
	} // apple
} // com