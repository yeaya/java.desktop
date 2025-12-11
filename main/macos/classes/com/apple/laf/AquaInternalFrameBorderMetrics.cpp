#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>

#include <apple/laf/JRSUIUtils$InternalFrame.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$1.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$2.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$3.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$4.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <jcpp.h>

using $JRSUIUtils$InternalFrame = ::apple::laf::JRSUIUtils$InternalFrame;
using $AquaInternalFrameBorderMetrics$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$1;
using $AquaInternalFrameBorderMetrics$2 = ::com::apple::laf::AquaInternalFrameBorderMetrics$2;
using $AquaInternalFrameBorderMetrics$3 = ::com::apple::laf::AquaInternalFrameBorderMetrics$3;
using $AquaInternalFrameBorderMetrics$4 = ::com::apple::laf::AquaInternalFrameBorderMetrics$4;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameBorderMetrics_FieldInfo_[] = {
	{"useLegacyBorderMetrics", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorderMetrics, useLegacyBorderMetrics)},
	{"font", "Ljava/awt/Font;", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, font)},
	{"titleBarHeight", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, titleBarHeight)},
	{"leftSidePadding", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, leftSidePadding)},
	{"buttonHeight", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, buttonHeight)},
	{"buttonWidth", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, buttonWidth)},
	{"buttonPadding", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, buttonPadding)},
	{"downShift", "I", nullptr, $PUBLIC, $field(AquaInternalFrameBorderMetrics, downShift)},
	{"standardMetrics", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorderMetrics, standardMetrics)},
	{"utilityMetrics", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorderMetrics, utilityMetrics)},
	{"legacyStandardMetrics", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorderMetrics, legacyStandardMetrics)},
	{"legacyUtilityMetrics", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorderMetrics, legacyUtilityMetrics)},
	{}
};

$MethodInfo _AquaInternalFrameBorderMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameBorderMetrics::*)()>(&AquaInternalFrameBorderMetrics::init$))},
	{"getMetrics", "(Z)Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaInternalFrameBorderMetrics*(*)(bool)>(&AquaInternalFrameBorderMetrics::getMetrics))},
	{"initialize", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaInternalFrameBorderMetrics_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorderMetrics$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorderMetrics$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorderMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaInternalFrameBorderMetrics",
	"java.lang.Object",
	nullptr,
	_AquaInternalFrameBorderMetrics_FieldInfo_,
	_AquaInternalFrameBorderMetrics_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameBorderMetrics_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorderMetrics$4,com.apple.laf.AquaInternalFrameBorderMetrics$4$1,com.apple.laf.AquaInternalFrameBorderMetrics$3,com.apple.laf.AquaInternalFrameBorderMetrics$3$1,com.apple.laf.AquaInternalFrameBorderMetrics$2,com.apple.laf.AquaInternalFrameBorderMetrics$2$1,com.apple.laf.AquaInternalFrameBorderMetrics$1,com.apple.laf.AquaInternalFrameBorderMetrics$1$1"
};

$Object* allocate$AquaInternalFrameBorderMetrics($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorderMetrics));
}

bool AquaInternalFrameBorderMetrics::useLegacyBorderMetrics = false;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorderMetrics::standardMetrics = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorderMetrics::utilityMetrics = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorderMetrics::legacyStandardMetrics = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorderMetrics::legacyUtilityMetrics = nullptr;

void AquaInternalFrameBorderMetrics::init$() {
	initialize();
}

AquaInternalFrameBorderMetrics* AquaInternalFrameBorderMetrics::getMetrics(bool isUtility) {
	$init(AquaInternalFrameBorderMetrics);
	if (AquaInternalFrameBorderMetrics::useLegacyBorderMetrics) {
		return isUtility ? $cast(AquaInternalFrameBorderMetrics, $nc(AquaInternalFrameBorderMetrics::legacyUtilityMetrics)->get()) : $cast(AquaInternalFrameBorderMetrics, $nc(AquaInternalFrameBorderMetrics::legacyStandardMetrics)->get());
	} else {
		return isUtility ? $cast(AquaInternalFrameBorderMetrics, $nc(AquaInternalFrameBorderMetrics::utilityMetrics)->get()) : $cast(AquaInternalFrameBorderMetrics, $nc(AquaInternalFrameBorderMetrics::standardMetrics)->get());
	}
}

void clinit$AquaInternalFrameBorderMetrics($Class* class$) {
	AquaInternalFrameBorderMetrics::useLegacyBorderMetrics = $JRSUIUtils$InternalFrame::shouldUseLegacyBorderMetrics();
	$assignStatic(AquaInternalFrameBorderMetrics::standardMetrics, $new($AquaInternalFrameBorderMetrics$1));
	$assignStatic(AquaInternalFrameBorderMetrics::utilityMetrics, $new($AquaInternalFrameBorderMetrics$2));
	$assignStatic(AquaInternalFrameBorderMetrics::legacyStandardMetrics, $new($AquaInternalFrameBorderMetrics$3));
	$assignStatic(AquaInternalFrameBorderMetrics::legacyUtilityMetrics, $new($AquaInternalFrameBorderMetrics$4));
}

AquaInternalFrameBorderMetrics::AquaInternalFrameBorderMetrics() {
}

$Class* AquaInternalFrameBorderMetrics::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorderMetrics, name, initialize, &_AquaInternalFrameBorderMetrics_ClassInfo_, clinit$AquaInternalFrameBorderMetrics, allocate$AquaInternalFrameBorderMetrics);
	return class$;
}

$Class* AquaInternalFrameBorderMetrics::class$ = nullptr;

		} // laf
	} // apple
} // com