#include <sun/awt/X11/XlibUtil.h>

#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XQueryTree.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTranslateCoordinates.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef MAX_BUTTONS
#undef XA_WM_STATE

using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XQueryTree = ::sun::awt::X11::XQueryTree;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTranslateCoordinates = ::sun::awt::X11::XTranslateCoordinates;
using $XWM = ::sun::awt::X11::XWM;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XlibUtil_FieldInfo_[] = {
	{"isShapingSupported", "Ljava/lang/Boolean;", nullptr, $STATIC, $staticField(XlibUtil, isShapingSupported$)},
	{}
};

$MethodInfo _XlibUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XlibUtil::*)()>(&XlibUtil::init$))},
	{"getButtonMask", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XlibUtil::getButtonMask))},
	{"getChildWindows", "(J)Ljava/util/Set;", "(J)Ljava/util/Set<Ljava/lang/Long;>;", $STATIC, $method(static_cast<$Set*(*)(int64_t)>(&XlibUtil::getChildWindows))},
	{"getParentWindow", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XlibUtil::getParentWindow))},
	{"getRootWindow", "(I)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&XlibUtil::getRootWindow))},
	{"getWindowGeometry", "(JI)Ljava/awt/Rectangle;", nullptr, $STATIC, $method(static_cast<$Rectangle*(*)(int64_t,int32_t)>(&XlibUtil::getWindowGeometry))},
	{"getWindowMapState", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&XlibUtil::getWindowMapState))},
	{"isRoot", "(JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t,int64_t)>(&XlibUtil::isRoot))},
	{"isShapingSupported", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&XlibUtil::isShapingSupported))},
	{"isToplevelWindow", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&XlibUtil::isToplevelWindow))},
	{"isTrueToplevelWindow", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&XlibUtil::isTrueToplevelWindow))},
	{"isXAWTToplevelWindow", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&XlibUtil::isXAWTToplevelWindow))},
	{"scaleDown", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&XlibUtil::scaleDown))},
	{"translateCoordinates", "(JJLjava/awt/Point;I)Ljava/awt/Point;", nullptr, $STATIC, $method(static_cast<$Point*(*)(int64_t,int64_t,$Point*,int32_t)>(&XlibUtil::translateCoordinates))},
	{"translateCoordinates", "(JJLjava/awt/Rectangle;I)Ljava/awt/Rectangle;", nullptr, $STATIC, $method(static_cast<$Rectangle*(*)(int64_t,int64_t,$Rectangle*,int32_t)>(&XlibUtil::translateCoordinates))},
	{}
};

$ClassInfo _XlibUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XlibUtil",
	"java.lang.Object",
	nullptr,
	_XlibUtil_FieldInfo_,
	_XlibUtil_MethodInfo_
};

$Object* allocate$XlibUtil($Class* clazz) {
	return $of($alloc(XlibUtil));
}

$Boolean* XlibUtil::isShapingSupported$ = nullptr;

void XlibUtil::init$() {
}

int64_t XlibUtil::getRootWindow(int32_t screenNumber) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$var($X11GraphicsEnvironment, x11ge, $cast($X11GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
			if ($nc(x11ge)->runningXinerama()) {
				var$2 = $XlibWrapper::RootWindow($XToolkit::getDisplay(), 0);
				return$1 = true;
				goto $finally;
			} else {
				var$2 = $XlibWrapper::RootWindow($XToolkit::getDisplay(), screenNumber);
				return$1 = true;
				goto $finally;
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
	$shouldNotReachHere();
}

bool XlibUtil::isRoot(int64_t rootCandidate, int64_t screenNumber) {
	$init(XlibUtil);
	int64_t root = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			root = $XlibWrapper::RootWindow($XToolkit::getDisplay(), screenNumber);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return root == rootCandidate;
}

$Rectangle* XlibUtil::getWindowGeometry(int64_t window, int32_t scale) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$init($XlibWrapper);
			int32_t res = $XlibWrapper::XGetGeometry($XToolkit::getDisplay(), window, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
			if (res == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			int32_t x = $Native::getInt($XlibWrapper::larg2);
			int32_t y = $Native::getInt($XlibWrapper::larg3);
			int64_t width = $Native::getUInt($XlibWrapper::larg4);
			int64_t height = $Native::getUInt($XlibWrapper::larg5);
			int32_t var$3 = scaleDown(x, scale);
			int32_t var$4 = scaleDown(y, scale);
			int32_t var$5 = scaleDown((int32_t)width, scale);
			$assign(var$2, $new($Rectangle, var$3, var$4, var$5, scaleDown((int32_t)height, scale)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
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

$Point* XlibUtil::translateCoordinates(int64_t src, int64_t dst, $Point* p, int32_t scale) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$var($Point, translated, nullptr);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XTranslateCoordinates, xtc, $new($XTranslateCoordinates, src, dst, $nc(p)->x * scale, p->y * scale));
			{
				$var($Throwable, var$1, nullptr);
				try {
					int32_t status = xtc->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					$init($XErrorHandlerUtil);
					if ((status != 0) && (($XErrorHandlerUtil::saved_error == nullptr) || ($nc($XErrorHandlerUtil::saved_error)->get_error_code() == $XConstants::Success))) {
						int32_t var$2 = scaleDown(xtc->get_dest_x(), scale);
						$assign(translated, $new($Point, var$2, scaleDown(xtc->get_dest_y(), scale)));
					}
				} catch ($Throwable& var$3) {
					$assign(var$1, var$3);
				} /*finally*/ {
					xtc->dispose();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return translated;
}

$Rectangle* XlibUtil::translateCoordinates(int64_t src, int64_t dst, $Rectangle* r, int32_t scale) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$var($Point, translatedLoc, translateCoordinates(src, dst, $($nc(r)->getLocation()), scale));
	if (translatedLoc == nullptr) {
		return nullptr;
	} else {
		return $new($Rectangle, translatedLoc, $($nc(r)->getSize()));
	}
}

int64_t XlibUtil::getParentWindow(int64_t window) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$var($XBaseWindow, bw, $XToolkit::windowToXWindow(window));
			if (bw != nullptr) {
				$var($XBaseWindow, pbw, bw->getParentWindow());
				if (pbw != nullptr) {
					var$2 = pbw->getWindow();
					return$1 = true;
					goto $finally;
				}
			}
			$var($XQueryTree, qt, $new($XQueryTree, window));
			{
				$var($Throwable, var$3, nullptr);
				int64_t var$5 = 0;
				bool return$4 = false;
				try {
					if (qt->execute() == 0) {
						var$5 = 0;
						return$4 = true;
						goto $finally1;
					} else {
						var$5 = qt->get_parent();
						return$4 = true;
						goto $finally1;
					}
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					qt->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
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

$Set* XlibUtil::getChildWindows(int64_t window) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Set, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($XBaseWindow, bw, $XToolkit::windowToXWindow(window));
			if (bw != nullptr) {
				$assign(var$2, bw->getChildren());
				return$1 = true;
				goto $finally;
			}
			$var($XQueryTree, xqt, $new($XQueryTree, window));
			{
				$var($Throwable, var$3, nullptr);
				$var($Set, var$5, nullptr);
				bool return$4 = false;
				try {
					int32_t status = xqt->execute();
					if (status == 0) {
						$assign(var$5, $Collections::emptySet());
						return$4 = true;
						goto $finally1;
					}
					int64_t children = xqt->get_children();
					if (children == 0) {
						$assign(var$5, $Collections::emptySet());
						return$4 = true;
						goto $finally1;
					}
					int32_t childrenCount = xqt->get_nchildren();
					$var($Set, childrenSet, $new($HashSet, childrenCount));
					for (int32_t i = 0; i < childrenCount; ++i) {
						childrenSet->add($($Long::valueOf($Native::getWindow(children, i))));
					}
					$assign(var$5, childrenSet);
					return$4 = true;
					goto $finally1;
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					xqt->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					$assign(var$2, var$5);
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
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

bool XlibUtil::isXAWTToplevelWindow(int64_t window) {
	$init(XlibUtil);
	return $instanceOf($XWindowPeer, $($XToolkit::windowToXWindow(window)));
}

bool XlibUtil::isToplevelWindow(int64_t window) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XDecoratedPeer, $($XToolkit::windowToXWindow(window)))) {
		return true;
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($XWM);
			$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, window, $XWM::XA_WM_STATE, (int64_t)0, (int64_t)1, false, $XWM::XA_WM_STATE));
			{
				$var($Throwable, var$3, nullptr);
				bool var$5 = false;
				bool return$4 = false;
				try {
					wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					int64_t var$6 = wpg->getActualType();
					if (var$6 == $nc($XWM::XA_WM_STATE)->getAtom()) {
						var$5 = true;
						return$4 = true;
						goto $finally1;
					}
				} catch ($Throwable& var$7) {
					$assign(var$3, var$7);
				} $finally1: {
					wpg->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
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

bool XlibUtil::isTrueToplevelWindow(int64_t window) {
	$init(XlibUtil);
	if ($instanceOf($XEmbeddedFramePeer, $($XToolkit::windowToXWindow(window)))) {
		return false;
	}
	return isToplevelWindow(window);
}

int32_t XlibUtil::getWindowMapState(int64_t window) {
	$init(XlibUtil);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), window, wattr->pData);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if ((status != 0) && (($XErrorHandlerUtil::saved_error == nullptr) || ($nc($XErrorHandlerUtil::saved_error)->get_error_code() == $XConstants::Success))) {
				var$2 = wattr->get_map_state();
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			wattr->dispose();
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return $XConstants::IsUnmapped;
}

bool XlibUtil::isShapingSupported() {
	$load(XlibUtil);
	$synchronized(class$) {
		$init(XlibUtil);
		if (XlibUtil::isShapingSupported$ == nullptr) {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					$init($XlibWrapper);
					$assignStatic(XlibUtil::isShapingSupported$, $Boolean::valueOf($XlibWrapper::XShapeQueryExtension($XToolkit::getDisplay(), $XlibWrapper::larg1, $XlibWrapper::larg2)));
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
		return $nc(XlibUtil::isShapingSupported$)->booleanValue();
	}
}

int32_t XlibUtil::getButtonMask(int32_t button) {
	$init(XlibUtil);
	if (button <= 0 || button > $XConstants::MAX_BUTTONS) {
		return 0;
	} else {
		return $sl(1, 7 + button);
	}
}

int32_t XlibUtil::scaleDown(int32_t x, int32_t scale) {
	$init(XlibUtil);
	return $Region::clipRound(x / (double)scale);
}

void clinit$XlibUtil($Class* class$) {
	$assignStatic(XlibUtil::isShapingSupported$, nullptr);
}

XlibUtil::XlibUtil() {
}

$Class* XlibUtil::load$($String* name, bool initialize) {
	$loadClass(XlibUtil, name, initialize, &_XlibUtil_ClassInfo_, clinit$XlibUtil, allocate$XlibUtil);
	return class$;
}

$Class* XlibUtil::class$ = nullptr;

		} // X11
	} // awt
} // sun