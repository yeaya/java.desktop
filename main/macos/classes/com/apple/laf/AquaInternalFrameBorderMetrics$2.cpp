#include <com/apple/laf/AquaInternalFrameBorderMetrics$2.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$2$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$2$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$2$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameBorderMetrics$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$2::*)()>(&AquaInternalFrameBorderMetrics$2::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorderMetrics$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;",
	&_AquaInternalFrameBorderMetrics$2_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$2($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$2));
}

void AquaInternalFrameBorderMetrics$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$2::getInstance() {
	return $of($new($AquaInternalFrameBorderMetrics$2$1, this));
}

AquaInternalFrameBorderMetrics$2::AquaInternalFrameBorderMetrics$2() {
}

$Class* AquaInternalFrameBorderMetrics$2::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$2, name, initialize, &_AquaInternalFrameBorderMetrics$2_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$2);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$2::class$ = nullptr;

		} // laf
	} // apple
} // com