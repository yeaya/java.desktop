#include <sun/lwawt/LWMouseInfoPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$MethodInfo _LWMouseInfoPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWMouseInfoPeer::*)()>(&LWMouseInfoPeer::init$))},
	{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWMouseInfoPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.LWMouseInfoPeer",
	"java.lang.Object",
	"java.awt.peer.MouseInfoPeer",
	nullptr,
	_LWMouseInfoPeer_MethodInfo_
};

$Object* allocate$LWMouseInfoPeer($Class* clazz) {
	return $of($alloc(LWMouseInfoPeer));
}

void LWMouseInfoPeer::init$() {
}

int32_t LWMouseInfoPeer::fillPointWithCoords($Point* point) {
	$useLocalCurrentObjectStackCache();
	$var($LWCursorManager, cursorManager, $nc($($LWToolkit::getLWToolkit()))->getCursorManager());
	$var($Point, cursorPos, $nc(cursorManager)->getCursorPosition());
	$nc(point)->x = $nc(cursorPos)->x;
	point->y = cursorPos->y;
	return 0;
}

bool LWMouseInfoPeer::isWindowUnderMouse($Window* w) {
	$useLocalCurrentObjectStackCache();
	if (w == nullptr) {
		return false;
	}
	$var($LWWindowPeer, windowPeer, $cast($LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (windowPeer == nullptr) {
		return false;
	}
	return $nc($($LWToolkit::getLWToolkit()))->getPlatformWindowUnderMouse() == $nc(windowPeer)->getPlatformWindow();
}

LWMouseInfoPeer::LWMouseInfoPeer() {
}

$Class* LWMouseInfoPeer::load$($String* name, bool initialize) {
	$loadClass(LWMouseInfoPeer, name, initialize, &_LWMouseInfoPeer_ClassInfo_, allocate$LWMouseInfoPeer);
	return class$;
}

$Class* LWMouseInfoPeer::class$ = nullptr;

	} // lwawt
} // sun