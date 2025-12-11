#include <apple/laf/JRSUIConstants.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef FOCUS_SIZE
#undef HIT
#undef NONE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN
#undef UNKNOWN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants_FieldInfo_[] = {
	{"FOCUS_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIConstants, FOCUS_SIZE)},
	{}
};

$MethodInfo _JRSUIConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIConstants::*)()>(&JRSUIConstants::init$))},
	{"getHit", "(I)Lapple/laf/JRSUIConstants$Hit;", nullptr, $STATIC, $method(static_cast<$JRSUIConstants$Hit*(*)(int32_t)>(&JRSUIConstants::getHit))},
	{"getPtrForConstant", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&JRSUIConstants::getPtrForConstant))},
	{}
};

#define _METHOD_INDEX_getPtrForConstant 2

$InnerClassInfo _JRSUIConstants_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$ScrollBarHit", "apple.laf.JRSUIConstants", "ScrollBarHit", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Widget", "apple.laf.JRSUIConstants", "Widget", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Animating", "apple.laf.JRSUIConstants", "Animating", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$BooleanValue", "apple.laf.JRSUIConstants", "BooleanValue", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$ShowArrows", "apple.laf.JRSUIConstants", "ShowArrows", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$WindowClipCorners", "apple.laf.JRSUIConstants", "WindowClipCorners", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$WindowTitleBarSeparator", "apple.laf.JRSUIConstants", "WindowTitleBarSeparator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$NothingToScroll", "apple.laf.JRSUIConstants", "NothingToScroll", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$SegmentLeadingSeparator", "apple.laf.JRSUIConstants", "SegmentLeadingSeparator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$SegmentTrailingSeparator", "apple.laf.JRSUIConstants", "SegmentTrailingSeparator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$FrameOnly", "apple.laf.JRSUIConstants", "FrameOnly", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$ArrowsOnly", "apple.laf.JRSUIConstants", "ArrowsOnly", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$NoIndicator", "apple.laf.JRSUIConstants", "NoIndicator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$IndicatorOnly", "apple.laf.JRSUIConstants", "IndicatorOnly", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Focused", "apple.laf.JRSUIConstants", "Focused", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$WindowType", "apple.laf.JRSUIConstants", "WindowType", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Variant", "apple.laf.JRSUIConstants", "Variant", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$ScrollBarPart", "apple.laf.JRSUIConstants", "ScrollBarPart", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$SegmentPosition", "apple.laf.JRSUIConstants", "SegmentPosition", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$AlignmentHorizontal", "apple.laf.JRSUIConstants", "AlignmentHorizontal", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$AlignmentVertical", "apple.laf.JRSUIConstants", "AlignmentVertical", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Orientation", "apple.laf.JRSUIConstants", "Orientation", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Direction", "apple.laf.JRSUIConstants", "Direction", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$State", "apple.laf.JRSUIConstants", "State", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Size", "apple.laf.JRSUIConstants", "Size", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{"apple.laf.JRSUIConstants$PropertyEncoding", "apple.laf.JRSUIConstants", "PropertyEncoding", $STATIC},
	{"apple.laf.JRSUIConstants$DoubleValue", "apple.laf.JRSUIConstants", "DoubleValue", $STATIC},
	{"apple.laf.JRSUIConstants$Key", "apple.laf.JRSUIConstants", "Key", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"apple.laf.JRSUIConstants",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants_FieldInfo_,
	_JRSUIConstants_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants$ScrollBarHit,apple.laf.JRSUIConstants$Hit,apple.laf.JRSUIConstants$Widget,apple.laf.JRSUIConstants$Animating,apple.laf.JRSUIConstants$BooleanValue,apple.laf.JRSUIConstants$ShowArrows,apple.laf.JRSUIConstants$WindowClipCorners,apple.laf.JRSUIConstants$WindowTitleBarSeparator,apple.laf.JRSUIConstants$NothingToScroll,apple.laf.JRSUIConstants$SegmentLeadingSeparator,apple.laf.JRSUIConstants$SegmentTrailingSeparator,apple.laf.JRSUIConstants$FrameOnly,apple.laf.JRSUIConstants$ArrowsOnly,apple.laf.JRSUIConstants$NoIndicator,apple.laf.JRSUIConstants$IndicatorOnly,apple.laf.JRSUIConstants$Focused,apple.laf.JRSUIConstants$WindowType,apple.laf.JRSUIConstants$Variant,apple.laf.JRSUIConstants$ScrollBarPart,apple.laf.JRSUIConstants$SegmentPosition,apple.laf.JRSUIConstants$AlignmentHorizontal,apple.laf.JRSUIConstants$AlignmentVertical,apple.laf.JRSUIConstants$Orientation,apple.laf.JRSUIConstants$Direction,apple.laf.JRSUIConstants$State,apple.laf.JRSUIConstants$Size,apple.laf.JRSUIConstants$Property,apple.laf.JRSUIConstants$PropertyEncoding,apple.laf.JRSUIConstants$DoubleValue,apple.laf.JRSUIConstants$Key"
};

$Object* allocate$JRSUIConstants($Class* clazz) {
	return $of($alloc(JRSUIConstants));
}

void JRSUIConstants::init$() {
}

int64_t JRSUIConstants::getPtrForConstant(int32_t constant) {
	$init(JRSUIConstants);
	int64_t $ret = 0;
	$prepareNativeStatic(JRSUIConstants, getPtrForConstant, int64_t, int32_t constant);
	$ret = $invokeNativeStatic(constant);
	$finishNativeStatic();
	return $ret;
}

$JRSUIConstants$Hit* JRSUIConstants::getHit(int32_t hit) {
	switch (hit) {
	case $JRSUIConstants$Hit::_none:
		{
			$init($JRSUIConstants$Hit);
			return $JRSUIConstants$Hit::NONE;
		}
	case $JRSUIConstants$Hit::_hit:
		{
			$init($JRSUIConstants$Hit);
			return $JRSUIConstants$Hit::HIT;
		}
	case $JRSUIConstants$ScrollBarHit::_thumb:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::THUMB;
		}
	case $JRSUIConstants$ScrollBarHit::_trackMin:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::TRACK_MIN;
		}
	case $JRSUIConstants$ScrollBarHit::_trackMax:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::TRACK_MAX;
		}
	case $JRSUIConstants$ScrollBarHit::_arrowMin:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::ARROW_MIN;
		}
	case $JRSUIConstants$ScrollBarHit::_arrowMax:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::ARROW_MAX;
		}
	case $JRSUIConstants$ScrollBarHit::_arrowMaxInside:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE;
		}
	case $JRSUIConstants$ScrollBarHit::_arrowMinInside:
		{
			$init($JRSUIConstants$ScrollBarHit);
			return $JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE;
		}
	}
	$init($JRSUIConstants$Hit);
	return $JRSUIConstants$Hit::UNKNOWN;
}

JRSUIConstants::JRSUIConstants() {
}

$Class* JRSUIConstants::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants, name, initialize, &_JRSUIConstants_ClassInfo_, allocate$JRSUIConstants);
	return class$;
}

$Class* JRSUIConstants::class$ = nullptr;

	} // laf
} // apple