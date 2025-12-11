#include <sun/awt/X11/XAwtState.h>

#include <java/awt/Component.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XAwtState_FieldInfo_[] = {
	{"componentMouseEnteredRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $STATIC, $staticField(XAwtState, componentMouseEnteredRef)},
	{"inManualGrab", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XAwtState, inManualGrab)},
	{"grabWindowRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/X11/XBaseWindow;>;", $PRIVATE | $STATIC, $staticField(XAwtState, grabWindowRef)},
	{}
};

$MethodInfo _XAwtState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XAwtState::*)()>(&XAwtState::init$))},
	{"getComponentMouseEntered", "()Ljava/awt/Component;", nullptr, $STATIC, $method(static_cast<$Component*(*)()>(&XAwtState::getComponentMouseEntered))},
	{"getGrabWindow", "()Lsun/awt/X11/XBaseWindow;", nullptr, $STATIC, $method(static_cast<$XBaseWindow*(*)()>(&XAwtState::getGrabWindow))},
	{"isManualGrab", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XAwtState::isManualGrab))},
	{"setAutoGrabWindow", "(Lsun/awt/X11/XBaseWindow;)V", nullptr, $STATIC, $method(static_cast<void(*)($XBaseWindow*)>(&XAwtState::setAutoGrabWindow))},
	{"setComponentMouseEntered", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&XAwtState::setComponentMouseEntered))},
	{"setGrabWindow", "(Lsun/awt/X11/XBaseWindow;)V", nullptr, $STATIC, $method(static_cast<void(*)($XBaseWindow*)>(&XAwtState::setGrabWindow))},
	{"setGrabWindow", "(Lsun/awt/X11/XBaseWindow;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($XBaseWindow*,bool)>(&XAwtState::setGrabWindow))},
	{}
};

$ClassInfo _XAwtState_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XAwtState",
	"java.lang.Object",
	nullptr,
	_XAwtState_FieldInfo_,
	_XAwtState_MethodInfo_
};

$Object* allocate$XAwtState($Class* clazz) {
	return $of($alloc(XAwtState));
}

$WeakReference* XAwtState::componentMouseEnteredRef = nullptr;
bool XAwtState::inManualGrab = false;
$WeakReference* XAwtState::grabWindowRef = nullptr;

void XAwtState::init$() {
}

void XAwtState::setComponentMouseEntered($Component* component) {
	$init(XAwtState);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (component == nullptr) {
				$assignStatic(XAwtState::componentMouseEnteredRef, nullptr);
				return$1 = true;
				goto $finally;
			}
			if (component != getComponentMouseEntered()) {
				$assignStatic(XAwtState::componentMouseEnteredRef, $new($WeakReference, component));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
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
}

$Component* XAwtState::getComponentMouseEntered() {
	$init(XAwtState);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Component, var$2, nullptr);
		bool return$1 = false;
		try {
			if (XAwtState::componentMouseEnteredRef == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $cast($Component, $nc(XAwtState::componentMouseEnteredRef)->get()));
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

bool XAwtState::isManualGrab() {
	$init(XAwtState);
	return XAwtState::inManualGrab;
}

void XAwtState::setGrabWindow($XBaseWindow* grabWindow) {
	$init(XAwtState);
	setGrabWindow(grabWindow, false);
}

void XAwtState::setAutoGrabWindow($XBaseWindow* grabWindow) {
	$init(XAwtState);
	setGrabWindow(grabWindow, true);
}

void XAwtState::setGrabWindow($XBaseWindow* grabWindow, bool isAutoGrab) {
	$init(XAwtState);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (XAwtState::inManualGrab && isAutoGrab) {
				return$1 = true;
				goto $finally;
			}
			XAwtState::inManualGrab = grabWindow != nullptr && !isAutoGrab;
			if (grabWindow == nullptr) {
				$assignStatic(XAwtState::grabWindowRef, nullptr);
				return$1 = true;
				goto $finally;
			}
			if (grabWindow != getGrabWindow()) {
				$assignStatic(XAwtState::grabWindowRef, $new($WeakReference, grabWindow));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
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
}

$XBaseWindow* XAwtState::getGrabWindow() {
	$init(XAwtState);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($XBaseWindow, var$2, nullptr);
		bool return$1 = false;
		try {
			if (XAwtState::grabWindowRef == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$var($XBaseWindow, xbw, $cast($XBaseWindow, $nc(XAwtState::grabWindowRef)->get()));
			if (xbw != nullptr && xbw->isDisposed()) {
				$assign(xbw, nullptr);
				$assignStatic(XAwtState::grabWindowRef, nullptr);
			} else if (xbw == nullptr) {
				$assignStatic(XAwtState::grabWindowRef, nullptr);
			}
			$assign(var$2, xbw);
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

void clinit$XAwtState($Class* class$) {
	$assignStatic(XAwtState::componentMouseEnteredRef, nullptr);
	XAwtState::inManualGrab = false;
	$assignStatic(XAwtState::grabWindowRef, nullptr);
}

XAwtState::XAwtState() {
}

$Class* XAwtState::load$($String* name, bool initialize) {
	$loadClass(XAwtState, name, initialize, &_XAwtState_ClassInfo_, clinit$XAwtState, allocate$XAwtState);
	return class$;
}

$Class* XAwtState::class$ = nullptr;

		} // X11
	} // awt
} // sun