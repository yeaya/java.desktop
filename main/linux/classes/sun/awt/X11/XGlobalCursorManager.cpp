#include <sun/awt/X11/XGlobalCursorManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/ref/WeakReference.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$CursorAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAwtState.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCursorFontConstants.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef CROSSHAIR_CURSOR
#undef DEFAULT_CURSOR
#undef E_RESIZE_CURSOR
#undef HAND_CURSOR
#undef MOVE_CURSOR
#undef NE_RESIZE_CURSOR
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef TEXT_CURSOR
#undef WAIT_CURSOR
#undef W_RESIZE_CURSOR

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$CursorAccessor = ::sun::awt::AWTAccessor$CursorAccessor;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAwtState = ::sun::awt::X11::XAwtState;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCursorFontConstants = ::sun::awt::X11::XCursorFontConstants;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XGlobalCursorManager_FieldInfo_[] = {
	{"nativeContainer", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE, $field(XGlobalCursorManager, nativeContainer)},
	{"manager", "Lsun/awt/X11/XGlobalCursorManager;", nullptr, $PRIVATE | $STATIC, $staticField(XGlobalCursorManager, manager)},
	{}
};

$MethodInfo _XGlobalCursorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XGlobalCursorManager::*)()>(&XGlobalCursorManager::init$))},
	{"findHeavyweightUnderCursor", "()Ljava/awt/Component;", nullptr, $PROTECTED, $method(static_cast<$Component*(XGlobalCursorManager::*)()>(&XGlobalCursorManager::findHeavyweightUnderCursor))},
	{"findHeavyweightUnderCursor", "(Z)Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getCapableCursor", "(Ljava/awt/Component;)Ljava/awt/Cursor;", nullptr, $PRIVATE, $method(static_cast<$Cursor*(XGlobalCursorManager::*)($Component*)>(&XGlobalCursorManager::getCapableCursor))},
	{"getCursor", "(Ljava/awt/Cursor;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($Cursor*)>(&XGlobalCursorManager::getCursor))},
	{"getCursorManager", "()Lsun/awt/GlobalCursorManager;", nullptr, $STATIC, $method(static_cast<$GlobalCursorManager*(*)()>(&XGlobalCursorManager::getCursorManager))},
	{"getCursorPos", "(Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"getLocationOnScreen", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PROTECTED},
	{"nativeUpdateCursor", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&XGlobalCursorManager::nativeUpdateCursor))},
	{"setCursor", "(Ljava/awt/Component;Ljava/awt/Cursor;Z)V", nullptr, $PROTECTED},
	{"setPData", "(Ljava/awt/Cursor;J)V", nullptr, $STATIC, $method(static_cast<void(*)($Cursor*,int64_t)>(&XGlobalCursorManager::setPData))},
	{"updateCursorOutOfJava", "()V", nullptr, $PROTECTED},
	{"updateGrabbedCursor", "(Ljava/awt/Cursor;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Cursor*)>(&XGlobalCursorManager::updateGrabbedCursor))},
	{}
};

$ClassInfo _XGlobalCursorManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XGlobalCursorManager",
	"sun.awt.GlobalCursorManager",
	nullptr,
	_XGlobalCursorManager_FieldInfo_,
	_XGlobalCursorManager_MethodInfo_
};

$Object* allocate$XGlobalCursorManager($Class* clazz) {
	return $of($alloc(XGlobalCursorManager));
}

XGlobalCursorManager* XGlobalCursorManager::manager = nullptr;

void XGlobalCursorManager::init$() {
	$GlobalCursorManager::init$();
}

$GlobalCursorManager* XGlobalCursorManager::getCursorManager() {
	$init(XGlobalCursorManager);
	if (XGlobalCursorManager::manager == nullptr) {
		$assignStatic(XGlobalCursorManager::manager, $new(XGlobalCursorManager));
	}
	return XGlobalCursorManager::manager;
}

void XGlobalCursorManager::nativeUpdateCursor($Component* heavy) {
	$init(XGlobalCursorManager);
	$nc($(XGlobalCursorManager::getCursorManager()))->updateCursorLater(heavy);
}

void XGlobalCursorManager::setCursor($Component* comp, $Cursor* cursor, bool useCache) {
	$useLocalCurrentObjectStackCache();
	if (comp == nullptr) {
		return;
	}
	$var($Cursor, cur, useCache ? cursor : getCapableCursor(comp));
	$var($Component, nc, nullptr);
	if (useCache) {
		$synchronized(this) {
			$assign(nc, $cast($Component, $nc(this->nativeContainer)->get()));
		}
	} else {
		$assign(nc, $SunToolkit::getHeavyweightComponent(comp));
	}
	if (nc != nullptr) {
		$var($ComponentPeer, nc_peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(nc));
		if ($instanceOf($XComponentPeer, nc_peer)) {
			$synchronized(this) {
				$set(this, nativeContainer, $new($WeakReference, nc));
			}
			$nc(($cast($XComponentPeer, nc_peer)))->pSetCursor(cur, false);
			updateGrabbedCursor(cur);
		}
	}
}

void XGlobalCursorManager::updateGrabbedCursor($Cursor* cur) {
	$init(XGlobalCursorManager);
	$useLocalCurrentObjectStackCache();
	$var($XBaseWindow, target, $XAwtState::getGrabWindow());
	if ($instanceOf($XWindowPeer, target)) {
		$var($XWindowPeer, grabber, $cast($XWindowPeer, target));
		$nc(grabber)->pSetCursor(cur);
	}
}

void XGlobalCursorManager::updateCursorOutOfJava() {
	updateGrabbedCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
}

void XGlobalCursorManager::getCursorPos($Point* p) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(($cast($XToolkit, $($Toolkit::getDefaultToolkit()))))->getLastCursorPos(p)) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t display = $XToolkit::getDisplay();
				int64_t root_window = $XlibWrapper::RootWindow(display, $XlibWrapper::DefaultScreen(display));
				$XlibWrapper::XQueryPointer(display, root_window, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
				$nc(p)->x = $nc($XlibWrapper::unsafe)->getInt($XlibWrapper::larg3);
				p->y = $nc($XlibWrapper::unsafe)->getInt($XlibWrapper::larg4);
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
}

$Component* XGlobalCursorManager::findHeavyweightUnderCursor() {
	return $XAwtState::getComponentMouseEntered();
}

$Point* XGlobalCursorManager::getLocationOnScreen($Component* c) {
	return $nc(c)->getLocationOnScreen();
}

$Component* XGlobalCursorManager::findHeavyweightUnderCursor(bool useCache) {
	return findHeavyweightUnderCursor();
}

$Cursor* XGlobalCursorManager::getCapableCursor($Component* comp) {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	$var($Component, c, comp);
	while (true) {
		bool var$1 = (c != nullptr) && !($instanceOf($Window, c)) && $nc(compAccessor)->isEnabled(c);
		bool var$0 = var$1 && compAccessor->isVisible(c);
		if (!(var$0 && compAccessor->isDisplayable(c))) {
			break;
		}
		{
			$assign(c, compAccessor->getParent(c));
		}
	}
	if ($instanceOf($Window, c)) {
		bool var$4 = $nc(compAccessor)->isEnabled(c);
		bool var$3 = var$4 && compAccessor->isVisible(c);
		bool var$2 = var$3 && compAccessor->isDisplayable(c);
		return (var$2 && compAccessor->isEnabled(comp)) ? $nc(compAccessor)->getCursor(comp) : $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR);
	} else if (c == nullptr) {
		return nullptr;
	}
	return getCapableCursor($($nc(compAccessor)->getParent(c)));
}

int64_t XGlobalCursorManager::getCursor($Cursor* c) {
	$init(XGlobalCursorManager);
	$useLocalCurrentObjectStackCache();
	int64_t pData = 0;
	int32_t type = 0;
	try {
		pData = $nc($($AWTAccessor::getCursorAccessor()))->getPData(c);
		type = $nc($($AWTAccessor::getCursorAccessor()))->getType(c);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	if (pData != 0) {
		return pData;
	}
	int32_t cursorType = 0;
	switch (type) {
	case $Cursor::DEFAULT_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_left_ptr;
			break;
		}
	case $Cursor::CROSSHAIR_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_crosshair;
			break;
		}
	case $Cursor::TEXT_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_xterm;
			break;
		}
	case $Cursor::WAIT_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_watch;
			break;
		}
	case $Cursor::SW_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_bottom_left_corner;
			break;
		}
	case $Cursor::NW_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_top_left_corner;
			break;
		}
	case $Cursor::SE_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_bottom_right_corner;
			break;
		}
	case $Cursor::NE_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_top_right_corner;
			break;
		}
	case $Cursor::S_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_bottom_side;
			break;
		}
	case $Cursor::N_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_top_side;
			break;
		}
	case $Cursor::W_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_left_side;
			break;
		}
	case $Cursor::E_RESIZE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_right_side;
			break;
		}
	case $Cursor::HAND_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_hand2;
			break;
		}
	case $Cursor::MOVE_CURSOR:
		{
			cursorType = $XCursorFontConstants::XC_fleur;
			break;
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			pData = (int64_t)$XlibWrapper::XCreateFontCursor($XToolkit::getDisplay(), cursorType);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	setPData(c, pData);
	return pData;
}

void XGlobalCursorManager::setPData($Cursor* c, int64_t pData) {
	$init(XGlobalCursorManager);
	try {
		$nc($($AWTAccessor::getCursorAccessor()))->setPData(c, pData);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

XGlobalCursorManager::XGlobalCursorManager() {
}

$Class* XGlobalCursorManager::load$($String* name, bool initialize) {
	$loadClass(XGlobalCursorManager, name, initialize, &_XGlobalCursorManager_ClassInfo_, allocate$XGlobalCursorManager);
	return class$;
}

$Class* XGlobalCursorManager::class$ = nullptr;

		} // X11
	} // awt
} // sun