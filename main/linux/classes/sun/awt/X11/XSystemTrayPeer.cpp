#include <sun/awt/X11/XSystemTrayPeer.h>

#include <java/awt/AWTException.h>
#include <java/awt/Dimension.h>
#include <java/awt/SystemTray.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XMSelection.h>
#include <sun/awt/X11/XMSelectionListener.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSystemTrayPeer$1.h>
#include <sun/awt/X11/XSystemTrayPeer$2.h>
#include <sun/awt/X11/XSystemTrayPeer$3.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef SCREEN
#undef SYSTEM_TRAY_PROPERTY_NAME
#undef SYSTEM_TRAY_REQUEST_DOCK
#undef TRAY_ICON_HEIGHT
#undef TRAY_ICON_WIDTH
#undef XEMBED_MAPPED
#undef XEMBED_VERSION
#undef _NET_SYSTEM_TRAY
#undef _NET_SYSTEM_TRAY_OPCODE
#undef _NET_WM_ICON
#undef _XEMBED_INFO

using $AWTException = ::java::awt::AWTException;
using $Dimension = ::java::awt::Dimension;
using $SystemTray = ::java::awt::SystemTray;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XMSelection = ::sun::awt::X11::XMSelection;
using $XMSelectionListener = ::sun::awt::X11::XMSelectionListener;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSystemTrayPeer$1 = ::sun::awt::X11::XSystemTrayPeer$1;
using $XSystemTrayPeer$2 = ::sun::awt::X11::XSystemTrayPeer$2;
using $XSystemTrayPeer$3 = ::sun::awt::X11::XSystemTrayPeer$3;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSystemTrayPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, log)},
	{"target", "Ljava/awt/SystemTray;", nullptr, 0, $field(XSystemTrayPeer, target)},
	{"peerInstance", "Lsun/awt/X11/XSystemTrayPeer;", nullptr, $STATIC, $staticField(XSystemTrayPeer, peerInstance)},
	{"available", "Z", nullptr, $PRIVATE | $VOLATILE, $field(XSystemTrayPeer, available)},
	{"selection", "Lsun/awt/X11/XMSelection;", nullptr, $PRIVATE | $FINAL, $field(XSystemTrayPeer, selection)},
	{"SCREEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSystemTrayPeer, SCREEN)},
	{"SYSTEM_TRAY_PROPERTY_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, SYSTEM_TRAY_PROPERTY_NAME)},
	{"_NET_SYSTEM_TRAY", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, _NET_SYSTEM_TRAY)},
	{"_XEMBED_INFO", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, _XEMBED_INFO)},
	{"_NET_SYSTEM_TRAY_OPCODE", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, _NET_SYSTEM_TRAY_OPCODE)},
	{"_NET_WM_ICON", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSystemTrayPeer, _NET_WM_ICON)},
	{"SYSTEM_TRAY_REQUEST_DOCK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSystemTrayPeer, SYSTEM_TRAY_REQUEST_DOCK)},
	{}
};

$MethodInfo _XSystemTrayPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/SystemTray;)V", nullptr, 0, $method(static_cast<void(XSystemTrayPeer::*)($SystemTray*)>(&XSystemTrayPeer::init$))},
	{"addTrayIcon", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, nullptr, "java.awt.AWTException"},
	{"createTrayPeers", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSystemTrayPeer::*)()>(&XSystemTrayPeer::createTrayPeers))},
	{"dispose", "()V", nullptr, 0},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(XSystemTrayPeer::*)($String*,Object$*,Object$*)>(&XSystemTrayPeer::firePropertyChange))},
	{"getPeerInstance", "()Lsun/awt/X11/XSystemTrayPeer;", nullptr, $STATIC, $method(static_cast<XSystemTrayPeer*(*)()>(&XSystemTrayPeer::getPeerInstance))},
	{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"invokeOnEachAppContext", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE, $method(static_cast<void(XSystemTrayPeer::*)($Runnable*)>(&XSystemTrayPeer::invokeOnEachAppContext))},
	{"isAvailable", "()Z", nullptr, 0},
	{"ownerChanged", "(ILsun/awt/X11/XMSelection;JJJ)V", nullptr, $PUBLIC},
	{"ownerDeath", "(ILsun/awt/X11/XMSelection;J)V", nullptr, $PUBLIC},
	{"removeTrayPeers", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSystemTrayPeer::*)()>(&XSystemTrayPeer::removeTrayPeers))},
	{"selectionChanged", "(ILsun/awt/X11/XMSelection;JLsun/awt/X11/XPropertyEvent;)V", nullptr, $PUBLIC},
	{"sendMessage", "(JJJJJ)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSystemTrayPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSystemTrayPeer$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XSystemTrayPeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XSystemTrayPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSystemTrayPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSystemTrayPeer",
	"java.lang.Object",
	"java.awt.peer.SystemTrayPeer,sun.awt.X11.XMSelectionListener",
	_XSystemTrayPeer_FieldInfo_,
	_XSystemTrayPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XSystemTrayPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XSystemTrayPeer$3,sun.awt.X11.XSystemTrayPeer$2,sun.awt.X11.XSystemTrayPeer$1"
};

$Object* allocate$XSystemTrayPeer($Class* clazz) {
	return $of($alloc(XSystemTrayPeer));
}

int32_t XSystemTrayPeer::hashCode() {
	 return this->$SystemTrayPeer::hashCode();
}

bool XSystemTrayPeer::equals(Object$* arg0) {
	 return this->$SystemTrayPeer::equals(arg0);
}

$Object* XSystemTrayPeer::clone() {
	 return this->$SystemTrayPeer::clone();
}

$String* XSystemTrayPeer::toString() {
	 return this->$SystemTrayPeer::toString();
}

void XSystemTrayPeer::finalize() {
	this->$SystemTrayPeer::finalize();
}

$PlatformLogger* XSystemTrayPeer::log = nullptr;
XSystemTrayPeer* XSystemTrayPeer::peerInstance = nullptr;
$String* XSystemTrayPeer::SYSTEM_TRAY_PROPERTY_NAME = nullptr;
$XAtom* XSystemTrayPeer::_NET_SYSTEM_TRAY = nullptr;
$XAtom* XSystemTrayPeer::_XEMBED_INFO = nullptr;
$XAtom* XSystemTrayPeer::_NET_SYSTEM_TRAY_OPCODE = nullptr;
$XAtom* XSystemTrayPeer::_NET_WM_ICON = nullptr;

void XSystemTrayPeer::init$($SystemTray* target) {
	$useLocalCurrentObjectStackCache();
	$set(this, selection, $new($XMSelection, "_NET_SYSTEM_TRAY"_s));
	$set(this, target, target);
	$assignStatic(XSystemTrayPeer::peerInstance, this);
	$nc(this->selection)->addSelectionListener(this);
	int64_t selection_owner = $nc(this->selection)->getOwner(XSystemTrayPeer::SCREEN);
	this->available = (selection_owner != $XConstants::None);
	$init($PlatformLogger$Level);
	if ($nc(XSystemTrayPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XSystemTrayPeer::log)->fine($$str({" check if system tray is available. selection owner: "_s, $$str(selection_owner)}));
	}
}

void XSystemTrayPeer::ownerChanged(int32_t screen, $XMSelection* sel, int64_t newOwner, int64_t data, int64_t timestamp) {
	if (screen != XSystemTrayPeer::SCREEN) {
		return;
	}
	if (!this->available) {
		this->available = true;
		firePropertyChange(XSystemTrayPeer::SYSTEM_TRAY_PROPERTY_NAME, nullptr, this->target);
	} else {
		removeTrayPeers();
	}
	createTrayPeers();
}

void XSystemTrayPeer::ownerDeath(int32_t screen, $XMSelection* sel, int64_t deadOwner) {
	if (screen != XSystemTrayPeer::SCREEN) {
		return;
	}
	if (this->available) {
		this->available = false;
		firePropertyChange(XSystemTrayPeer::SYSTEM_TRAY_PROPERTY_NAME, this->target, nullptr);
		removeTrayPeers();
	}
}

void XSystemTrayPeer::selectionChanged(int32_t screen, $XMSelection* sel, int64_t owner, $XPropertyEvent* event) {
}

$Dimension* XSystemTrayPeer::getTrayIconSize() {
	return $new($Dimension, $XTrayIconPeer::TRAY_ICON_HEIGHT, $XTrayIconPeer::TRAY_ICON_WIDTH);
}

bool XSystemTrayPeer::isAvailable() {
	return this->available;
}

void XSystemTrayPeer::dispose() {
	$nc(this->selection)->removeSelectionListener(this);
}

void XSystemTrayPeer::addTrayIcon($XTrayIconPeer* tiPeer) {
	$useLocalCurrentObjectStackCache();
	int64_t selection_owner = $nc(this->selection)->getOwner(XSystemTrayPeer::SCREEN);
	$init($PlatformLogger$Level);
	if ($nc(XSystemTrayPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XSystemTrayPeer::log)->fine($$str({" send SYSTEM_TRAY_REQUEST_DOCK message to owner: "_s, $$str(selection_owner)}));
	}
	if (selection_owner == $XConstants::None) {
		$throwNew($AWTException, "TrayIcon couldn\'t be displayed."_s);
	}
	int64_t tray_window = $nc(tiPeer)->getWindow();
	$var($longs, data, $new($longs, {
		(int64_t)$XEmbedHelper::XEMBED_VERSION,
		(int64_t)$XEmbedHelper::XEMBED_MAPPED
	}));
	int64_t data_ptr = $Native::card32ToData(data);
	$nc(XSystemTrayPeer::_XEMBED_INFO)->setAtomData(tray_window, data_ptr, data->length);
	sendMessage(selection_owner, XSystemTrayPeer::SYSTEM_TRAY_REQUEST_DOCK, tray_window, 0, 0);
}

void XSystemTrayPeer::sendMessage(int64_t win, int64_t msg, int64_t data1, int64_t data2, int64_t data3) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xev, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			xev->set_type($XConstants::ClientMessage);
			xev->set_window(win);
			xev->set_format(32);
			xev->set_message_type($nc(XSystemTrayPeer::_NET_SYSTEM_TRAY_OPCODE)->getAtom());
			xev->set_data(0, 0);
			xev->set_data(1, msg);
			xev->set_data(2, data1);
			xev->set_data(3, data2);
			xev->set_data(4, data3);
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XSendEvent($XToolkit::getDisplay(), win, false, $XConstants::NoEventMask, xev->pData);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			xev->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XSystemTrayPeer* XSystemTrayPeer::getPeerInstance() {
	$init(XSystemTrayPeer);
	return XSystemTrayPeer::peerInstance;
}

void XSystemTrayPeer::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$var($Runnable, runnable, $new($XSystemTrayPeer$1, this, propertyName, oldValue, newValue));
	invokeOnEachAppContext(runnable);
}

void XSystemTrayPeer::createTrayPeers() {
	$var($Runnable, runnable, $new($XSystemTrayPeer$2, this));
	invokeOnEachAppContext(runnable);
}

void XSystemTrayPeer::removeTrayPeers() {
	$var($Runnable, runnable, $new($XSystemTrayPeer$3, this));
	invokeOnEachAppContext(runnable);
}

void XSystemTrayPeer::invokeOnEachAppContext($Runnable* runnable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AppContext, appContext, $cast($AppContext, i$->next()));
			{
				$SunToolkit::invokeLaterOnAppContext(appContext, runnable);
			}
		}
	}
}

void clinit$XSystemTrayPeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XSystemTrayPeer::SYSTEM_TRAY_PROPERTY_NAME, "systemTray"_s);
	$assignStatic(XSystemTrayPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XSystemTrayPeer"_s));
	$assignStatic(XSystemTrayPeer::_NET_SYSTEM_TRAY, $XAtom::get($$str({"_NET_SYSTEM_TRAY_S"_s, $$str(XSystemTrayPeer::SCREEN)})));
	$assignStatic(XSystemTrayPeer::_XEMBED_INFO, $XAtom::get("_XEMBED_INFO"_s));
	$assignStatic(XSystemTrayPeer::_NET_SYSTEM_TRAY_OPCODE, $XAtom::get("_NET_SYSTEM_TRAY_OPCODE"_s));
	$assignStatic(XSystemTrayPeer::_NET_WM_ICON, $XAtom::get("_NET_WM_ICON"_s));
}

XSystemTrayPeer::XSystemTrayPeer() {
}

$Class* XSystemTrayPeer::load$($String* name, bool initialize) {
	$loadClass(XSystemTrayPeer, name, initialize, &_XSystemTrayPeer_ClassInfo_, clinit$XSystemTrayPeer, allocate$XSystemTrayPeer);
	return class$;
}

$Class* XSystemTrayPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun