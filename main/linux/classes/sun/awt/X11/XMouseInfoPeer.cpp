#include <sun/awt/X11/XMouseInfoPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/AssertionError.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $Native = ::sun::awt::X11::Native;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMouseInfoPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XMouseInfoPeer, $assertionsDisabled)},
	{}
};

$MethodInfo _XMouseInfoPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XMouseInfoPeer::*)()>(&XMouseInfoPeer::init$))},
	{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMouseInfoPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XMouseInfoPeer",
	"java.lang.Object",
	"java.awt.peer.MouseInfoPeer",
	_XMouseInfoPeer_FieldInfo_,
	_XMouseInfoPeer_MethodInfo_
};

$Object* allocate$XMouseInfoPeer($Class* clazz) {
	return $of($alloc(XMouseInfoPeer));
}

bool XMouseInfoPeer::$assertionsDisabled = false;

void XMouseInfoPeer::init$() {
}

int32_t XMouseInfoPeer::fillPointWithCoords($Point* point) {
	$useLocalCurrentObjectStackCache();
	int64_t display = $XToolkit::getDisplay();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gds, $nc(ge)->getScreenDevices());
	int32_t gdslen = $nc(gds)->length;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			for (int32_t i = 0; i < gdslen; ++i) {
				int64_t screenRoot = $XlibWrapper::RootWindow(display, i);
				bool pointerFound = $XlibWrapper::XQueryPointer(display, screenRoot, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
				if (pointerFound) {
					$nc(point)->x = $Native::getInt($XlibWrapper::larg3);
					point->y = $Native::getInt($XlibWrapper::larg4);
					$var($GraphicsDevice, device, gds->get(i));
					if ($instanceOf($X11GraphicsDevice, device)) {
						int32_t scale = $nc(($cast($X11GraphicsDevice, device)))->getScaleFactor();
						point->x = $XlibUtil::scaleDown(point->x, scale);
						point->y = $XlibUtil::scaleDown(point->y, scale);
					}
					var$2 = i;
					return$1 = true;
					goto $finally;
				}
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
	if (!XMouseInfoPeer::$assertionsDisabled) {
		$throwNew($AssertionError, $of("No pointer found in the system."_s));
	}
	return 0;
}

bool XMouseInfoPeer::isWindowUnderMouse($Window* w) {
	$useLocalCurrentObjectStackCache();
	if (w == nullptr) {
		return false;
	}
	$var($XWindow, peer, $cast($XWindow, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (peer == nullptr) {
		return false;
	}
	int64_t display = $XToolkit::getDisplay();
	int64_t contentWindow = $nc(peer)->getContentWindow();
	int64_t parent = $XlibUtil::getParentWindow(contentWindow);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($XlibWrapper);
			bool windowOnTheSameScreen = $XlibWrapper::XQueryPointer(display, parent, $XlibWrapper::larg1, $XlibWrapper::larg8, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
			int64_t siblingWindow = $Native::getWindow($XlibWrapper::larg8);
			var$2 = (siblingWindow == contentWindow && windowOnTheSameScreen);
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

void clinit$XMouseInfoPeer($Class* class$) {
	XMouseInfoPeer::$assertionsDisabled = !XMouseInfoPeer::class$->desiredAssertionStatus();
}

XMouseInfoPeer::XMouseInfoPeer() {
}

$Class* XMouseInfoPeer::load$($String* name, bool initialize) {
	$loadClass(XMouseInfoPeer, name, initialize, &_XMouseInfoPeer_ClassInfo_, clinit$XMouseInfoPeer, allocate$XMouseInfoPeer);
	return class$;
}

$Class* XMouseInfoPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun