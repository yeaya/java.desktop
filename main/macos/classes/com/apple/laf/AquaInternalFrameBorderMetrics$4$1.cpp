#include <com/apple/laf/AquaInternalFrameBorderMetrics$4$1.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$4.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameBorderMetrics$4 = ::com::apple::laf::AquaInternalFrameBorderMetrics$4;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameBorderMetrics$4$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameBorderMetrics$4;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameBorderMetrics$4$1, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameBorderMetrics$4$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameBorderMetrics$4;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$4$1::*)($AquaInternalFrameBorderMetrics$4*)>(&AquaInternalFrameBorderMetrics$4$1::init$))},
	{"initialize", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$4$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics$4",
	"getInstance",
	"()Lcom/apple/laf/AquaInternalFrameBorderMetrics;"
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$4$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$4$1",
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	_AquaInternalFrameBorderMetrics$4$1_FieldInfo_,
	_AquaInternalFrameBorderMetrics$4$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameBorderMetrics$4$1_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$4$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$4$1));
}

void AquaInternalFrameBorderMetrics$4$1::init$($AquaInternalFrameBorderMetrics$4* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameBorderMetrics::init$();
}

void AquaInternalFrameBorderMetrics$4$1::initialize() {
	$set(this, font, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 11));
	this->titleBarHeight = 16;
	this->leftSidePadding = 5;
	this->buttonHeight = 13;
	this->buttonWidth = 13;
	this->buttonPadding = 5;
	this->downShift = 0;
}

AquaInternalFrameBorderMetrics$4$1::AquaInternalFrameBorderMetrics$4$1() {
}

$Class* AquaInternalFrameBorderMetrics$4$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$4$1, name, initialize, &_AquaInternalFrameBorderMetrics$4$1_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$4$1);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$4$1::class$ = nullptr;

		} // laf
	} // apple
} // com