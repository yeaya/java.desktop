#include <sun/awt/X11/XMenuBarPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$MenuBarAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XMenuBarPeer$MappingData.h>
#include <sun/awt/X11/XMenuItemPeer$TextMetrics.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALT_MASK
#undef BAR_ITEM_MARGIN_BOTTOM
#undef BAR_ITEM_MARGIN_LEFT
#undef BAR_ITEM_MARGIN_RIGHT
#undef BAR_ITEM_MARGIN_TOP
#undef BAR_ITEM_SPACING
#undef BAR_SPACING_BOTTOM
#undef BAR_SPACING_LEFT
#undef BAR_SPACING_RIGHT
#undef BAR_SPACING_TOP
#undef CTRL_MASK
#undef DELAYED
#undef FINE
#undef H_DIFF
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef PAINT
#undef PARENT_WINDOW
#undef SHIFT_MASK
#undef TARGET
#undef W_DIFF

using $XMenuItemPeer$TextMetricsArray = $Array<::sun::awt::X11::XMenuItemPeer$TextMetrics>;
using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$MenuBarAccessor = ::sun::awt::AWTAccessor$MenuBarAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XMenuBarPeer$MappingData = ::sun::awt::X11::XMenuBarPeer$MappingData;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuItemPeer$TextMetrics = ::sun::awt::X11::XMenuItemPeer$TextMetrics;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuBarPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XMenuBarPeer, log)},
	{"framePeer", "Lsun/awt/X11/XFramePeer;", nullptr, $PRIVATE, $field(XMenuBarPeer, framePeer)},
	{"menuBarTarget", "Ljava/awt/MenuBar;", nullptr, $PRIVATE, $field(XMenuBarPeer, menuBarTarget)},
	{"helpMenu", "Lsun/awt/X11/XMenuPeer;", nullptr, $PRIVATE, $field(XMenuBarPeer, helpMenu)},
	{"BAR_SPACING_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_SPACING_TOP)},
	{"BAR_SPACING_BOTTOM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_SPACING_BOTTOM)},
	{"BAR_SPACING_LEFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_SPACING_LEFT)},
	{"BAR_SPACING_RIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_SPACING_RIGHT)},
	{"BAR_ITEM_SPACING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_ITEM_SPACING)},
	{"BAR_ITEM_MARGIN_LEFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_ITEM_MARGIN_LEFT)},
	{"BAR_ITEM_MARGIN_RIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_ITEM_MARGIN_RIGHT)},
	{"BAR_ITEM_MARGIN_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_ITEM_MARGIN_TOP)},
	{"BAR_ITEM_MARGIN_BOTTOM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuBarPeer, BAR_ITEM_MARGIN_BOTTOM)},
	{"W_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XMenuBarPeer, W_DIFF)},
	{"H_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XMenuBarPeer, H_DIFF)},
	{}
};

$MethodInfo _XMenuBarPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, 0, $method(static_cast<void(XMenuBarPeer::*)($MenuBar*)>(&XMenuBarPeer::init$))},
	{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"delMenu", "(I)V", nullptr, $PUBLIC},
	{"doDispose", "()V", nullptr, $PROTECTED},
	{"getDesiredHeight", "()I", nullptr, 0},
	{"getParentMenuWindow", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, $PROTECTED},
	{"getSubmenuBounds", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"handleF10KeyPress", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC},
	{"isFramePeerEnabled", "()Z", nullptr, 0},
	{"map", "()Lsun/awt/X11/XMenuBarPeer$MappingData;", nullptr, $PROTECTED},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabInputImpl", "()V", nullptr, 0},
	{"updateSize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XMenuBarPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuBarPeer$MappingData", "sun.awt.X11.XMenuBarPeer", "MappingData", $STATIC},
	{}
};

$ClassInfo _XMenuBarPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMenuBarPeer",
	"sun.awt.X11.XBaseMenuWindow",
	"java.awt.peer.MenuBarPeer",
	_XMenuBarPeer_FieldInfo_,
	_XMenuBarPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuBarPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuBarPeer$MappingData"
};

$Object* allocate$XMenuBarPeer($Class* clazz) {
	return $of($alloc(XMenuBarPeer));
}

void XMenuBarPeer::dispose() {
	this->$XBaseMenuWindow::dispose();
}

$String* XMenuBarPeer::toString() {
	 return this->$XBaseMenuWindow::toString();
}

int32_t XMenuBarPeer::hashCode() {
	 return this->$XBaseMenuWindow::hashCode();
}

bool XMenuBarPeer::equals(Object$* arg0) {
	 return this->$XBaseMenuWindow::equals(arg0);
}

$Object* XMenuBarPeer::clone() {
	 return this->$XBaseMenuWindow::clone();
}

void XMenuBarPeer::finalize() {
	this->$XBaseMenuWindow::finalize();
}

$PlatformLogger* XMenuBarPeer::log = nullptr;

void XMenuBarPeer::init$($MenuBar* menuBarTarget) {
	$XBaseMenuWindow::init$();
	$set(this, helpMenu, nullptr);
	$set(this, menuBarTarget, menuBarTarget);
}

void XMenuBarPeer::setFont($Font* f) {
	resetMapping();
	setItemsFont(f);
	postPaintEvent();
}

void XMenuBarPeer::addMenu($Menu* m) {
	addItem(m);
	postPaintEvent();
}

void XMenuBarPeer::delMenu(int32_t index) {
	$synchronized(getMenuTreeLock()) {
		$var($XMenuItemPeer, item, getItem(index));
		if (item != nullptr && $equals(item, this->helpMenu)) {
			$set(this, helpMenu, nullptr);
		}
		delItem(index);
	}
	postPaintEvent();
}

void XMenuBarPeer::addHelpMenu($Menu* m) {
	$useLocalCurrentObjectStackCache();
	$var($XMenuPeer, mp, $cast($XMenuPeer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(m)));
	$synchronized(getMenuTreeLock()) {
		$set(this, helpMenu, mp);
	}
	postPaintEvent();
}

void XMenuBarPeer::init($Frame* frame) {
	$useLocalCurrentObjectStackCache();
	$set(this, target, frame);
	$set(this, framePeer, $cast($XFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(frame)));
	$var($XCreateWindowParams, params, getDelayedParams());
	$init($XBaseWindow);
	$nc(params)->remove($XBaseWindow::DELAYED);
	params->add($of($XBaseWindow::PARENT_WINDOW), $nc(this->framePeer)->getShell());
	$init($XWindow);
	params->add($of($XWindow::TARGET), $of(frame));
	init(params);
}

void XMenuBarPeer::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XBaseMenuWindow::postInit(params);
	$var($Vector, targetMenuVector, $nc($($AWTAccessor::getMenuBarAccessor()))->getMenus(this->menuBarTarget));
	$var($Menu, targetHelpMenu, $nc($($AWTAccessor::getMenuBarAccessor()))->getHelpMenu(this->menuBarTarget));
	reloadItems(targetMenuVector);
	if (targetHelpMenu != nullptr) {
		addHelpMenu(targetHelpMenu);
	}
	xSetVisible(true);
	toFront();
}

$XBaseMenuWindow* XMenuBarPeer::getParentMenuWindow() {
	return nullptr;
}

$XBaseMenuWindow$MappingData* XMenuBarPeer::map() {
	$useLocalCurrentObjectStackCache();
	$var($XMenuItemPeerArray, itemVector, copyItems());
	int32_t itemCnt = $nc(itemVector)->length;
	$var($XMenuItemPeer, helpMenu, this->helpMenu);
	int32_t helpMenuPos = -1;
	if (helpMenu != nullptr) {
		for (int32_t i = 0; i < itemCnt; ++i) {
			if (itemVector->get(i) == helpMenu) {
				helpMenuPos = i;
				break;
			}
		}
		if (helpMenuPos != -1 && helpMenuPos != itemCnt - 1) {
			$System::arraycopy(itemVector, helpMenuPos + 1, itemVector, helpMenuPos, itemCnt - 1 - helpMenuPos);
			itemVector->set(itemCnt - 1, helpMenu);
		}
	}
	int32_t maxHeight = 0;
	$var($XMenuItemPeer$TextMetricsArray, itemMetrics, $new($XMenuItemPeer$TextMetricsArray, itemCnt));
	for (int32_t i = 0; i < itemCnt; ++i) {
		itemMetrics->set(i, $($nc(itemVector->get(i))->getTextMetrics()));
		if (itemMetrics->get(i) != nullptr) {
			$var($Dimension, dim, $nc(itemMetrics->get(i))->getTextDimension());
			if (dim != nullptr) {
				maxHeight = $Math::max(maxHeight, dim->height);
			}
		}
	}
	int32_t nextOffset = 0;
	int32_t itemHeight = XMenuBarPeer::BAR_ITEM_MARGIN_TOP + maxHeight + XMenuBarPeer::BAR_ITEM_MARGIN_BOTTOM;
	int32_t mappedCnt = itemCnt;
	for (int32_t i = 0; i < itemCnt; ++i) {
		$var($XMenuItemPeer, item, itemVector->get(i));
		$var($XMenuItemPeer$TextMetrics, metrics, itemMetrics->get(i));
		if (metrics == nullptr) {
			continue;
		}
		$var($Dimension, dim, $nc(metrics)->getTextDimension());
		if (dim != nullptr) {
			int32_t itemWidth = XMenuBarPeer::BAR_ITEM_MARGIN_LEFT + dim->width + XMenuBarPeer::BAR_ITEM_MARGIN_RIGHT;
			if ((nextOffset + itemWidth > this->width) && (i > 0)) {
				mappedCnt = i;
				break;
			}
			if ((i == itemCnt - 1) && helpMenuPos != -1) {
				nextOffset = $Math::max(nextOffset, this->width - itemWidth - XMenuBarPeer::BAR_SPACING_RIGHT);
			}
			$var($Rectangle, bounds, $new($Rectangle, nextOffset, XMenuBarPeer::BAR_SPACING_TOP, itemWidth, itemHeight));
			int32_t y = (maxHeight + dim->height) / 2 - metrics->getTextBaseline();
			$var($Point, textOrigin, $new($Point, nextOffset + XMenuBarPeer::BAR_ITEM_MARGIN_LEFT, XMenuBarPeer::BAR_SPACING_TOP + XMenuBarPeer::BAR_ITEM_MARGIN_TOP + y));
			nextOffset += itemWidth + XMenuBarPeer::BAR_ITEM_SPACING;
			$nc(item)->map(bounds, textOrigin);
		}
	}
	$var($XMenuItemPeerArray, mappedVector, $new($XMenuItemPeerArray, mappedCnt));
	$System::arraycopy(itemVector, 0, mappedVector, 0, mappedCnt);
	$var($XMenuBarPeer$MappingData, mappingData, $new($XMenuBarPeer$MappingData, mappedVector, XMenuBarPeer::BAR_SPACING_TOP + itemHeight + XMenuBarPeer::BAR_SPACING_BOTTOM));
	return mappingData;
}

$Rectangle* XMenuBarPeer::getSubmenuBounds($Rectangle* itemBounds, $Dimension* windowSize) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, globalBounds, toGlobal(itemBounds));
	$var($Rectangle, screenBounds, $nc($(getCurrentGraphicsConfiguration()))->getBounds());
	$var($Rectangle, res, nullptr);
	$assign(res, fitWindowBelow(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowAbove(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowRight(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowLeft(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	return fitWindowToScreen(windowSize, screenBounds);
}

void XMenuBarPeer::updateSize() {
	resetMapping();
	if (this->framePeer != nullptr) {
		$nc(this->framePeer)->reshapeMenubarPeer();
	}
}

int32_t XMenuBarPeer::getDesiredHeight() {
	$var($XMenuBarPeer$MappingData, mappingData, $cast($XMenuBarPeer$MappingData, getMappingData()));
	return $nc(mappingData)->getDesiredHeight();
}

bool XMenuBarPeer::isFramePeerEnabled() {
	if (this->framePeer != nullptr) {
		return $nc(this->framePeer)->isEnabled();
	}
	return false;
}

void XMenuBarPeer::doDispose() {
	$XBaseMenuWindow::doDispose();
	$XToolkit::targetDisposedPeer(this->menuBarTarget, this);
}

void XMenuBarPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	if ((width != this->width) || (height != this->height)) {
		resetMapping();
	}
	$XBaseMenuWindow::reshape(x, y, width, height);
}

void XMenuBarPeer::ungrabInputImpl() {
	selectItem(nullptr, false);
	$XBaseMenuWindow::ungrabInputImpl();
	postPaintEvent();
}

void XMenuBarPeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	resetColors();
	int32_t width = getWidth();
	int32_t height = getHeight();
	flush();
	$nc(g)->setColor($(getBackgroundColor()));
	g->fillRect(1, 1, width - 2, height - 2);
	draw3DRect(g, 0, 0, width, height, true);
	$var($XMenuBarPeer$MappingData, mappingData, $cast($XMenuBarPeer$MappingData, getMappingData()));
	$var($XMenuItemPeerArray, itemVector, $nc(mappingData)->getItems());
	$var($XMenuItemPeer, selectedItem, getSelectedItem());
	for (int32_t i = 0; i < $nc(itemVector)->length; ++i) {
		$var($XMenuItemPeer, item, itemVector->get(i));
		g->setFont($($nc(item)->getTargetFont()));
		$var($Rectangle, bounds, $nc(item)->getBounds());
		$var($Point, textOrigin, item->getTextOrigin());
		if (item == selectedItem) {
			g->setColor($(getSelectedColor()));
			g->fillRect($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
			draw3DRect(g, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, false);
		}
		bool var$0 = isFramePeerEnabled();
		if (var$0 && item->isTargetItemEnabled()) {
			g->setColor($(getForegroundColor()));
		} else {
			g->setColor($(getDisabledColor()));
		}
		g->drawString($(item->getTargetLabel()), $nc(textOrigin)->x, textOrigin->y);
	}
	flush();
}

void XMenuBarPeer::print($Graphics* g) {
}

void XMenuBarPeer::handleEvent($AWTEvent* event) {
	if ((this->framePeer != nullptr) && ($nc(event)->getID() != $PaintEvent::PAINT)) {
		if ($nc(this->framePeer)->isModalBlocked()) {
			return;
		}
	}
	switch ($nc(event)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{}
	case $MouseEvent::MOUSE_CLICKED:
		{}
	case $MouseEvent::MOUSE_MOVED:
		{}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (isFramePeerEnabled()) {
				doHandleJavaMouseEvent($cast($MouseEvent, event));
			}
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			if (isFramePeerEnabled()) {
				doHandleJavaKeyEvent($cast($KeyEvent, event));
			}
			break;
		}
	default:
		{
			$XBaseMenuWindow::handleEvent(event);
			break;
		}
	}
}

void XMenuBarPeer::handleF10KeyPress($KeyEvent* event) {
	int32_t keyState = $nc(event)->getModifiers();
	if ((((int32_t)(keyState & (uint32_t)$InputEvent::ALT_MASK)) != 0) || (((int32_t)(keyState & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) || (((int32_t)(keyState & (uint32_t)$InputEvent::CTRL_MASK)) != 0)) {
		return;
	}
	grabInput();
	selectItem($(getFirstSelectableItem()), true);
}

void XMenuBarPeer::handleKeyPress($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XKeyEvent, xkey, $nc(xev)->get_xkey());
	$init($PlatformLogger$Level);
	if ($nc(XMenuBarPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XMenuBarPeer::log)->fine($($nc(xkey)->toString()));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	$var($Component, currentSource, getEventSource());
	handleKeyPress(xkey);
}

void clinit$XMenuBarPeer($Class* class$) {
	$assignStatic(XMenuBarPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XMenuBarPeer"_s));
}

XMenuBarPeer::XMenuBarPeer() {
}

$Class* XMenuBarPeer::load$($String* name, bool initialize) {
	$loadClass(XMenuBarPeer, name, initialize, &_XMenuBarPeer_ClassInfo_, clinit$XMenuBarPeer, allocate$XMenuBarPeer);
	return class$;
}

$Class* XMenuBarPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun