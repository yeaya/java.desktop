#include <sun/lwawt/LWCursorManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWCursorManager$1.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWCursorManager$1 = ::sun::lwawt::LWCursorManager$1;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWCursorManager_FieldInfo_[] = {
	{"updatePending", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(LWCursorManager, updatePending)},
	{}
};

$MethodInfo _LWCursorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LWCursorManager::*)()>(&LWCursorManager::init$))},
	{"findComponent", "(Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$Component*(*)($Point*)>(&LWCursorManager::findComponent))},
	{"getCursorPosition", "()Ljava/awt/Point;", nullptr, $PROTECTED | $ABSTRACT},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"updateCursor", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LWCursorManager::*)()>(&LWCursorManager::updateCursor))},
	{"updateCursorImpl", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWCursorManager::*)()>(&LWCursorManager::updateCursorImpl))},
	{"updateCursorLater", "(Lsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LWCursorManager::*)($LWWindowPeer*)>(&LWCursorManager::updateCursorLater))},
	{}
};

$InnerClassInfo _LWCursorManager_InnerClassesInfo_[] = {
	{"sun.lwawt.LWCursorManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCursorManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.lwawt.LWCursorManager",
	"java.lang.Object",
	nullptr,
	_LWCursorManager_FieldInfo_,
	_LWCursorManager_MethodInfo_,
	nullptr,
	nullptr,
	_LWCursorManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWCursorManager$1"
};

$Object* allocate$LWCursorManager($Class* clazz) {
	return $of($alloc(LWCursorManager));
}

void LWCursorManager::init$() {
	$set(this, updatePending, $new($AtomicBoolean, false));
}

void LWCursorManager::updateCursor() {
	$nc(this->updatePending)->set(false);
	updateCursorImpl();
}

void LWCursorManager::updateCursorLater($LWWindowPeer* window) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->updatePending)->compareAndSet(false, true)) {
		$var($Runnable, r, $new($LWCursorManager$1, this));
		$SunToolkit::executeOnEventHandlerThread($($nc(window)->getTarget()), r);
	}
}

void LWCursorManager::updateCursorImpl() {
	$useLocalCurrentObjectStackCache();
	$var($Point, cursorPos, getCursorPosition());
	$var($Component, c, findComponent(cursorPos));
	$var($Cursor, cursor, nullptr);
	$var($Object, peer, $LWToolkit::targetToPeer(c));
	if ($instanceOf($LWComponentPeer, peer)) {
		$var($LWComponentPeer, lwpeer, $cast($LWComponentPeer, peer));
		$var($Point, p, $nc(lwpeer)->getLocationOnScreen());
		$assign(cursor, lwpeer->getCursor($$new($Point, $nc(cursorPos)->x - $nc(p)->x, cursorPos->y - p->y)));
	} else {
		$assign(cursor, (c != nullptr) ? $nc(c)->getCursor() : ($Cursor*)nullptr);
	}
	setCursor(cursor);
}

$Component* LWCursorManager::findComponent($Point* cursorPos) {
	$useLocalCurrentObjectStackCache();
	$var($LWComponentPeer, peer, $LWWindowPeer::getPeerUnderCursor());
	$var($Component, c, nullptr);
	if (peer != nullptr && $nc($(peer->getWindowPeerOrSelf()))->getBlocker() == nullptr) {
		$assign(c, peer->getTarget());
		if ($instanceOf($Container, c)) {
			$var($Point, p, peer->getLocationOnScreen());
			$assign(c, $nc($($AWTAccessor::getContainerAccessor()))->findComponentAt($cast($Container, c), $nc(cursorPos)->x - $nc(p)->x, cursorPos->y - p->y, false));
		}
		while (c != nullptr) {
			$var($Object, p, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(c));
			bool var$0 = c->isVisible();
			if (var$0 && c->isEnabled() && p != nullptr) {
				break;
			}
			$assign(c, c->getParent());
		}
	}
	return c;
}

LWCursorManager::LWCursorManager() {
}

$Class* LWCursorManager::load$($String* name, bool initialize) {
	$loadClass(LWCursorManager, name, initialize, &_LWCursorManager_ClassInfo_, allocate$LWCursorManager);
	return class$;
}

$Class* LWCursorManager::class$ = nullptr;

	} // lwawt
} // sun