#include <sun/awt/X11/XPopupMenuPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$MenuAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor$MenuItemAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CAPTION_MARGIN_TOP
#undef CAPTION_SEPARATOR_HEIGHT
#undef FINE
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED

using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $Rectangle = ::java::awt::Rectangle;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuAccessor = ::sun::awt::AWTAccessor$MenuAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AWTAccessor$MenuItemAccessor = ::sun::awt::AWTAccessor$MenuItemAccessor;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;
using $XMenuWindow = ::sun::awt::X11::XMenuWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XPopupMenuPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XPopupMenuPeer, log)},
	{"componentPeer", "Lsun/awt/X11/XComponentPeer;", nullptr, $PRIVATE, $field(XPopupMenuPeer, componentPeer)},
	{"popupMenuTarget", "Ljava/awt/PopupMenu;", nullptr, $PRIVATE, $field(XPopupMenuPeer, popupMenuTarget)},
	{"showingMousePressedSubmenu", "Lsun/awt/X11/XMenuPeer;", nullptr, $PRIVATE, $field(XPopupMenuPeer, showingMousePressedSubmenu)},
	{"CAPTION_MARGIN_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPopupMenuPeer, CAPTION_MARGIN_TOP)},
	{"CAPTION_SEPARATOR_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPopupMenuPeer, CAPTION_SEPARATOR_HEIGHT)},
	{}
};

$MethodInfo _XPopupMenuPeer_MethodInfo_[] = {
	{"*addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delItem", "(I)V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/PopupMenu;)V", nullptr, 0, $method(static_cast<void(XPopupMenuPeer::*)($PopupMenu*)>(&XPopupMenuPeer::init$))},
	{"doDispose", "()V", nullptr, $PROTECTED},
	{"getCaptionSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getMenuTargetItems", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/MenuItem;>;", 0},
	{"getTargetFont", "()Ljava/awt/Font;", nullptr, 0},
	{"getTargetLabel", "()Ljava/lang/String;", nullptr, 0},
	{"getWindowBounds", "(Ljava/awt/Point;Ljava/awt/Dimension;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"isTargetEnabled", "()Z", nullptr, 0},
	{"paintCaption", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Event;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabInputImpl", "()V", nullptr, 0},
	{}
};

$ClassInfo _XPopupMenuPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XPopupMenuPeer",
	"sun.awt.X11.XMenuWindow",
	"java.awt.peer.PopupMenuPeer",
	_XPopupMenuPeer_FieldInfo_,
	_XPopupMenuPeer_MethodInfo_
};

$Object* allocate$XPopupMenuPeer($Class* clazz) {
	return $of($alloc(XPopupMenuPeer));
}

void XPopupMenuPeer::addItem($MenuItem* item) {
	this->$XMenuWindow::addItem(item);
}

void XPopupMenuPeer::delItem(int32_t index) {
	this->$XMenuWindow::delItem(index);
}

void XPopupMenuPeer::dispose() {
	this->$XMenuWindow::dispose();
}

$String* XPopupMenuPeer::toString() {
	 return this->$XMenuWindow::toString();
}

int32_t XPopupMenuPeer::hashCode() {
	 return this->$XMenuWindow::hashCode();
}

bool XPopupMenuPeer::equals(Object$* arg0) {
	 return this->$XMenuWindow::equals(arg0);
}

$Object* XPopupMenuPeer::clone() {
	 return this->$XMenuWindow::clone();
}

void XPopupMenuPeer::finalize() {
	this->$XMenuWindow::finalize();
}

$PlatformLogger* XPopupMenuPeer::log = nullptr;

void XPopupMenuPeer::init$($PopupMenu* target) {
	$XMenuWindow::init$(nullptr);
	$set(this, showingMousePressedSubmenu, nullptr);
	$set(this, popupMenuTarget, target);
}

void XPopupMenuPeer::setFont($Font* f) {
	resetMapping();
	setItemsFont(f);
	postPaintEvent();
}

void XPopupMenuPeer::setLabel($String* label) {
	resetMapping();
	postPaintEvent();
}

void XPopupMenuPeer::setEnabled(bool enabled) {
	postPaintEvent();
}

void XPopupMenuPeer::show($Event* e) {
	$useLocalCurrentObjectStackCache();
	$set(this, target, $cast($Component, $nc(e)->target));
	$var($Vector, targetItemVector, getMenuTargetItems());
	if (targetItemVector != nullptr) {
		reloadItems(targetItemVector);
		$var($Point, tl, $nc(this->target)->getLocationOnScreen());
		$var($Point, pt, $new($Point, $nc(tl)->x + e->x, tl->y + e->y));
		if (!ensureCreated()) {
			return;
		}
		$var($Dimension, dim, getDesiredSize());
		$var($Rectangle, bounds, getWindowBounds(pt, dim));
		reshape(bounds);
		xSetVisible(true);
		toFront();
		selectItem(nullptr, false);
		grabInput();
	}
}

$Font* XPopupMenuPeer::getTargetFont() {
	if (this->popupMenuTarget == nullptr) {
		return $XWindow::getDefaultFont();
	}
	return $nc($($AWTAccessor::getMenuComponentAccessor()))->getFont_NoClientCode(this->popupMenuTarget);
}

$String* XPopupMenuPeer::getTargetLabel() {
	if (this->target == nullptr) {
		return ""_s;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->getLabel(this->popupMenuTarget);
}

bool XPopupMenuPeer::isTargetEnabled() {
	if (this->popupMenuTarget == nullptr) {
		return false;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->isEnabled(this->popupMenuTarget);
}

$Vector* XPopupMenuPeer::getMenuTargetItems() {
	if (this->popupMenuTarget == nullptr) {
		return nullptr;
	}
	return $nc($($AWTAccessor::getMenuAccessor()))->getItems(this->popupMenuTarget);
}

$Rectangle* XPopupMenuPeer::getWindowBounds($Point* origin, $Dimension* windowSize) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, globalBounds, $new($Rectangle, $nc(origin)->x, origin->y, 0, 0));
	$var($Rectangle, screenBounds, $nc($(getCurrentGraphicsConfiguration()))->getBounds());
	$var($Rectangle, res, nullptr);
	$assign(res, fitWindowRight(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowLeft(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowBelow(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowAbove(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	return fitWindowToScreen(windowSize, screenBounds);
}

$Dimension* XPopupMenuPeer::getCaptionSize() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, getTargetLabel());
	if ($nc(s)->isEmpty()) {
		return nullptr;
	}
	$var($Graphics, g, getGraphics());
	if (g == nullptr) {
		return nullptr;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Dimension, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(g)->setFont($(getTargetFont()));
			$var($FontMetrics, fm, g->getFontMetrics());
			$var($String, str, getTargetLabel());
			int32_t width = $nc(fm)->stringWidth(str);
			int32_t height = XPopupMenuPeer::CAPTION_MARGIN_TOP + fm->getHeight() + XPopupMenuPeer::CAPTION_SEPARATOR_HEIGHT;
			$var($Dimension, textDimension, $new($Dimension, width, height));
			$assign(var$2, textDimension);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(g)->dispose();
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

void XPopupMenuPeer::paintCaption($Graphics* g, $Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, getTargetLabel());
	if ($nc(s)->isEmpty()) {
		return;
	}
	$nc(g)->setFont($(getTargetFont()));
	$var($FontMetrics, fm, g->getFontMetrics());
	$var($String, str, getTargetLabel());
	int32_t width = $nc(fm)->stringWidth(str);
	int32_t textx = $nc(rect)->x + (rect->width - width) / 2;
	int32_t texty = rect->y + XPopupMenuPeer::CAPTION_MARGIN_TOP + fm->getAscent();
	int32_t sepy = rect->y + rect->height - XPopupMenuPeer::CAPTION_SEPARATOR_HEIGHT / 2;
	g->setColor(isTargetEnabled() ? $(getForegroundColor()) : $(getDisabledColor()));
	g->drawString(s, textx, texty);
	draw3DRect(g, rect->x, sepy, rect->width, 2, false);
}

void XPopupMenuPeer::doDispose() {
	$XMenuWindow::doDispose();
	$XToolkit::targetDisposedPeer(this->popupMenuTarget, this);
}

void XPopupMenuPeer::handleEvent($AWTEvent* event) {
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
			doHandleJavaMouseEvent($cast($MouseEvent, event));
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			doHandleJavaKeyEvent($cast($KeyEvent, event));
			break;
		}
	default:
		{
			$XMenuWindow::handleEvent(event);
			break;
		}
	}
}

void XPopupMenuPeer::ungrabInputImpl() {
	hide();
}

void XPopupMenuPeer::handleKeyPress($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XKeyEvent, xkey, $nc(xev)->get_xkey());
	$init($PlatformLogger$Level);
	if ($nc(XPopupMenuPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XPopupMenuPeer::log)->fine($($nc(xkey)->toString()));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	$var($Component, currentSource, getEventSource());
	handleKeyPress(xkey);
}

void clinit$XPopupMenuPeer($Class* class$) {
	$assignStatic(XPopupMenuPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XBaseMenuWindow"_s));
}

XPopupMenuPeer::XPopupMenuPeer() {
}

$Class* XPopupMenuPeer::load$($String* name, bool initialize) {
	$loadClass(XPopupMenuPeer, name, initialize, &_XPopupMenuPeer_ClassInfo_, clinit$XPopupMenuPeer, allocate$XPopupMenuPeer);
	return class$;
}

$Class* XPopupMenuPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun