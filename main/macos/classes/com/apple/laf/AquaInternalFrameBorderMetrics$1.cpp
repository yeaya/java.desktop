#include <com/apple/laf/AquaInternalFrameBorderMetrics$1.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$1$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$1$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$1$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameBorderMetrics$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$1::*)()>(&AquaInternalFrameBorderMetrics$1::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameBorderMetrics$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;",
	&_AquaInternalFrameBorderMetrics$1_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$1));
}

void AquaInternalFrameBorderMetrics$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$1::getInstance() {
	return $of($new($AquaInternalFrameBorderMetrics$1$1, this));
}

AquaInternalFrameBorderMetrics$1::AquaInternalFrameBorderMetrics$1() {
}

$Class* AquaInternalFrameBorderMetrics$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$1, name, initialize, &_AquaInternalFrameBorderMetrics$1_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$1);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$1::class$ = nullptr;

		} // laf
	} // apple
} // com