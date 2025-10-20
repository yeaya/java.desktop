#include <sun/awt/KeyboardFocusManagerPeerImpl.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Panel.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl$KfmAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef FINE
#undef FINER
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED

using $AWTEvent = ::java::awt::AWTEvent;
using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Panel = ::java::awt::Panel;
using $Scrollbar = ::java::awt::Scrollbar;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $AppContext = ::sun::awt::AppContext;
using $KeyboardFocusManagerPeerImpl$KfmAccessor = ::sun::awt::KeyboardFocusManagerPeerImpl$KfmAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$FieldInfo _KeyboardFocusManagerPeerImpl_FieldInfo_[] = {
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyboardFocusManagerPeerImpl, focusLog)},
	{"SNFH_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManagerPeerImpl, SNFH_FAILURE)},
	{"SNFH_SUCCESS_HANDLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManagerPeerImpl, SNFH_SUCCESS_HANDLED)},
	{"SNFH_SUCCESS_PROCEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManagerPeerImpl, SNFH_SUCCESS_PROCEED)},
	{}
};

$MethodInfo _KeyboardFocusManagerPeerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyboardFocusManagerPeerImpl::*)()>(&KeyboardFocusManagerPeerImpl::init$))},
	{"clearGlobalFocusOwner", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"deliverFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*,$Component*,bool,bool,int64_t,$FocusEvent$Cause*,$Component*)>(&KeyboardFocusManagerPeerImpl::deliverFocus))},
	{"processSynchronousLightweightTransfer", "(Ljava/awt/Component;Ljava/awt/Component;ZZJ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*,$Component*,bool,bool,int64_t)>(&KeyboardFocusManagerPeerImpl::processSynchronousLightweightTransfer))},
	{"removeLastFocusRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&KeyboardFocusManagerPeerImpl::removeLastFocusRequest))},
	{"requestFocusFor", "(Ljava/awt/Component;Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,$FocusEvent$Cause*)>(&KeyboardFocusManagerPeerImpl::requestFocusFor))},
	{"shouldFocusOnClick", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*)>(&KeyboardFocusManagerPeerImpl::shouldFocusOnClick))},
	{"shouldNativelyFocusHeavyweight", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,$Component*,bool,bool,int64_t,$FocusEvent$Cause*)>(&KeyboardFocusManagerPeerImpl::shouldNativelyFocusHeavyweight))},
	{}
};

$InnerClassInfo _KeyboardFocusManagerPeerImpl_InnerClassesInfo_[] = {
	{"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor", "sun.awt.KeyboardFocusManagerPeerImpl", "KfmAccessor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KeyboardFocusManagerPeerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.KeyboardFocusManagerPeerImpl",
	"java.lang.Object",
	"java.awt.peer.KeyboardFocusManagerPeer",
	_KeyboardFocusManagerPeerImpl_FieldInfo_,
	_KeyboardFocusManagerPeerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardFocusManagerPeerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor"
};

$Object* allocate$KeyboardFocusManagerPeerImpl($Class* clazz) {
	return $of($alloc(KeyboardFocusManagerPeerImpl));
}

$PlatformLogger* KeyboardFocusManagerPeerImpl::focusLog = nullptr;

void KeyboardFocusManagerPeerImpl::init$() {
}

void KeyboardFocusManagerPeerImpl::clearGlobalFocusOwner($Window* activeWindow) {
	$useLocalCurrentObjectStackCache();
	if (activeWindow != nullptr) {
		$var($Component, focusOwner, activeWindow->getFocusOwner());
		$init($PlatformLogger$Level);
		if ($nc(KeyboardFocusManagerPeerImpl::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(KeyboardFocusManagerPeerImpl::focusLog)->fine($$str({"Clearing global focus owner "_s, focusOwner}));
		}
		if (focusOwner != nullptr) {
			$init($FocusEvent$Cause);
			$var($FocusEvent, fl, $new($FocusEvent, focusOwner, $FocusEvent::FOCUS_LOST, false, nullptr, $FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER));
			$SunToolkit::postPriorityEvent(fl);
		}
	}
}

bool KeyboardFocusManagerPeerImpl::shouldFocusOnClick($Component* component) {
	$init(KeyboardFocusManagerPeerImpl);
	$useLocalCurrentObjectStackCache();
	bool acceptFocusOnClick = false;
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if ($instanceOf($Canvas, component) || $instanceOf($Scrollbar, component)) {
		acceptFocusOnClick = true;
	} else if ($instanceOf($Panel, component)) {
		acceptFocusOnClick = ($nc(($cast($Panel, component)))->getComponentCount() == 0);
	} else {
		$var($ComponentPeer, peer, component != nullptr ? $nc(acc)->getPeer(component) : ($ComponentPeer*)nullptr);
		acceptFocusOnClick = (peer != nullptr ? $nc(peer)->isFocusable() : false);
	}
	return acceptFocusOnClick && $nc(acc)->canBeFocusOwner(component);
}

bool KeyboardFocusManagerPeerImpl::deliverFocus($Component* lightweightChild$renamed, $Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause, $Component* currentFocusOwner) {
	$init(KeyboardFocusManagerPeerImpl);
	$useLocalCurrentObjectStackCache();
	$var($Component, lightweightChild, lightweightChild$renamed);
	if (lightweightChild == nullptr) {
		$assign(lightweightChild, target);
	}
	$var($Component, currentOwner, currentFocusOwner);
	if (currentOwner != nullptr && !currentOwner->isDisplayable()) {
		$assign(currentOwner, nullptr);
	}
	if (currentOwner != nullptr) {
		$var($FocusEvent, fl, $new($FocusEvent, currentOwner, $FocusEvent::FOCUS_LOST, false, lightweightChild, cause));
		$init($PlatformLogger$Level);
		if ($nc(KeyboardFocusManagerPeerImpl::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(KeyboardFocusManagerPeerImpl::focusLog)->finer($$str({"Posting focus event: "_s, fl}));
		}
		$SunToolkit::postEvent($($SunToolkit::targetToAppContext(currentOwner)), fl);
	}
	$var($FocusEvent, fg, $new($FocusEvent, lightweightChild, $FocusEvent::FOCUS_GAINED, false, currentOwner, cause));
	$init($PlatformLogger$Level);
	if ($nc(KeyboardFocusManagerPeerImpl::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(KeyboardFocusManagerPeerImpl::focusLog)->finer($$str({"Posting focus event: "_s, fg}));
	}
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext(lightweightChild)), fg);
	return true;
}

void KeyboardFocusManagerPeerImpl::requestFocusFor($Component* target, $FocusEvent$Cause* cause) {
	$init(KeyboardFocusManagerPeerImpl);
	$nc($($AWTAccessor::getComponentAccessor()))->requestFocus(target, cause);
}

int32_t KeyboardFocusManagerPeerImpl::shouldNativelyFocusHeavyweight($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$init(KeyboardFocusManagerPeerImpl);
	$init($KeyboardFocusManagerPeerImpl$KfmAccessor);
	return $nc($KeyboardFocusManagerPeerImpl$KfmAccessor::instance)->shouldNativelyFocusHeavyweight(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time, cause);
}

void KeyboardFocusManagerPeerImpl::removeLastFocusRequest($Component* heavyweight) {
	$init(KeyboardFocusManagerPeerImpl);
	$init($KeyboardFocusManagerPeerImpl$KfmAccessor);
	$nc($KeyboardFocusManagerPeerImpl$KfmAccessor::instance)->removeLastFocusRequest(heavyweight);
}

bool KeyboardFocusManagerPeerImpl::processSynchronousLightweightTransfer($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {
	$init(KeyboardFocusManagerPeerImpl);
	$init($KeyboardFocusManagerPeerImpl$KfmAccessor);
	return $nc($KeyboardFocusManagerPeerImpl$KfmAccessor::instance)->processSynchronousLightweightTransfer(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time);
}

void clinit$KeyboardFocusManagerPeerImpl($Class* class$) {
	$assignStatic(KeyboardFocusManagerPeerImpl::focusLog, $PlatformLogger::getLogger("sun.awt.focus.KeyboardFocusManagerPeerImpl"_s));
}

KeyboardFocusManagerPeerImpl::KeyboardFocusManagerPeerImpl() {
}

$Class* KeyboardFocusManagerPeerImpl::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManagerPeerImpl, name, initialize, &_KeyboardFocusManagerPeerImpl_ClassInfo_, clinit$KeyboardFocusManagerPeerImpl, allocate$KeyboardFocusManagerPeerImpl);
	return class$;
}

$Class* KeyboardFocusManagerPeerImpl::class$ = nullptr;

	} // awt
} // sun