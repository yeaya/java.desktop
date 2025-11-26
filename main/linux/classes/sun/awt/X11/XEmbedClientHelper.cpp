#include <sun/awt/X11/XEmbedClientHelper.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEmbedClientHelper$1.h>
#include <sun/awt/X11/XEmbedClientHelper$2.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef XEMBED_EMBEDDED_NOTIFY
#undef XEMBED_FOCUS_CURRENT
#undef XEMBED_FOCUS_FIRST
#undef XEMBED_FOCUS_IN
#undef XEMBED_FOCUS_LAST
#undef XEMBED_FOCUS_NEXT
#undef XEMBED_FOCUS_OUT
#undef XEMBED_FOCUS_PREV
#undef XEMBED_MAPPED
#undef XEMBED_REGISTER_ACCELERATOR
#undef XEMBED_REQUEST_FOCUS
#undef XEMBED_UNREGISTER_ACCELERATOR
#undef XEMBED_VERSION
#undef XEMBED_WINDOW_ACTIVATE
#undef XEMBED_WINDOW_DEACTIVATE

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEmbedClientHelper$1 = ::sun::awt::X11::XEmbedClientHelper$1;
using $XEmbedClientHelper$2 = ::sun::awt::X11::XEmbedClientHelper$2;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedClientHelper_FieldInfo_[] = {
	{"xembedLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbedClientHelper, xembedLog)},
	{"embedded", "Lsun/awt/X11/XEmbeddedFramePeer;", nullptr, $PRIVATE, $field(XEmbedClientHelper, embedded)},
	{"server", "J", nullptr, $PRIVATE, $field(XEmbedClientHelper, server)},
	{"active", "Z", nullptr, $PRIVATE, $field(XEmbedClientHelper, active)},
	{"applicationActive", "Z", nullptr, $PRIVATE, $field(XEmbedClientHelper, applicationActive)},
	{}
};

$MethodInfo _XEmbedClientHelper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XEmbedClientHelper::*)()>(&XEmbedClientHelper::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"getEmbedder", "(Lsun/awt/X11/XWindowPeer;Lsun/awt/X11/XClientMessageEvent;)J", nullptr, 0},
	{"getX11KeySym", "(Ljava/awt/AWTKeyStroke;)J", nullptr, 0},
	{"getX11Mods", "(Ljava/awt/AWTKeyStroke;)J", nullptr, 0},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, 0},
	{"handleFocusIn", "(I)V", nullptr, 0},
	{"handleReparentNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleWindowFocusOut", "()V", nullptr, 0},
	{"install", "()V", nullptr, 0},
	{"isActive", "()Z", nullptr, 0},
	{"isApplicationActive", "()Z", nullptr, 0},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;I)V", nullptr, 0},
	{"requestFocus", "()Z", nullptr, 0},
	{"setClient", "(Lsun/awt/X11/XEmbeddedFramePeer;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traverseOutBackward", "()V", nullptr, 0},
	{"traverseOutForward", "()V", nullptr, 0},
	{"unregisterAccelerator", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _XEmbedClientHelper_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedClientHelper$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedClientHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedClientHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbedClientHelper",
	"sun.awt.X11.XEmbedHelper",
	"sun.awt.X11.XEventDispatcher",
	_XEmbedClientHelper_FieldInfo_,
	_XEmbedClientHelper_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedClientHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedClientHelper$2,sun.awt.X11.XEmbedClientHelper$1"
};

$Object* allocate$XEmbedClientHelper($Class* clazz) {
	return $of($alloc(XEmbedClientHelper));
}

int32_t XEmbedClientHelper::hashCode() {
	 return this->$XEmbedHelper::hashCode();
}

bool XEmbedClientHelper::equals(Object$* arg0) {
	 return this->$XEmbedHelper::equals(arg0);
}

$Object* XEmbedClientHelper::clone() {
	 return this->$XEmbedHelper::clone();
}

$String* XEmbedClientHelper::toString() {
	 return this->$XEmbedHelper::toString();
}

void XEmbedClientHelper::finalize() {
	this->$XEmbedHelper::finalize();
}

$PlatformLogger* XEmbedClientHelper::xembedLog = nullptr;

void XEmbedClientHelper::init$() {
	$XEmbedHelper::init$();
}

void XEmbedClientHelper::setClient($XEmbeddedFramePeer* client) {
	$init($PlatformLogger$Level);
	if ($nc(XEmbedClientHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedClientHelper::xembedLog)->fine($$str({"XEmbed client: "_s, client}));
	}
	if (this->embedded != nullptr) {
		$XToolkit::removeEventDispatcher($nc(this->embedded)->getWindow(), this);
		this->active = false;
	}
	$set(this, embedded, client);
	if (this->embedded != nullptr) {
		$XToolkit::addEventDispatcher($nc(this->embedded)->getWindow(), this);
	}
}

void XEmbedClientHelper::install() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedClientHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedClientHelper::xembedLog)->fine($$str({"Installing xembedder on "_s, this->embedded}));
	}
	$var($longs, info, $new($longs, {
		(int64_t)$XEmbedHelper::XEMBED_VERSION,
		(int64_t)$XEmbedHelper::XEMBED_MAPPED
	}));
	int64_t data = $Native::card32ToData(info);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($XEmbedHelper);
			$nc($XEmbedHelper::XEmbedInfo)->setAtomData($nc(this->embedded)->getWindow(), data, 2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($XEmbedHelper);
			$nc($XEmbedHelper::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	int64_t parentWindow = $nc(this->embedded)->getParentWindowHandle();
	if (parentWindow != 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$2, nullptr);
			try {
				int64_t var$3 = $XToolkit::getDisplay();
				$XlibWrapper::XReparentWindow(var$3, $nc(this->embedded)->getWindow(), parentWindow, 0, 0);
			} catch ($Throwable& var$4) {
				$assign(var$2, var$4);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void XEmbedClientHelper::handleClientMessage($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, msg, $nc(xev)->get_xclient());
	$init($PlatformLogger$Level);
	if ($nc(XEmbedClientHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedClientHelper::xembedLog)->fine($($nc(msg)->toString()));
	}
	int64_t var$0 = $nc(msg)->get_message_type();
	$init($XEmbedHelper);
	if (var$0 == $nc($XEmbedHelper::XEmbed)->getAtom()) {
		if ($nc(XEmbedClientHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XEmbedClientHelper::xembedLog)->fine($$str({"Embedded message: "_s, $(msgidToString((int32_t)msg->get_data(1)))}));
		}
		switch ((int32_t)msg->get_data(1)) {
		case $XEmbedHelper::XEMBED_EMBEDDED_NOTIFY:
			{
				this->active = true;
				this->server = getEmbedder(this->embedded, msg);
				if (!$nc(this->embedded)->isReparented()) {
					$nc(this->embedded)->setReparented(true);
					$nc(this->embedded)->updateSizeHints();
				}
				$nc(this->embedded)->notifyStarted();
				break;
			}
		case $XEmbedHelper::XEMBED_WINDOW_ACTIVATE:
			{
				this->applicationActive = true;
				break;
			}
		case $XEmbedHelper::XEMBED_WINDOW_DEACTIVATE:
			{
				if (this->applicationActive) {
					this->applicationActive = false;
					handleWindowFocusOut();
				}
				break;
			}
		case $XEmbedHelper::XEMBED_FOCUS_IN:
			{
				handleFocusIn((int32_t)msg->get_data(2));
				break;
			}
		case $XEmbedHelper::XEMBED_FOCUS_OUT:
			{
				if (this->applicationActive) {
					handleWindowFocusOut();
				}
				break;
			}
		}
	}
}

void XEmbedClientHelper::handleFocusIn(int32_t detail) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->embedded)->focusAllowedFor()) {
		$nc(this->embedded)->handleWindowFocusIn(0);
	}
	switch (detail) {
	case $XEmbedHelper::XEMBED_FOCUS_CURRENT:
		{
			break;
		}
	case $XEmbedHelper::XEMBED_FOCUS_FIRST:
		{
			$SunToolkit::executeOnEventHandlerThread($nc(this->embedded)->target, $$new($XEmbedClientHelper$1, this));
			break;
		}
	case $XEmbedHelper::XEMBED_FOCUS_LAST:
		{
			$SunToolkit::executeOnEventHandlerThread($nc(this->embedded)->target, $$new($XEmbedClientHelper$2, this));
			break;
		}
	}
}

void XEmbedClientHelper::dispatchEvent($XEvent* xev) {
	switch ($nc(xev)->get_type()) {
	case $XConstants::ClientMessage:
		{
			handleClientMessage(xev);
			break;
		}
	case $XConstants::ReparentNotify:
		{
			handleReparentNotify(xev);
			break;
		}
	}
}

void XEmbedClientHelper::handleReparentNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XReparentEvent, re, $nc(xev)->get_xreparent());
	int64_t newParent = $nc(re)->get_parent();
	if (this->active) {
		$nc(this->embedded)->notifyStopped();
		$var($X11GraphicsConfig, gc, $cast($X11GraphicsConfig, $nc(this->embedded)->getGraphicsConfiguration()));
		$var($X11GraphicsDevice, gd, $cast($X11GraphicsDevice, $nc(gc)->getDevice()));
		bool var$0 = (newParent == $XlibUtil::getRootWindow($nc(gd)->getScreen()));
		if (var$0 || (newParent == $XToolkit::getDefaultRootWindow())) {
			this->active = false;
		} else {
			this->server = newParent;
			$nc(this->embedded)->notifyStarted();
		}
	}
}

bool XEmbedClientHelper::requestFocus() {
	if (this->active && $nc(this->embedded)->focusAllowedFor()) {
		sendMessage(this->server, $XEmbedHelper::XEMBED_REQUEST_FOCUS);
		return true;
	}
	return false;
}

void XEmbedClientHelper::handleWindowFocusOut() {
	if ($equals($nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow(), $nc(this->embedded)->target)) {
		$nc(this->embedded)->handleWindowFocusOut(nullptr, 0);
	}
}

int64_t XEmbedClientHelper::getEmbedder($XWindowPeer* embedded, $XClientMessageEvent* info) {
	return $XlibUtil::getParentWindow($nc(embedded)->getWindow());
}

bool XEmbedClientHelper::isApplicationActive() {
	return this->applicationActive;
}

bool XEmbedClientHelper::isActive() {
	return this->active;
}

void XEmbedClientHelper::traverseOutForward() {
	if (this->active) {
		sendMessage(this->server, $XEmbedHelper::XEMBED_FOCUS_NEXT);
	}
}

void XEmbedClientHelper::traverseOutBackward() {
	if (this->active) {
		sendMessage(this->server, $XEmbedHelper::XEMBED_FOCUS_PREV);
	}
}

void XEmbedClientHelper::registerAccelerator($AWTKeyStroke* stroke, int32_t id) {
	if (this->active) {
		int64_t sym = getX11KeySym(stroke);
		int64_t mods = getX11Mods(stroke);
		sendMessage(this->server, $XEmbedHelper::XEMBED_REGISTER_ACCELERATOR, id, sym, mods);
	}
}

void XEmbedClientHelper::unregisterAccelerator(int32_t id) {
	if (this->active) {
		sendMessage(this->server, $XEmbedHelper::XEMBED_UNREGISTER_ACCELERATOR, id, 0, 0);
	}
}

int64_t XEmbedClientHelper::getX11KeySym($AWTKeyStroke* stroke) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $XWindow::getKeySymForAWTKeyCode($nc(stroke)->getKeyCode());
			return$1 = true;
			goto $finally;
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

int64_t XEmbedClientHelper::getX11Mods($AWTKeyStroke* stroke) {
	return $XWindow::getXModifiers(stroke);
}

void clinit$XEmbedClientHelper($Class* class$) {
	$assignStatic(XEmbedClientHelper::xembedLog, $PlatformLogger::getLogger("sun.awt.X11.xembed.XEmbedClientHelper"_s));
}

XEmbedClientHelper::XEmbedClientHelper() {
}

$Class* XEmbedClientHelper::load$($String* name, bool initialize) {
	$loadClass(XEmbedClientHelper, name, initialize, &_XEmbedClientHelper_ClassInfo_, clinit$XEmbedClientHelper, allocate$XEmbedClientHelper);
	return class$;
}

$Class* XEmbedClientHelper::class$ = nullptr;

		} // X11
	} // awt
} // sun