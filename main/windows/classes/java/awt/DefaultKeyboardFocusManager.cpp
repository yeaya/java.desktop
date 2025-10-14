#include <java/awt/DefaultKeyboardFocusManager.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/Container.h>
#include <java/awt/DefaultKeyboardFocusManager$1.h>
#include <java/awt/DefaultKeyboardFocusManager$2.h>
#include <java/awt/DefaultKeyboardFocusManager$3.h>
#include <java/awt/DefaultKeyboardFocusManager$4.h>
#include <java/awt/DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent.h>
#include <java/awt/DefaultKeyboardFocusManager$TypeAheadMarker.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Frame.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/awt/SequencedEvent.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/TimedWindowEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVATION
#undef BACKWARD_TRAVERSAL_KEYS
#undef DOWN_CYCLE_TRAVERSAL_KEYS
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef FORWARD_TRAVERSAL_KEYS
#undef ID
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef NULL_COMPONENT_WR
#undef NULL_WINDOW_WR
#undef ROLLBACK
#undef UNKNOWN
#undef UP_CYCLE_TRAVERSAL_KEYS
#undef WINDOW_ACTIVATED
#undef WINDOW_DEACTIVATED
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_LOST_FOCUS

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $Container = ::java::awt::Container;
using $DefaultKeyboardFocusManager$1 = ::java::awt::DefaultKeyboardFocusManager$1;
using $DefaultKeyboardFocusManager$2 = ::java::awt::DefaultKeyboardFocusManager$2;
using $DefaultKeyboardFocusManager$3 = ::java::awt::DefaultKeyboardFocusManager$3;
using $DefaultKeyboardFocusManager$4 = ::java::awt::DefaultKeyboardFocusManager$4;
using $DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent = ::java::awt::DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent;
using $DefaultKeyboardFocusManager$TypeAheadMarker = ::java::awt::DefaultKeyboardFocusManager$TypeAheadMarker;
using $Dialog = ::java::awt::Dialog;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Frame = ::java::awt::Frame;
using $KeyEventDispatcher = ::java::awt::KeyEventDispatcher;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $EventObject = ::java::util::EventObject;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Set = ::java::util::Set;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$DefaultKeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $TimedWindowEvent = ::sun::awt::TimedWindowEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _DefaultKeyboardFocusManager_FieldInfo_[] = {
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultKeyboardFocusManager, focusLog)},
	{"NULL_WINDOW_WR", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultKeyboardFocusManager, NULL_WINDOW_WR)},
	{"NULL_COMPONENT_WR", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultKeyboardFocusManager, NULL_COMPONENT_WR)},
	{"realOppositeWindowWR", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", $PRIVATE, $field(DefaultKeyboardFocusManager, realOppositeWindowWR)},
	{"realOppositeComponentWR", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE, $field(DefaultKeyboardFocusManager, realOppositeComponentWR)},
	{"inSendMessage", "I", nullptr, $PRIVATE, $field(DefaultKeyboardFocusManager, inSendMessage)},
	{"enqueuedKeyEvents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/event/KeyEvent;>;", $PRIVATE, $field(DefaultKeyboardFocusManager, enqueuedKeyEvents)},
	{"typeAheadMarkers", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/DefaultKeyboardFocusManager$TypeAheadMarker;>;", $PRIVATE, $field(DefaultKeyboardFocusManager, typeAheadMarkers)},
	{"consumeNextKeyTyped", "Z", nullptr, $PRIVATE, $field(DefaultKeyboardFocusManager, consumeNextKeyTyped$)},
	{"restoreFocusTo", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(DefaultKeyboardFocusManager, restoreFocusTo)},
	{"fxAppThreadIsDispatchThread", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultKeyboardFocusManager, fxAppThreadIsDispatchThread)},
	{}
};

$MethodInfo _DefaultKeyboardFocusManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultKeyboardFocusManager::*)()>(&DefaultKeyboardFocusManager::init$))},
	{"clearMarkers", "()V", nullptr, 0},
	{"consumeNextKeyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)($KeyEvent*)>(&DefaultKeyboardFocusManager::consumeNextKeyTyped))},
	{"consumeProcessedKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($KeyEvent*)>(&DefaultKeyboardFocusManager::consumeProcessedKeyEvent))},
	{"consumeTraversalKey", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)($KeyEvent*)>(&DefaultKeyboardFocusManager::consumeTraversalKey))},
	{"dequeueKeyEvents", "(JLjava/awt/Component;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"discardKeyEvents", "(Ljava/awt/Component;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC},
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"doRestoreFocus", "(Ljava/awt/Component;Ljava/awt/Component;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($Component*,$Component*,bool)>(&DefaultKeyboardFocusManager::doRestoreFocus))},
	{"downFocusCycle", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"dumpMarkers", "()V", nullptr, 0},
	{"enqueueKeyEvents", "(JLjava/awt/Component;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"focusNextComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"focusPreviousComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"getOwningFrameDialog", "(Ljava/awt/Window;)Ljava/awt/Window;", nullptr, $PRIVATE, $method(static_cast<$Window*(DefaultKeyboardFocusManager::*)($Window*)>(&DefaultKeyboardFocusManager::getOwningFrameDialog))},
	{"hasMarker", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($Component*)>(&DefaultKeyboardFocusManager::hasMarker))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DefaultKeyboardFocusManager::initStatic))},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"preDispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($KeyEvent*)>(&DefaultKeyboardFocusManager::preDispatchKeyEvent))},
	{"processKeyEvent", "(Ljava/awt/Component;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"pumpApprovedKeyEvents", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)()>(&DefaultKeyboardFocusManager::pumpApprovedKeyEvents))},
	{"purgeStampedEvents", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)(int64_t,int64_t)>(&DefaultKeyboardFocusManager::purgeStampedEvents))},
	{"repostIfFollowsKeyEvents", "(Ljava/awt/event/WindowEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($WindowEvent*)>(&DefaultKeyboardFocusManager::repostIfFollowsKeyEvents))},
	{"restoreFocus", "(Ljava/awt/event/FocusEvent;Ljava/awt/Window;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)($FocusEvent*,$Window*)>(&DefaultKeyboardFocusManager::restoreFocus))},
	{"restoreFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultKeyboardFocusManager::*)($WindowEvent*)>(&DefaultKeyboardFocusManager::restoreFocus))},
	{"restoreFocus", "(Ljava/awt/Window;Ljava/awt/Component;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($Window*,$Component*,bool)>(&DefaultKeyboardFocusManager::restoreFocus))},
	{"restoreFocus", "(Ljava/awt/Component;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($Component*,bool)>(&DefaultKeyboardFocusManager::restoreFocus))},
	{"sendMessage", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*,$AWTEvent*)>(&DefaultKeyboardFocusManager::sendMessage))},
	{"typeAheadAssertions", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultKeyboardFocusManager::*)($Component*,$AWTEvent*)>(&DefaultKeyboardFocusManager::typeAheadAssertions))},
	{"upFocusCycle", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultKeyboardFocusManager_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent", "java.awt.DefaultKeyboardFocusManager", "DefaultKeyboardFocusManagerSentEvent", $PRIVATE | $STATIC},
	{"java.awt.DefaultKeyboardFocusManager$TypeAheadMarker", "java.awt.DefaultKeyboardFocusManager", "TypeAheadMarker", $PRIVATE | $STATIC},
	{"java.awt.DefaultKeyboardFocusManager$4", nullptr, nullptr, 0},
	{"java.awt.DefaultKeyboardFocusManager$3", nullptr, nullptr, 0},
	{"java.awt.DefaultKeyboardFocusManager$2", nullptr, nullptr, 0},
	{"java.awt.DefaultKeyboardFocusManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager",
	"java.awt.KeyboardFocusManager",
	nullptr,
	_DefaultKeyboardFocusManager_FieldInfo_,
	_DefaultKeyboardFocusManager_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultKeyboardFocusManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent,java.awt.DefaultKeyboardFocusManager$TypeAheadMarker,java.awt.DefaultKeyboardFocusManager$4,java.awt.DefaultKeyboardFocusManager$3,java.awt.DefaultKeyboardFocusManager$2,java.awt.DefaultKeyboardFocusManager$1"
};

$Object* allocate$DefaultKeyboardFocusManager($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager));
}

$PlatformLogger* DefaultKeyboardFocusManager::focusLog = nullptr;
$WeakReference* DefaultKeyboardFocusManager::NULL_WINDOW_WR = nullptr;
$WeakReference* DefaultKeyboardFocusManager::NULL_COMPONENT_WR = nullptr;
bool DefaultKeyboardFocusManager::fxAppThreadIsDispatchThread = false;

void DefaultKeyboardFocusManager::initStatic() {
	$init(DefaultKeyboardFocusManager);
	$beforeCallerSensitive();
	$AWTAccessor::setDefaultKeyboardFocusManagerAccessor($$new($DefaultKeyboardFocusManager$1));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultKeyboardFocusManager$2)));
}

void DefaultKeyboardFocusManager::init$() {
	$KeyboardFocusManager::init$();
	$set(this, realOppositeWindowWR, DefaultKeyboardFocusManager::NULL_WINDOW_WR);
	$set(this, realOppositeComponentWR, DefaultKeyboardFocusManager::NULL_COMPONENT_WR);
	$set(this, enqueuedKeyEvents, $new($LinkedList));
	$set(this, typeAheadMarkers, $new($LinkedList));
}

$Window* DefaultKeyboardFocusManager::getOwningFrameDialog($Window* window$renamed) {
	$var($Window, window, window$renamed);
	while (window != nullptr && !($instanceOf($Frame, window) || $instanceOf($Dialog, window))) {
		$assign(window, $cast($Window, $nc(window)->getParent()));
	}
	return window;
}

void DefaultKeyboardFocusManager::restoreFocus($FocusEvent* fe, $Window* newFocusedWindow) {
	$var($Component, realOppositeComponent, $cast($Component, $nc(this->realOppositeComponentWR)->get()));
	$var($Component, vetoedComponent, $nc(fe)->getComponent());
	if (newFocusedWindow != nullptr && restoreFocus(newFocusedWindow, vetoedComponent, false)) {
	} else if (realOppositeComponent != nullptr && doRestoreFocus(realOppositeComponent, vetoedComponent, false)) {
	} else {
		bool var$1 = fe->getOppositeComponent() != nullptr;
		if (var$1 && doRestoreFocus($(fe->getOppositeComponent()), vetoedComponent, false)) {
		} else {
			clearGlobalFocusOwnerPriv();
		}
	}
}

void DefaultKeyboardFocusManager::restoreFocus($WindowEvent* we) {
	$var($Window, realOppositeWindow, $cast($Window, $nc(this->realOppositeWindowWR)->get()));
	if (realOppositeWindow != nullptr && restoreFocus(realOppositeWindow, nullptr, false)) {
	} else {
		bool var$1 = we->getOppositeWindow() != nullptr;
		if (var$1 && restoreFocus($(we->getOppositeWindow()), nullptr, false)) {
		} else {
			clearGlobalFocusOwnerPriv();
		}
	}
}

bool DefaultKeyboardFocusManager::restoreFocus($Window* aWindow, $Component* vetoedComponent, bool clearOnFailure) {
	$set(this, restoreFocusTo, nullptr);
	$var($Component, toFocus, $KeyboardFocusManager::getMostRecentFocusOwner(aWindow));
	if (toFocus != nullptr && toFocus != vetoedComponent) {
		if (getHeavyweight(aWindow) != getNativeFocusOwner()) {
			bool var$0 = !toFocus->isShowing();
			if (var$0 || !toFocus->canBeFocusOwner()) {
				$assign(toFocus, toFocus->getNextFocusCandidate());
			}
			if (toFocus != nullptr && toFocus != vetoedComponent) {
				$init($FocusEvent$Cause);
				if (!toFocus->requestFocus(false, $FocusEvent$Cause::ROLLBACK)) {
					$set(this, restoreFocusTo, toFocus);
				}
				return true;
			}
		} else if (doRestoreFocus(toFocus, vetoedComponent, false)) {
			return true;
		}
	}
	if (clearOnFailure) {
		clearGlobalFocusOwnerPriv();
		return true;
	} else {
		return false;
	}
}

bool DefaultKeyboardFocusManager::restoreFocus($Component* toFocus, bool clearOnFailure) {
	return doRestoreFocus(toFocus, nullptr, clearOnFailure);
}

bool DefaultKeyboardFocusManager::doRestoreFocus($Component* toFocus, $Component* vetoedComponent, bool clearOnFailure) {
	bool success = true;
	bool var$1 = toFocus != vetoedComponent && $nc(toFocus)->isShowing();
	bool var$0 = var$1 && toFocus->canBeFocusOwner();
	$init($FocusEvent$Cause);
	if (var$0 && (success = toFocus->requestFocus(false, $FocusEvent$Cause::ROLLBACK))) {
		return true;
	} else {
		bool var$2 = !success;
		if (var$2) {
			var$2 = getGlobalFocusedWindow() != $SunToolkit::getContainingWindow(toFocus);
		}
		if (var$2) {
			$set(this, restoreFocusTo, toFocus);
			return true;
		}
		$var($Component, nextFocus, toFocus->getNextFocusCandidate());
		if (nextFocus != nullptr && nextFocus != vetoedComponent && nextFocus->requestFocusInWindow($FocusEvent$Cause::ROLLBACK)) {
			return true;
		} else if (clearOnFailure) {
			clearGlobalFocusOwnerPriv();
			return true;
		} else {
			return false;
		}
	}
}

bool DefaultKeyboardFocusManager::sendMessage($Component* target, $AWTEvent* e) {
	$init(DefaultKeyboardFocusManager);
	$nc(e)->isPosted = true;
	$var($AppContext, myAppContext, $AppContext::getAppContext());
	$var($AppContext, targetAppContext, $nc(target)->appContext);
	$var($SentEvent, se, $new($DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, e, myAppContext));
	if (myAppContext == targetAppContext) {
		se->dispatch();
	} else {
		if ($nc(targetAppContext)->isDisposed()) {
			return false;
		}
		$SunToolkit::postEvent(targetAppContext, se);
		if ($EventQueue::isDispatchThread()) {
			if ($instanceOf($EventDispatchThread, $($Thread::currentThread()))) {
				$var($EventDispatchThread, edt, $cast($EventDispatchThread, $Thread::currentThread()));
				edt->pumpEvents($SentEvent::ID, $$new($DefaultKeyboardFocusManager$3, se, targetAppContext));
			} else {
				if (DefaultKeyboardFocusManager::fxAppThreadIsDispatchThread) {
					$var($Thread, fxCheckDispatchThread, $new($DefaultKeyboardFocusManager$4, se, targetAppContext));
					fxCheckDispatchThread->start();
					try {
						fxCheckDispatchThread->join(500);
					} catch ($InterruptedException&) {
						$catch();
					}
				}
			}
		} else {
			$synchronized(se) {
				while (!se->dispatched$ && !$nc(targetAppContext)->isDisposed()) {
					try {
						$of(se)->wait(1000);
					} catch ($InterruptedException&) {
						$var($InterruptedException, ie, $catch());
						break;
					}
				}
			}
		}
	}
	return se->dispatched$;
}

bool DefaultKeyboardFocusManager::repostIfFollowsKeyEvents($WindowEvent* e) {
	if (!($instanceOf($TimedWindowEvent, e))) {
		return false;
	}
	$var($TimedWindowEvent, we, $cast($TimedWindowEvent, e));
	int64_t time = $nc(we)->getWhen();
	$synchronized(this) {
		$var($KeyEvent, ke, $nc(this->enqueuedKeyEvents)->isEmpty() ? ($KeyEvent*)nullptr : $cast($KeyEvent, $nc(this->enqueuedKeyEvents)->getFirst()));
		if (ke != nullptr && time >= ke->getWhen()) {
			$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $nc(this->typeAheadMarkers)->isEmpty() ? ($DefaultKeyboardFocusManager$TypeAheadMarker*)nullptr : $cast($DefaultKeyboardFocusManager$TypeAheadMarker, $nc(this->typeAheadMarkers)->getFirst()));
			if (marker != nullptr) {
				$var($Window, toplevel, $nc(marker->untilFocused)->getContainingWindow());
				if (toplevel != nullptr && toplevel->isFocused()) {
					$var($AppContext, var$0, $AppContext::getAppContext());
					$SunToolkit::postEvent(var$0, $$new($SequencedEvent, e));
					return true;
				}
			}
		}
	}
	return false;
}

bool DefaultKeyboardFocusManager::dispatchEvent($AWTEvent* e) {
	$init($PlatformLogger$Level);
	if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINE) && ($instanceOf($WindowEvent, e) || $instanceOf($FocusEvent, e))) {
		$nc(DefaultKeyboardFocusManager::focusLog)->fine($$str({""_s, e}));
	}
	switch ($nc(e)->getID()) {
	case $WindowEvent::WINDOW_GAINED_FOCUS:
		{
			{
				if (repostIfFollowsKeyEvents($cast($WindowEvent, e))) {
					break;
				}
				$var($WindowEvent, we, $cast($WindowEvent, e));
				$var($Window, oldFocusedWindow, getGlobalFocusedWindow());
				$var($Window, newFocusedWindow, we->getWindow());
				if (newFocusedWindow == oldFocusedWindow) {
					break;
				}
				bool var$1 = $nc(newFocusedWindow)->isFocusableWindow();
				bool var$0 = var$1 && newFocusedWindow->isVisible();
				if (!(var$0 && newFocusedWindow->isDisplayable())) {
					restoreFocus(we);
					break;
				}
				if (oldFocusedWindow != nullptr) {
					bool isEventDispatched = sendMessage(oldFocusedWindow, $$new($WindowEvent, oldFocusedWindow, $WindowEvent::WINDOW_LOST_FOCUS, newFocusedWindow));
					if (!isEventDispatched) {
						setGlobalFocusOwner(nullptr);
						setGlobalFocusedWindow(nullptr);
					}
				}
				$var($Window, newActiveWindow, getOwningFrameDialog(newFocusedWindow));
				$var($Window, currentActiveWindow, getGlobalActiveWindow());
				if (newActiveWindow != currentActiveWindow) {
					sendMessage(newActiveWindow, $$new($WindowEvent, newActiveWindow, $WindowEvent::WINDOW_ACTIVATED, currentActiveWindow));
					if (newActiveWindow != getGlobalActiveWindow()) {
						restoreFocus(we);
						break;
					}
				}
				setGlobalFocusedWindow(newFocusedWindow);
				if (newFocusedWindow != getGlobalFocusedWindow()) {
					restoreFocus(we);
					break;
				}
				if (this->inSendMessage == 0) {
					$var($Component, toFocus, $KeyboardFocusManager::getMostRecentFocusOwner(newFocusedWindow));
					bool isFocusRestore = this->restoreFocusTo != nullptr && toFocus == this->restoreFocusTo;
					if ((toFocus == nullptr) && $nc(newFocusedWindow)->isFocusableWindow()) {
						$assign(toFocus, $nc($(newFocusedWindow->getFocusTraversalPolicy()))->getInitialComponent(newFocusedWindow));
					}
					$var($Component, tempLost, nullptr);
					$synchronized($KeyboardFocusManager::class$) {
						$assign(tempLost, $nc(newFocusedWindow)->setTemporaryLostComponent(nullptr));
					}
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->finer("tempLost {0}, toFocus {1}"_s, $$new($ObjectArray, {
							$of(tempLost),
							$of(toFocus)
						}));
					}
					if (tempLost != nullptr) {
						$init($FocusEvent$Cause);
						tempLost->requestFocusInWindow(isFocusRestore && tempLost == toFocus ? $FocusEvent$Cause::ROLLBACK : $FocusEvent$Cause::ACTIVATION);
					}
					if (toFocus != nullptr && toFocus != tempLost) {
						$init($FocusEvent$Cause);
						toFocus->requestFocusInWindow($FocusEvent$Cause::ACTIVATION);
					}
				}
				$set(this, restoreFocusTo, nullptr);
				$var($Window, realOppositeWindow, $cast($Window, $nc(this->realOppositeWindowWR)->get()));
				if (realOppositeWindow != we->getOppositeWindow()) {
					$assign(we, $new($WindowEvent, newFocusedWindow, $WindowEvent::WINDOW_GAINED_FOCUS, realOppositeWindow));
				}
				return typeAheadAssertions(newFocusedWindow, we);
			}
		}
	case $WindowEvent::WINDOW_ACTIVATED:
		{
			{
				$var($WindowEvent, we, $cast($WindowEvent, e));
				$var($Window, oldActiveWindow, getGlobalActiveWindow());
				$var($Window, newActiveWindow, we->getWindow());
				if (oldActiveWindow == newActiveWindow) {
					break;
				}
				if (oldActiveWindow != nullptr) {
					bool isEventDispatched = sendMessage(oldActiveWindow, $$new($WindowEvent, oldActiveWindow, $WindowEvent::WINDOW_DEACTIVATED, newActiveWindow));
					if (!isEventDispatched) {
						setGlobalActiveWindow(nullptr);
					}
					if (getGlobalActiveWindow() != nullptr) {
						break;
					}
				}
				setGlobalActiveWindow(newActiveWindow);
				if (newActiveWindow != getGlobalActiveWindow()) {
					break;
				}
				return typeAheadAssertions(newActiveWindow, we);
			}
		}
	case $FocusEvent::FOCUS_GAINED:
		{
			{
				$set(this, restoreFocusTo, nullptr);
				$var($FocusEvent, fe, $cast($FocusEvent, e));
				$var($Component, oldFocusOwner, getGlobalFocusOwner());
				$var($Component, newFocusOwner, fe->getComponent());
				if (oldFocusOwner == newFocusOwner) {
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->fine("Skipping {0} because focus owner is the same"_s, $$new($ObjectArray, {$of(e)}));
					}
					dequeueKeyEvents(-1, newFocusOwner);
					break;
				}
				if (oldFocusOwner != nullptr) {
					$var($Component, var$2, oldFocusOwner);
					bool var$3 = fe->isTemporary();
					$var($Component, var$4, newFocusOwner);
					bool isEventDispatched = sendMessage(oldFocusOwner, $$new($FocusEvent, var$2, $FocusEvent::FOCUS_LOST, var$3, var$4, $(fe->getCause())));
					if (!isEventDispatched) {
						setGlobalFocusOwner(nullptr);
						if (!fe->isTemporary()) {
							setGlobalPermanentFocusOwner(nullptr);
						}
					}
				}
				$var($Window, newFocusedWindow, $SunToolkit::getContainingWindow(newFocusOwner));
				$var($Window, currentFocusedWindow, getGlobalFocusedWindow());
				if (newFocusedWindow != nullptr && newFocusedWindow != currentFocusedWindow) {
					sendMessage(newFocusedWindow, $$new($WindowEvent, newFocusedWindow, $WindowEvent::WINDOW_GAINED_FOCUS, currentFocusedWindow));
					if (newFocusedWindow != getGlobalFocusedWindow()) {
						dequeueKeyEvents(-1, newFocusOwner);
						break;
					}
				}
				bool var$6 = $nc(newFocusOwner)->isFocusable();
				bool var$5 = var$6 && newFocusOwner->isShowing();
				if (var$5) {
					bool var$7 = newFocusOwner->isEnabled();
					$init($FocusEvent$Cause);
					var$5 = (var$7 || $nc($(fe->getCause()))->equals($FocusEvent$Cause::UNKNOWN));
				}
				if (!(var$5)) {
					dequeueKeyEvents(-1, newFocusOwner);
					if ($KeyboardFocusManager::isAutoFocusTransferEnabled()) {
						if (newFocusedWindow == nullptr) {
							restoreFocus(fe, currentFocusedWindow);
						} else {
							restoreFocus(fe, newFocusedWindow);
						}
						setMostRecentFocusOwner(newFocusedWindow, nullptr);
					}
					break;
				}
				setGlobalFocusOwner(newFocusOwner);
				if (newFocusOwner != getGlobalFocusOwner()) {
					dequeueKeyEvents(-1, newFocusOwner);
					if ($KeyboardFocusManager::isAutoFocusTransferEnabled()) {
						restoreFocus(fe, newFocusedWindow);
					}
					break;
				}
				if (!fe->isTemporary()) {
					setGlobalPermanentFocusOwner(newFocusOwner);
					if (newFocusOwner != getGlobalPermanentFocusOwner()) {
						dequeueKeyEvents(-1, newFocusOwner);
						if ($KeyboardFocusManager::isAutoFocusTransferEnabled()) {
							restoreFocus(fe, newFocusedWindow);
						}
						break;
					}
				}
				setNativeFocusOwner($(getHeavyweight(newFocusOwner)));
				$var($Component, realOppositeComponent, $cast($Component, $nc(this->realOppositeComponentWR)->get()));
				if (realOppositeComponent != nullptr && realOppositeComponent != fe->getOppositeComponent()) {
					$var($Component, var$8, newFocusOwner);
					bool var$9 = fe->isTemporary();
					$var($Component, var$10, realOppositeComponent);
					$assign(fe, $new($FocusEvent, var$8, $FocusEvent::FOCUS_GAINED, var$9, var$10, $(fe->getCause())));
					$nc((static_cast<$AWTEvent*>(fe)))->isPosted = true;
				}
				return typeAheadAssertions(newFocusOwner, fe);
			}
		}
	case $FocusEvent::FOCUS_LOST:
		{
			{
				$var($FocusEvent, fe, $cast($FocusEvent, e));
				$var($Component, currentFocusOwner, getGlobalFocusOwner());
				if (currentFocusOwner == nullptr) {
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->fine("Skipping {0} because focus owner is null"_s, $$new($ObjectArray, {$of(e)}));
					}
					break;
				}
				if (currentFocusOwner == fe->getOppositeComponent()) {
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->fine("Skipping {0} because current focus owner is equal to opposite"_s, $$new($ObjectArray, {$of(e)}));
					}
					break;
				}
				setGlobalFocusOwner(nullptr);
				if (getGlobalFocusOwner() != nullptr) {
					restoreFocus(currentFocusOwner, true);
					break;
				}
				if (!fe->isTemporary()) {
					setGlobalPermanentFocusOwner(nullptr);
					if (getGlobalPermanentFocusOwner() != nullptr) {
						restoreFocus(currentFocusOwner, true);
						break;
					}
				} else {
					$var($Window, owningWindow, $nc(currentFocusOwner)->getContainingWindow());
					if (owningWindow != nullptr) {
						owningWindow->setTemporaryLostComponent(currentFocusOwner);
					}
				}
				setNativeFocusOwner(nullptr);
				fe->setSource(currentFocusOwner);
				$set(this, realOppositeComponentWR, (fe->getOppositeComponent() != nullptr) ? $new($WeakReference, currentFocusOwner) : DefaultKeyboardFocusManager::NULL_COMPONENT_WR);
				return typeAheadAssertions(currentFocusOwner, fe);
			}
		}
	case $WindowEvent::WINDOW_DEACTIVATED:
		{
			{
				$var($WindowEvent, we, $cast($WindowEvent, e));
				$var($Window, currentActiveWindow, getGlobalActiveWindow());
				if (currentActiveWindow == nullptr) {
					break;
				}
				if (!$equals(currentActiveWindow, e->getSource())) {
					break;
				}
				setGlobalActiveWindow(nullptr);
				if (getGlobalActiveWindow() != nullptr) {
					break;
				}
				we->setSource(currentActiveWindow);
				return typeAheadAssertions(currentActiveWindow, we);
			}
		}
	case $WindowEvent::WINDOW_LOST_FOCUS:
		{
			{
				if (repostIfFollowsKeyEvents($cast($WindowEvent, e))) {
					break;
				}
				$var($WindowEvent, we, $cast($WindowEvent, e));
				$var($Window, currentFocusedWindow, getGlobalFocusedWindow());
				$var($Window, losingFocusWindow, we->getWindow());
				$var($Window, activeWindow, getGlobalActiveWindow());
				$var($Window, oppositeWindow, we->getOppositeWindow());
				if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(DefaultKeyboardFocusManager::focusLog)->fine("Active {0}, Current focused {1}, losing focus {2} opposite {3}"_s, $$new($ObjectArray, {
						$of(activeWindow),
						$of(currentFocusedWindow),
						$of(losingFocusWindow),
						$of(oppositeWindow)
					}));
				}
				if (currentFocusedWindow == nullptr) {
					break;
				}
				if (this->inSendMessage == 0 && losingFocusWindow == activeWindow && oppositeWindow == currentFocusedWindow) {
					break;
				}
				$var($Component, currentFocusOwner, getGlobalFocusOwner());
				if (currentFocusOwner != nullptr) {
					$var($Component, oppositeComp, nullptr);
					if (oppositeWindow != nullptr) {
						$assign(oppositeComp, oppositeWindow->getTemporaryLostComponent());
						if (oppositeComp == nullptr) {
							$assign(oppositeComp, oppositeWindow->getMostRecentFocusOwner());
						}
					}
					if (oppositeComp == nullptr) {
						$assign(oppositeComp, oppositeWindow);
					}
					$init($FocusEvent$Cause);
					sendMessage(currentFocusOwner, $$new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, true, oppositeComp, $FocusEvent$Cause::ACTIVATION));
				}
				setGlobalFocusedWindow(nullptr);
				if (getGlobalFocusedWindow() != nullptr) {
					restoreFocus(currentFocusedWindow, nullptr, true);
					break;
				}
				we->setSource(currentFocusedWindow);
				$set(this, realOppositeWindowWR, (oppositeWindow != nullptr) ? $new($WeakReference, currentFocusedWindow) : DefaultKeyboardFocusManager::NULL_WINDOW_WR);
				typeAheadAssertions(currentFocusedWindow, we);
				if (oppositeWindow == nullptr && activeWindow != nullptr) {
					sendMessage(activeWindow, $$new($WindowEvent, activeWindow, $WindowEvent::WINDOW_DEACTIVATED, nullptr));
					if (getGlobalActiveWindow() != nullptr) {
						restoreFocus(currentFocusedWindow, nullptr, true);
					}
				}
				break;
			}
		}
	case $KeyEvent::KEY_TYPED:
		{}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			return typeAheadAssertions(nullptr, e);
		}
	default:
		{
			return false;
		}
	}
	return true;
}

bool DefaultKeyboardFocusManager::dispatchKeyEvent($KeyEvent* e) {
	$var($Component, focusOwner, ($nc((static_cast<$AWTEvent*>(e)))->isPosted) ? getFocusOwner() : $nc(e)->getComponent());
	bool var$0 = focusOwner != nullptr && focusOwner->isShowing();
	if (var$0 && focusOwner->canBeFocusOwner()) {
		if (!e->isConsumed()) {
			$var($Component, comp, e->getComponent());
			if (comp != nullptr && comp->isEnabled()) {
				redispatchEvent(comp, e);
			}
		}
	}
	bool stopPostProcessing = false;
	$var($List, processors, getKeyEventPostProcessors());
	if (processors != nullptr) {
		{
			$var($Iterator, iter, processors->iterator());
			for (; !stopPostProcessing && $nc(iter)->hasNext();) {
				stopPostProcessing = $nc(($cast($KeyEventPostProcessor, $(iter->next()))))->postProcessKeyEvent(e);
			}
		}
	}
	if (!stopPostProcessing) {
		postProcessKeyEvent(e);
	}
	$var($Component, source, e->getComponent());
	$var($ComponentPeer, peer, $nc(source)->peer);
	if (peer == nullptr || $instanceOf($LightweightPeer, peer)) {
		$var($Container, target, source->getNativeContainer());
		if (target != nullptr) {
			$assign(peer, target->peer);
		}
	}
	if (peer != nullptr) {
		peer->handleEvent(e);
	}
	return true;
}

bool DefaultKeyboardFocusManager::postProcessKeyEvent($KeyEvent* e) {
	if (!$nc(e)->isConsumed()) {
		$var($Component, target, e->getComponent());
		$var($Container, p, ($cast($Container, ($instanceOf($Container, target) ? target : static_cast<$Component*>($nc(target)->getParent())))));
		if (p != nullptr) {
			p->postProcessKeyEvent(e);
		}
	}
	return true;
}

void DefaultKeyboardFocusManager::pumpApprovedKeyEvents() {
	$var($KeyEvent, ke, nullptr);
	do {
		$assign(ke, nullptr);
		$synchronized(this) {
			if ($nc(this->enqueuedKeyEvents)->size() != 0) {
				$assign(ke, $cast($KeyEvent, $nc(this->enqueuedKeyEvents)->getFirst()));
				if ($nc(this->typeAheadMarkers)->size() != 0) {
					$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, $nc(this->typeAheadMarkers)->getFirst()));
					if ($nc(ke)->getWhen() > $nc(marker)->after) {
						$assign(ke, nullptr);
					}
				}
				if (ke != nullptr) {
					$init($PlatformLogger$Level);
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->finer("Pumping approved event {0}"_s, $$new($ObjectArray, {$of(ke)}));
					}
					$nc(this->enqueuedKeyEvents)->removeFirst();
				}
			}
		}
		if (ke != nullptr) {
			preDispatchKeyEvent(ke);
		}
	} while (ke != nullptr);
}

void DefaultKeyboardFocusManager::dumpMarkers() {
	$init($PlatformLogger$Level);
	if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(DefaultKeyboardFocusManager::focusLog)->finest(">>> Markers dump, time: {0}"_s, $$new($ObjectArray, {$($of($Long::valueOf($System::currentTimeMillis())))}));
		$synchronized(this) {
			if ($nc(this->typeAheadMarkers)->size() != 0) {
				{
					$var($Iterator, i$, $nc(this->typeAheadMarkers)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, i$->next()));
						{
							$nc(DefaultKeyboardFocusManager::focusLog)->finest("    {0}"_s, $$new($ObjectArray, {$of(marker)}));
						}
					}
				}
			}
		}
	}
}

bool DefaultKeyboardFocusManager::typeAheadAssertions($Component* target, $AWTEvent* e) {
	pumpApprovedKeyEvents();
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_TYPED:
		{}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			{
				$var($KeyEvent, ke, $cast($KeyEvent, e));
				$synchronized(this) {
					if (e->isPosted && $nc(this->typeAheadMarkers)->size() != 0) {
						$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, $nc(this->typeAheadMarkers)->getFirst()));
						if (ke->getWhen() > $nc(marker)->after) {
							$init($PlatformLogger$Level);
							if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
								$nc(DefaultKeyboardFocusManager::focusLog)->finer("Storing event {0} because of marker {1}"_s, $$new($ObjectArray, {
									$of(ke),
									$of(marker)
								}));
							}
							$nc(this->enqueuedKeyEvents)->addLast(ke);
							return true;
						}
					}
				}
				return preDispatchKeyEvent(ke);
			}
		}
	case $FocusEvent::FOCUS_GAINED:
		{
			$init($PlatformLogger$Level);
			if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(DefaultKeyboardFocusManager::focusLog)->finest("Markers before FOCUS_GAINED on {0}"_s, $$new($ObjectArray, {$of(target)}));
			}
			dumpMarkers();
			$synchronized(this) {
				bool found = false;
				if (hasMarker(target)) {
					{
						$var($Iterator, iter, $nc(this->typeAheadMarkers)->iterator());
						for (; $nc(iter)->hasNext();) {
							if ($nc(($cast($DefaultKeyboardFocusManager$TypeAheadMarker, $(iter->next()))))->untilFocused == target) {
								found = true;
							} else if (found) {
								break;
							}
							iter->remove();
						}
					}
				} else {
					$init($PlatformLogger$Level);
					if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(DefaultKeyboardFocusManager::focusLog)->finer("Event without marker {0}"_s, $$new($ObjectArray, {$of(e)}));
					}
				}
			}
			$nc(DefaultKeyboardFocusManager::focusLog)->finest("Markers after FOCUS_GAINED"_s);
			dumpMarkers();
			redispatchEvent(target, e);
			pumpApprovedKeyEvents();
			return true;
		}
	default:
		{
			redispatchEvent(target, e);
			return true;
		}
	}
}

bool DefaultKeyboardFocusManager::hasMarker($Component* comp) {
	{
		$var($Iterator, iter, $nc(this->typeAheadMarkers)->iterator());
		for (; $nc(iter)->hasNext();) {
			if ($nc(($cast($DefaultKeyboardFocusManager$TypeAheadMarker, $(iter->next()))))->untilFocused == comp) {
				return true;
			}
		}
	}
	return false;
}

void DefaultKeyboardFocusManager::clearMarkers() {
	$synchronized(this) {
		$nc(this->typeAheadMarkers)->clear();
	}
}

bool DefaultKeyboardFocusManager::preDispatchKeyEvent($KeyEvent* ke) {
	if ($nc((static_cast<$AWTEvent*>(ke)))->isPosted) {
		$var($Component, focusOwner, getFocusOwner());
		$nc(ke)->setSource(((focusOwner != nullptr) ? $of(focusOwner) : $($of(getFocusedWindow()))));
	}
	if ($nc(ke)->getSource() == nullptr) {
		return true;
	}
	$EventQueue::setCurrentEventAndMostRecentTime(ke);
	if ($KeyboardFocusManager::isProxyActive(ke)) {
		$var($Component, source, $cast($Component, $nc(ke)->getSource()));
		$var($Container, target, $nc(source)->getNativeContainer());
		if (target != nullptr) {
			$var($ComponentPeer, peer, target->peer);
			if (peer != nullptr) {
				peer->handleEvent(ke);
				ke->consume();
			}
		}
		return true;
	}
	$var($List, dispatchers, getKeyEventDispatchers());
	if (dispatchers != nullptr) {
		{
			$var($Iterator, iter, dispatchers->iterator());
			for (; $nc(iter)->hasNext();) {
				if ($nc(($cast($KeyEventDispatcher, $(iter->next()))))->dispatchKeyEvent(ke)) {
					return true;
				}
			}
		}
	}
	return dispatchKeyEvent(ke);
}

void DefaultKeyboardFocusManager::consumeNextKeyTyped($KeyEvent* e) {
	this->consumeNextKeyTyped$ = true;
}

void DefaultKeyboardFocusManager::consumeTraversalKey($KeyEvent* e) {
	e->consume();
	bool var$0 = (e->getID() == $KeyEvent::KEY_PRESSED);
	this->consumeNextKeyTyped$ = var$0 && !e->isActionKey();
}

bool DefaultKeyboardFocusManager::consumeProcessedKeyEvent($KeyEvent* e) {
	if ((e->getID() == $KeyEvent::KEY_TYPED) && this->consumeNextKeyTyped$) {
		e->consume();
		this->consumeNextKeyTyped$ = false;
		return true;
	}
	return false;
}

void DefaultKeyboardFocusManager::processKeyEvent($Component* focusedComponent, $KeyEvent* e) {
	if (consumeProcessedKeyEvent(e)) {
		return;
	}
	if (e->getID() == $KeyEvent::KEY_TYPED) {
		return;
	}
	bool var$0 = $nc(focusedComponent)->getFocusTraversalKeysEnabled();
	if (var$0 && !e->isConsumed()) {
		$var($AWTKeyStroke, stroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(e));
		int32_t var$1 = $nc(stroke)->getKeyCode();
		int32_t var$2 = stroke->getModifiers();
		$var($AWTKeyStroke, oppStroke, $AWTKeyStroke::getAWTKeyStroke(var$1, var$2, !stroke->isOnKeyRelease()));
		$var($Set, toTest, nullptr);
		bool contains = false;
		bool containsOpp = false;
		$assign(toTest, focusedComponent->getFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS));
		contains = $nc(toTest)->contains(stroke);
		containsOpp = toTest->contains(oppStroke);
		if (contains || containsOpp) {
			consumeTraversalKey(e);
			if (contains) {
				focusNextComponent(focusedComponent);
			}
			return;
		} else if (e->getID() == $KeyEvent::KEY_PRESSED) {
			this->consumeNextKeyTyped$ = false;
		}
		$assign(toTest, focusedComponent->getFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS));
		contains = toTest->contains(stroke);
		containsOpp = toTest->contains(oppStroke);
		if (contains || containsOpp) {
			consumeTraversalKey(e);
			if (contains) {
				focusPreviousComponent(focusedComponent);
			}
			return;
		}
		$assign(toTest, focusedComponent->getFocusTraversalKeys($KeyboardFocusManager::UP_CYCLE_TRAVERSAL_KEYS));
		contains = toTest->contains(stroke);
		containsOpp = toTest->contains(oppStroke);
		if (contains || containsOpp) {
			consumeTraversalKey(e);
			if (contains) {
				upFocusCycle(focusedComponent);
			}
			return;
		}
		if (!(($instanceOf($Container, focusedComponent)) && $nc(($cast($Container, focusedComponent)))->isFocusCycleRoot())) {
			return;
		}
		$assign(toTest, focusedComponent->getFocusTraversalKeys($KeyboardFocusManager::DOWN_CYCLE_TRAVERSAL_KEYS));
		contains = toTest->contains(stroke);
		containsOpp = toTest->contains(oppStroke);
		if (contains || containsOpp) {
			consumeTraversalKey(e);
			if (contains) {
				downFocusCycle($cast($Container, focusedComponent));
			}
		}
	}
}

void DefaultKeyboardFocusManager::enqueueKeyEvents(int64_t after, $Component* untilFocused) {
	$synchronized(this) {
		if (untilFocused == nullptr) {
			return;
		}
		$init($PlatformLogger$Level);
		if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(DefaultKeyboardFocusManager::focusLog)->finer("Enqueue at {0} for {1}"_s, $$new($ObjectArray, {
				$($of($Long::valueOf(after))),
				$of(untilFocused)
			}));
		}
		int32_t insertionIndex = 0;
		int32_t i = $nc(this->typeAheadMarkers)->size();
		$var($ListIterator, iter, $nc(this->typeAheadMarkers)->listIterator(i));
		for (; i > 0; --i) {
			$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, $nc(iter)->previous()));
			if ($nc(marker)->after <= after) {
				insertionIndex = i;
				break;
			}
		}
		$nc(this->typeAheadMarkers)->add(insertionIndex, $$new($DefaultKeyboardFocusManager$TypeAheadMarker, after, untilFocused));
	}
}

void DefaultKeyboardFocusManager::dequeueKeyEvents(int64_t after, $Component* untilFocused) {
	$synchronized(this) {
		if (untilFocused == nullptr) {
			return;
		}
		$init($PlatformLogger$Level);
		if ($nc(DefaultKeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(DefaultKeyboardFocusManager::focusLog)->finer("Dequeue at {0} for {1}"_s, $$new($ObjectArray, {
				$($of($Long::valueOf(after))),
				$of(untilFocused)
			}));
		}
		$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, nullptr);
		$var($ListIterator, iter, $nc(this->typeAheadMarkers)->listIterator((after >= 0) ? $nc(this->typeAheadMarkers)->size() : 0));
		if (after < 0) {
			while ($nc(iter)->hasNext()) {
				$assign(marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, iter->next()));
				if ($nc(marker)->untilFocused == untilFocused) {
					iter->remove();
					return;
				}
			}
		} else {
			while ($nc(iter)->hasPrevious()) {
				$assign(marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, iter->previous()));
				if ($nc(marker)->untilFocused == untilFocused && marker->after == after) {
					iter->remove();
					return;
				}
			}
		}
	}
}

void DefaultKeyboardFocusManager::discardKeyEvents($Component* comp) {
	$synchronized(this) {
		if (comp == nullptr) {
			return;
		}
		int64_t start = -1;
		{
			$var($Iterator, iter, $nc(this->typeAheadMarkers)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($DefaultKeyboardFocusManager$TypeAheadMarker, marker, $cast($DefaultKeyboardFocusManager$TypeAheadMarker, iter->next()));
				$var($Component, toTest, $nc(marker)->untilFocused);
				bool match = (toTest == comp);
				while (!match && toTest != nullptr && !($instanceOf($Window, toTest))) {
					$assign(toTest, toTest->getParent());
					match = (toTest == comp);
				}
				if (match) {
					if (start < 0) {
						start = marker->after;
					}
					iter->remove();
				} else if (start >= 0) {
					purgeStampedEvents(start, marker->after);
					start = -1;
				}
			}
		}
		purgeStampedEvents(start, -1);
	}
}

void DefaultKeyboardFocusManager::purgeStampedEvents(int64_t start, int64_t end) {
	if (start < 0) {
		return;
	}
	{
		$var($Iterator, iter, $nc(this->enqueuedKeyEvents)->iterator());
		for (; $nc(iter)->hasNext();) {
			$var($KeyEvent, ke, $cast($KeyEvent, iter->next()));
			int64_t time = $nc(ke)->getWhen();
			if (start < time && (end < 0 || time <= end)) {
				iter->remove();
			}
			if (end >= 0 && time > end) {
				break;
			}
		}
	}
}

void DefaultKeyboardFocusManager::focusPreviousComponent($Component* aComponent) {
	if (aComponent != nullptr) {
		aComponent->transferFocusBackward();
	}
}

void DefaultKeyboardFocusManager::focusNextComponent($Component* aComponent) {
	if (aComponent != nullptr) {
		aComponent->transferFocus();
	}
}

void DefaultKeyboardFocusManager::upFocusCycle($Component* aComponent) {
	if (aComponent != nullptr) {
		aComponent->transferFocusUpCycle();
	}
}

void DefaultKeyboardFocusManager::downFocusCycle($Container* aContainer) {
	if (aContainer != nullptr && aContainer->isFocusCycleRoot()) {
		aContainer->transferFocusDownCycle();
	}
}

void clinit$DefaultKeyboardFocusManager($Class* class$) {
	$assignStatic(DefaultKeyboardFocusManager::focusLog, $PlatformLogger::getLogger("java.awt.focus.DefaultKeyboardFocusManager"_s));
	$assignStatic(DefaultKeyboardFocusManager::NULL_WINDOW_WR, $new($WeakReference, nullptr));
	$assignStatic(DefaultKeyboardFocusManager::NULL_COMPONENT_WR, $new($WeakReference, nullptr));
	{
		DefaultKeyboardFocusManager::initStatic();
	}
}

DefaultKeyboardFocusManager::DefaultKeyboardFocusManager() {
}

$Class* DefaultKeyboardFocusManager::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager, name, initialize, &_DefaultKeyboardFocusManager_ClassInfo_, clinit$DefaultKeyboardFocusManager, allocate$DefaultKeyboardFocusManager);
	return class$;
}

$Class* DefaultKeyboardFocusManager::class$ = nullptr;

	} // awt
} // java