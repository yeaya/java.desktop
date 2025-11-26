#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XKeyboardFocusManagerPeer_FieldInfo_[] = {
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XKeyboardFocusManagerPeer, focusLog)},
	{"inst", "Lsun/awt/X11/XKeyboardFocusManagerPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XKeyboardFocusManagerPeer, inst)},
	{"currentFocusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(XKeyboardFocusManagerPeer, currentFocusOwner)},
	{"currentFocusedWindow", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(XKeyboardFocusManagerPeer, currentFocusedWindow)},
	{}
};

$MethodInfo _XKeyboardFocusManagerPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XKeyboardFocusManagerPeer::*)()>(&XKeyboardFocusManagerPeer::init$))},
	{"deliverFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*,$Component*,bool,bool,int64_t,$FocusEvent$Cause*)>(&XKeyboardFocusManagerPeer::deliverFocus))},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/awt/X11/XKeyboardFocusManagerPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XKeyboardFocusManagerPeer*(*)()>(&XKeyboardFocusManagerPeer::getInstance))},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XKeyboardFocusManagerPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XKeyboardFocusManagerPeer",
	"sun.awt.KeyboardFocusManagerPeerImpl",
	nullptr,
	_XKeyboardFocusManagerPeer_FieldInfo_,
	_XKeyboardFocusManagerPeer_MethodInfo_
};

$Object* allocate$XKeyboardFocusManagerPeer($Class* clazz) {
	return $of($alloc(XKeyboardFocusManagerPeer));
}

$PlatformLogger* XKeyboardFocusManagerPeer::focusLog = nullptr;
XKeyboardFocusManagerPeer* XKeyboardFocusManagerPeer::inst = nullptr;

XKeyboardFocusManagerPeer* XKeyboardFocusManagerPeer::getInstance() {
	$init(XKeyboardFocusManagerPeer);
	return XKeyboardFocusManagerPeer::inst;
}

void XKeyboardFocusManagerPeer::init$() {
	$KeyboardFocusManagerPeerImpl::init$();
}

void XKeyboardFocusManagerPeer::setCurrentFocusOwner($Component* comp) {
	$synchronized(this) {
		$set(this, currentFocusOwner, comp);
	}
}

$Component* XKeyboardFocusManagerPeer::getCurrentFocusOwner() {
	$synchronized(this) {
		return this->currentFocusOwner;
	}
}

void XKeyboardFocusManagerPeer::setCurrentFocusedWindow($Window* win) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XKeyboardFocusManagerPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XKeyboardFocusManagerPeer::focusLog)->finer($$str({"Setting current focused window "_s, win}));
	}
	$var($XWindowPeer, from, nullptr);
	$var($XWindowPeer, to, nullptr);
	$synchronized(this) {
		if (this->currentFocusedWindow != nullptr) {
			$assign(from, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->currentFocusedWindow)));
		}
		$set(this, currentFocusedWindow, win);
		if (this->currentFocusedWindow != nullptr) {
			$assign(to, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->currentFocusedWindow)));
		}
	}
	if (from != nullptr) {
		from->updateSecurityWarningVisibility();
	}
	if (to != nullptr) {
		to->updateSecurityWarningVisibility();
	}
}

$Window* XKeyboardFocusManagerPeer::getCurrentFocusedWindow() {
	$synchronized(this) {
		return this->currentFocusedWindow;
	}
}

bool XKeyboardFocusManagerPeer::deliverFocus($Component* lightweightChild, $Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$init(XKeyboardFocusManagerPeer);
	$useLocalCurrentObjectStackCache();
	return $KeyboardFocusManagerPeerImpl::deliverFocus(lightweightChild, target, temporary, focusedWindowChangeAllowed, time, cause, $($nc($(getInstance()))->getCurrentFocusOwner()));
}

void clinit$XKeyboardFocusManagerPeer($Class* class$) {
	$assignStatic(XKeyboardFocusManagerPeer::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XKeyboardFocusManagerPeer"_s));
	$assignStatic(XKeyboardFocusManagerPeer::inst, $new(XKeyboardFocusManagerPeer));
}

XKeyboardFocusManagerPeer::XKeyboardFocusManagerPeer() {
}

$Class* XKeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$loadClass(XKeyboardFocusManagerPeer, name, initialize, &_XKeyboardFocusManagerPeer_ClassInfo_, clinit$XKeyboardFocusManagerPeer, allocate$XKeyboardFocusManagerPeer);
	return class$;
}

$Class* XKeyboardFocusManagerPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun