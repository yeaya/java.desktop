#include <sun/lwawt/macosx/CWrapper$NSView.h>

#include <sun/lwawt/macosx/CWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CWrapper$NSView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CWrapper$NSView::*)()>(&CWrapper$NSView::init$))},
	{"addSubview", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&CWrapper$NSView::addSubview))},
	{"removeFromSuperview", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CWrapper$NSView::removeFromSuperview))},
	{"setFrame", "(JIIII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int32_t,int32_t)>(&CWrapper$NSView::setFrame))},
	{"setHidden", "(JZ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool)>(&CWrapper$NSView::setHidden))},
	{"setToolTip", "(JLjava/lang/String;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$String*)>(&CWrapper$NSView::setToolTip))},
	{"window", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&CWrapper$NSView::window))},
	{}
};

#define _METHOD_INDEX_addSubview 1
#define _METHOD_INDEX_removeFromSuperview 2
#define _METHOD_INDEX_setFrame 3
#define _METHOD_INDEX_setHidden 4
#define _METHOD_INDEX_setToolTip 5
#define _METHOD_INDEX_window 6

$InnerClassInfo _CWrapper$NSView_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWrapper$NSView", "sun.lwawt.macosx.CWrapper", "NSView", $STATIC | $FINAL},
	{}
};

$ClassInfo _CWrapper$NSView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CWrapper$NSView",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CWrapper$NSView_MethodInfo_,
	nullptr,
	nullptr,
	_CWrapper$NSView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWrapper"
};

$Object* allocate$CWrapper$NSView($Class* clazz) {
	return $of($alloc(CWrapper$NSView));
}

void CWrapper$NSView::init$() {
}

void CWrapper$NSView::addSubview(int64_t view, int64_t subview) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(CWrapper$NSView, addSubview, void, int64_t view, int64_t subview);
	$invokeNativeStatic(view, subview);
	$finishNativeStatic();
}

void CWrapper$NSView::removeFromSuperview(int64_t view) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(CWrapper$NSView, removeFromSuperview, void, int64_t view);
	$invokeNativeStatic(view);
	$finishNativeStatic();
}

void CWrapper$NSView::setFrame(int64_t view, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(CWrapper$NSView, setFrame, void, int64_t view, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNativeStatic(view, x, y, w, h);
	$finishNativeStatic();
}

int64_t CWrapper$NSView::window(int64_t view) {
	$init(CWrapper$NSView);
	int64_t $ret = 0;
	$prepareNativeStatic(CWrapper$NSView, window, int64_t, int64_t view);
	$ret = $invokeNativeStatic(view);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSView::setHidden(int64_t view, bool hidden) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(CWrapper$NSView, setHidden, void, int64_t view, bool hidden);
	$invokeNativeStatic(view, hidden);
	$finishNativeStatic();
}

void CWrapper$NSView::setToolTip(int64_t view, $String* msg) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(CWrapper$NSView, setToolTip, void, int64_t view, $String* msg);
	$invokeNativeStatic(view, msg);
	$finishNativeStatic();
}

CWrapper$NSView::CWrapper$NSView() {
}

$Class* CWrapper$NSView::load$($String* name, bool initialize) {
	$loadClass(CWrapper$NSView, name, initialize, &_CWrapper$NSView_ClassInfo_, allocate$CWrapper$NSView);
	return class$;
}

$Class* CWrapper$NSView::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun