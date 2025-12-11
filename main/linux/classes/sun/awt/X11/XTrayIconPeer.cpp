#include <sun/awt/X11/XTrayIconPeer.h>

#include <java/awt/AWTException.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Rectangle.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbeddedFrame.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer$1.h>
#include <sun/awt/X11/XTrayIconPeer$2.h>
#include <sun/awt/X11/XTrayIconPeer$3.h>
#include <sun/awt/X11/XTrayIconPeer$4.h>
#include <sun/awt/X11/XTrayIconPeer$5.h>
#include <sun/awt/X11/XTrayIconPeer$6.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer$TrayIconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer$TrayIconEventProxy.h>
#include <sun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef METACITY_WM
#undef PERIOD
#undef TRAY_ICON_HEIGHT
#undef TRAY_ICON_WIDTH

using $AWTException = ::java::awt::AWTException;
using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $Rectangle = ::java::awt::Rectangle;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $InfoWindow$Balloon$LiveArguments = ::sun::awt::X11::InfoWindow$Balloon$LiveArguments;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbeddedFrame = ::sun::awt::X11::XEmbeddedFrame;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer$1 = ::sun::awt::X11::XTrayIconPeer$1;
using $XTrayIconPeer$2 = ::sun::awt::X11::XTrayIconPeer$2;
using $XTrayIconPeer$3 = ::sun::awt::X11::XTrayIconPeer$3;
using $XTrayIconPeer$4 = ::sun::awt::X11::XTrayIconPeer$4;
using $XTrayIconPeer$5 = ::sun::awt::X11::XTrayIconPeer$5;
using $XTrayIconPeer$6 = ::sun::awt::X11::XTrayIconPeer$6;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;
using $XTrayIconPeer$TrayIconCanvas = ::sun::awt::X11::XTrayIconPeer$TrayIconCanvas;
using $XTrayIconPeer$TrayIconEventProxy = ::sun::awt::X11::XTrayIconPeer$TrayIconEventProxy;
using $XTrayIconPeer$XTrayIconEmbeddedFrame = ::sun::awt::X11::XTrayIconPeer$XTrayIconEmbeddedFrame;
using $XWM = ::sun::awt::X11::XWM;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTrayIconPeer, $assertionsDisabled)},
	{"ctrLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XTrayIconPeer, ctrLog)},
	{"target", "Ljava/awt/TrayIcon;", nullptr, 0, $field(XTrayIconPeer, target)},
	{"eventProxy", "Lsun/awt/X11/XTrayIconPeer$TrayIconEventProxy;", nullptr, 0, $field(XTrayIconPeer, eventProxy)},
	{"eframe", "Lsun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame;", nullptr, 0, $field(XTrayIconPeer, eframe)},
	{"canvas", "Lsun/awt/X11/XTrayIconPeer$TrayIconCanvas;", nullptr, 0, $field(XTrayIconPeer, canvas)},
	{"balloon", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, 0, $field(XTrayIconPeer, balloon)},
	{"tooltip", "Lsun/awt/X11/InfoWindow$Tooltip;", nullptr, 0, $field(XTrayIconPeer, tooltip)},
	{"popup", "Ljava/awt/PopupMenu;", nullptr, 0, $field(XTrayIconPeer, popup)},
	{"tooltipString", "Ljava/lang/String;", nullptr, 0, $field(XTrayIconPeer, tooltipString)},
	{"isTrayIconDisplayed", "Z", nullptr, 0, $field(XTrayIconPeer, isTrayIconDisplayed)},
	{"eframeParentID", "J", nullptr, 0, $field(XTrayIconPeer, eframeParentID)},
	{"parentXED", "Lsun/awt/X11/XEventDispatcher;", nullptr, $FINAL, $field(XTrayIconPeer, parentXED)},
	{"eframeXED", "Lsun/awt/X11/XEventDispatcher;", nullptr, $FINAL, $field(XTrayIconPeer, eframeXED)},
	{"dummyXED", "Lsun/awt/X11/XEventDispatcher;", nullptr, $STATIC | $FINAL, $staticField(XTrayIconPeer, dummyXED)},
	{"isDisposed", "Z", nullptr, $VOLATILE, $field(XTrayIconPeer, isDisposed$)},
	{"isParentWindowLocated", "Z", nullptr, 0, $field(XTrayIconPeer, isParentWindowLocated)},
	{"old_x", "I", nullptr, 0, $field(XTrayIconPeer, old_x)},
	{"old_y", "I", nullptr, 0, $field(XTrayIconPeer, old_y)},
	{"ex_width", "I", nullptr, 0, $field(XTrayIconPeer, ex_width)},
	{"ex_height", "I", nullptr, 0, $field(XTrayIconPeer, ex_height)},
	{"TRAY_ICON_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(XTrayIconPeer, TRAY_ICON_WIDTH)},
	{"TRAY_ICON_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(XTrayIconPeer, TRAY_ICON_HEIGHT)},
	{}
};

$MethodInfo _XTrayIconPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TrayIcon;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer::*)($TrayIcon*)>(&XTrayIconPeer::init$)), "java.awt.AWTException"},
	{"addListeners", "()V", nullptr, 0},
	{"addXED", "(JLsun/awt/X11/XEventDispatcher;J)V", nullptr, $PRIVATE, $method(static_cast<void(XTrayIconPeer::*)(int64_t,$XEventDispatcher*,int64_t)>(&XTrayIconPeer::addXED))},
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeOnEDT", "()V", nullptr, $PRIVATE, $method(static_cast<void(XTrayIconPeer::*)()>(&XTrayIconPeer::disposeOnEDT))},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(XTrayIconPeer::*)()>(&XTrayIconPeer::getLocationOnScreen))},
	{"getTooltipString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWindow", "()J", nullptr, 0},
	{"isDisposed", "()Z", nullptr, $PUBLIC},
	{"removeListeners", "()V", nullptr, 0},
	{"removeXED", "(JLsun/awt/X11/XEventDispatcher;)V", nullptr, $PRIVATE, $method(static_cast<void(XTrayIconPeer::*)(int64_t,$XEventDispatcher*)>(&XTrayIconPeer::removeXED))},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"showPopupMenu", "(II)V", nullptr, $PUBLIC},
	{"suppressWarningString", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*)>(&XTrayIconPeer::suppressWarningString))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateImage", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTrayIconPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
	{"sun.awt.X11.XTrayIconPeer$TrayIconCanvas", "sun.awt.X11.XTrayIconPeer", "TrayIconCanvas", $STATIC},
	{"sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame", "sun.awt.X11.XTrayIconPeer", "XTrayIconEmbeddedFrame", $PRIVATE | $STATIC},
	{"sun.awt.X11.XTrayIconPeer$TrayIconEventProxy", "sun.awt.X11.XTrayIconPeer", "TrayIconEventProxy", $STATIC},
	{"sun.awt.X11.XTrayIconPeer$6", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$5", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer",
	"java.lang.Object",
	"java.awt.peer.TrayIconPeer,sun.awt.X11.InfoWindow$Balloon$LiveArguments,sun.awt.X11.InfoWindow$Tooltip$LiveArguments",
	_XTrayIconPeer_FieldInfo_,
	_XTrayIconPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer$IconCanvas,sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver,sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1,sun.awt.X11.XTrayIconPeer$TrayIconCanvas,sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame,sun.awt.X11.XTrayIconPeer$TrayIconEventProxy,sun.awt.X11.XTrayIconPeer$6,sun.awt.X11.XTrayIconPeer$5,sun.awt.X11.XTrayIconPeer$4,sun.awt.X11.XTrayIconPeer$4$1,sun.awt.X11.XTrayIconPeer$3,sun.awt.X11.XTrayIconPeer$2,sun.awt.X11.XTrayIconPeer$1"
};

$Object* allocate$XTrayIconPeer($Class* clazz) {
	return $of($alloc(XTrayIconPeer));
}

int32_t XTrayIconPeer::hashCode() {
	 return this->$TrayIconPeer::hashCode();
}

bool XTrayIconPeer::equals(Object$* arg0) {
	 return this->$TrayIconPeer::equals(arg0);
}

$Object* XTrayIconPeer::clone() {
	 return this->$TrayIconPeer::clone();
}

$String* XTrayIconPeer::toString() {
	 return this->$TrayIconPeer::toString();
}

void XTrayIconPeer::finalize() {
	this->$TrayIconPeer::finalize();
}

bool XTrayIconPeer::$assertionsDisabled = false;
$PlatformLogger* XTrayIconPeer::ctrLog = nullptr;
$XEventDispatcher* XTrayIconPeer::dummyXED = nullptr;

void XTrayIconPeer::init$($TrayIcon* target) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, target, target);
	$set(this, eventProxy, $new($XTrayIconPeer$TrayIconEventProxy, this));
	$set(this, canvas, $new($XTrayIconPeer$TrayIconCanvas, target, XTrayIconPeer::TRAY_ICON_WIDTH, XTrayIconPeer::TRAY_ICON_HEIGHT));
	$set(this, eframe, $new($XTrayIconPeer$XTrayIconEmbeddedFrame));
	$nc(this->eframe)->setSize(XTrayIconPeer::TRAY_ICON_WIDTH, XTrayIconPeer::TRAY_ICON_HEIGHT);
	$nc(this->eframe)->add(static_cast<$Component*>(this->canvas));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XTrayIconPeer$2, this)));
	if ($XWM::getWMID() != $XWM::METACITY_WM) {
		$set(this, parentXED, XTrayIconPeer::dummyXED);
	} else {
		$set(this, parentXED, $new($XTrayIconPeer$3, this));
	}
	$set(this, eframeXED, $new($XTrayIconPeer$4, this));
	addXED(getWindow(), this->eframeXED, $XConstants::StructureNotifyMask);
	$nc($($XSystemTrayPeer::getPeerInstance()))->addTrayIcon(this);
	int64_t start = $System::currentTimeMillis();
	int64_t PERIOD = $XToolkit::getTrayIconDisplayTimeout();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (!this->isTrayIconDisplayed) {
				try {
					$XToolkit::awtLockWait(PERIOD);
				} catch ($InterruptedException& e) {
					break;
				}
				if ($System::currentTimeMillis() - start > PERIOD) {
					break;
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!this->isTrayIconDisplayed || this->eframeParentID == 0 || this->eframeParentID == $XToolkit::getDefaultRootWindow()) {
		$throwNew($AWTException, "TrayIcon couldn\'t be displayed."_s);
	}
	$nc(this->eframe)->setVisible(true);
	updateImage();
	$set(this, balloon, $new($InfoWindow$Balloon, this->eframe, target, this));
	$set(this, tooltip, $new($InfoWindow$Tooltip, this->eframe, target, this));
	addListeners();
}

