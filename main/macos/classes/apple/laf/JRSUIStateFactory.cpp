#include <apple/laf/JRSUIStateFactory.h>

#include <apple/laf/JRSUIConstants$NoIndicator.h>
#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState$AnimationFrameState.h>
#include <apple/laf/JRSUIState$ScrollBarState.h>
#include <apple/laf/JRSUIState$TitleBarHeightState.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef BUTTON_LITTLE_ARROWS
#undef DISCLOSURE_TRIANGLE
#undef DIVIDER_SPLITTER
#undef SCROLL_BAR
#undef SLIDER
#undef SLIDER_THUMB
#undef TAB
#undef WINDOW_FRAME
#undef YES

using $JRSUIConstants$NoIndicator = ::apple::laf::JRSUIConstants$NoIndicator;
using $JRSUIConstants$SegmentTrailingSeparator = ::apple::laf::JRSUIConstants$SegmentTrailingSeparator;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$AnimationFrameState = ::apple::laf::JRSUIState$AnimationFrameState;
using $JRSUIState$ScrollBarState = ::apple::laf::JRSUIState$ScrollBarState;
using $JRSUIState$TitleBarHeightState = ::apple::laf::JRSUIState$TitleBarHeightState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIStateFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIStateFactory::*)()>(&JRSUIStateFactory::init$))},
	{"getDisclosureTriangle", "()Lapple/laf/JRSUIState$AnimationFrameState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState$AnimationFrameState*(*)()>(&JRSUIStateFactory::getDisclosureTriangle))},
	{"getLabeledButton", "()Lapple/laf/JRSUIState$ValueState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState$ValueState*(*)()>(&JRSUIStateFactory::getLabeledButton))},
	{"getProgressBar", "()Lapple/laf/JRSUIState$ValueState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState$ValueState*(*)()>(&JRSUIStateFactory::getProgressBar))},
	{"getScrollBar", "()Lapple/laf/JRSUIState$ScrollBarState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState$ScrollBarState*(*)()>(&JRSUIStateFactory::getScrollBar))},
	{"getSliderThumb", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState*(*)()>(&JRSUIStateFactory::getSliderThumb))},
	{"getSliderTrack", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState*(*)()>(&JRSUIStateFactory::getSliderTrack))},
	{"getSpinnerArrows", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState*(*)()>(&JRSUIStateFactory::getSpinnerArrows))},
	{"getSplitPaneDivider", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState*(*)()>(&JRSUIStateFactory::getSplitPaneDivider))},
	{"getTab", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState*(*)()>(&JRSUIStateFactory::getTab))},
	{"getTitleBar", "()Lapple/laf/JRSUIState$TitleBarHeightState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIState$TitleBarHeightState*(*)()>(&JRSUIStateFactory::getTitleBar))},
	{}
};

$ClassInfo _JRSUIStateFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIStateFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIStateFactory_MethodInfo_
};

$Object* allocate$JRSUIStateFactory($Class* clazz) {
	return $of($alloc(JRSUIStateFactory));
}

void JRSUIStateFactory::init$() {
}

$JRSUIState* JRSUIStateFactory::getSliderTrack() {
	$init($JRSUIConstants$Widget);
	$init($JRSUIConstants$NoIndicator);
	return $new($JRSUIState, $nc($JRSUIConstants$Widget::SLIDER)->apply($nc($JRSUIConstants$NoIndicator::YES)->apply(0)));
}

$JRSUIState* JRSUIStateFactory::getSliderThumb() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState, $nc($JRSUIConstants$Widget::SLIDER_THUMB)->apply(0));
}

$JRSUIState* JRSUIStateFactory::getSpinnerArrows() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState, $nc($JRSUIConstants$Widget::BUTTON_LITTLE_ARROWS)->apply(0));
}

$JRSUIState* JRSUIStateFactory::getSplitPaneDivider() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState, $nc($JRSUIConstants$Widget::DIVIDER_SPLITTER)->apply(0));
}

$JRSUIState* JRSUIStateFactory::getTab() {
	$init($JRSUIConstants$Widget);
	$init($JRSUIConstants$SegmentTrailingSeparator);
	return $new($JRSUIState, $nc($JRSUIConstants$Widget::TAB)->apply($nc($JRSUIConstants$SegmentTrailingSeparator::YES)->apply(0)));
}

$JRSUIState$AnimationFrameState* JRSUIStateFactory::getDisclosureTriangle() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState$AnimationFrameState, $nc($JRSUIConstants$Widget::DISCLOSURE_TRIANGLE)->apply(0), 0);
}

$JRSUIState$ScrollBarState* JRSUIStateFactory::getScrollBar() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState$ScrollBarState, $nc($JRSUIConstants$Widget::SCROLL_BAR)->apply(0), (double)0, (double)0, (double)0);
}

$JRSUIState$TitleBarHeightState* JRSUIStateFactory::getTitleBar() {
	$init($JRSUIConstants$Widget);
	return $new($JRSUIState$TitleBarHeightState, $nc($JRSUIConstants$Widget::WINDOW_FRAME)->apply(0), (double)0);
}

$JRSUIState$ValueState* JRSUIStateFactory::getProgressBar() {
	return $new($JRSUIState$ValueState, 0, (double)0);
}

$JRSUIState$ValueState* JRSUIStateFactory::getLabeledButton() {
	return $new($JRSUIState$ValueState, 0, (double)0);
}

JRSUIStateFactory::JRSUIStateFactory() {
}

$Class* JRSUIStateFactory::load$($String* name, bool initialize) {
	$loadClass(JRSUIStateFactory, name, initialize, &_JRSUIStateFactory_ClassInfo_, allocate$JRSUIStateFactory);
	return class$;
}

$Class* JRSUIStateFactory::class$ = nullptr;

	} // laf
} // apple