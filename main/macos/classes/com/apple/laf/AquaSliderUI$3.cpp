#include <com/apple/laf/AquaSliderUI$3.h>

#include <apple/laf/JRSUIConstants$Orientation.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

#undef VERTICAL

using $JRSUIConstants$Orientation = ::apple::laf::JRSUIConstants$Orientation;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSliderUI$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSliderUI$3::*)()>(&AquaSliderUI$3::init$))},
	{"getNineSliceMetricsForState", "(Lapple/laf/JRSUIState;)Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaSliderUI$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSliderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSliderUI$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$3", nullptr, nullptr, 0},
	{"apple.laf.JRSUIUtils$NineSliceMetricsProvider", "apple.laf.JRSUIUtils", "NineSliceMetricsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaSliderUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$3",
	"java.lang.Object",
	"apple.laf.JRSUIUtils$NineSliceMetricsProvider",
	nullptr,
	_AquaSliderUI$3_MethodInfo_,
	nullptr,
	&_AquaSliderUI$3_EnclosingMethodInfo_,
	_AquaSliderUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$3($Class* clazz) {
	return $of($alloc(AquaSliderUI$3));
}

void AquaSliderUI$3::init$() {
}

$AquaImageFactory$NineSliceMetrics* AquaSliderUI$3::getNineSliceMetricsForState($JRSUIState* state) {
	$init($JRSUIConstants$Orientation);
	if ($nc(state)->is($JRSUIConstants$Orientation::VERTICAL)) {
		return $new($AquaImageFactory$NineSliceMetrics, 5, 7, 0, 0, 3, 3, true, false, true);
	}
	return $new($AquaImageFactory$NineSliceMetrics, 7, 5, 3, 3, 0, 0, true, true, false);
}

AquaSliderUI$3::AquaSliderUI$3() {
}

$Class* AquaSliderUI$3::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$3, name, initialize, &_AquaSliderUI$3_ClassInfo_, allocate$AquaSliderUI$3);
	return class$;
}

$Class* AquaSliderUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com