void XTrayIconPeer::dispose() {
	if ($SunToolkit::isDispatchThreadForAppContext(this->target)) {
		disposeOnEDT();
	} else {
		try {
			$SunToolkit::executeOnEDTAndWait(this->target, $$new($XTrayIconPeer$5, this));
		} catch ($InterruptedException& ie) {
		} catch ($InvocationTargetException& ite) {
		}
	}
}

void XTrayIconPeer::disposeOnEDT() {
	$XToolkit::awtLock();
	this->isDisposed$ = true;
	$XToolkit::awtUnlock();
	removeXED(getWindow(), this->eframeXED);
	removeXED(this->eframeParentID, this->parentXED);
	removeListeners();
	$nc(this->eframe)->realDispose();
	$nc(this->balloon)->dispose();
	$nc(this->tooltip)->dispose();
	this->isTrayIconDisplayed = false;
	$nc(this->canvas)->dispose();
	$set(this, canvas, nullptr);
	$set(this, popup, nullptr);
	$set(this, balloon, nullptr);
	$set(this, tooltip, nullptr);
	$XToolkit::targetDisposedPeer(this->target, this);
	$set(this, target, nullptr);
	$set(this, eframe, nullptr);
}

void XTrayIconPeer::suppressWarningString($Window* w) {
	$init(XTrayIconPeer);
	$nc($($AWTAccessor::getWindowAccessor()))->setTrayIconWindow(w, true);
}

void XTrayIconPeer::setToolTip($String* tooltip) {
	$set(this, tooltipString, tooltip);
}

$String* XTrayIconPeer::getTooltipString() {
	return this->tooltipString;
}

void XTrayIconPeer::updateImage() {
	$var($Runnable, r, $new($XTrayIconPeer$6, this));
	if (!$SunToolkit::isDispatchThreadForAppContext(this->target)) {
		$SunToolkit::executeOnEventHandlerThread(this->target, r);
	} else {
		r->run();
	}
}

void XTrayIconPeer::displayMessage($String* caption, $String* text, $String* messageType) {
	$useLocalCurrentObjectStackCache();
	$var($Point, loc, getLocationOnScreen());
	$var($Rectangle, screen, $nc($($nc(this->eframe)->getGraphicsConfiguration()))->getBounds());
	if (!($nc(loc)->x < $nc(screen)->x || $nc(loc)->x >= $nc(screen)->x + screen->width || $nc(loc)->y < $nc(screen)->y || $nc(loc)->y >= $nc(screen)->y + screen->height)) {
		$nc(this->balloon)->display(caption, text, messageType);
	}
}

void XTrayIconPeer::showPopupMenu(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (isDisposed()) {
		return;
	}
	if (!XTrayIconPeer::$assertionsDisabled && !$SunToolkit::isDispatchThreadForAppContext(this->target)) {
		$throwNew($AssertionError);
	}
	$var($PopupMenu, newPopup, $nc(this->target)->getPopupMenu());
	if (this->popup != newPopup) {
		if (this->popup != nullptr) {
			$nc(this->eframe)->remove(static_cast<$MenuComponent*>(this->popup));
		}
		if (newPopup != nullptr) {
			$nc(this->eframe)->add(newPopup);
		}
		$set(this, popup, newPopup);
	}
	if (this->popup != nullptr) {
		$var($XBaseWindow, peer, $cast($XBaseWindow, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->eframe)));
		$var($Point, loc, $nc(peer)->toLocal($$new($Point, x, y)));
		$nc(this->popup)->show(this->eframe, $nc(loc)->x, loc->y);
	}
}

void XTrayIconPeer::addXED(int64_t window, $XEventDispatcher* xed, int64_t mask) {
	if (window == 0) {
		return;
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSelectInput($XToolkit::getDisplay(), window, mask);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XToolkit::addEventDispatcher(window, xed);
}

void XTrayIconPeer::removeXED(int64_t window, $XEventDispatcher* xed) {
	if (window == 0) {
		return;
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::removeEventDispatcher(window, xed);
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

$Point* XTrayIconPeer::getLocationOnScreen() {
	return $nc(this->eframe)->getLocationOnScreen();
}

$Rectangle* XTrayIconPeer::getBounds() {
	$var($Point, loc, getLocationOnScreen());
	return $new($Rectangle, $nc(loc)->x, loc->y, loc->x + XTrayIconPeer::TRAY_ICON_WIDTH, loc->y + XTrayIconPeer::TRAY_ICON_HEIGHT);
}

void XTrayIconPeer::addListeners() {
	$nc(this->canvas)->addMouseListener(this->eventProxy);
	$nc(this->canvas)->addMouseMotionListener(this->eventProxy);
	$nc(this->eframe)->addMouseListener(this->eventProxy);
}

void XTrayIconPeer::removeListeners() {
	$nc(this->canvas)->removeMouseListener(this->eventProxy);
	$nc(this->canvas)->removeMouseMotionListener(this->eventProxy);
	$nc(this->eframe)->removeMouseListener(this->eventProxy);
}

int64_t XTrayIconPeer::getWindow() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($XEmbeddedFramePeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->eframe)))))->getWindow();
}

bool XTrayIconPeer::isDisposed() {
	return this->isDisposed$;
}

$String* XTrayIconPeer::getActionCommand() {
	return $nc(this->target)->getActionCommand();
}

void clinit$XTrayIconPeer($Class* class$) {
	XTrayIconPeer::$assertionsDisabled = !XTrayIconPeer::class$->desiredAssertionStatus();
	$assignStatic(XTrayIconPeer::ctrLog, $PlatformLogger::getLogger("sun.awt.X11.XTrayIconPeer.centering"_s));
	$assignStatic(XTrayIconPeer::dummyXED, $new($XTrayIconPeer$1));
}

XTrayIconPeer::XTrayIconPeer() {
}

$Class* XTrayIconPeer::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer, name, initialize, &_XTrayIconPeer_ClassInfo_, clinit$XTrayIconPeer, allocate$XTrayIconPeer);
	return class$;
}

$Class* XTrayIconPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun