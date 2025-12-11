#include <com/apple/laf/AquaInternalFrameBorderMetrics$2$1.h>

#include <com/apple/laf/AquaInternalFrameBorderMetrics$2.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameBorderMetrics$2 = ::com::apple::laf::AquaInternalFrameBorderMetrics$2;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameBorderMetrics$2$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameBorderMetrics$2;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameBorderMetrics$2$1, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameBorderMetrics$2$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameBorderMetrics$2;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameBorderMetrics$2$1::*)($AquaInternalFrameBorderMetrics$2*)>(&AquaInternalFrameBorderMetrics$2$1::init$))},
	{"initialize", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameBorderMetrics$2$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameBorderMetrics$2",
	"getInstance",
	"()Lcom/apple/laf/AquaInternalFrameBorderMetrics;"
};

$InnerClassInfo _AquaInternalFrameBorderMetrics$2$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorderMetrics$2$1",
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	nullptr,
	_AquaInternalFrameBorderMetrics$2$1_FieldInfo_,
	_AquaInternalFrameBorderMetrics$2$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameBorderMetrics$2$1_EnclosingMethodInfo_,
	_AquaInternalFrameBorderMetrics$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics"
};

$Object* allocate$AquaInternalFrameBorderMetrics$2$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics$2$1));
}

void AquaInternalFrameBorderMetrics$2$1::init$($AquaInternalFrameBorderMetrics$2* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameBorderMetrics::init$();
}

void AquaInternalFrameBorderMetrics$2$1::initialize() {
	$set(this, font, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 11));
	this->titleBarHeight = 16;
	this->leftSidePadding = 6;
	this->buttonHeight = 12;
	this->buttonWidth = 12;
	this->buttonPadding = 6;
	this->downShift = 0;
}

AquaInternalFrameBorderMetrics$2$1::AquaInternalFrameBorderMetrics$2$1() {
}

$Class* AquaInternalFrameBorderMetrics$2$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics$2$1, name, initialize, &_AquaInternalFrameBorderMetrics$2$1_ClassInfo_, allocate$AquaInternalFrameBorderMetrics$2$1);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$2$1::class$ = nullptr;

		} // laf
	} // apple
} // com