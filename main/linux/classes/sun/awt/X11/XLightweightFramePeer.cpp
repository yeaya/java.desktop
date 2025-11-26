#include <sun/awt/X11/XLightweightFramePeer.h>

#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $OverrideNativeWindowHandle = ::sun::awt::OverrideNativeWindowHandle;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XLightweightFramePeer_FieldInfo_[] = {
	{"overriddenWindowHandle", "J", nullptr, $PRIVATE | $VOLATILE, $field(XLightweightFramePeer, overriddenWindowHandle)},
	{}
};

$MethodInfo _XLightweightFramePeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/LightweightFrame;)V", nullptr, 0, $method(static_cast<void(XLightweightFramePeer::*)($LightweightFrame*)>(&XLightweightFramePeer::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"addDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"checkIfOnNewScreen", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"displayChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAbsoluteX", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAbsoluteY", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getContentWindow", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLwTarget", "()Lsun/awt/LightweightFrame;", nullptr, $PRIVATE, $method(static_cast<$LightweightFrame*(XLightweightFramePeer::*)()>(&XLightweightFramePeer::getLwTarget))},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getNETWMState", "()Lsun/awt/X11/XAtomList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getOverriddenWindowHandle", "()J", nullptr, $PUBLIC},
	{"getOwnerPeer", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getShell", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTargetMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getWidth", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getX", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getY", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleDeiconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleIconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleReparentNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleStateChange", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleVisibilityEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleWindowFocusIn", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleWindowFocusInSync", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleWindowFocusIn_Dispatch", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleWindowFocusOut", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleWindowFocusOutSync", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isGrabbed", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"recursivelySetIcon", "(Ljava/util/List;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"removeDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"removeToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestWindowFocus", "(JZ)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestWindowFocus", "(Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestXFocus", "(JZ)V", nullptr, $PROTECTED},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setGrab", "(Z)V", nullptr, $PUBLIC},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;ZLjava/util/Vector;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setNETWMState", "(Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toBack", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toFront", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateSecurityWarningVisibility", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateWindow", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XLightweightFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XLightweightFramePeer",
	"sun.awt.X11.XFramePeer",
	"sun.awt.OverrideNativeWindowHandle",
	_XLightweightFramePeer_FieldInfo_,
	_XLightweightFramePeer_MethodInfo_
};

$Object* allocate$XLightweightFramePeer($Class* clazz) {
	return $of($alloc(XLightweightFramePeer));
}

$String* XLightweightFramePeer::toString() {
	 return this->$XFramePeer::toString();
}

int32_t XLightweightFramePeer::hashCode() {
	 return this->$XFramePeer::hashCode();
}

bool XLightweightFramePeer::equals(Object$* arg0) {
	 return this->$XFramePeer::equals(arg0);
}

$Object* XLightweightFramePeer::clone() {
	 return this->$XFramePeer::clone();
}

void XLightweightFramePeer::finalize() {
	this->$XFramePeer::finalize();
}

void XLightweightFramePeer::init$($LightweightFrame* target) {
	$XFramePeer::init$(static_cast<$Frame*>(target));
	this->overriddenWindowHandle = 0;
}

$LightweightFrame* XLightweightFramePeer::getLwTarget() {
	return $cast($LightweightFrame, this->target);
}

$Graphics* XLightweightFramePeer::getGraphics() {
	return $nc($(getLwTarget()))->getGraphics();
}

void XLightweightFramePeer::xSetVisible(bool visible) {
	this->visible = visible;
}

void XLightweightFramePeer::requestXFocus(int64_t time, bool timeProvided) {
}

void XLightweightFramePeer::setGrab(bool grab) {
	$useLocalCurrentObjectStackCache();
	if (grab) {
		$nc($(getLwTarget()))->grabFocus();
	} else {
		$nc($(getLwTarget()))->ungrabFocus();
	}
}

void XLightweightFramePeer::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	$nc($($SwingAccessor::getJLightweightFrameAccessor()))->updateCursor($cast($JLightweightFrame, $(getLwTarget())));
}

void XLightweightFramePeer::addDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->addDropTarget(dt);
}

void XLightweightFramePeer::removeDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->removeDropTarget(dt);
}

void XLightweightFramePeer::overrideWindowHandle(int64_t handle) {
	this->overriddenWindowHandle = handle;
}

int64_t XLightweightFramePeer::getOverriddenWindowHandle() {
	return this->overriddenWindowHandle;
}

void XLightweightFramePeer::emulateActivation(bool doActivate) {
	$XFramePeer::emulateActivation(doActivate);
}

$Rectangle* XLightweightFramePeer::getBoundsPrivate() {
	return $XFramePeer::getBoundsPrivate();
}

void XLightweightFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XFramePeer::setBoundsPrivate(x, y, width, height);
}

void XLightweightFramePeer::print($Graphics* g) {
	$XFramePeer::print(g);
}

void XLightweightFramePeer::dispose() {
	$XFramePeer::dispose();
}

void XLightweightFramePeer::setVisible(bool vis) {
	$XFramePeer::setVisible(vis);
}

void XLightweightFramePeer::handleStateChange(int32_t oldState, int32_t newState) {
	$XFramePeer::handleStateChange(oldState, newState);
}

void XLightweightFramePeer::handlePropertyNotify($XEvent* xev) {
	$XFramePeer::handlePropertyNotify(xev);
}

void XLightweightFramePeer::setState(int32_t newState) {
	$XFramePeer::setState(newState);
}

int32_t XLightweightFramePeer::getState() {
	return $XFramePeer::getState();
}

void XLightweightFramePeer::setMaximizedBounds($Rectangle* b) {
	$XFramePeer::setMaximizedBounds(b);
}

void XLightweightFramePeer::setMenuBar($MenuBar* mb) {
	$XFramePeer::setMenuBar(mb);
}

void XLightweightFramePeer::handleWindowFocusOut($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOut(oppositeWindow, serial);
}

void XLightweightFramePeer::handleWindowFocusIn(int64_t serial) {
	$XFramePeer::handleWindowFocusIn(serial);
}

bool XLightweightFramePeer::requestWindowFocus(int64_t time, bool timeProvided) {
	return $XFramePeer::requestWindowFocus(time, timeProvided);
}

void XLightweightFramePeer::handleClientMessage($XEvent* xev) {
	$XFramePeer::handleClientMessage(xev);
}

$Point* XLightweightFramePeer::getLocationOnScreen() {
	return $XFramePeer::getLocationOnScreen();
}

int32_t XLightweightFramePeer::getHeight() {
	return $XFramePeer::getHeight();
}

int32_t XLightweightFramePeer::getWidth() {
	return $XFramePeer::getWidth();
}

int32_t XLightweightFramePeer::getAbsoluteY() {
	return $XFramePeer::getAbsoluteY();
}

int32_t XLightweightFramePeer::getAbsoluteX() {
	return $XFramePeer::getAbsoluteX();
}

$Point* XLightweightFramePeer::getLocation() {
	return $XFramePeer::getLocation();
}

int32_t XLightweightFramePeer::getY() {
	return $XFramePeer::getY();
}

int32_t XLightweightFramePeer::getX() {
	return $XFramePeer::getX();
}

$Dimension* XLightweightFramePeer::getSize() {
	return $XFramePeer::getSize();
}

$Rectangle* XLightweightFramePeer::getBounds() {
	return $XFramePeer::getBounds();
}

void XLightweightFramePeer::setResizable(bool resizable) {
	$XFramePeer::setResizable(resizable);
}

void XLightweightFramePeer::handleConfigureNotifyEvent($XEvent* xev) {
	$XFramePeer::handleConfigureNotifyEvent(xev);
}

void XLightweightFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XFramePeer::setBounds(x, y, width, height, op);
}

$Insets* XLightweightFramePeer::getInsets() {
	return $XFramePeer::getInsets();
}

void XLightweightFramePeer::handleReparentNotifyEvent($XEvent* xev) {
	$XFramePeer::handleReparentNotifyEvent(xev);
}

void XLightweightFramePeer::handleFocusEvent($XEvent* xev) {
	$XFramePeer::handleFocusEvent(xev);
}

void XLightweightFramePeer::handleDeiconify() {
	$XFramePeer::handleDeiconify();
}

void XLightweightFramePeer::handleIconify() {
	$XFramePeer::handleIconify();
}

void XLightweightFramePeer::setTitle($String* title) {
	$XFramePeer::setTitle(title);
}

void XLightweightFramePeer::updateMinimumSize() {
	$XFramePeer::updateMinimumSize();
}

int64_t XLightweightFramePeer::getContentWindow() {
	return $XFramePeer::getContentWindow();
}

int64_t XLightweightFramePeer::getShell() {
	return $XFramePeer::getShell();
}

void XLightweightFramePeer::updateWindow() {
	$XFramePeer::updateWindow();
}

void XLightweightFramePeer::setOpaque(bool isOpaque) {
	$XFramePeer::setOpaque(isOpaque);
}

void XLightweightFramePeer::setOpacity(float opacity) {
	$XFramePeer::setOpacity(opacity);
}

void XLightweightFramePeer::handleButtonPressRelease($XEvent* xev) {
	$XFramePeer::handleButtonPressRelease(xev);
}

void XLightweightFramePeer::handleMotionNotify($XEvent* xev) {
	$XFramePeer::handleMotionNotify(xev);
}

void XLightweightFramePeer::handleXCrossingEvent($XEvent* xev) {
	$XFramePeer::handleXCrossingEvent(xev);
}

bool XLightweightFramePeer::isGrabbed() {
	return $XFramePeer::isGrabbed();
}

void XLightweightFramePeer::setMWMHints($PropMwmHints* hints) {
	$XFramePeer::setMWMHints(hints);
}

$PropMwmHints* XLightweightFramePeer::getMWMHints() {
	return $XFramePeer::getMWMHints();
}

void XLightweightFramePeer::setNETWMState($XAtomList* state) {
	$XFramePeer::setNETWMState(state);
}

$XAtomList* XLightweightFramePeer::getNETWMState() {
	return $XFramePeer::getNETWMState();
}

void XLightweightFramePeer::updateFocusableWindowState() {
	$XFramePeer::updateFocusableWindowState();
}

void XLightweightFramePeer::removeDropTarget() {
	$XFramePeer::removeDropTarget();
}

void XLightweightFramePeer::addDropTarget() {
	$XFramePeer::addDropTarget();
}

bool XLightweightFramePeer::requestWindowFocus() {
	return $XFramePeer::requestWindowFocus();
}

bool XLightweightFramePeer::requestWindowFocus($XWindowPeer* actualFocusedWindow) {
	return $XFramePeer::requestWindowFocus(actualFocusedWindow);
}

void XLightweightFramePeer::setModalBlocked($Dialog* d, bool blocked, $Vector* javaToplevels) {
	$XFramePeer::setModalBlocked(d, blocked, javaToplevels);
}

void XLightweightFramePeer::setModalBlocked($Dialog* d, bool blocked) {
	$XFramePeer::setModalBlocked(d, blocked);
}

void XLightweightFramePeer::removeToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::removeToplevelStateListener(l);
}

void XLightweightFramePeer::addToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::addToplevelStateListener(l);
}

void XLightweightFramePeer::handleUnmapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleUnmapNotifyEvent(xev);
}

void XLightweightFramePeer::handleMapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleMapNotifyEvent(xev);
}

void XLightweightFramePeer::handleVisibilityEvent($XEvent* xev) {
	$XFramePeer::handleVisibilityEvent(xev);
}

void XLightweightFramePeer::updateSecurityWarningVisibility() {
	$XFramePeer::updateSecurityWarningVisibility();
}

void XLightweightFramePeer::setFullScreenExclusiveModeState(bool state) {
	$XFramePeer::setFullScreenExclusiveModeState(state);
}

void XLightweightFramePeer::repositionSecurityWarning() {
	$XFramePeer::repositionSecurityWarning();
}

void XLightweightFramePeer::updateAlwaysOnTopState() {
	$XFramePeer::updateAlwaysOnTopState();
}

void XLightweightFramePeer::toBack() {
	$XFramePeer::toBack();
}

void XLightweightFramePeer::toFront() {
	$XFramePeer::toFront();
}

void XLightweightFramePeer::paletteChanged() {
	$XFramePeer::paletteChanged();
}

void XLightweightFramePeer::displayChanged() {
	$XFramePeer::displayChanged();
}

void XLightweightFramePeer::checkIfOnNewScreen($Rectangle* newBounds) {
	$XFramePeer::checkIfOnNewScreen(newBounds);
}

void XLightweightFramePeer::handleWindowFocusOutSync($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOutSync(oppositeWindow, serial);
}

void XLightweightFramePeer::handleWindowFocusInSync(int64_t serial) {
	$XFramePeer::handleWindowFocusInSync(serial);
}

void XLightweightFramePeer::handleWindowFocusIn_Dispatch() {
	$XFramePeer::handleWindowFocusIn_Dispatch();
}

$XWindowPeer* XLightweightFramePeer::getOwnerPeer() {
	return $XFramePeer::getOwnerPeer();
}

$Dimension* XLightweightFramePeer::getTargetMinimumSize() {
	return $XFramePeer::getTargetMinimumSize();
}

void XLightweightFramePeer::recursivelySetIcon($List* icons) {
	$XFramePeer::recursivelySetIcon(icons);
}

void XLightweightFramePeer::updateIconImages() {
	$XFramePeer::updateIconImages();
}

XLightweightFramePeer::XLightweightFramePeer() {
}

$Class* XLightweightFramePeer::load$($String* name, bool initialize) {
	$loadClass(XLightweightFramePeer, name, initialize, &_XLightweightFramePeer_ClassInfo_, allocate$XLightweightFramePeer);
	return class$;
}

$Class* XLightweightFramePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun