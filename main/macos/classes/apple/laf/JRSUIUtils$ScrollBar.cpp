#include <apple/laf/JRSUIUtils$ScrollBar.h>

#include <apple/laf/JRSUIConstants$ScrollBarPart.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIConstants$ScrollBarPart = ::apple::laf::JRSUIConstants$ScrollBarPart;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$ScrollBar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$ScrollBar::*)()>(&JRSUIUtils$ScrollBar::init$))},
	{"getNativeOffsetChange", "(Lapple/laf/JRSUIControl;IIIIIII)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($JRSUIControl*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JRSUIUtils$ScrollBar::getNativeOffsetChange))},
	{"getPartBounds", "([DLapple/laf/JRSUIControl;IIIILapple/laf/JRSUIConstants$ScrollBarPart;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,$JRSUIControl*,int32_t,int32_t,int32_t,int32_t,$JRSUIConstants$ScrollBarPart*)>(&JRSUIUtils$ScrollBar::getPartBounds))},
	{"shouldUseScrollToClick", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&JRSUIUtils$ScrollBar::shouldUseScrollToClick))},
	{"useScrollToClick", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$ScrollBar::useScrollToClick))},
	{}
};

#define _METHOD_INDEX_shouldUseScrollToClick 3

$InnerClassInfo _JRSUIUtils$ScrollBar_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$ScrollBar", "apple.laf.JRSUIUtils", "ScrollBar", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$ScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$ScrollBar",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$ScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$ScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$ScrollBar($Class* clazz) {
	return $of($alloc(JRSUIUtils$ScrollBar));
}

void JRSUIUtils$ScrollBar::init$() {
}

bool JRSUIUtils$ScrollBar::shouldUseScrollToClick() {
	$init(JRSUIUtils$ScrollBar);
	bool $ret = false;
	$prepareNativeStatic(JRSUIUtils$ScrollBar, shouldUseScrollToClick, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool JRSUIUtils$ScrollBar::useScrollToClick() {
	return shouldUseScrollToClick();
}

void JRSUIUtils$ScrollBar::getPartBounds($doubles* rect, $JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, $JRSUIConstants$ScrollBarPart* part) {
	$nc(control)->getPartBounds(rect, x, y, w, h, $nc(part)->ordinal);
}

double JRSUIUtils$ScrollBar::getNativeOffsetChange($JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t offset, int32_t visibleAmount, int32_t extent) {
	return $nc(control)->getScrollBarOffsetChange(x, y, w, h, offset, visibleAmount, extent);
}

JRSUIUtils$ScrollBar::JRSUIUtils$ScrollBar() {
}

$Class* JRSUIUtils$ScrollBar::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$ScrollBar, name, initialize, &_JRSUIUtils$ScrollBar_ClassInfo_, allocate$JRSUIUtils$ScrollBar);
	return class$;
}

$Class* JRSUIUtils$ScrollBar::class$ = nullptr;

	} // laf
} // apple