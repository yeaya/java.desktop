#include <sun/awt/X11/XNETProtocol.h>

#include <java/awt/Frame.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/IconInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XProtocol.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINER
#undef LAYER_ALWAYS_ON_TOP
#undef LAYER_NORMAL
#undef MAXIMIZED_BOTH
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
#undef NORMAL
#undef XA_CARDINAL
#undef XA_NET_ACTIVE_WINDOW
#undef XA_NET_SUPPORTED
#undef XA_NET_SUPPORTING_WM_CHECK
#undef XA_NET_WM_NAME
#undef XA_NET_WM_STATE
#undef XA_NET_WM_STATE_ABOVE
#undef XA_NET_WM_STATE_BELOW
#undef XA_NET_WM_STATE_FULLSCREEN
#undef XA_NET_WM_STATE_HIDDEN
#undef XA_NET_WM_STATE_MAXIMIZED_HORZ
#undef XA_NET_WM_STATE_MAXIMIZED_VERT
#undef XA_NET_WM_STATE_MODAL
#undef XA_NET_WM_STATE_SHADED
#undef XA_NET_WM_STATE_SKIP_PAGER
#undef XA_NET_WM_STATE_SKIP_TASKBAR
#undef XA_NET_WM_WINDOW_OPACITY
#undef XA_NET_WM_WINDOW_TYPE
#undef XA_NET_WM_WINDOW_TYPE_DIALOG
#undef XA_NET_WM_WINDOW_TYPE_NORMAL
#undef XA_NET_WM_WINDOW_TYPE_POPUP_MENU
#undef XA_NET_WM_WINDOW_TYPE_UTILITY
#undef XA_STRING
#undef XA_UTF8_STRING
#undef XA_WINDOW
#undef _NET_WM_STATE_ADD
#undef _NET_WM_STATE_REMOVE
#undef _NET_WM_STATE_TOGGLE

using $Frame = ::java::awt::Frame;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $IconInfo = ::sun::awt::IconInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XLayerProtocol = ::sun::awt::X11::XLayerProtocol;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XProtocol = ::sun::awt::X11::XProtocol;
using $XStateProtocol = ::sun::awt::X11::XStateProtocol;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XNETProtocol_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XNETProtocol, log)},
	{"iconLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XNETProtocol, iconLog)},
	{"stateLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XNETProtocol, stateLog)},
	{"XA_UTF8_STRING", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_UTF8_STRING)},
	{"XA_NET_SUPPORTING_WM_CHECK", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_SUPPORTING_WM_CHECK)},
	{"XA_NET_SUPPORTED", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_SUPPORTED)},
	{"XA_NET_ACTIVE_WINDOW", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_ACTIVE_WINDOW)},
	{"XA_NET_WM_NAME", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_NAME)},
	{"XA_NET_WM_STATE", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE)},
	{"XA_NET_WM_STATE_MAXIMIZED_HORZ", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_MAXIMIZED_HORZ)},
	{"XA_NET_WM_STATE_MAXIMIZED_VERT", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_MAXIMIZED_VERT)},
	{"XA_NET_WM_STATE_SHADED", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_SHADED)},
	{"XA_NET_WM_STATE_ABOVE", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_ABOVE)},
	{"XA_NET_WM_STATE_MODAL", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_MODAL)},
	{"XA_NET_WM_STATE_FULLSCREEN", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_FULLSCREEN)},
	{"XA_NET_WM_STATE_BELOW", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_BELOW)},
	{"XA_NET_WM_STATE_HIDDEN", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_HIDDEN)},
	{"XA_NET_WM_STATE_SKIP_TASKBAR", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_SKIP_TASKBAR)},
	{"XA_NET_WM_STATE_SKIP_PAGER", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_STATE_SKIP_PAGER)},
	{"XA_NET_WM_WINDOW_TYPE", "Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $FINAL, $field(XNETProtocol, XA_NET_WM_WINDOW_TYPE)},
	{"XA_NET_WM_WINDOW_TYPE_NORMAL", "Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $FINAL, $field(XNETProtocol, XA_NET_WM_WINDOW_TYPE_NORMAL)},
	{"XA_NET_WM_WINDOW_TYPE_DIALOG", "Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $FINAL, $field(XNETProtocol, XA_NET_WM_WINDOW_TYPE_DIALOG)},
	{"XA_NET_WM_WINDOW_TYPE_UTILITY", "Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $FINAL, $field(XNETProtocol, XA_NET_WM_WINDOW_TYPE_UTILITY)},
	{"XA_NET_WM_WINDOW_TYPE_POPUP_MENU", "Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $FINAL, $field(XNETProtocol, XA_NET_WM_WINDOW_TYPE_POPUP_MENU)},
	{"XA_NET_WM_WINDOW_OPACITY", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XNETProtocol, XA_NET_WM_WINDOW_OPACITY)},
	{"_NET_WM_STATE_REMOVE", "I", nullptr, $STATIC | $FINAL, $constField(XNETProtocol, _NET_WM_STATE_REMOVE)},
	{"_NET_WM_STATE_ADD", "I", nullptr, $STATIC | $FINAL, $constField(XNETProtocol, _NET_WM_STATE_ADD)},
	{"_NET_WM_STATE_TOGGLE", "I", nullptr, $STATIC | $FINAL, $constField(XNETProtocol, _NET_WM_STATE_TOGGLE)},
	{"supportChecked", "Z", nullptr, 0, $field(XNETProtocol, supportChecked)},
	{"NetWindow", "J", nullptr, 0, $field(XNETProtocol, NetWindow)},
	{"net_wm_name_cache", "Ljava/lang/String;", nullptr, 0, $field(XNETProtocol, net_wm_name_cache)},
	{}
};

$MethodInfo _XNETProtocol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XNETProtocol::*)()>(&XNETProtocol::init$))},
	{"active", "()Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)()>(&XNETProtocol::active))},
	{"detect", "()V", nullptr, 0, $method(static_cast<void(XNETProtocol::*)()>(&XNETProtocol::detect))},
	{"doLayerProtocol", "()Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)()>(&XNETProtocol::doLayerProtocol))},
	{"doModalityProtocol", "()Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)()>(&XNETProtocol::doModalityProtocol))},
	{"doOpacityProtocol", "()Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)()>(&XNETProtocol::doOpacityProtocol))},
	{"doStateProtocol", "()Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)()>(&XNETProtocol::doStateProtocol))},
	{"getState", "(Lsun/awt/X11/XWindowPeer;)I", nullptr, $PUBLIC},
	{"getStateImpl", "(Lsun/awt/X11/XWindowPeer;)I", nullptr, 0, $method(static_cast<int32_t(XNETProtocol::*)($XWindowPeer*)>(&XNETProtocol::getStateImpl))},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XNETProtocol::*)()>(&XNETProtocol::getWMName))},
	{"isStateChange", "(Lsun/awt/X11/XPropertyEvent;)Z", nullptr, $PUBLIC},
	{"isWMName", "(Ljava/lang/String;)Z", nullptr, 0, $method(static_cast<bool(XNETProtocol::*)($String*)>(&XNETProtocol::isWMName))},
	{"isWMStateNetHidden", "(Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC, $method(static_cast<bool(XNETProtocol::*)($XWindowPeer*)>(&XNETProtocol::isWMStateNetHidden))},
	{"requestState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PRIVATE, $method(static_cast<void(XNETProtocol::*)($XWindowPeer*,int32_t)>(&XNETProtocol::requestState))},
	{"requestState", "(Lsun/awt/X11/XWindow;Lsun/awt/X11/XAtom;Z)V", nullptr, $PUBLIC, $method(static_cast<void(XNETProtocol::*)($XWindow*,$XAtom*,bool)>(&XNETProtocol::requestState))},
	{"setActiveWindow", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XNETProtocol::*)(int64_t)>(&XNETProtocol::setActiveWindow))},
	{"setInitialState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PRIVATE, $method(static_cast<void(XNETProtocol::*)($XWindowPeer*,int32_t)>(&XNETProtocol::setInitialState))},
	{"setLayer", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC},
	{"setState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC},
	{"setStateHelper", "(Lsun/awt/X11/XWindowPeer;Lsun/awt/X11/XAtom;Z)V", nullptr, $PRIVATE, $method(static_cast<void(XNETProtocol::*)($XWindowPeer*,$XAtom*,bool)>(&XNETProtocol::setStateHelper))},
	{"setWMIcons", "(Lsun/awt/X11/XWindowPeer;Ljava/util/List;)V", "(Lsun/awt/X11/XWindowPeer;Ljava/util/List<Lsun/awt/IconInfo;>;)V", $PUBLIC, $method(static_cast<void(XNETProtocol::*)($XWindowPeer*,$List*)>(&XNETProtocol::setWMIcons))},
	{"supportsLayer", "(I)Z", nullptr, $PUBLIC},
	{"supportsState", "(I)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unshadeKludge", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XNETProtocol_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XNETProtocol",
	"sun.awt.X11.XProtocol",
	"sun.awt.X11.XStateProtocol,sun.awt.X11.XLayerProtocol",
	_XNETProtocol_FieldInfo_,
	_XNETProtocol_MethodInfo_
};

$Object* allocate$XNETProtocol($Class* clazz) {
	return $of($alloc(XNETProtocol));
}

int32_t XNETProtocol::hashCode() {
	 return this->$XProtocol::hashCode();
}

bool XNETProtocol::equals(Object$* arg0) {
	 return this->$XProtocol::equals(arg0);
}

$Object* XNETProtocol::clone() {
	 return this->$XProtocol::clone();
}

$String* XNETProtocol::toString() {
	 return this->$XProtocol::toString();
}

void XNETProtocol::finalize() {
	this->$XProtocol::finalize();
}

$PlatformLogger* XNETProtocol::log = nullptr;
$PlatformLogger* XNETProtocol::iconLog = nullptr;
$PlatformLogger* XNETProtocol::stateLog = nullptr;

void XNETProtocol::init$() {
	$XProtocol::init$();
	$set(this, XA_UTF8_STRING, $XAtom::get("UTF8_STRING"_s));
	$set(this, XA_NET_SUPPORTING_WM_CHECK, $XAtom::get("_NET_SUPPORTING_WM_CHECK"_s));
	$set(this, XA_NET_SUPPORTED, $XAtom::get("_NET_SUPPORTED"_s));
	$set(this, XA_NET_ACTIVE_WINDOW, $XAtom::get("_NET_ACTIVE_WINDOW"_s));
	$set(this, XA_NET_WM_NAME, $XAtom::get("_NET_WM_NAME"_s));
	$set(this, XA_NET_WM_STATE, $XAtom::get("_NET_WM_STATE"_s));
	$set(this, XA_NET_WM_STATE_MAXIMIZED_HORZ, $XAtom::get("_NET_WM_STATE_MAXIMIZED_HORZ"_s));
	$set(this, XA_NET_WM_STATE_MAXIMIZED_VERT, $XAtom::get("_NET_WM_STATE_MAXIMIZED_VERT"_s));
	$set(this, XA_NET_WM_STATE_SHADED, $XAtom::get("_NET_WM_STATE_SHADED"_s));
	$set(this, XA_NET_WM_STATE_ABOVE, $XAtom::get("_NET_WM_STATE_ABOVE"_s));
	$set(this, XA_NET_WM_STATE_MODAL, $XAtom::get("_NET_WM_STATE_MODAL"_s));
	$set(this, XA_NET_WM_STATE_FULLSCREEN, $XAtom::get("_NET_WM_STATE_FULLSCREEN"_s));
	$set(this, XA_NET_WM_STATE_BELOW, $XAtom::get("_NET_WM_STATE_BELOW"_s));
	$set(this, XA_NET_WM_STATE_HIDDEN, $XAtom::get("_NET_WM_STATE_HIDDEN"_s));
	$set(this, XA_NET_WM_STATE_SKIP_TASKBAR, $XAtom::get("_NET_WM_STATE_SKIP_TASKBAR"_s));
	$set(this, XA_NET_WM_STATE_SKIP_PAGER, $XAtom::get("_NET_WM_STATE_SKIP_PAGER"_s));
	$set(this, XA_NET_WM_WINDOW_TYPE, $XAtom::get("_NET_WM_WINDOW_TYPE"_s));
	$set(this, XA_NET_WM_WINDOW_TYPE_NORMAL, $XAtom::get("_NET_WM_WINDOW_TYPE_NORMAL"_s));
	$set(this, XA_NET_WM_WINDOW_TYPE_DIALOG, $XAtom::get("_NET_WM_WINDOW_TYPE_DIALOG"_s));
	$set(this, XA_NET_WM_WINDOW_TYPE_UTILITY, $XAtom::get("_NET_WM_WINDOW_TYPE_UTILITY"_s));
	$set(this, XA_NET_WM_WINDOW_TYPE_POPUP_MENU, $XAtom::get("_NET_WM_WINDOW_TYPE_POPUP_MENU"_s));
	$set(this, XA_NET_WM_WINDOW_OPACITY, $XAtom::get("_NET_WM_WINDOW_OPACITY"_s));
	this->supportChecked = false;
	this->NetWindow = 0;
}

bool XNETProtocol::supportsState(int32_t state) {
	return doStateProtocol();
}

void XNETProtocol::setState($XWindowPeer* window, int32_t state) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XNETProtocol::log)->fine($$str({"Setting state of "_s, window, " to "_s, $$str(state)}));
	}
	if ($nc(window)->isShowing()) {
		requestState(window, state);
	} else {
		setInitialState(window, state);
	}
}

void XNETProtocol::setInitialState($XWindowPeer* window, int32_t state) {
	$useLocalCurrentObjectStackCache();
	$var($XAtomList, old_state, $nc(window)->getNETWMState());
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XNETProtocol::log)->fine("Current state of the window {0} is {1}"_s, $$new($ObjectArray, {
			$of(window),
			$of(old_state)
		}));
	}
	if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_VERT)) != 0) {
		$nc(old_state)->add(this->XA_NET_WM_STATE_MAXIMIZED_VERT);
	} else {
		$nc(old_state)->remove(this->XA_NET_WM_STATE_MAXIMIZED_VERT);
	}
	if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_HORIZ)) != 0) {
		$nc(old_state)->add(this->XA_NET_WM_STATE_MAXIMIZED_HORZ);
	} else {
		$nc(old_state)->remove(this->XA_NET_WM_STATE_MAXIMIZED_HORZ);
	}
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XNETProtocol::log)->fine("Setting initial state of the window {0} to {1}"_s, $$new($ObjectArray, {
			$of(window),
			$of(old_state)
		}));
	}
	window->setNETWMState(old_state);
}

void XNETProtocol::requestState($XWindowPeer* window, int32_t state) {
	$useLocalCurrentObjectStackCache();
	int32_t old_net_state = getState(window);
	int32_t max_changed = (int32_t)((state ^ old_net_state) & (uint32_t)($Frame::MAXIMIZED_BOTH));
	$var($XClientMessageEvent, req, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			switch (max_changed) {
			case 0:
				{
					return$1 = true;
					goto $finally;
				}
			case $Frame::MAXIMIZED_HORIZ:
				{
					req->set_data(1, $nc(this->XA_NET_WM_STATE_MAXIMIZED_HORZ)->getAtom());
					req->set_data(2, 0);
					break;
				}
			case $Frame::MAXIMIZED_VERT:
				{
					req->set_data(1, $nc(this->XA_NET_WM_STATE_MAXIMIZED_VERT)->getAtom());
					req->set_data(2, 0);
					break;
				}
			case $Frame::MAXIMIZED_BOTH:
				{
					req->set_data(1, $nc(this->XA_NET_WM_STATE_MAXIMIZED_HORZ)->getAtom());
					req->set_data(2, $nc(this->XA_NET_WM_STATE_MAXIMIZED_VERT)->getAtom());
					break;
				}
			default:
				{
					return$1 = true;
					goto $finally;
				}
			}
			$init($PlatformLogger$Level);
			if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XNETProtocol::log)->fine($$str({"Requesting state on "_s, window, " for "_s, $$str(state)}));
			}
			req->set_type($XConstants::ClientMessage);
			req->set_window($nc(window)->getWindow());
			req->set_message_type($nc(this->XA_NET_WM_STATE)->getAtom());
			req->set_format(32);
			req->set_data(0, XNETProtocol::_NET_WM_STATE_TOGGLE);
			$XToolkit::awtLock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					int64_t var$3 = $XToolkit::getDisplay();
					int64_t var$4 = $XToolkit::getDisplay();
					$XlibWrapper::XSendEvent(var$3, $XlibWrapper::RootWindow(var$4, $nc(window)->getScreenNumber()), false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, req->pData);
				} catch ($Throwable& var$5) {
					$assign(var$2, var$5);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			req->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int32_t XNETProtocol::getState($XWindowPeer* window) {
	return getStateImpl(window);
}

int32_t XNETProtocol::getStateImpl($XWindowPeer* window) {
	$var($XAtomList, net_wm_state, $nc(window)->getNETWMState());
	if ($nc(net_wm_state)->size() == 0) {
		return $Frame::NORMAL;
	}
	int32_t java_state = $Frame::NORMAL;
	if ($nc(net_wm_state)->contains(this->XA_NET_WM_STATE_MAXIMIZED_VERT)) {
		java_state |= $Frame::MAXIMIZED_VERT;
	}
	if ($nc(net_wm_state)->contains(this->XA_NET_WM_STATE_MAXIMIZED_HORZ)) {
		java_state |= $Frame::MAXIMIZED_HORIZ;
	}
	return java_state;
}

bool XNETProtocol::isStateChange($XPropertyEvent* e) {
	bool var$0 = doStateProtocol();
	if (var$0) {
		int64_t var$1 = $nc(e)->get_atom();
		var$0 = (var$1 == $nc(this->XA_NET_WM_STATE)->getAtom());
	}
	bool res = var$0;
	if (res) {
		$var($XWindowPeer, wpeer, $cast($XWindowPeer, $XToolkit::windowToXWindow(e->get_window())));
		$nc(wpeer)->setNETWMState(nullptr);
	}
	return res;
}

void XNETProtocol::unshadeKludge($XWindowPeer* window) {
	$var($XAtomList, net_wm_state, $nc(window)->getNETWMState());
	$nc(net_wm_state)->remove(this->XA_NET_WM_STATE_SHADED);
	window->setNETWMState(net_wm_state);
}

bool XNETProtocol::supportsLayer(int32_t layer) {
	return ((layer == $XLayerProtocol::LAYER_ALWAYS_ON_TOP) || (layer == $XLayerProtocol::LAYER_NORMAL)) && doLayerProtocol();
}

void XNETProtocol::requestState($XWindow* window, $XAtom* state, bool isAdd) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, req, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			req->set_type($XConstants::ClientMessage);
			req->set_window($nc(window)->getWindow());
			req->set_message_type($nc(this->XA_NET_WM_STATE)->getAtom());
			req->set_format(32);
			req->set_data(0, isAdd ? XNETProtocol::_NET_WM_STATE_ADD : XNETProtocol::_NET_WM_STATE_REMOVE);
			req->set_data(1, $nc(state)->getAtom());
			req->set_data(2, 0);
			$init($PlatformLogger$Level);
			if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XNETProtocol::log)->fine("Setting _NET_STATE atom {0} on {1} for {2}"_s, $$new($ObjectArray, {
					$of(state),
					$of(window),
					$($of($Boolean::valueOf(isAdd)))
				}));
			}
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					int64_t var$2 = $XToolkit::getDisplay();
					int64_t var$3 = $XToolkit::getDisplay();
					$XlibWrapper::XSendEvent(var$2, $XlibWrapper::RootWindow(var$3, $nc(window)->getScreenNumber()), false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, req->pData);
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			req->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XNETProtocol::setStateHelper($XWindowPeer* window, $XAtom* state, bool set) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XNETProtocol::log)->finer("Window visibility is: withdrawn={0}, visible={1}, mapped={2} showing={3}"_s, $$new($ObjectArray, {
			$($of($Boolean::valueOf($nc(window)->isWithdrawn()))),
			$($of($Boolean::valueOf($nc(window)->isVisible()))),
			$($of($Boolean::valueOf($nc(window)->isMapped()))),
			$($of($Boolean::valueOf($nc(window)->isShowing())))
		}));
	}
	if ($nc(window)->isShowing()) {
		requestState(window, state, set);
	} else {
		$var($XAtomList, net_wm_state, window->getNETWMState());
		if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XNETProtocol::log)->finer("Current state on {0} is {1}"_s, $$new($ObjectArray, {
				$of(window),
				$of(net_wm_state)
			}));
		}
		if (!set) {
			$nc(net_wm_state)->remove(state);
		} else {
			$nc(net_wm_state)->add(state);
		}
		if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XNETProtocol::log)->fine("Setting states on {0} to {1}"_s, $$new($ObjectArray, {
				$of(window),
				$of(net_wm_state)
			}));
		}
		window->setNETWMState(net_wm_state);
	}
	$XToolkit::XSync();
}

void XNETProtocol::setLayer($XWindowPeer* window, int32_t layer) {
	setStateHelper(window, this->XA_NET_WM_STATE_ABOVE, layer == $XLayerProtocol::LAYER_ALWAYS_ON_TOP);
}

void XNETProtocol::detect() {
	$useLocalCurrentObjectStackCache();
	if (this->supportChecked) {
		return;
	}
	this->NetWindow = checkAnchor(this->XA_NET_SUPPORTING_WM_CHECK, $XAtom::XA_WINDOW);
	this->supportChecked = true;
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XNETProtocol::log)->fine($$str({"### "_s, this, " is active: "_s, $$str((this->NetWindow != 0))}));
	}
}

bool XNETProtocol::active() {
	detect();
	return this->NetWindow != 0;
}

bool XNETProtocol::doStateProtocol() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_NET_SUPPORTED, this->XA_NET_WM_STATE);
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XNETProtocol::stateLog)->finer($$str({"doStateProtocol() returns "_s, $$str(res)}));
	}
	return res;
}

bool XNETProtocol::doLayerProtocol() {
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_NET_SUPPORTED, this->XA_NET_WM_STATE_ABOVE);
	return res;
}

bool XNETProtocol::doModalityProtocol() {
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_NET_SUPPORTED, this->XA_NET_WM_STATE_MODAL);
	return res;
}

bool XNETProtocol::doOpacityProtocol() {
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_NET_SUPPORTED, this->XA_NET_WM_WINDOW_OPACITY);
	return res;
}

void XNETProtocol::setActiveWindow(int64_t window) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !active();
	if (var$0 || !checkProtocol(this->XA_NET_SUPPORTED, this->XA_NET_ACTIVE_WINDOW)) {
		return;
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	msg->zero();
	msg->set_type($XConstants::ClientMessage);
	msg->set_message_type($nc(this->XA_NET_ACTIVE_WINDOW)->getAtom());
	msg->set_display($XToolkit::getDisplay());
	msg->set_window(window);
	msg->set_format(32);
	msg->set_data(0, 1);
	msg->set_data(1, $XToolkit::getCurrentServerTime());
	msg->set_data(2, 0);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$1, nullptr);
		try {
			int64_t var$2 = $XToolkit::getDisplay();
			int64_t var$3 = $XToolkit::getDefaultRootWindow();
			$XlibWrapper::XSendEvent(var$2, var$3, false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, msg->getPData());
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} /*finally*/ {
			$XToolkit::awtUnlock();
			msg->dispose();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

bool XNETProtocol::isWMName($String* name) {
	$useLocalCurrentObjectStackCache();
	if (!active()) {
		return false;
	}
	$var($String, net_wm_name_string, getWMName());
	if (net_wm_name_string == nullptr) {
		return false;
	}
	$init($PlatformLogger$Level);
	if ($nc(XNETProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XNETProtocol::log)->fine($$str({"### WM_NAME = "_s, net_wm_name_string}));
	}
	return $nc(net_wm_name_string)->startsWith(name);
}

$String* XNETProtocol::getWMName() {
	$useLocalCurrentObjectStackCache();
	if (!active()) {
		return nullptr;
	}
	if (this->net_wm_name_cache != nullptr) {
		return this->net_wm_name_cache;
	}
	$var($String, charSet, "UTF8"_s);
	$var($bytes, net_wm_name, $nc(this->XA_NET_WM_NAME)->getByteArrayProperty(this->NetWindow, $nc(this->XA_UTF8_STRING)->getAtom()));
	if (net_wm_name == nullptr) {
		$assign(net_wm_name, $nc(this->XA_NET_WM_NAME)->getByteArrayProperty(this->NetWindow, $XAtom::XA_STRING));
		$assign(charSet, "ASCII"_s);
	}
	if (net_wm_name == nullptr) {
		return nullptr;
	}
	try {
		$set(this, net_wm_name_cache, $new($String, net_wm_name, charSet));
		return this->net_wm_name_cache;
	} catch ($UnsupportedEncodingException& uex) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void XNETProtocol::setWMIcons($XWindowPeer* window, $List* icons) {
	$useLocalCurrentObjectStackCache();
	if (window == nullptr) {
		return;
	}
	$var($XAtom, iconsAtom, $XAtom::get("_NET_WM_ICON"_s));
	if (icons == nullptr) {
		$nc(iconsAtom)->DeleteProperty(static_cast<$XBaseWindow*>(window));
		return;
	}
	int32_t length = 0;
	{
		$var($Iterator, i$, $nc(icons)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($IconInfo, ii, $cast($IconInfo, i$->next()));
			{
				length += $nc(ii)->getRawLength();
			}
		}
	}
	$init($XlibWrapper);
	int32_t cardinalSize = ($XlibWrapper::dataModel == 32) ? 4 : 8;
	int32_t bufferSize = length * cardinalSize;
	if (bufferSize != 0) {
		int64_t buffer = $nc($XlibWrapper::unsafe)->allocateMemory(bufferSize);
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t ptr = buffer;
				{
					$var($Iterator, i$, icons->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($IconInfo, ii, $cast($IconInfo, i$->next()));
						{
							int32_t size = $nc(ii)->getRawLength() * cardinalSize;
							if ($XlibWrapper::dataModel == 32) {
								$XlibWrapper::copyIntArray(ptr, $(ii->getIntData()), size);
							} else {
								$XlibWrapper::copyLongArray(ptr, $(ii->getLongData()), size);
							}
							ptr += size;
						}
					}
				}
				int64_t var$1 = $nc(window)->getWindow();
				int64_t var$2 = buffer;
				$nc(iconsAtom)->setAtomData(var$1, $XAtom::XA_CARDINAL, var$2, $div(bufferSize, $Native::getCard32Size()));
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$nc($XlibWrapper::unsafe)->freeMemory(buffer);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$nc(iconsAtom)->DeleteProperty(static_cast<$XBaseWindow*>(window));
	}
}

bool XNETProtocol::isWMStateNetHidden($XWindowPeer* window) {
	if (!doStateProtocol()) {
		return false;
	}
	$var($XAtomList, state, $nc(window)->getNETWMState());
	bool var$0 = state != nullptr && state->size() != 0;
	return (var$0 && state->contains(this->XA_NET_WM_STATE_HIDDEN));
}

void clinit$XNETProtocol($Class* class$) {
	$assignStatic(XNETProtocol::log, $PlatformLogger::getLogger("sun.awt.X11.XNETProtocol"_s));
	$assignStatic(XNETProtocol::iconLog, $PlatformLogger::getLogger("sun.awt.X11.icon.XNETProtocol"_s));
	$assignStatic(XNETProtocol::stateLog, $PlatformLogger::getLogger("sun.awt.X11.states.XNETProtocol"_s));
}

XNETProtocol::XNETProtocol() {
}

$Class* XNETProtocol::load$($String* name, bool initialize) {
	$loadClass(XNETProtocol, name, initialize, &_XNETProtocol_ClassInfo_, clinit$XNETProtocol, allocate$XNETProtocol);
	return class$;
}

$Class* XNETProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun