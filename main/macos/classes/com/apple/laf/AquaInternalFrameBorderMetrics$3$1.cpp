#include <com/apple/laf/AquaInternalFrameBorderMetrics$3$1.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$3.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameBorderMetrics$3 = ::com::apple::laf::AquaInternalFrameBorderMetrics$3;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameBorderMetrics$3$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameBorderMetrics$3;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameBorderMetrics$3$1, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameBorderMetrics$3$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameBorderMetrics$3;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$3$1::*)($AquaInternalFrameBorderMetrics$3*)>(&AquaInternalFrameBorderMetrics$3$1::init$))},
	{"initialize", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$3$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics$3",
	"getInstance",
	"()Lcom/apple/laf/AquaInternalFrameBorderMetrics;"
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$3$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$3$1",
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	_AquaInternalFrameBorderMetrics$3$1_FieldInfo_,
	_AquaInternalFrameBorderMetrics$3$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameBorderMetrics$3$1_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$3$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$3$1));
}

void AquaInternalFrameBorderMetrics$3$1::init$($AquaInternalFrameBorderMetrics$3* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameBorderMetrics::init$();
}

void AquaInternalFrameBorderMetrics$3$1::initialize() {
	$set(this, font, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 13));
	this->titleBarHeight = 22;
	this->leftSidePadding = 8;
	this->buttonHeight = 15;
	this->buttonWidth = 15;
	this->buttonPadding = 6;
	this->downShift = 1;
}

AquaInternalFrameBorderMetrics$3$1::AquaInternalFrameBorderMetrics$3$1() {
}

$Class* AquaInternalFrameBorderMetrics$3$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$3$1, name, initialize, &_AquaInternalFrameBorderMetrics$3$1_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$3$1);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$3$1::class$ = nullptr;

		} // laf
	} // apple
} // com