#include <sun/lwawt/macosx/CPlatformLWView.h>

#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformLWView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformLWView::*)()>(&CPlatformLWView::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getAWTView", "()J", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getWindowLayerPtr", "()J", nullptr, $PUBLIC},
	{"initialize", "(Lsun/lwawt/LWWindowPeer;Lsun/lwawt/macosx/CPlatformResponder;)V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPlatformLWView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformLWView",
	"sun.lwawt.macosx.CPlatformView",
	nullptr,
	nullptr,
	_CPlatformLWView_MethodInfo_
};

$Object* allocate$CPlatformLWView($Class* clazz) {
	return $of($alloc(CPlatformLWView));
}

void CPlatformLWView::init$() {
	$CPlatformView::init$();
}

void CPlatformLWView::initialize($LWWindowPeer* peer, $CPlatformResponder* responder) {
	initializeBase(peer, responder);
}

int64_t CPlatformLWView::getAWTView() {
	return 0;
}

void CPlatformLWView::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
}

$SurfaceData* CPlatformLWView::replaceSurfaceData() {
	return nullptr;
}

$SurfaceData* CPlatformLWView::getSurfaceData() {
	return nullptr;
}

void CPlatformLWView::dispose() {
}

int64_t CPlatformLWView::getWindowLayerPtr() {
	return 0;
}

CPlatformLWView::CPlatformLWView() {
}

$Class* CPlatformLWView::load$($String* name, bool initialize) {
	$loadClass(CPlatformLWView, name, initialize, &_CPlatformLWView_ClassInfo_, allocate$CPlatformLWView);
	return class$;
}

$Class* CPlatformLWView::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun