#include <sun/awt/X11/XInputMethod.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11InputMethod.h>
#include <sun/awt/X11InputMethodBase.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $X11InputMethod = ::sun::awt::X11InputMethod;
using $X11InputMethodBase = ::sun::awt::X11InputMethodBase;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XInputMethod_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XInputMethod, log)},
	{"xicFocus", "J", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XInputMethod, xicFocus)},
	{}
};

$MethodInfo _XInputMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XInputMethod::*)()>(&XInputMethod::init$)), "java.awt.AWTException"},
	{"adjustStatusWindow", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(XInputMethod::*)(int64_t)>(&XInputMethod::adjustStatusWindow))},
	{"awtLock", "()V", nullptr, $PROTECTED},
	{"awtUnlock", "()V", nullptr, $PROTECTED},
	{"createXIC", "()Z", nullptr, $PROTECTED},
	{"createXICNative", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(XInputMethod::*)(int64_t)>(&XInputMethod::createXICNative))},
	{"disposeImpl", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getCurrentParentWindow", "()J", nullptr, 0},
	{"getParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PROTECTED},
	{"getPeer", "(Ljava/awt/Component;)Ljava/awt/peer/ComponentPeer;", nullptr, $PROTECTED},
	{"getXICFocus", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&XInputMethod::getXICFocus))},
	{"notifyClientWindowChange", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"openXIM", "()Z", nullptr, $PROTECTED},
	{"openXIMNative", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(XInputMethod::*)(int64_t)>(&XInputMethod::openXIMNative))},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC},
	{"setXICFocus", "(Ljava/awt/peer/ComponentPeer;ZZ)V", nullptr, $PROTECTED},
	{"setXICFocusNative", "(JZZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(XInputMethod::*)(int64_t,bool,bool)>(&XInputMethod::setXICFocusNative))},
	{}
};

#define _METHOD_INDEX_adjustStatusWindow 1
#define _METHOD_INDEX_createXICNative 5
#define _METHOD_INDEX_openXIMNative 13
#define _METHOD_INDEX_setXICFocusNative 16

$ClassInfo _XInputMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XInputMethod",
	"sun.awt.X11InputMethod",
	nullptr,
	_XInputMethod_FieldInfo_,
	_XInputMethod_MethodInfo_
};

$Object* allocate$XInputMethod($Class* clazz) {
	return $of($alloc(XInputMethod));
}

$PlatformLogger* XInputMethod::log = nullptr;
$volatile(int64_t) XInputMethod::xicFocus = 0;

void XInputMethod::init$() {
	$X11InputMethod::init$();
}

void XInputMethod::setInputMethodContext($InputMethodContext* context) {
	$nc(context)->enableClientWindowNotification(this, true);
}

void XInputMethod::notifyClientWindowChange($Rectangle* location) {
	$var($XComponentPeer, peer, $cast($XComponentPeer, getPeer(this->clientComponentWindow)));
	if (peer != nullptr) {
		adjustStatusWindow(peer->getContentWindow());
	}
}

bool XInputMethod::openXIM() {
	return openXIMNative($XToolkit::getDisplay());
}

bool XInputMethod::createXIC() {
	$var($XComponentPeer, peer, $cast($XComponentPeer, getPeer(this->clientComponentWindow)));
	if (peer == nullptr) {
		return false;
	}
	return createXICNative($nc(peer)->getContentWindow());
}

void XInputMethod::setXICFocus($ComponentPeer* peer, bool value, bool active) {
	if (peer == nullptr) {
		return;
	}
	XInputMethod::xicFocus = $nc(($cast($XComponentPeer, peer)))->getContentWindow();
	setXICFocusNative(($cast($XComponentPeer, peer))->getContentWindow(), value, active);
}

int64_t XInputMethod::getXICFocus() {
	$init(XInputMethod);
	return XInputMethod::xicFocus;
}

$Container* XInputMethod::getParent($Component* client) {
	return $nc(client)->getParent();
}

$ComponentPeer* XInputMethod::getPeer($Component* client$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, client, client$renamed);
	$var($XComponentPeer, peer, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(XInputMethod::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XInputMethod::log)->fine($$str({"Client is "_s, client}));
	}
	$assign(peer, $cast($XComponentPeer, $XToolkit::targetToPeer(client)));
	while (client != nullptr && peer == nullptr) {
		$assign(client, getParent(client));
		$assign(peer, $cast($XComponentPeer, $XToolkit::targetToPeer(client)));
	}
	if ($nc(XInputMethod::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XInputMethod::log)->fine("Peer is {0}, client is {1}"_s, $$new($ObjectArray, {
			$of(peer),
			$of(client)
		}));
	}
	if (peer != nullptr) {
		return peer;
	}
	return nullptr;
}

void XInputMethod::disposeImpl() {
	$synchronized(this) {
		$X11InputMethod::disposeImpl();
		$set(this, clientComponentWindow, nullptr);
	}
}

void XInputMethod::awtLock() {
	$XToolkit::awtLock();
}

void XInputMethod::awtUnlock() {
	$XToolkit::awtUnlock();
}

int64_t XInputMethod::getCurrentParentWindow() {
	$useLocalCurrentObjectStackCache();
	$var($XWindow, peer, $cast($XWindow, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->clientComponentWindow)));
	return $nc(peer)->getContentWindow();
}

bool XInputMethod::openXIMNative(int64_t display) {
	bool $ret = false;
	$prepareNative(XInputMethod, openXIMNative, bool, int64_t display);
	$ret = $invokeNative(XInputMethod, openXIMNative, display);
	$finishNative();
	return $ret;
}

bool XInputMethod::createXICNative(int64_t window) {
	bool $ret = false;
	$prepareNative(XInputMethod, createXICNative, bool, int64_t window);
	$ret = $invokeNative(XInputMethod, createXICNative, window);
	$finishNative();
	return $ret;
}

void XInputMethod::setXICFocusNative(int64_t window, bool value, bool active) {
	$prepareNative(XInputMethod, setXICFocusNative, void, int64_t window, bool value, bool active);
	$invokeNative(XInputMethod, setXICFocusNative, window, value, active);
	$finishNative();
}

void XInputMethod::adjustStatusWindow(int64_t window) {
	$prepareNative(XInputMethod, adjustStatusWindow, void, int64_t window);
	$invokeNative(XInputMethod, adjustStatusWindow, window);
	$finishNative();
}

void clinit$XInputMethod($Class* class$) {
	$assignStatic(XInputMethod::log, $PlatformLogger::getLogger("sun.awt.X11.XInputMethod"_s));
	XInputMethod::xicFocus = 0;
}

XInputMethod::XInputMethod() {
}

$Class* XInputMethod::load$($String* name, bool initialize) {
	$loadClass(XInputMethod, name, initialize, &_XInputMethod_ClassInfo_, clinit$XInputMethod, allocate$XInputMethod);
	return class$;
}

$Class* XInputMethod::class$ = nullptr;

		} // X11
	} // awt
} // sun