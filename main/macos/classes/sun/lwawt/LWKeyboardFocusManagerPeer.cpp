#include <sun/lwawt/LWKeyboardFocusManagerPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWKeyboardFocusManagerPeer_FieldInfo_[] = {
	{"inst", "Lsun/lwawt/LWKeyboardFocusManagerPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWKeyboardFocusManagerPeer, inst)},
	{"focusedWindow", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(LWKeyboardFocusManagerPeer, focusedWindow)},
	{"focusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(LWKeyboardFocusManagerPeer, focusOwner)},
	{}
};

$MethodInfo _LWKeyboardFocusManagerPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWKeyboardFocusManagerPeer::*)()>(&LWKeyboardFocusManagerPeer::init$))},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/lwawt/LWKeyboardFocusManagerPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LWKeyboardFocusManagerPeer*(*)()>(&LWKeyboardFocusManagerPeer::getInstance))},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWKeyboardFocusManagerPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.LWKeyboardFocusManagerPeer",
	"sun.awt.KeyboardFocusManagerPeerImpl",
	nullptr,
	_LWKeyboardFocusManagerPeer_FieldInfo_,
	_LWKeyboardFocusManagerPeer_MethodInfo_
};

$Object* allocate$LWKeyboardFocusManagerPeer($Class* clazz) {
	return $of($alloc(LWKeyboardFocusManagerPeer));
}

LWKeyboardFocusManagerPeer* LWKeyboardFocusManagerPeer::inst = nullptr;

LWKeyboardFocusManagerPeer* LWKeyboardFocusManagerPeer::getInstance() {
	$init(LWKeyboardFocusManagerPeer);
	return LWKeyboardFocusManagerPeer::inst;
}

void LWKeyboardFocusManagerPeer::init$() {
	$KeyboardFocusManagerPeerImpl::init$();
}

void LWKeyboardFocusManagerPeer::setCurrentFocusedWindow($Window* win) {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, from, nullptr);
	$var($LWWindowPeer, to, nullptr);
	$synchronized(this) {
		if (this->focusedWindow == win) {
			return;
		}
		$assign(from, $cast($LWWindowPeer, $LWToolkit::targetToPeer(this->focusedWindow)));
		$assign(to, $cast($LWWindowPeer, $LWToolkit::targetToPeer(win)));
		$set(this, focusedWindow, win);
	}
	if (from != nullptr) {
		from->updateSecurityWarningVisibility();
	}
	if (to != nullptr) {
		to->updateSecurityWarningVisibility();
	}
}

$Window* LWKeyboardFocusManagerPeer::getCurrentFocusedWindow() {
	$synchronized(this) {
		return this->focusedWindow;
	}
}

$Component* LWKeyboardFocusManagerPeer::getCurrentFocusOwner() {
	$synchronized(this) {
		return this->focusOwner;
	}
}

void LWKeyboardFocusManagerPeer::setCurrentFocusOwner($Component* comp) {
	$synchronized(this) {
		$set(this, focusOwner, comp);
	}
}

void clinit$LWKeyboardFocusManagerPeer($Class* class$) {
	$assignStatic(LWKeyboardFocusManagerPeer::inst, $new(LWKeyboardFocusManagerPeer));
}

LWKeyboardFocusManagerPeer::LWKeyboardFocusManagerPeer() {
}

$Class* LWKeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$loadClass(LWKeyboardFocusManagerPeer, name, initialize, &_LWKeyboardFocusManagerPeer_ClassInfo_, clinit$LWKeyboardFocusManagerPeer, allocate$LWKeyboardFocusManagerPeer);
	return class$;
}

$Class* LWKeyboardFocusManagerPeer::class$ = nullptr;

	} // lwawt
} // sun