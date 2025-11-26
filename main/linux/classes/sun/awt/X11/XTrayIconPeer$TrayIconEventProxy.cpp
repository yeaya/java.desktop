#include <sun/awt/X11/XTrayIconPeer$TrayIconEventProxy.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <sun/awt/X11/InfoWindow.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef BUTTON1
#undef MOUSE_DRAGGED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $TrayIcon = ::java::awt::TrayIcon;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$TrayIconEventProxy_FieldInfo_[] = {
	{"xtiPeer", "Lsun/awt/X11/XTrayIconPeer;", nullptr, 0, $field(XTrayIconPeer$TrayIconEventProxy, xtiPeer)},
	{}
};

$MethodInfo _XTrayIconPeer$TrayIconEventProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$TrayIconEventProxy::*)($XTrayIconPeer*)>(&XTrayIconPeer$TrayIconEventProxy::init$))},
	{"handleEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTrayIconPeer$TrayIconEventProxy_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$TrayIconEventProxy", "sun.awt.X11.XTrayIconPeer", "TrayIconEventProxy", $STATIC},
	{}
};

$ClassInfo _XTrayIconPeer$TrayIconEventProxy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$TrayIconEventProxy",
	"java.lang.Object",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	_XTrayIconPeer$TrayIconEventProxy_FieldInfo_,
	_XTrayIconPeer$TrayIconEventProxy_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer$TrayIconEventProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$TrayIconEventProxy($Class* clazz) {
	return $of($alloc(XTrayIconPeer$TrayIconEventProxy));
}

int32_t XTrayIconPeer$TrayIconEventProxy::hashCode() {
	 return this->$MouseListener::hashCode();
}

bool XTrayIconPeer$TrayIconEventProxy::equals(Object$* arg0) {
	 return this->$MouseListener::equals(arg0);
}

$Object* XTrayIconPeer$TrayIconEventProxy::clone() {
	 return this->$MouseListener::clone();
}

$String* XTrayIconPeer$TrayIconEventProxy::toString() {
	 return this->$MouseListener::toString();
}

void XTrayIconPeer$TrayIconEventProxy::finalize() {
	this->$MouseListener::finalize();
}

void XTrayIconPeer$TrayIconEventProxy::init$($XTrayIconPeer* xtiPeer) {
	$set(this, xtiPeer, xtiPeer);
}

void XTrayIconPeer$TrayIconEventProxy::handleEvent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getID() == $MouseEvent::MOUSE_DRAGGED) {
		return;
	}
	if ($nc(this->xtiPeer)->isDisposed()) {
		return;
	}
	int64_t var$0 = $nc(this->xtiPeer)->getWindow();
	int64_t var$1 = $XToolkit::getDefaultRootWindow();
	int32_t var$2 = $nc(e)->getX();
	$var($Point, coord, $XBaseWindow::toOtherWindow(var$0, var$1, var$2, e->getY()));
	if ($nc(e)->isPopupTrigger()) {
		$nc(this->xtiPeer)->showPopupMenu($nc(coord)->x, coord->y);
	}
	int32_t var$3 = $nc(coord)->x - e->getX();
	$nc(e)->translatePoint(var$3, coord->y - e->getY());
	e->setSource($nc(this->xtiPeer)->target);
	$XToolkit::postEvent($($XToolkit::targetToAppContext($(e->getSource()))), e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(e)->getClickCount() == 1;
	bool var$0 = (var$1 || $nc($nc(this->xtiPeer)->balloon)->isVisible());
	if (var$0 && $nc(e)->getButton() == $MouseEvent::BUTTON1) {
		$var($Object, var$2, $of($nc(this->xtiPeer)->target));
		$var($String, var$3, $nc($nc(this->xtiPeer)->target)->getActionCommand());
		int64_t var$4 = e->getWhen();
		$var($ActionEvent, aev, $new($ActionEvent, var$2, $ActionEvent::ACTION_PERFORMED, var$3, var$4, e->getModifiers()));
		$XToolkit::postEvent($($XToolkit::targetToAppContext($(aev->getSource()))), aev);
	}
	if ($nc($nc(this->xtiPeer)->balloon)->isVisible()) {
		$nc($nc(this->xtiPeer)->balloon)->hide();
	}
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseEntered($MouseEvent* e) {
	$nc($nc(this->xtiPeer)->tooltip)->enter();
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseExited($MouseEvent* e) {
	$nc($nc(this->xtiPeer)->tooltip)->exit();
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mousePressed($MouseEvent* e) {
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseReleased($MouseEvent* e) {
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseDragged($MouseEvent* e) {
	handleEvent(e);
}

void XTrayIconPeer$TrayIconEventProxy::mouseMoved($MouseEvent* e) {
	handleEvent(e);
}

XTrayIconPeer$TrayIconEventProxy::XTrayIconPeer$TrayIconEventProxy() {
}

$Class* XTrayIconPeer$TrayIconEventProxy::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$TrayIconEventProxy, name, initialize, &_XTrayIconPeer$TrayIconEventProxy_ClassInfo_, allocate$XTrayIconPeer$TrayIconEventProxy);
	return class$;
}

$Class* XTrayIconPeer$TrayIconEventProxy::class$ = nullptr;

		} // X11
	} // awt
} // sun