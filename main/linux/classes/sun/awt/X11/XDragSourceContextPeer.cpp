#include <sun/awt/X11/XDragSourceContextPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XButtonEvent.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDestroyWindowEvent.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XGlobalCursorManager.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XKeySymConstants.h>
#include <sun/awt/X11/XMotionEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTION_NONE
#undef DISPATCH_CHANGED
#undef DISPATCH_ENTER
#undef DISPATCH_MOTION
#undef DISPATCH_MOUSE_MOVED
#undef FINEST
#undef GRAB_EVENT_MASK
#undef MAX_BUTTONS_SUPPORTED
#undef ROOT_EVENT_MASK

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Window = ::java::awt::Window;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XButtonEvent = ::sun::awt::X11::XButtonEvent;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDestroyWindowEvent = ::sun::awt::X11::XDestroyWindowEvent;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;
using $XDragSourceProtocolListener = ::sun::awt::X11::XDragSourceProtocolListener;
using $XEvent = ::sun::awt::X11::XEvent;
using $XException = ::sun::awt::X11::XException;
using $XGlobalCursorManager = ::sun::awt::X11::XGlobalCursorManager;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XKeySymConstants = ::sun::awt::X11::XKeySymConstants;
using $XMotionEvent = ::sun::awt::X11::XMotionEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDragSourceContextPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDragSourceContextPeer, $assertionsDisabled)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDragSourceContextPeer, logger)},
	{"ROOT_EVENT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XDragSourceContextPeer, ROOT_EVENT_MASK)},
	{"GRAB_EVENT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XDragSourceContextPeer, GRAB_EVENT_MASK)},
	{"rootEventMask", "J", nullptr, $PRIVATE, $field(XDragSourceContextPeer, rootEventMask)},
	{"dndInProgress", "Z", nullptr, $PRIVATE, $field(XDragSourceContextPeer, dndInProgress)},
	{"dragInProgress", "Z", nullptr, $PRIVATE, $field(XDragSourceContextPeer, dragInProgress)},
	{"dragRootWindow", "J", nullptr, $PRIVATE, $field(XDragSourceContextPeer, dragRootWindow)},
	{"dragProtocol", "Lsun/awt/X11/XDragSourceProtocol;", nullptr, $PRIVATE, $field(XDragSourceContextPeer, dragProtocol)},
	{"targetAction", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, targetAction)},
	{"sourceActions", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, sourceActions)},
	{"sourceAction", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, sourceAction)},
	{"sourceFormats", "[J", nullptr, $PRIVATE, $field(XDragSourceContextPeer, sourceFormats)},
	{"targetRootSubwindow", "J", nullptr, $PRIVATE, $field(XDragSourceContextPeer, targetRootSubwindow)},
	{"windowScale", "I", nullptr, 0, $field(XDragSourceContextPeer, windowScale)},
	{"xRoot", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, xRoot)},
	{"yRoot", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, yRoot)},
	{"eventState", "I", nullptr, $PRIVATE, $field(XDragSourceContextPeer, eventState)},
	{"proxyModeSourceWindow", "J", nullptr, $PRIVATE, $field(XDragSourceContextPeer, proxyModeSourceWindow)},
	{"theInstance", "Lsun/awt/X11/XDragSourceContextPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDragSourceContextPeer, theInstance)},
	{}
};

$MethodInfo _XDragSourceContextPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)($DragGestureEvent*)>(&XDragSourceContextPeer::init$))},
	{"cleanup", "(J)V", nullptr, $PUBLIC},
	{"cleanupTargetInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)()>(&XDragSourceContextPeer::cleanupTargetInfo))},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Lsun/awt/X11/XDragSourceContextPeer;", nullptr, $STATIC, $method(static_cast<XDragSourceContextPeer*(*)($DragGestureEvent*)>(&XDragSourceContextPeer::createDragSourceContextPeer)), "java.awt.dnd.InvalidDnDOperationException"},
	{"doProcessEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDragSourceContextPeer::*)($XEvent*)>(&XDragSourceContextPeer::doProcessEvent))},
	{"doUpdateTargetWindow", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)(int64_t,int64_t)>(&XDragSourceContextPeer::doUpdateTargetWindow))},
	{"findClientWindow", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XDragSourceContextPeer::findClientWindow))},
	{"getProxyModeSourceWindow", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDragSourceContextPeer::*)()>(&XDragSourceContextPeer::getProxyModeSourceWindow))},
	{"getXDragSourceProtocolListener", "()Lsun/awt/X11/XDragSourceProtocolListener;", nullptr, $STATIC, $method(static_cast<$XDragSourceProtocolListener*(*)()>(&XDragSourceContextPeer::getXDragSourceProtocolListener))},
	{"handleDragFinished", "()V", nullptr, $PUBLIC},
	{"handleDragFinished", "(Z)V", nullptr, $PUBLIC},
	{"handleDragFinished", "(ZI)V", nullptr, $PUBLIC},
	{"handleDragFinished", "(ZIII)V", nullptr, $PUBLIC},
	{"handleDragReply", "(I)V", nullptr, $PUBLIC},
	{"handleDragReply", "(III)V", nullptr, $PUBLIC},
	{"handleDragReply", "(IIII)V", nullptr, $PUBLIC},
	{"needsBogusExitBeforeDrop", "()Z", nullptr, $PROTECTED, $method(static_cast<bool(XDragSourceContextPeer::*)()>(&XDragSourceContextPeer::needsBogusExitBeforeDrop))},
	{"processClientMessage", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDragSourceContextPeer::*)($XClientMessageEvent*)>(&XDragSourceContextPeer::processClientMessage))},
	{"processDrop", "(Lsun/awt/X11/XButtonEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)($XButtonEvent*)>(&XDragSourceContextPeer::processDrop))},
	{"processEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XEvent*)>(&XDragSourceContextPeer::processEvent))},
	{"processMouseMove", "(Lsun/awt/X11/XMotionEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)($XMotionEvent*)>(&XDragSourceContextPeer::processMouseMove))},
	{"processProxyModeEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDragSourceContextPeer::*)($XEvent*)>(&XDragSourceContextPeer::processProxyModeEvent))},
	{"removeDnDGrab", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)(int64_t)>(&XDragSourceContextPeer::removeDnDGrab))},
	{"scaleDown", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(XDragSourceContextPeer::*)(int32_t)>(&XDragSourceContextPeer::scaleDown))},
	{"scaleUp", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(XDragSourceContextPeer::*)(int32_t)>(&XDragSourceContextPeer::scaleUp))},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"setNativeCursor", "(JLjava/awt/Cursor;I)V", nullptr, $PROTECTED},
	{"setProxyModeSourceWindow", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&XDragSourceContextPeer::setProxyModeSourceWindow))},
	{"setProxyModeSourceWindowImpl", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)(int64_t)>(&XDragSourceContextPeer::setProxyModeSourceWindowImpl))},
	{"startDrag", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map;)V", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)V", $PROTECTED},
	{"throwGrabFailureException", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)($String*,int32_t)>(&XDragSourceContextPeer::throwGrabFailureException)), "java.awt.dnd.InvalidDnDOperationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSourceAction", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDragSourceContextPeer::*)(int32_t)>(&XDragSourceContextPeer::updateSourceAction))},
	{"updateTargetWindow", "(Lsun/awt/X11/XMotionEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XDragSourceContextPeer::*)($XMotionEvent*)>(&XDragSourceContextPeer::updateTargetWindow))},
	{}
};

$ClassInfo _XDragSourceContextPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XDragSourceContextPeer",
	"sun.awt.dnd.SunDragSourceContextPeer",
	"sun.awt.X11.XDragSourceProtocolListener",
	_XDragSourceContextPeer_FieldInfo_,
	_XDragSourceContextPeer_MethodInfo_
};

$Object* allocate$XDragSourceContextPeer($Class* clazz) {
	return $of($alloc(XDragSourceContextPeer));
}

int32_t XDragSourceContextPeer::hashCode() {
	 return this->$SunDragSourceContextPeer::hashCode();
}

bool XDragSourceContextPeer::equals(Object$* arg0) {
	 return this->$SunDragSourceContextPeer::equals(arg0);
}

$Object* XDragSourceContextPeer::clone() {
	 return this->$SunDragSourceContextPeer::clone();
}

$String* XDragSourceContextPeer::toString() {
	 return this->$SunDragSourceContextPeer::toString();
}

void XDragSourceContextPeer::finalize() {
	this->$SunDragSourceContextPeer::finalize();
}

bool XDragSourceContextPeer::$assertionsDisabled = false;
$PlatformLogger* XDragSourceContextPeer::logger = nullptr;
XDragSourceContextPeer* XDragSourceContextPeer::theInstance = nullptr;

void XDragSourceContextPeer::init$($DragGestureEvent* dge) {
	$SunDragSourceContextPeer::init$(dge);
	this->rootEventMask = 0;
	this->dndInProgress = false;
	this->dragInProgress = false;
	this->dragRootWindow = 0;
	$set(this, dragProtocol, nullptr);
	this->targetAction = $DnDConstants::ACTION_NONE;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	this->sourceAction = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, nullptr);
	this->targetRootSubwindow = 0;
	this->windowScale = 1;
	this->xRoot = 0;
	this->yRoot = 0;
	this->eventState = 0;
	this->proxyModeSourceWindow = 0;
}

$XDragSourceProtocolListener* XDragSourceContextPeer::getXDragSourceProtocolListener() {
	$init(XDragSourceContextPeer);
	return XDragSourceContextPeer::theInstance;
}

XDragSourceContextPeer* XDragSourceContextPeer::createDragSourceContextPeer($DragGestureEvent* dge) {
	$init(XDragSourceContextPeer);
	$nc(XDragSourceContextPeer::theInstance)->setTrigger(dge);
	return XDragSourceContextPeer::theInstance;
}

void XDragSourceContextPeer::startDrag($Transferable* transferable, $longs* formats, $Map* formatMap) {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, $nc($(getTrigger()))->getComponent());
	$var($Component, c, nullptr);
	$var($XWindowPeer, wpeer, nullptr);
	for ($assign(c, component); c != nullptr && !($instanceOf($Window, c)); $assign(c, $nc($($AWTAccessor::getComponentAccessor()))->getParent(c))) {
	}
	if ($instanceOf($Window, c)) {
		$assign(wpeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(c)));
	}
	if (wpeer == nullptr) {
		$throwNew($InvalidDnDOperationException, "Cannot find top-level for the drag source component"_s);
	}
	int64_t xcursor = 0;
	int64_t rootWindow = 0;
	int64_t timeStamp = 0;
	this->windowScale = $nc(wpeer)->getScale();
	{
		$var($Cursor, cursor, getCursor());
		if (cursor != nullptr) {
			xcursor = $XGlobalCursorManager::getCursor(cursor);
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->proxyModeSourceWindow != 0) {
				$throwNew($InvalidDnDOperationException, "Proxy drag in progress"_s);
			}
			if (this->dndInProgress) {
				$throwNew($InvalidDnDOperationException, "Drag in progress"_s);
			}
			{
				int64_t screen = $XlibWrapper::XScreenNumberOfScreen(wpeer->getScreen());
				rootWindow = $XlibWrapper::RootWindow($XToolkit::getDisplay(), screen);
			}
			timeStamp = $XToolkit::getCurrentServerTime();
			int32_t dropActions = $nc($(getDragSourceContext()))->getSourceActions();
			$var($Iterator, dragProtocols, $XDragAndDropProtocols::getDragSourceProtocols());
			while ($nc(dragProtocols)->hasNext()) {
				$var($XDragSourceProtocol, dragProtocol, $cast($XDragSourceProtocol, dragProtocols->next()));
				try {
					$nc(dragProtocol)->initializeDrag(dropActions, transferable, formatMap, formats);
				} catch ($XException& xe) {
					$throw($cast($InvalidDnDOperationException, $($$new($InvalidDnDOperationException)->initCause(xe))));
				}
			}
			{
				int32_t status = 0;
				$var($XWindowAttributes, wattr, $new($XWindowAttributes));
				{
					$var($Throwable, var$2, nullptr);
					try {
						status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), rootWindow, wattr->pData);
						if (status == 0) {
							$throwNew($InvalidDnDOperationException, "XGetWindowAttributes failed"_s);
						}
						this->rootEventMask = wattr->get_your_event_mask();
						$XlibWrapper::XSelectInput($XToolkit::getDisplay(), rootWindow, this->rootEventMask | XDragSourceContextPeer::ROOT_EVENT_MASK);
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						wattr->dispose();
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
				$XBaseWindow::ungrabInput();
				status = $XlibWrapper::XGrabPointer($XToolkit::getDisplay(), rootWindow, 0, XDragSourceContextPeer::GRAB_EVENT_MASK, $XConstants::GrabModeAsync, $XConstants::GrabModeAsync, $XConstants::None, xcursor, timeStamp);
				if (status != $XConstants::GrabSuccess) {
					cleanup(timeStamp);
					throwGrabFailureException("Cannot grab pointer"_s, status);
					return$1 = true;
					goto $finally;
				}
				status = $XlibWrapper::XGrabKeyboard($XToolkit::getDisplay(), rootWindow, 0, $XConstants::GrabModeAsync, $XConstants::GrabModeAsync, timeStamp);
				if (status != $XConstants::GrabSuccess) {
					cleanup(timeStamp);
					throwGrabFailureException("Cannot grab keyboard"_s, status);
					return$1 = true;
					goto $finally;
				}
			}
			this->dndInProgress = true;
			this->dragInProgress = true;
			this->dragRootWindow = rootWindow;
			this->sourceActions = dropActions;
			$set(this, sourceFormats, formats);
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	setNativeContext(0);
	$SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable(transferable);
}

int64_t XDragSourceContextPeer::getProxyModeSourceWindow() {
	return this->proxyModeSourceWindow;
}

void XDragSourceContextPeer::setProxyModeSourceWindowImpl(int64_t window) {
	this->proxyModeSourceWindow = window;
}

void XDragSourceContextPeer::setProxyModeSourceWindow(int64_t window) {
	$init(XDragSourceContextPeer);
	$nc(XDragSourceContextPeer::theInstance)->setProxyModeSourceWindowImpl(window);
}

void XDragSourceContextPeer::setCursor($Cursor* c) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunDragSourceContextPeer::setCursor(c);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDragSourceContextPeer::setNativeCursor(int64_t nativeCtxt, $Cursor* c, int32_t cType) {
	if (!XDragSourceContextPeer::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (c == nullptr) {
		return;
	}
	int64_t xcursor = $XGlobalCursorManager::getCursor(c);
	if (xcursor == 0) {
		return;
	}
	$XlibWrapper::XChangeActivePointerGrab($XToolkit::getDisplay(), XDragSourceContextPeer::GRAB_EVENT_MASK, xcursor, $XConstants::CurrentTime);
}

bool XDragSourceContextPeer::needsBogusExitBeforeDrop() {
	return false;
}

void XDragSourceContextPeer::throwGrabFailureException($String* msg, int32_t grabStatus) {
	$useLocalCurrentObjectStackCache();
	$var($String, msgCause, ""_s);
	switch (grabStatus) {
	case $XConstants::GrabNotViewable:
		{
			$assign(msgCause, "not viewable"_s);
			break;
		}
	case $XConstants::AlreadyGrabbed:
		{
			$assign(msgCause, "already grabbed"_s);
			break;
		}
	case $XConstants::GrabInvalidTime:
		{
			$assign(msgCause, "invalid time"_s);
			break;
		}
	case $XConstants::GrabFrozen:
		{
			$assign(msgCause, "grab frozen"_s);
			break;
		}
	default:
		{
			$assign(msgCause, "unknown failure"_s);
			break;
		}
	}
	$throwNew($InvalidDnDOperationException, $$str({msg, ": "_s, msgCause}));
}

void XDragSourceContextPeer::cleanup(int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (this->dndInProgress) {
		if (this->dragProtocol != nullptr) {
			$nc(this->dragProtocol)->sendLeaveMessage(time);
		}
		if (this->targetAction != $DnDConstants::ACTION_NONE) {
			dragExit(this->xRoot, this->yRoot);
		}
		dragDropFinished(false, $DnDConstants::ACTION_NONE, this->xRoot, this->yRoot);
	}
	$var($Iterator, dragProtocols, $XDragAndDropProtocols::getDragSourceProtocols());
	while ($nc(dragProtocols)->hasNext()) {
		$var($XDragSourceProtocol, dragProtocol, $cast($XDragSourceProtocol, dragProtocols->next()));
		try {
			$nc(dragProtocol)->cleanup();
		} catch ($XException& xe) {
		}
	}
	this->dndInProgress = false;
	this->dragInProgress = false;
	this->dragRootWindow = 0;
	$set(this, sourceFormats, nullptr);
	this->sourceActions = $DnDConstants::ACTION_NONE;
	this->sourceAction = $DnDConstants::ACTION_NONE;
	this->eventState = 0;
	this->xRoot = 0;
	this->yRoot = 0;
	cleanupTargetInfo();
	removeDnDGrab(time);
}

void XDragSourceContextPeer::cleanupTargetInfo() {
	this->targetAction = $DnDConstants::ACTION_NONE;
	$set(this, dragProtocol, nullptr);
	this->targetRootSubwindow = 0;
}

void XDragSourceContextPeer::removeDnDGrab(int64_t time) {
	if (!XDragSourceContextPeer::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$XlibWrapper::XUngrabPointer($XToolkit::getDisplay(), time);
	$XlibWrapper::XUngrabKeyboard($XToolkit::getDisplay(), time);
	if ((this->rootEventMask | XDragSourceContextPeer::ROOT_EVENT_MASK) != this->rootEventMask && this->dragRootWindow != 0) {
		$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->dragRootWindow, this->rootEventMask);
	}
	this->rootEventMask = 0;
	this->dragRootWindow = 0;
}

bool XDragSourceContextPeer::processClientMessage($XClientMessageEvent* xclient) {
	if (this->dragProtocol != nullptr) {
		return $nc(this->dragProtocol)->processClientMessage(xclient);
	}
	return false;
}

bool XDragSourceContextPeer::updateSourceAction(int32_t state) {
	int32_t action = $SunDragSourceContextPeer::convertModifiersToDropAction($XWindow::getModifiers(state, 0, 0), this->sourceActions);
	if (this->sourceAction == action) {
		return false;
	}
	this->sourceAction = action;
	return true;
}

int64_t XDragSourceContextPeer::findClientWindow(int64_t window) {
	$init(XDragSourceContextPeer);
	$useLocalCurrentObjectStackCache();
	if ($XlibUtil::isTrueToplevelWindow(window)) {
		return window;
	}
	$var($Set, children, $XlibUtil::getChildWindows(window));
	{
		$var($Iterator, i$, $nc(children)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, child, $cast($Long, i$->next()));
			{
				int64_t win = findClientWindow($nc(child)->longValue());
				if (win != 0) {
					return win;
				}
			}
		}
	}
	return 0;
}

void XDragSourceContextPeer::doUpdateTargetWindow(int64_t subwindow, int64_t time) {
	$useLocalCurrentObjectStackCache();
	int64_t clientWindow = 0;
	int64_t proxyWindow = 0;
	$var($XDragSourceProtocol, protocol, nullptr);
	bool isReceiver = false;
	if (subwindow != 0) {
		clientWindow = findClientWindow(subwindow);
	}
	if (clientWindow != 0) {
		$var($Iterator, dragProtocols, $XDragAndDropProtocols::getDragSourceProtocols());
		while ($nc(dragProtocols)->hasNext()) {
			$var($XDragSourceProtocol, dragProtocol, $cast($XDragSourceProtocol, dragProtocols->next()));
			if ($nc(dragProtocol)->attachTargetWindow(clientWindow, time)) {
				$assign(protocol, dragProtocol);
				break;
			}
		}
	}
	$set(this, dragProtocol, protocol);
	this->targetAction = $DnDConstants::ACTION_NONE;
	this->targetRootSubwindow = subwindow;
}

void XDragSourceContextPeer::updateTargetWindow($XMotionEvent* xmotion) {
	if (!XDragSourceContextPeer::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int32_t x = scaleDown($nc(xmotion)->get_x_root());
	int32_t y = scaleDown($nc(xmotion)->get_y_root());
	int64_t time = $nc(xmotion)->get_time();
	int64_t subwindow = xmotion->get_subwindow();
	int64_t var$0 = xmotion->get_window();
	if (var$0 != xmotion->get_root()) {
		int64_t var$1 = $XToolkit::getDisplay();
		$init($XlibWrapper);
		$XlibWrapper::XQueryPointer(var$1, xmotion->get_root(), $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
		subwindow = $Native::getLong($XlibWrapper::larg2);
	}
	if (this->targetRootSubwindow != subwindow) {
		if (this->dragProtocol != nullptr) {
			$nc(this->dragProtocol)->sendLeaveMessage(time);
			if (this->targetAction != $DnDConstants::ACTION_NONE) {
				dragExit(x, y);
			}
		}
		doUpdateTargetWindow(subwindow, time);
		if (this->dragProtocol != nullptr) {
			$nc(this->dragProtocol)->sendEnterMessage(this->sourceFormats, this->sourceAction, this->sourceActions, time);
		}
	}
}

void XDragSourceContextPeer::processMouseMove($XMotionEvent* xmotion) {
	if (!this->dragInProgress) {
		return;
	}
	int32_t motionXRoot = scaleDown($nc(xmotion)->get_x_root());
	int32_t motionYRoot = scaleDown($nc(xmotion)->get_y_root());
	if (this->xRoot != motionXRoot || this->yRoot != motionYRoot) {
		this->xRoot = motionXRoot;
		this->yRoot = motionYRoot;
		postDragSourceDragEvent(this->targetAction, $XWindow::getModifiers($nc(xmotion)->get_state(), 0, 0), this->xRoot, this->yRoot, $SunDragSourceContextPeer::DISPATCH_MOUSE_MOVED);
	}
	if (this->eventState != $nc(xmotion)->get_state()) {
		if (updateSourceAction(xmotion->get_state()) && this->dragProtocol != nullptr) {
			postDragSourceDragEvent(this->targetAction, $XWindow::getModifiers(xmotion->get_state(), 0, 0), this->xRoot, this->yRoot, $SunDragSourceContextPeer::DISPATCH_CHANGED);
		}
		this->eventState = xmotion->get_state();
	}
	updateTargetWindow(xmotion);
	if (this->dragProtocol != nullptr) {
		int32_t var$0 = $nc(xmotion)->get_x_root();
		int32_t var$1 = xmotion->get_y_root();
		int32_t var$2 = this->sourceAction;
		int32_t var$3 = this->sourceActions;
		$nc(this->dragProtocol)->sendMoveMessage(var$0, var$1, var$2, var$3, xmotion->get_time());
	}
}

void XDragSourceContextPeer::processDrop($XButtonEvent* xbutton) {
	try {
		int32_t var$0 = $nc(xbutton)->get_x_root();
		int32_t var$1 = xbutton->get_y_root();
		int32_t var$2 = this->sourceAction;
		int32_t var$3 = this->sourceActions;
		$nc(this->dragProtocol)->initiateDrop(var$0, var$1, var$2, var$3, xbutton->get_time());
	} catch ($XException& e) {
		cleanup($nc(xbutton)->get_time());
	}
}

bool XDragSourceContextPeer::processProxyModeEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (getProxyModeSourceWindow() == 0) {
		return false;
	}
	if ($nc(ev)->get_type() != $XConstants::ClientMessage) {
		return false;
	}
	$init($PlatformLogger$Level);
	if ($nc(XDragSourceContextPeer::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDragSourceContextPeer::logger)->finest($$str({"        proxyModeSourceWindow="_s, $$str(getProxyModeSourceWindow()), " ev="_s, ev}));
	}
	$var($XClientMessageEvent, xclient, $nc(ev)->get_xclient());
	$var($Iterator, dragProtocols, $XDragAndDropProtocols::getDragSourceProtocols());
	while ($nc(dragProtocols)->hasNext()) {
		$var($XDragSourceProtocol, dragProtocol, $cast($XDragSourceProtocol, dragProtocols->next()));
		if ($nc(dragProtocol)->processProxyModeEvent(xclient, getProxyModeSourceWindow())) {
			return true;
		}
	}
	return false;
}

bool XDragSourceContextPeer::doProcessEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (!XDragSourceContextPeer::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (processProxyModeEvent(ev)) {
		return true;
	}
	if (!this->dndInProgress) {
		return false;
	}
	switch ($nc(ev)->get_type()) {
	case $XConstants::ClientMessage:
		{
			{
				$var($XClientMessageEvent, xclient, ev->get_xclient());
				return processClientMessage(xclient);
			}
		}
	case $XConstants::DestroyNotify:
		{
			{
				$var($XDestroyWindowEvent, xde, ev->get_xdestroywindow());
				bool var$0 = !this->dragInProgress && this->dragProtocol != nullptr;
				if (var$0) {
					int64_t var$1 = $nc(xde)->get_window();
					var$0 = var$1 == $nc(this->dragProtocol)->getTargetWindow();
				}
				if (var$0) {
					cleanup($XConstants::CurrentTime);
					return true;
				}
				return false;
			}
		}
	}
	if (!this->dragInProgress) {
		return false;
	}
	switch (ev->get_type()) {
	case $XConstants::KeyRelease:
		{}
	case $XConstants::KeyPress:
		{
			{
				$var($XKeyEvent, xkey, ev->get_xkey());
				int64_t var$2 = $XToolkit::getDisplay();
				int64_t keysym = $XlibWrapper::XKeycodeToKeysym(var$2, $nc(xkey)->get_keycode(), 0);
				do {
					int32_t var$3 = keysym;
					if (var$3 == (int32_t)$XKeySymConstants::XK_Escape) {
						goto case$0;
					}
					if (var$3 == (int32_t)$XKeySymConstants::XK_Control_R) {
						goto case$1;
					}
					if (var$3 == (int32_t)$XKeySymConstants::XK_Control_L) {
						goto case$2;
					}
					if (var$3 == (int32_t)$XKeySymConstants::XK_Shift_R) {
						goto case$3;
					}
					if (var$3 == (int32_t)$XKeySymConstants::XK_Shift_L) {
						goto case$4;
					}
					break;
case$0:
					// (int)XKeySymConstants.XK_Escape
					{
						{
							if (ev->get_type() == $XConstants::KeyRelease) {
								cleanup($nc(xkey)->get_time());
							}
							break;
						}
					}
case$1:
					// (int)XKeySymConstants.XK_Control_R
					{
					}
case$2:
					// (int)XKeySymConstants.XK_Control_L
					{
					}
case$3:
					// (int)XKeySymConstants.XK_Shift_R
					{
					}
case$4:
					// (int)XKeySymConstants.XK_Shift_L
					{
						{
							int64_t var$4 = $XToolkit::getDisplay();
							$XlibWrapper::XQueryPointer(var$4, $nc(xkey)->get_root(), $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
							$var($XMotionEvent, xmotion, $new($XMotionEvent));
							{
								$var($Throwable, var$5, nullptr);
								try {
									xmotion->set_type($XConstants::MotionNotify);
									xmotion->set_serial($nc(xkey)->get_serial());
									xmotion->set_send_event($nc(xkey)->get_send_event());
									xmotion->set_display($nc(xkey)->get_display());
									xmotion->set_window($nc(xkey)->get_window());
									xmotion->set_root($nc(xkey)->get_root());
									xmotion->set_subwindow($nc(xkey)->get_subwindow());
									xmotion->set_time($nc(xkey)->get_time());
									xmotion->set_x($nc(xkey)->get_x());
									xmotion->set_y($nc(xkey)->get_y());
									xmotion->set_x_root($nc(xkey)->get_x_root());
									xmotion->set_y_root($nc(xkey)->get_y_root());
									xmotion->set_state($Native::getInt($XlibWrapper::larg7));
									xmotion->set_same_screen($nc(xkey)->get_same_screen());
									processMouseMove(xmotion);
								} catch ($Throwable& var$6) {
									$assign(var$5, var$6);
								} /*finally*/ {
									xmotion->dispose();
								}
								if (var$5 != nullptr) {
									$throw(var$5);
								}
							}
							break;
						}
					}
				} while (false);
				return true;
			}
		}
	case $XConstants::ButtonPress:
		{
			return true;
		}
	case $XConstants::MotionNotify:
		{
			processMouseMove($(ev->get_xmotion()));
			return true;
		}
	case $XConstants::ButtonRelease:
		{
			{
				$var($XButtonEvent, xbutton, ev->get_xbutton());
				if ($nc(xbutton)->get_button() > $SunToolkit::MAX_BUTTONS_SUPPORTED) {
					return true;
				}
				$var($XMotionEvent, xmotion, $new($XMotionEvent));
				{
					$var($Throwable, var$7, nullptr);
					try {
						xmotion->set_type($XConstants::MotionNotify);
						xmotion->set_serial($nc(xbutton)->get_serial());
						xmotion->set_send_event($nc(xbutton)->get_send_event());
						xmotion->set_display($nc(xbutton)->get_display());
						xmotion->set_window($nc(xbutton)->get_window());
						xmotion->set_root($nc(xbutton)->get_root());
						xmotion->set_subwindow($nc(xbutton)->get_subwindow());
						xmotion->set_time($nc(xbutton)->get_time());
						xmotion->set_x($nc(xbutton)->get_x());
						xmotion->set_y($nc(xbutton)->get_y());
						xmotion->set_x_root($nc(xbutton)->get_x_root());
						xmotion->set_y_root($nc(xbutton)->get_y_root());
						xmotion->set_state($nc(xbutton)->get_state());
						xmotion->set_same_screen($nc(xbutton)->get_same_screen());
						processMouseMove(xmotion);
					} catch ($Throwable& var$8) {
						$assign(var$7, var$8);
					} /*finally*/ {
						xmotion->dispose();
					}
					if (var$7 != nullptr) {
						$throw(var$7);
					}
				}
				$init($XConstants);
				bool var$9 = $nc(xbutton)->get_button() == $nc($XConstants::buttons)->get(0);
				if (var$9 || $nc(xbutton)->get_button() == $nc($XConstants::buttons)->get(1)) {
					removeDnDGrab(xbutton->get_time());
					this->dragInProgress = false;
					if (this->dragProtocol != nullptr && this->targetAction != $DnDConstants::ACTION_NONE) {
						processDrop(xbutton);
					} else {
						cleanup(xbutton->get_time());
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool XDragSourceContextPeer::processEvent($XEvent* ev) {
	$init(XDragSourceContextPeer);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(XDragSourceContextPeer::theInstance)->doProcessEvent(ev);
				return$1 = true;
				goto $finally;
			} catch ($XException& e) {
				e->printStackTrace();
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XDragSourceContextPeer::handleDragReply(int32_t action) {
	handleDragReply(action, this->xRoot, this->yRoot);
}

void XDragSourceContextPeer::handleDragReply(int32_t action, int32_t x, int32_t y) {
	handleDragReply(action, this->xRoot, this->yRoot, $XWindow::getModifiers(this->eventState, 0, 0));
}

void XDragSourceContextPeer::handleDragReply(int32_t action, int32_t x, int32_t y, int32_t modifiers) {
	if (action == $DnDConstants::ACTION_NONE && this->targetAction != $DnDConstants::ACTION_NONE) {
		dragExit(x, y);
	} else if (action != $DnDConstants::ACTION_NONE) {
		int32_t type = 0;
		if (this->targetAction == $DnDConstants::ACTION_NONE) {
			type = $SunDragSourceContextPeer::DISPATCH_ENTER;
		} else {
			type = $SunDragSourceContextPeer::DISPATCH_MOTION;
		}
		postDragSourceDragEvent(action, modifiers, x, y, type);
	}
	this->targetAction = action;
}

void XDragSourceContextPeer::handleDragFinished() {
	handleDragFinished(true);
}

void XDragSourceContextPeer::handleDragFinished(bool success) {
	handleDragFinished(true, this->targetAction);
}

void XDragSourceContextPeer::handleDragFinished(bool success, int32_t action) {
	handleDragFinished(success, action, this->xRoot, this->yRoot);
}

void XDragSourceContextPeer::handleDragFinished(bool success, int32_t action, int32_t x, int32_t y) {
	dragDropFinished(success, action, x, y);
	this->dndInProgress = false;
	cleanup($XConstants::CurrentTime);
}

int32_t XDragSourceContextPeer::scaleUp(int32_t x) {
	return $Region::clipRound(x * (double)this->windowScale);
}

int32_t XDragSourceContextPeer::scaleDown(int32_t x) {
	return $Region::clipRound(x / (double)this->windowScale);
}

void clinit$XDragSourceContextPeer($Class* class$) {
	XDragSourceContextPeer::$assertionsDisabled = !XDragSourceContextPeer::class$->desiredAssertionStatus();
	$assignStatic(XDragSourceContextPeer::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDragSourceContextPeer"_s));
	$assignStatic(XDragSourceContextPeer::theInstance, $new(XDragSourceContextPeer, nullptr));
}

XDragSourceContextPeer::XDragSourceContextPeer() {
}

$Class* XDragSourceContextPeer::load$($String* name, bool initialize) {
	$loadClass(XDragSourceContextPeer, name, initialize, &_XDragSourceContextPeer_ClassInfo_, clinit$XDragSourceContextPeer, allocate$XDragSourceContextPeer);
	return class$;
}

$Class* XDragSourceContextPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun