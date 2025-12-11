#include <com/apple/laf/AquaPainter$1.h>

#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPainter$1_FieldInfo_[] = {
	{"val$stretchVertically", "Z", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$stretchVertically)},
	{"val$stretchHorizontally", "Z", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$stretchHorizontally)},
	{"val$useMiddle", "Z", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$useMiddle)},
	{"val$southCut", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$southCut)},
	{"val$northCut", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$northCut)},
	{"val$eastCut", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$eastCut)},
	{"val$westCut", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$westCut)},
	{"val$minHeight", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$minHeight)},
	{"val$minWidth", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaPainter$1, val$minWidth)},
	{}
};

$MethodInfo _AquaPainter$1_MethodInfo_[] = {
	{"<init>", "(IIIIIIZZZ)V", "()V", 0, $method(static_cast<void(AquaPainter$1::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,bool,bool)>(&AquaPainter$1::init$))},
	{"getNineSliceMetricsForState", "(Lapple/laf/JRSUIState;)Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaPainter$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaPainter",
	"create",
	"(Lapple/laf/JRSUIState;IIIIIIZZZ)Lcom/apple/laf/AquaPainter;"
};

$InnerClassInfo _AquaPainter$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaPainter$1", nullptr, nullptr, 0},
	{"apple.laf.JRSUIUtils$NineSliceMetricsProvider", "apple.laf.JRSUIUtils", "NineSliceMetricsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaPainter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaPainter$1",
	"java.lang.Object",
	"apple.laf.JRSUIUtils$NineSliceMetricsProvider",
	_AquaPainter$1_FieldInfo_,
	_AquaPainter$1_MethodInfo_,
	nullptr,
	&_AquaPainter$1_EnclosingMethodInfo_,
	_AquaPainter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaPainter"
};

$Object* allocate$AquaPainter$1($Class* clazz) {
	return $of($alloc(AquaPainter$1));
}

void AquaPainter$1::init$(int32_t val$minWidth, int32_t val$minHeight, int32_t val$westCut, int32_t val$eastCut, int32_t val$northCut, int32_t val$southCut, bool val$useMiddle, bool val$stretchHorizontally, bool val$stretchVertically) {
	this->val$minWidth = val$minWidth;
	this->val$minHeight = val$minHeight;
	this->val$westCut = val$westCut;
	this->val$eastCut = val$eastCut;
	this->val$northCut = val$northCut;
	this->val$southCut = val$southCut;
	this->val$useMiddle = val$useMiddle;
	this->val$stretchHorizontally = val$stretchHorizontally;
	this->val$stretchVertically = val$stretchVertically;
}

$AquaImageFactory$NineSliceMetrics* AquaPainter$1::getNineSliceMetricsForState($JRSUIState* state) {
	return $new($AquaImageFactory$NineSliceMetrics, this->val$minWidth, this->val$minHeight, this->val$westCut, this->val$eastCut, this->val$northCut, this->val$southCut, this->val$useMiddle, this->val$stretchHorizontally, this->val$stretchVertically);
}

AquaPainter$1::AquaPainter$1() {
}

$Class* AquaPainter$1::load$($String* name, bool initialize) {
	$loadClass(AquaPainter$1, name, initialize, &_AquaPainter$1_ClassInfo_, allocate$AquaPainter$1);
	return class$;
}

$Class* AquaPainter$1::class$ = nullptr;

		} // laf
	} // apple
} // com