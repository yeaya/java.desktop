#include <sun/awt/X11/XWINProtocol.h>

#include <java/awt/Frame.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
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
#undef ICONIFIED
#undef LAYER_ALWAYS_ON_TOP
#undef LAYER_NORMAL
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
#undef NORMAL
#undef WIN_LAYER_NORMAL
#undef WIN_LAYER_ONTOP
#undef WIN_STATE_HIDDEN
#undef WIN_STATE_MAXIMIZED_HORIZ
#undef WIN_STATE_MAXIMIZED_VERT
#undef WIN_STATE_MINIMIZED
#undef WIN_STATE_SHADED
#undef WIN_STATE_STICKY
#undef XA_CARDINAL
#undef XA_WIN_LAYER
#undef XA_WIN_PROTOCOLS
#undef XA_WIN_STATE
#undef XA_WIN_SUPPORTING_WM_CHECK

using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XLayerProtocol = ::sun::awt::X11::XLayerProtocol;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XProtocol = ::sun::awt::X11::XProtocol;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWINProtocol_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $STATIC | $FINAL, $staticField(XWINProtocol, log)},
	{"XA_WIN_SUPPORTING_WM_CHECK", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWINProtocol, XA_WIN_SUPPORTING_WM_CHECK)},
	{"XA_WIN_PROTOCOLS", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWINProtocol, XA_WIN_PROTOCOLS)},
	{"XA_WIN_STATE", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWINProtocol, XA_WIN_STATE)},
	{"XA_WIN_LAYER", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWINProtocol, XA_WIN_LAYER)},
	{"WIN_STATE_STICKY", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_STICKY)},
	{"WIN_STATE_MINIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_MINIMIZED)},
	{"WIN_STATE_MAXIMIZED_VERT", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_MAXIMIZED_VERT)},
	{"WIN_STATE_MAXIMIZED_HORIZ", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_MAXIMIZED_HORIZ)},
	{"WIN_STATE_HIDDEN", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_HIDDEN)},
	{"WIN_STATE_SHADED", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_STATE_SHADED)},
	{"WIN_LAYER_ONTOP", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_LAYER_ONTOP)},
	{"WIN_LAYER_NORMAL", "I", nullptr, $STATIC | $FINAL, $constField(XWINProtocol, WIN_LAYER_NORMAL)},
	{"WinWindow", "J", nullptr, 0, $field(XWINProtocol, WinWindow)},
	{"supportChecked", "Z", nullptr, 0, $field(XWINProtocol, supportChecked)},
	{}
};

$MethodInfo _XWINProtocol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XWINProtocol::*)()>(&XWINProtocol::init$))},
	{"active", "()Z", nullptr, 0},
	{"detect", "()V", nullptr, 0},
	{"doLayerProtocol", "()Z", nullptr, 0},
	{"doStateProtocol", "()Z", nullptr, 0},
	{"getState", "(Lsun/awt/X11/XWindowPeer;)I", nullptr, $PUBLIC},
	{"isStateChange", "(Lsun/awt/X11/XPropertyEvent;)Z", nullptr, $PUBLIC},
	{"setLayer", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC},
	{"setState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC},
	{"supportsLayer", "(I)Z", nullptr, $PUBLIC},
	{"supportsState", "(I)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unshadeKludge", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XWINProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWINProtocol",
	"sun.awt.X11.XProtocol",
	"sun.awt.X11.XStateProtocol,sun.awt.X11.XLayerProtocol",
	_XWINProtocol_FieldInfo_,
	_XWINProtocol_MethodInfo_
};

$Object* allocate$XWINProtocol($Class* clazz) {
	return $of($alloc(XWINProtocol));
}

int32_t XWINProtocol::hashCode() {
	 return this->$XProtocol::hashCode();
}

bool XWINProtocol::equals(Object$* arg0) {
	 return this->$XProtocol::equals(arg0);
}

$Object* XWINProtocol::clone() {
	 return this->$XProtocol::clone();
}

$String* XWINProtocol::toString() {
	 return this->$XProtocol::toString();
}

void XWINProtocol::finalize() {
	this->$XProtocol::finalize();
}

$PlatformLogger* XWINProtocol::log = nullptr;

void XWINProtocol::init$() {
	$XProtocol::init$();
	$set(this, XA_WIN_SUPPORTING_WM_CHECK, $XAtom::get("_WIN_SUPPORTING_WM_CHECK"_s));
	$set(this, XA_WIN_PROTOCOLS, $XAtom::get("_WIN_PROTOCOLS"_s));
	$set(this, XA_WIN_STATE, $XAtom::get("_WIN_STATE"_s));
	$set(this, XA_WIN_LAYER, $XAtom::get("_WIN_LAYER"_s));
	this->WinWindow = 0;
	this->supportChecked = false;
}

bool XWINProtocol::supportsState(int32_t state) {
	return doStateProtocol();
}

void XWINProtocol::setState($XWindowPeer* window, int32_t state) {
	$useLocalCurrentObjectStackCache();
	if ($nc(window)->isShowing()) {
		int64_t win_state = 0;
		if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_VERT)) != 0) {
			win_state |= XWINProtocol::WIN_STATE_MAXIMIZED_VERT;
		}
		if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_HORIZ)) != 0) {
			win_state |= XWINProtocol::WIN_STATE_MAXIMIZED_HORIZ;
		}
		$var($XClientMessageEvent, req, $new($XClientMessageEvent));
		req->set_type($XConstants::ClientMessage);
		req->set_window(window->getWindow());
		req->set_message_type($nc(this->XA_WIN_STATE)->getAtom());
		req->set_format(32);
		req->set_data(0, (XWINProtocol::WIN_STATE_MAXIMIZED_HORIZ | XWINProtocol::WIN_STATE_MAXIMIZED_VERT));
		req->set_data(1, win_state);
		$init($PlatformLogger$Level);
		if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWINProtocol::log)->fine($$str({"Sending WIN_STATE to root to change the state to "_s, $$str(win_state)}));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$XToolkit::awtLock();
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = $XToolkit::getDisplay();
				$XlibWrapper::XSendEvent(var$1, $XlibWrapper::RootWindow(var$2, window->getScreenNumber()), false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, req->pData);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		req->dispose();
	} else {
		int64_t win_state = $nc(this->XA_WIN_STATE)->getCard32Property(window);
		int64_t old_win_state = win_state;
		if (((int32_t)(state & (uint32_t)$Frame::ICONIFIED)) != 0) {
			win_state |= XWINProtocol::WIN_STATE_MINIMIZED;
		} else {
			win_state &= (uint64_t)~XWINProtocol::WIN_STATE_MINIMIZED;
		}
		if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_VERT)) != 0) {
			win_state |= XWINProtocol::WIN_STATE_MAXIMIZED_VERT;
		} else {
			win_state &= (uint64_t)~XWINProtocol::WIN_STATE_MAXIMIZED_VERT;
		}
		if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_HORIZ)) != 0) {
			win_state |= XWINProtocol::WIN_STATE_MAXIMIZED_HORIZ;
		} else {
			win_state &= (uint64_t)~XWINProtocol::WIN_STATE_MAXIMIZED_HORIZ;
		}
		if ((old_win_state ^ win_state) != 0) {
			$init($PlatformLogger$Level);
			if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XWINProtocol::log)->fine($$str({"Setting WIN_STATE on "_s, window, " to change the state to "_s, $$str(win_state)}));
			}
			$nc(this->XA_WIN_STATE)->setCard32Property(static_cast<$XBaseWindow*>(window), win_state);
		}
	}
}

int32_t XWINProtocol::getState($XWindowPeer* window) {
	int64_t win_state = $nc(this->XA_WIN_STATE)->getCard32Property(window);
	int32_t java_state = $Frame::NORMAL;
	if (((int64_t)(win_state & (uint64_t)(int64_t)XWINProtocol::WIN_STATE_MAXIMIZED_VERT)) != 0) {
		java_state |= $Frame::MAXIMIZED_VERT;
	}
	if (((int64_t)(win_state & (uint64_t)(int64_t)XWINProtocol::WIN_STATE_MAXIMIZED_HORIZ)) != 0) {
		java_state |= $Frame::MAXIMIZED_HORIZ;
	}
	return java_state;
}

bool XWINProtocol::isStateChange($XPropertyEvent* e) {
	bool var$0 = doStateProtocol();
	if (var$0) {
		int64_t var$1 = $nc(e)->get_atom();
		var$0 = var$1 == $nc(this->XA_WIN_STATE)->getAtom();
	}
	return var$0;
}

void XWINProtocol::unshadeKludge($XWindowPeer* window) {
	int64_t win_state = $nc(this->XA_WIN_STATE)->getCard32Property(window);
	if (((int64_t)(win_state & (uint64_t)(int64_t)XWINProtocol::WIN_STATE_SHADED)) == 0) {
		return;
	}
	win_state &= (uint64_t)~XWINProtocol::WIN_STATE_SHADED;
	$nc(this->XA_WIN_STATE)->setCard32Property(static_cast<$XBaseWindow*>(window), win_state);
}

bool XWINProtocol::supportsLayer(int32_t layer) {
	return ((layer == $XLayerProtocol::LAYER_ALWAYS_ON_TOP) || (layer == $XLayerProtocol::LAYER_NORMAL)) && doLayerProtocol();
}

void XWINProtocol::setLayer($XWindowPeer* window, int32_t layer) {
	$useLocalCurrentObjectStackCache();
	if ($nc(window)->isShowing()) {
		$var($XClientMessageEvent, req, $new($XClientMessageEvent));
		req->set_type($XConstants::ClientMessage);
		req->set_window(window->getWindow());
		req->set_message_type($nc(this->XA_WIN_LAYER)->getAtom());
		req->set_format(32);
		req->set_data(0, layer == $XLayerProtocol::LAYER_NORMAL ? XWINProtocol::WIN_LAYER_NORMAL : XWINProtocol::WIN_LAYER_ONTOP);
		req->set_data(1, 0);
		req->set_data(2, 0);
		$init($PlatformLogger$Level);
		if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWINProtocol::log)->fine($$str({"Setting layer "_s, $$str(layer), " by root message : "_s, req}));
		}
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = $XToolkit::getDisplay();
				$XlibWrapper::XSendEvent(var$1, $XlibWrapper::RootWindow(var$2, window->getScreenNumber()), false, $XConstants::SubstructureNotifyMask, req->pData);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		req->dispose();
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWINProtocol::log)->fine($$str({"Setting layer property to "_s, $$str(layer)}));
		}
		$nc(this->XA_WIN_LAYER)->setCard32Property(static_cast<$XBaseWindow*>(window), (int64_t)(layer == $XLayerProtocol::LAYER_NORMAL ? XWINProtocol::WIN_LAYER_NORMAL : XWINProtocol::WIN_LAYER_ONTOP));
	}
}

void XWINProtocol::detect() {
	$useLocalCurrentObjectStackCache();
	if (this->supportChecked) {
		return;
	}
	this->WinWindow = checkAnchor(this->XA_WIN_SUPPORTING_WM_CHECK, $XAtom::XA_CARDINAL);
	this->supportChecked = true;
	$init($PlatformLogger$Level);
	if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWINProtocol::log)->fine($$str({"### "_s, this, " is active: "_s, $$str((this->WinWindow != 0))}));
	}
}

bool XWINProtocol::active() {
	detect();
	return this->WinWindow != 0;
}

bool XWINProtocol::doStateProtocol() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_WIN_PROTOCOLS, this->XA_WIN_STATE);
	$init($PlatformLogger$Level);
	if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWINProtocol::log)->fine($$str({"### "_s, this, " supports state: "_s, $$str(res)}));
	}
	return res;
}

bool XWINProtocol::doLayerProtocol() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = active();
	bool res = var$0 && checkProtocol(this->XA_WIN_PROTOCOLS, this->XA_WIN_LAYER);
	$init($PlatformLogger$Level);
	if ($nc(XWINProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWINProtocol::log)->fine($$str({"### "_s, this, " supports layer: "_s, $$str(res)}));
	}
	return res;
}

void clinit$XWINProtocol($Class* class$) {
	$assignStatic(XWINProtocol::log, $PlatformLogger::getLogger("sun.awt.X11.XWINProtocol"_s));
}

XWINProtocol::XWINProtocol() {
}

$Class* XWINProtocol::load$($String* name, bool initialize) {
	$loadClass(XWINProtocol, name, initialize, &_XWINProtocol_ClassInfo_, clinit$XWINProtocol, allocate$XWINProtocol);
	return class$;
}

$Class* XWINProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun