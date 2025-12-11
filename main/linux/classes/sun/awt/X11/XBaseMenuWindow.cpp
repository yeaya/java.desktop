#include <sun/awt/X11/XBaseMenuWindow.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/ArrayList.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/XAwtState.h>
#include <sun/awt/X11/XBaseMenuWindow$1.h>
#include <sun/awt/X11/XBaseMenuWindow$2.h>
#include <sun/awt/X11/XBaseMenuWindow$3.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <sun/awt/X11/XPopupMenuPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BLACK
#undef DELAYED
#undef FINE
#undef FINER
#undef FINEST
#undef KEY_PRESSED
#undef MOUSE_DRAGGED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef PAINT
#undef TRUE
#undef VK_DOWN
#undef VK_ENTER
#undef VK_ESCAPE
#undef VK_F10
#undef VK_KP_DOWN
#undef VK_KP_LEFT
#undef VK_KP_RIGHT
#undef VK_KP_UP
#undef VK_LEFT
#undef VK_RIGHT
#undef VK_SPACE
#undef VK_UP

using $MenuItemArray = $Array<::java::awt::MenuItem>;
using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ArrayList = ::java::util::ArrayList;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $Native = ::sun::awt::X11::Native;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $XAwtState = ::sun::awt::X11::XAwtState;
using $XBaseMenuWindow$1 = ::sun::awt::X11::XBaseMenuWindow$1;
using $XBaseMenuWindow$2 = ::sun::awt::X11::XBaseMenuWindow$2;
using $XBaseMenuWindow$3 = ::sun::awt::X11::XBaseMenuWindow$3;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XMenuBarPeer = ::sun::awt::X11::XMenuBarPeer;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;
using $XMenuWindow = ::sun::awt::X11::XMenuWindow;
using $XPopupMenuPeer = ::sun::awt::X11::XPopupMenuPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseMenuWindow_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XBaseMenuWindow, log)},
	{"backgroundColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, backgroundColor)},
	{"foregroundColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, foregroundColor)},
	{"lightShadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, lightShadowColor)},
	{"darkShadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, darkShadowColor)},
	{"selectedColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, selectedColor)},
	{"disabledColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XBaseMenuWindow, disabledColor)},
	{"items", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/awt/X11/XMenuItemPeer;>;", $PRIVATE, $field(XBaseMenuWindow, items)},
	{"selectedIndex", "I", nullptr, $PRIVATE, $field(XBaseMenuWindow, selectedIndex)},
	{"showingSubmenu", "Lsun/awt/X11/XMenuPeer;", nullptr, $PRIVATE, $field(XBaseMenuWindow, showingSubmenu)},
	{"menuTreeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(XBaseMenuWindow, menuTreeLock)},
	{"showingMousePressedSubmenu", "Lsun/awt/X11/XMenuPeer;", nullptr, $PRIVATE, $field(XBaseMenuWindow, showingMousePressedSubmenu)},
	{"grabInputPoint", "Ljava/awt/Point;", nullptr, $PROTECTED, $field(XBaseMenuWindow, grabInputPoint)},
	{"hasPointerMoved", "Z", nullptr, $PROTECTED, $field(XBaseMenuWindow, hasPointerMoved)},
	{"disposeAppContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(XBaseMenuWindow, disposeAppContext)},
	{"mappingData", "Lsun/awt/X11/XBaseMenuWindow$MappingData;", nullptr, $PRIVATE, $field(XBaseMenuWindow, mappingData)},
	{}
};

$MethodInfo _XBaseMenuWindow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XBaseMenuWindow::*)()>(&XBaseMenuWindow::init$))},
	{"addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC},
	{"copyItems", "()[Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"delItem", "(I)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"doDispose", "()V", nullptr, $PROTECTED},
	{"doHandleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"doHandleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"doHandleJavaPaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, 0},
	{"doLayout", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"doShowSubmenu", "(Lsun/awt/X11/XMenuPeer;)V", nullptr, $PRIVATE, $method(static_cast<void(XBaseMenuWindow::*)($XMenuPeer*)>(&XBaseMenuWindow::doShowSubmenu))},
	{"draw3DRect", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, 0},
	{"fitWindowAbove", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"fitWindowBelow", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"fitWindowLeft", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"fitWindowRight", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"fitWindowToScreen", "(Ljava/awt/Dimension;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"getBackgroundColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getCurrentGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, 0},
	{"getDarkShadowColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getDisabledColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFirstSelectableItem", "()Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getForegroundColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphicsConfigurationData", "()Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getItem", "(I)Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getItemFromPoint", "(Ljava/awt/Point;)Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getLightShadowColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMappingData", "()Lsun/awt/X11/XBaseMenuWindow$MappingData;", nullptr, 0},
	{"getMenuTreeLock", "()Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)()>(&XBaseMenuWindow::getMenuTreeLock))},
	{"getMenuWindowFromPoint", "(Ljava/awt/Point;)Lsun/awt/X11/XBaseMenuWindow;", nullptr, 0},
	{"getNextSelectableItem", "()Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getParentMenuWindow", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPrevSelectableItem", "()Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getRootMenuWindow", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, 0},
	{"getSelectedColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getSelectedItem", "()Lsun/awt/X11/XMenuItemPeer;", nullptr, 0},
	{"getShowingLeaf", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, 0},
	{"getShowingSubmenu", "()Lsun/awt/X11/XMenuPeer;", nullptr, 0},
	{"getSubmenuBounds", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;)Ljava/awt/Rectangle;", nullptr, $PROTECTED | $ABSTRACT},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTargetBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getWinBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"grabInput", "()Z", nullptr, $PUBLIC},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"instantPreInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"isEmbedded", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"isMouseAbove", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"layout", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"map", "()Lsun/awt/X11/XBaseMenuWindow$MappingData;", nullptr, $PROTECTED | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"popup", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"postEventToEventQueue", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postKeyEvent", "(IIIIIJIJII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postPaintEvent", "()V", nullptr, 0},
	{"postPaintEvent", "(Ljava/awt/Component;IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"reloadItems", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/awt/MenuItem;>;)V", $PUBLIC},
	{"replaceColors", "(Ljava/awt/Color;)V", nullptr, 0},
	{"resetColors", "()V", nullptr, 0},
	{"resetMapping", "()V", nullptr, $PROTECTED},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"reshape", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"selectItem", "(Lsun/awt/X11/XMenuItemPeer;Z)V", nullptr, 0},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setItemsFont", "(Ljava/awt/Font;)V", nullptr, $FINAL, $method(static_cast<void(XBaseMenuWindow::*)($Font*)>(&XBaseMenuWindow::setItemsFont))},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"updateSize", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _XBaseMenuWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
	{"sun.awt.X11.XBaseMenuWindow$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XBaseMenuWindow$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XBaseMenuWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XBaseMenuWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XBaseMenuWindow",
	"sun.awt.X11.XWindow",
	nullptr,
	_XBaseMenuWindow_FieldInfo_,
	_XBaseMenuWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XBaseMenuWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseMenuWindow$MappingData,sun.awt.X11.XBaseMenuWindow$3,sun.awt.X11.XBaseMenuWindow$2,sun.awt.X11.XBaseMenuWindow$1"
};

$Object* allocate$XBaseMenuWindow($Class* clazz) {
	return $of($alloc(XBaseMenuWindow));
}

$PlatformLogger* XBaseMenuWindow::log = nullptr;
$Object* XBaseMenuWindow::menuTreeLock = nullptr;

void XBaseMenuWindow::init$() {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$init($Boolean);
	$XWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::DELAYED),
		$of($Boolean::TRUE)
	})));
	this->selectedIndex = -1;
	$set(this, showingSubmenu, nullptr);
	$set(this, showingMousePressedSubmenu, nullptr);
	$set(this, grabInputPoint, nullptr);
	this->hasPointerMoved = false;
	$set(this, disposeAppContext, $AppContext::getAppContext());
}

void XBaseMenuWindow::instantPreInit($XCreateWindowParams* params) {
	$XWindow::instantPreInit(params);
	$set(this, items, $new($ArrayList));
}

$Object* XBaseMenuWindow::getMenuTreeLock() {
	$init(XBaseMenuWindow);
	return $of(XBaseMenuWindow::menuTreeLock);
}

void XBaseMenuWindow::resetMapping() {
	$set(this, mappingData, nullptr);
}

void XBaseMenuWindow::postPaintEvent() {
	$useLocalCurrentObjectStackCache();
	if (isShowing()) {
		$var($PaintEvent, pe, $new($PaintEvent, this->target, $PaintEvent::PAINT, $$new($Rectangle, 0, 0, this->width, this->height)));
		postEvent(pe);
	}
}

$XMenuItemPeer* XBaseMenuWindow::getItem(int32_t index) {
	if (index >= 0) {
		$synchronized(getMenuTreeLock()) {
			if ($nc(this->items)->size() > index) {
				return $cast($XMenuItemPeer, $nc(this->items)->get(index));
			}
		}
	}
	return nullptr;
}

$XMenuItemPeerArray* XBaseMenuWindow::copyItems() {
	$synchronized(getMenuTreeLock()) {
		return $fcast($XMenuItemPeerArray, $nc(this->items)->toArray($$new($XMenuItemPeerArray, 0)));
	}
}

$XMenuItemPeer* XBaseMenuWindow::getSelectedItem() {
	$synchronized(getMenuTreeLock()) {
		if (this->selectedIndex >= 0) {
			if ($nc(this->items)->size() > this->selectedIndex) {
				return $cast($XMenuItemPeer, $nc(this->items)->get(this->selectedIndex));
			}
		}
		return nullptr;
	}
}

$XMenuPeer* XBaseMenuWindow::getShowingSubmenu() {
	$synchronized(getMenuTreeLock()) {
		return this->showingSubmenu;
	}
}

void XBaseMenuWindow::addItem($MenuItem* item) {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeer, mp, $cast($XMenuItemPeer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(item)));
	if (mp != nullptr) {
		mp->setContainer(this);
		$synchronized(getMenuTreeLock()) {
			$nc(this->items)->add(mp);
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XBaseMenuWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XBaseMenuWindow::log)->fine("WARNING: Attempt to add menu item without a peer"_s);
		}
	}
	updateSize();
}

void XBaseMenuWindow::delItem(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		if (this->selectedIndex == index) {
			selectItem(nullptr, false);
		} else if (this->selectedIndex > index) {
			--this->selectedIndex;
		}
		if (index < $nc(this->items)->size()) {
			$nc(this->items)->remove(index);
		} else {
			$init($PlatformLogger$Level);
			if ($nc(XBaseMenuWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XBaseMenuWindow::log)->fine($$str({"WARNING: Attempt to remove non-existing menu item, index : "_s, $$str(index), ", item count : "_s, $$str($nc(this->items)->size())}));
			}
		}
	}
	updateSize();
}

void XBaseMenuWindow::reloadItems($Vector* items) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		$nc(this->items)->clear();
		$var($MenuItemArray, itemArray, $fcast($MenuItemArray, $nc(items)->toArray($$new($MenuItemArray, 0))));
		int32_t itemCnt = $nc(itemArray)->length;
		for (int32_t i = 0; i < itemCnt; ++i) {
			addItem(itemArray->get(i));
		}
	}
}

void XBaseMenuWindow::selectItem($XMenuItemPeer* item, bool showWindowIfMenu) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		$var($XMenuPeer, showingSubmenu, getShowingSubmenu());
		int32_t newSelectedIndex = (item != nullptr) ? $nc(this->items)->indexOf(item) : -1;
		if (this->selectedIndex != newSelectedIndex) {
			$init($PlatformLogger$Level);
			if ($nc(XBaseMenuWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XBaseMenuWindow::log)->finest($$str({"Selected index changed, was : "_s, $$str(this->selectedIndex), ", new : "_s, $$str(newSelectedIndex)}));
			}
			this->selectedIndex = newSelectedIndex;
			postPaintEvent();
		}
		$var($XMenuPeer, submenuToShow, (showWindowIfMenu && ($instanceOf($XMenuPeer, item))) ? $cast($XMenuPeer, item) : ($XMenuPeer*)nullptr);
		if (submenuToShow != showingSubmenu) {
			$XToolkit::executeOnEventHandlerThread(this->target, $$new($XBaseMenuWindow$1, this, submenuToShow));
		}
	}
}

void XBaseMenuWindow::doShowSubmenu($XMenuPeer* submenuToShow) {
	$useLocalCurrentObjectStackCache();
	$var($XMenuWindow, menuWindowToShow, (submenuToShow != nullptr) ? $nc(submenuToShow)->getMenuWindow() : ($XMenuWindow*)nullptr);
	$var($Dimension, dim, nullptr);
	$var($Rectangle, bounds, nullptr);
	if (menuWindowToShow != nullptr) {
		menuWindowToShow->ensureCreated();
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$synchronized(getMenuTreeLock()) {
				if (this->showingSubmenu != submenuToShow) {
					$init($PlatformLogger$Level);
					if ($nc(XBaseMenuWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(XBaseMenuWindow::log)->finest("Changing showing submenu"_s);
					}
					if (this->showingSubmenu != nullptr) {
						$var($XMenuWindow, showingSubmenuWindow, $nc(this->showingSubmenu)->getMenuWindow());
						if (showingSubmenuWindow != nullptr) {
							showingSubmenuWindow->hide();
						}
					}
					if (submenuToShow != nullptr) {
						$assign(dim, $nc(menuWindowToShow)->getDesiredSize());
						$assign(bounds, $nc($(menuWindowToShow->getParentMenuWindow()))->getSubmenuBounds($(submenuToShow->getBounds()), dim));
						menuWindowToShow->show(bounds);
					}
					$set(this, showingSubmenu, submenuToShow);
				}
			}
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

void XBaseMenuWindow::setItemsFont($Font* font) {
	$var($XMenuItemPeerArray, items, copyItems());
	int32_t itemCnt = $nc(items)->length;
	for (int32_t i = 0; i < itemCnt; ++i) {
		$nc(items->get(i))->setFont(font);
	}
}

$XBaseMenuWindow$MappingData* XBaseMenuWindow::getMappingData() {
	$var($XBaseMenuWindow$MappingData, mappingData, this->mappingData);
	if (mappingData == nullptr) {
		$assign(mappingData, map());
		$set(this, mappingData, mappingData);
	}
	return $cast($XBaseMenuWindow$MappingData, $nc(mappingData)->clone());
}

$XMenuItemPeer* XBaseMenuWindow::getItemFromPoint($Point* pt) {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeerArray, items, $nc($(getMappingData()))->getItems());
	int32_t cnt = $nc(items)->length;
	for (int32_t i = 0; i < cnt; ++i) {
		if ($nc($($nc(items->get(i))->getBounds()))->contains(pt)) {
			return items->get(i);
		}
	}
	return nullptr;
}

$XMenuItemPeer* XBaseMenuWindow::getNextSelectableItem() {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeerArray, mappedItems, $nc($(getMappingData()))->getItems());
	$var($XMenuItemPeer, selectedItem, getSelectedItem());
	int32_t cnt = $nc(mappedItems)->length;
	int32_t selIdx = -1;
	for (int32_t i = 0; i < cnt; ++i) {
		if (mappedItems->get(i) == selectedItem) {
			selIdx = i;
			break;
		}
	}
	int32_t idx = (selIdx == cnt - 1) ? 0 : selIdx + 1;
	for (int32_t i = 0; i < cnt; ++i) {
		$var($XMenuItemPeer, item, mappedItems->get(idx));
		bool var$0 = !$nc(item)->isSeparator();
		if (var$0 && item->isTargetItemEnabled()) {
			return item;
		}
		++idx;
		if (idx >= cnt) {
			idx = 0;
		}
	}
	return nullptr;
}

$XMenuItemPeer* XBaseMenuWindow::getPrevSelectableItem() {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeerArray, mappedItems, $nc($(getMappingData()))->getItems());
	$var($XMenuItemPeer, selectedItem, getSelectedItem());
	int32_t cnt = $nc(mappedItems)->length;
	int32_t selIdx = -1;
	for (int32_t i = 0; i < cnt; ++i) {
		if (mappedItems->get(i) == selectedItem) {
			selIdx = i;
			break;
		}
	}
	int32_t idx = (selIdx <= 0) ? cnt - 1 : selIdx - 1;
	for (int32_t i = 0; i < cnt; ++i) {
		$var($XMenuItemPeer, item, mappedItems->get(idx));
		bool var$0 = !$nc(item)->isSeparator();
		if (var$0 && item->isTargetItemEnabled()) {
			return item;
		}
		--idx;
		if (idx < 0) {
			idx = cnt - 1;
		}
	}
	return nullptr;
}

$XMenuItemPeer* XBaseMenuWindow::getFirstSelectableItem() {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeerArray, mappedItems, $nc($(getMappingData()))->getItems());
	int32_t cnt = $nc(mappedItems)->length;
	for (int32_t i = 0; i < cnt; ++i) {
		$var($XMenuItemPeer, item, mappedItems->get(i));
		bool var$0 = !$nc(item)->isSeparator();
		if (var$0 && item->isTargetItemEnabled()) {
			return item;
		}
	}
	return nullptr;
}

XBaseMenuWindow* XBaseMenuWindow::getShowingLeaf() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		$var(XBaseMenuWindow, leaf, this);
		$var($XMenuPeer, leafchild, leaf->getShowingSubmenu());
		while (leafchild != nullptr) {
			$assign(leaf, leafchild->getMenuWindow());
			$assign(leafchild, $nc(leaf)->getShowingSubmenu());
		}
		return leaf;
	}
}

XBaseMenuWindow* XBaseMenuWindow::getRootMenuWindow() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		$var(XBaseMenuWindow, t, this);
		$var(XBaseMenuWindow, tparent, t->getParentMenuWindow());
		while (tparent != nullptr) {
			$assign(t, tparent);
			$assign(tparent, t->getParentMenuWindow());
		}
		return t;
	}
}

XBaseMenuWindow* XBaseMenuWindow::getMenuWindowFromPoint($Point* pt) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getMenuTreeLock()) {
		$var(XBaseMenuWindow, t, getShowingLeaf());
		while (t != nullptr) {
			$var($Point, var$0, t->toGlobal($$new($Point, 0, 0)));
			$var($Rectangle, r, $new($Rectangle, var$0, $(t->getSize())));
			if (r->contains(pt)) {
				return t;
			}
			$assign(t, t->getParentMenuWindow());
		}
		return nullptr;
	}
}

$GraphicsConfiguration* XBaseMenuWindow::getCurrentGraphicsConfiguration() {
	$useLocalCurrentObjectStackCache();
	$var($Component, hw, $SunToolkit::getHeavyweightComponent(this->target));
	$var($XWindow, peer, $cast($XWindow, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(hw)));
	if (peer != nullptr && peer->graphicsConfig != nullptr) {
		return peer->graphicsConfig;
	}
	return this->graphicsConfig;
}

$Rectangle* XBaseMenuWindow::fitWindowBelow($Rectangle* itemBounds, $Dimension* windowSize, $Rectangle* screenBounds) {
	int32_t width = $nc(windowSize)->width;
	int32_t height = windowSize->height;
	int32_t x = ($nc(itemBounds)->x > $nc(screenBounds)->x) ? $nc(itemBounds)->x : $nc(screenBounds)->x;
	int32_t y = (itemBounds->y + itemBounds->height > screenBounds->y) ? itemBounds->y + itemBounds->height : screenBounds->y;
	if (y + height <= screenBounds->y + screenBounds->height) {
		if (width > screenBounds->width) {
			width = screenBounds->width;
		}
		if (x + width > screenBounds->x + screenBounds->width) {
			x = screenBounds->x + screenBounds->width - width;
		}
		return $new($Rectangle, x, y, width, height);
	} else {
		return nullptr;
	}
}

$Rectangle* XBaseMenuWindow::fitWindowAbove($Rectangle* itemBounds, $Dimension* windowSize, $Rectangle* screenBounds) {
	int32_t width = $nc(windowSize)->width;
	int32_t height = windowSize->height;
	int32_t x = ($nc(itemBounds)->x > $nc(screenBounds)->x) ? $nc(itemBounds)->x : $nc(screenBounds)->x;
	int32_t y = (itemBounds->y > screenBounds->y + screenBounds->height) ? screenBounds->y + screenBounds->height - height : itemBounds->y - height;
	if (y >= screenBounds->y) {
		if (width > screenBounds->width) {
			width = screenBounds->width;
		}
		if (x + width > screenBounds->x + screenBounds->width) {
			x = screenBounds->x + screenBounds->width - width;
		}
		return $new($Rectangle, x, y, width, height);
	} else {
		return nullptr;
	}
}

$Rectangle* XBaseMenuWindow::fitWindowRight($Rectangle* itemBounds, $Dimension* windowSize, $Rectangle* screenBounds) {
	int32_t width = $nc(windowSize)->width;
	int32_t height = windowSize->height;
	int32_t x = ($nc(itemBounds)->x + itemBounds->width > $nc(screenBounds)->x) ? $nc(itemBounds)->x + itemBounds->width : $nc(screenBounds)->x;
	int32_t y = (itemBounds->y > screenBounds->y) ? itemBounds->y : screenBounds->y;
	if (x + width <= screenBounds->x + screenBounds->width) {
		if (height > screenBounds->height) {
			height = screenBounds->height;
		}
		if (y + height > screenBounds->y + screenBounds->height) {
			y = screenBounds->y + screenBounds->height - height;
		}
		return $new($Rectangle, x, y, width, height);
	} else {
		return nullptr;
	}
}

$Rectangle* XBaseMenuWindow::fitWindowLeft($Rectangle* itemBounds, $Dimension* windowSize, $Rectangle* screenBounds) {
	int32_t width = $nc(windowSize)->width;
	int32_t height = windowSize->height;
	int32_t x = ($nc(itemBounds)->x < $nc(screenBounds)->x + screenBounds->width) ? $nc(itemBounds)->x - width : $nc(screenBounds)->x + screenBounds->width - width;
	int32_t y = (itemBounds->y > screenBounds->y) ? itemBounds->y : screenBounds->y;
	if (x >= screenBounds->x) {
		if (height > screenBounds->height) {
			height = screenBounds->height;
		}
		if (y + height > screenBounds->y + screenBounds->height) {
			y = screenBounds->y + screenBounds->height - height;
		}
		return $new($Rectangle, x, y, width, height);
	} else {
		return nullptr;
	}
}

$Rectangle* XBaseMenuWindow::fitWindowToScreen($Dimension* windowSize, $Rectangle* screenBounds) {
	int32_t width = ($nc(windowSize)->width < $nc(screenBounds)->width) ? $nc(windowSize)->width : $nc(screenBounds)->width;
	int32_t height = (windowSize->height < screenBounds->height) ? windowSize->height : screenBounds->height;
	return $new($Rectangle, screenBounds->x, screenBounds->y, width, height);
}

void XBaseMenuWindow::resetColors() {
	$init($SystemColor);
	replaceColors((this->target == nullptr) ? static_cast<$Color*>($SystemColor::window) : $($nc(this->target)->getBackground()));
}

void XBaseMenuWindow::replaceColors($Color* backgroundColor) {
	if (backgroundColor != this->backgroundColor) {
		$set(this, backgroundColor, backgroundColor);
		int32_t red = $nc(backgroundColor)->getRed();
		int32_t green = backgroundColor->getGreen();
		int32_t blue = backgroundColor->getBlue();
		$set(this, foregroundColor, $new($Color, $MotifColorUtilities::calculateForegroundFromBackground(red, green, blue)));
		$set(this, lightShadowColor, $new($Color, $MotifColorUtilities::calculateTopShadowFromBackground(red, green, blue)));
		$set(this, darkShadowColor, $new($Color, $MotifColorUtilities::calculateBottomShadowFromBackground(red, green, blue)));
		$set(this, selectedColor, $new($Color, $MotifColorUtilities::calculateSelectFromBackground(red, green, blue)));
		$set(this, disabledColor, (backgroundColor->equals($Color::BLACK)) ? $nc(this->foregroundColor)->darker() : backgroundColor->darker());
	}
}

$Color* XBaseMenuWindow::getBackgroundColor() {
	return this->backgroundColor;
}

$Color* XBaseMenuWindow::getForegroundColor() {
	return this->foregroundColor;
}

$Color* XBaseMenuWindow::getLightShadowColor() {
	return this->lightShadowColor;
}

$Color* XBaseMenuWindow::getDarkShadowColor() {
	return this->darkShadowColor;
}

$Color* XBaseMenuWindow::getSelectedColor() {
	return this->selectedColor;
}

$Color* XBaseMenuWindow::getDisabledColor() {
	return this->disabledColor;
}

void XBaseMenuWindow::draw3DRect($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	if ((width <= 0) || (height <= 0)) {
		return;
	}
	$var($Color, c, $nc(g)->getColor());
	g->setColor(raised ? $(getLightShadowColor()) : $(getDarkShadowColor()));
	g->drawLine(x, y, x, y + height - 1);
	g->drawLine(x + 1, y, x + width - 1, y);
	g->setColor(raised ? $(getDarkShadowColor()) : $(getLightShadowColor()));
	g->drawLine(x + 1, y + height - 1, x + width - 1, y + height - 1);
	g->drawLine(x + width - 1, y + 1, x + width - 1, y + height - 1);
	g->setColor(c);
}

bool XBaseMenuWindow::isEventDisabled($XEvent* e) {
	switch ($nc(e)->get_type()) {
	case $XConstants::Expose:
		{}
	case $XConstants::GraphicsExpose:
		{}
	case $XConstants::ButtonPress:
		{}
	case $XConstants::ButtonRelease:
		{}
	case $XConstants::MotionNotify:
		{}
	case $XConstants::KeyPress:
		{}
	case $XConstants::KeyRelease:
		{}
	case $XConstants::DestroyNotify:
		{
			return $XWindow::isEventDisabled(e);
		}
	default:
		{
			return true;
		}
	}
}

void XBaseMenuWindow::dispose() {
	setDisposed(true);
	$SunToolkit::invokeLaterOnAppContext(this->disposeAppContext, $$new($XBaseMenuWindow$2, this));
}

void XBaseMenuWindow::doDispose() {
	xSetVisible(false);
	$var($SurfaceData, oldData, this->surfaceData);
	$set(this, surfaceData, nullptr);
	if (oldData != nullptr) {
		oldData->invalidate();
	}
	destroy();
}

void XBaseMenuWindow::postEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $nc(event)->getSource());
	$var($InvocationEvent, ev, $new($InvocationEvent, var$0, $$new($XBaseMenuWindow$3, this, event)));
	$XWindow::postEvent(ev);
}

void XBaseMenuWindow::handleEvent($AWTEvent* event) {
	switch ($nc(event)->getID()) {
	case $PaintEvent::PAINT:
		{
			doHandleJavaPaintEvent($cast($PaintEvent, event));
			break;
		}
	}
}

bool XBaseMenuWindow::grabInput() {
	int32_t rootX = 0;
	int32_t rootY = 0;
	bool res = false;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t root = $XlibWrapper::RootWindow(var$1, getScreenNumber());
			res = $XlibWrapper::XQueryPointer($XToolkit::getDisplay(), root, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
			rootX = $Native::getInt($XlibWrapper::larg3);
			rootY = $Native::getInt($XlibWrapper::larg4);
			res &= $XWindow::grabInput();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (res) {
		$set(this, grabInputPoint, $new($Point, rootX, rootY));
		this->hasPointerMoved = false;
	} else {
		$set(this, grabInputPoint, nullptr);
		this->hasPointerMoved = true;
	}
	return res;
}

void XBaseMenuWindow::doHandleJavaPaintEvent($PaintEvent* event) {
	$var($Rectangle, rect, $nc(event)->getUpdateRect());
	repaint($nc(rect)->x, rect->y, rect->width, rect->height);
}

void XBaseMenuWindow::doHandleJavaMouseEvent($MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$XToolkit::isLeftMouseButton(mouseEvent);
	if (var$0 && !$XToolkit::isRightMouseButton(mouseEvent)) {
		return;
	}
	$var($XBaseWindow, grabWindow, $XAwtState::getGrabWindow());
	$var($Point, ptGlobal, $nc(mouseEvent)->getLocationOnScreen());
	if (!this->hasPointerMoved) {
		bool var$2 = this->grabInputPoint == nullptr;
		if (!var$2) {
			int32_t var$3 = $Math::abs($nc(ptGlobal)->x - $nc(this->grabInputPoint)->x);
			var$2 = (var$3 > getMouseMovementSmudge());
		}
		bool var$1 = var$2;
		if (!var$1) {
			int32_t var$4 = $Math::abs($nc(ptGlobal)->y - $nc(this->grabInputPoint)->y);
			var$1 = (var$4 > getMouseMovementSmudge());
		}
		if (var$1) {
			this->hasPointerMoved = true;
		}
	}
	$var(XBaseMenuWindow, wnd, getMenuWindowFromPoint(ptGlobal));
	$var($XMenuItemPeer, item, (wnd != nullptr) ? $nc(wnd)->getItemFromPoint($(wnd->toLocal(ptGlobal))) : ($XMenuItemPeer*)nullptr);
	$var(XBaseMenuWindow, cwnd, getShowingLeaf());
	switch (mouseEvent->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			$set(this, showingMousePressedSubmenu, nullptr);
			if (($equals(grabWindow, this)) && (wnd == nullptr)) {
				ungrabInput();
			} else {
				grabInput();
				bool var$5 = item != nullptr && !item->isSeparator();
				if (var$5 && item->isTargetItemEnabled()) {
					if ($equals(wnd->getShowingSubmenu(), item)) {
						$set(this, showingMousePressedSubmenu, $cast($XMenuPeer, item));
					}
					wnd->selectItem(item, true);
				} else if (wnd != nullptr) {
					wnd->selectItem(nullptr, false);
				}
			}
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			bool var$6 = item != nullptr && !item->isSeparator();
			if (var$6 && item->isTargetItemEnabled()) {
				if ($instanceOf($XMenuPeer, item)) {
					if ($equals(this->showingMousePressedSubmenu, item)) {
						if ($instanceOf($XMenuBarPeer, wnd)) {
							ungrabInput();
						} else {
							wnd->selectItem(item, false);
						}
					}
				} else {
					int32_t modifiers = mouseEvent->getModifiers();
					item->action(mouseEvent->getWhen(), modifiers);
					ungrabInput();
				}
			} else if (this->hasPointerMoved || ($instanceOf($XMenuBarPeer, wnd))) {
				ungrabInput();
			}
			$set(this, showingMousePressedSubmenu, nullptr);
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (wnd != nullptr) {
				bool var$7 = item != nullptr && !item->isSeparator();
				if (var$7 && item->isTargetItemEnabled()) {
					if ($equals(grabWindow, this)) {
						wnd->selectItem(item, true);
					}
				} else {
					wnd->selectItem(nullptr, false);
				}
			} else if (cwnd != nullptr) {
				cwnd->selectItem(nullptr, false);
			}
			break;
		}
	}
}

void XBaseMenuWindow::doHandleJavaKeyEvent($KeyEvent* event) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseMenuWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XBaseMenuWindow::log)->finer($($nc(event)->toString()));
	}
	if ($nc(event)->getID() != $KeyEvent::KEY_PRESSED) {
		return;
	}
	int32_t keyCode = $nc(event)->getKeyCode();
	$var(XBaseMenuWindow, cwnd, getShowingLeaf());
	$var($XMenuItemPeer, citem, $nc(cwnd)->getSelectedItem());
	switch (keyCode) {
	case $KeyEvent::VK_UP:
		{}
	case $KeyEvent::VK_KP_UP:
		{
			if (!($instanceOf($XMenuBarPeer, cwnd))) {
				cwnd->selectItem($(cwnd->getPrevSelectableItem()), false);
			}
			break;
		}
	case $KeyEvent::VK_DOWN:
		{}
	case $KeyEvent::VK_KP_DOWN:
		{
			if ($instanceOf($XMenuBarPeer, cwnd)) {
				selectItem($(getSelectedItem()), true);
			} else {
				cwnd->selectItem($(cwnd->getNextSelectableItem()), false);
			}
			break;
		}
	case $KeyEvent::VK_LEFT:
		{}
	case $KeyEvent::VK_KP_LEFT:
		{
			if ($instanceOf($XMenuBarPeer, cwnd)) {
				selectItem($(getPrevSelectableItem()), false);
			} else if ($instanceOf($XMenuBarPeer, $(cwnd->getParentMenuWindow()))) {
				selectItem($(getPrevSelectableItem()), true);
			} else {
				$var(XBaseMenuWindow, pwnd, cwnd->getParentMenuWindow());
				if (pwnd != nullptr) {
					pwnd->selectItem($(pwnd->getSelectedItem()), false);
				}
			}
			break;
		}
	case $KeyEvent::VK_RIGHT:
		{}
	case $KeyEvent::VK_KP_RIGHT:
		{
			if ($instanceOf($XMenuBarPeer, cwnd)) {
				selectItem($(getNextSelectableItem()), false);
			} else if ($instanceOf($XMenuPeer, citem)) {
				cwnd->selectItem(citem, true);
			} else if ($instanceOf($XMenuBarPeer, this)) {
				selectItem($(getNextSelectableItem()), true);
			}
			break;
		}
	case $KeyEvent::VK_SPACE:
		{}
	case $KeyEvent::VK_ENTER:
		{
			if ($instanceOf($XMenuPeer, citem)) {
				cwnd->selectItem(citem, true);
			} else if (citem != nullptr) {
				int32_t modifiers = event->getModifiers();
				citem->action(event->getWhen(), modifiers);
				ungrabInput();
			}
			break;
		}
	case $KeyEvent::VK_ESCAPE:
		{
			if (($instanceOf($XMenuBarPeer, cwnd)) || ($instanceOf($XMenuBarPeer, $(cwnd->getParentMenuWindow())))) {
				ungrabInput();
			} else if ($instanceOf($XPopupMenuPeer, cwnd)) {
				ungrabInput();
			} else {
				$var(XBaseMenuWindow, pwnd, cwnd->getParentMenuWindow());
				$nc(pwnd)->selectItem($(pwnd->getSelectedItem()), false);
			}
			break;
		}
	case $KeyEvent::VK_F10:
		{
			ungrabInput();
			break;
		}
	default:
		{
			break;
		}
	}
}

void XBaseMenuWindow::setFullScreenExclusiveModeState(bool state) {
	$XWindow::setFullScreenExclusiveModeState(state);
}

void XBaseMenuWindow::setMWMHints($PropMwmHints* hints) {
	$XWindow::setMWMHints(hints);
}

$PropMwmHints* XBaseMenuWindow::getMWMHints() {
	return $XWindow::getMWMHints();
}

void XBaseMenuWindow::postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) {
	$XWindow::postKeyEvent(id, keyCode, keyChar, keyLocation, state, event, eventSize, rawCode, unicodeFromPrimaryKeysym, extendedKeyCode);
}

$Point* XBaseMenuWindow::getLocationOnScreen() {
	return $XWindow::getLocationOnScreen();
}

$SurfaceData* XBaseMenuWindow::getSurfaceData() {
	return $XWindow::getSurfaceData();
}

void XBaseMenuWindow::layout() {
	$XWindow::layout();
}

void XBaseMenuWindow::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::reshape(x, y, width, height);
}

void XBaseMenuWindow::reshape($Rectangle* bounds) {
	$XWindow::reshape(bounds);
}

void XBaseMenuWindow::handlePropertyNotify($XEvent* xev) {
	$XWindow::handlePropertyNotify(xev);
}

void XBaseMenuWindow::handleKeyRelease($XEvent* xev) {
	$XWindow::handleKeyRelease(xev);
}

void XBaseMenuWindow::handleKeyPress($XEvent* xev) {
	$XWindow::handleKeyPress(xev);
}

void XBaseMenuWindow::handleUnmapNotifyEvent($XEvent* xev) {
	$XWindow::handleUnmapNotifyEvent(xev);
}

void XBaseMenuWindow::handleMapNotifyEvent($XEvent* xev) {
	$XWindow::handleMapNotifyEvent(xev);
}

void XBaseMenuWindow::handleConfigureNotifyEvent($XEvent* xev) {
	$XWindow::handleConfigureNotifyEvent(xev);
}

void XBaseMenuWindow::doLayout(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::doLayout(x, y, width, height);
}

void XBaseMenuWindow::handleXCrossingEvent($XEvent* xev) {
	$XWindow::handleXCrossingEvent(xev);
}

bool XBaseMenuWindow::isMouseAbove() {
	return $XWindow::isMouseAbove();
}

void XBaseMenuWindow::handleMotionNotify($XEvent* xev) {
	$XWindow::handleMotionNotify(xev);
}

void XBaseMenuWindow::handleButtonPressRelease($XEvent* xev) {
	$XWindow::handleButtonPressRelease(xev);
}

void XBaseMenuWindow::postPaintEvent($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	$XWindow::postPaintEvent(target, x, y, w, h);
}

void XBaseMenuWindow::handleExposeEvent($XEvent* xev) {
	$XWindow::handleExposeEvent(xev);
}

void XBaseMenuWindow::popup(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::popup(x, y, width, height);
}

void XBaseMenuWindow::paint($Graphics* g) {
	$XWindow::paint(g);
}

bool XBaseMenuWindow::isEmbedded() {
	return $XWindow::isEmbedded();
}

$Color* XBaseMenuWindow::getWinBackground() {
	return $XWindow::getWinBackground();
}

void XBaseMenuWindow::setBackground($Color* c) {
	$XWindow::setBackground(c);
}

void XBaseMenuWindow::postEventToEventQueue($AWTEvent* event) {
	$XWindow::postEventToEventQueue(event);
}

$Rectangle* XBaseMenuWindow::getTargetBounds() {
	return $XWindow::getTargetBounds();
}

$FontMetrics* XBaseMenuWindow::getFontMetrics($Font* font) {
	return $XWindow::getFontMetrics(font);
}

$Graphics* XBaseMenuWindow::getGraphics() {
	return $XWindow::getGraphics();
}

$ColorModel* XBaseMenuWindow::getColorModel() {
	return $XWindow::getColorModel();
}

$ColorModel* XBaseMenuWindow::getColorModel(int32_t transparency) {
	return $XWindow::getColorModel(transparency);
}

$Component* XBaseMenuWindow::getEventSource() {
	return $XWindow::getEventSource();
}

$Object* XBaseMenuWindow::getTarget() {
	return $of($XWindow::getTarget());
}

$AwtGraphicsConfigData* XBaseMenuWindow::getGraphicsConfigurationData() {
	return $XWindow::getGraphicsConfigurationData();
}

$GraphicsConfiguration* XBaseMenuWindow::getGraphicsConfiguration() {
	return $XWindow::getGraphicsConfiguration();
}

void clinit$XBaseMenuWindow($Class* class$) {
	$assignStatic(XBaseMenuWindow::log, $PlatformLogger::getLogger("sun.awt.X11.XBaseMenuWindow"_s));
	$assignStatic(XBaseMenuWindow::menuTreeLock, $new($Object));
}

XBaseMenuWindow::XBaseMenuWindow() {
}

$Class* XBaseMenuWindow::load$($String* name, bool initialize) {
	$loadClass(XBaseMenuWindow, name, initialize, &_XBaseMenuWindow_ClassInfo_, clinit$XBaseMenuWindow, allocate$XBaseMenuWindow);
	return class$;
}

$Class* XBaseMenuWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun