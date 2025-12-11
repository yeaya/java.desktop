#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>

#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIUtils.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$NineSliceMetricsProvider_MethodInfo_[] = {
	{"getNineSliceMetricsForState", "(Lapple/laf/JRSUIState;)Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JRSUIUtils$NineSliceMetricsProvider_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$NineSliceMetricsProvider", "apple.laf.JRSUIUtils", "NineSliceMetricsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JRSUIUtils$NineSliceMetricsProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"apple.laf.JRSUIUtils$NineSliceMetricsProvider",
	nullptr,
	nullptr,
	nullptr,
	_JRSUIUtils$NineSliceMetricsProvider_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$NineSliceMetricsProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$NineSliceMetricsProvider($Class* clazz) {
	return $of($alloc(JRSUIUtils$NineSliceMetricsProvider));
}

$Class* JRSUIUtils$NineSliceMetricsProvider::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$NineSliceMetricsProvider, name, initialize, &_JRSUIUtils$NineSliceMetricsProvider_ClassInfo_, allocate$JRSUIUtils$NineSliceMetricsProvider);
	return class$;
}

$Class* JRSUIUtils$NineSliceMetricsProvider::class$ = nullptr;

	} // laf
} // apple