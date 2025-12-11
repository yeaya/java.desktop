#include <sun/awt/X11/XMenuItemPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor$MenuItemAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuItemPeer$TextMetrics.h>
#include <sun/awt/X11/XPopupMenuPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef SEPARATOR_HEIGHT
#undef SEPARATOR_WIDTH

using $AWTEvent = ::java::awt::AWTEvent;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AWTAccessor$MenuItemAccessor = ::sun::awt::AWTAccessor$MenuItemAccessor;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XMenuItemPeer$TextMetrics = ::sun::awt::X11::XMenuItemPeer$TextMetrics;
using $XPopupMenuPeer = ::sun::awt::X11::XPopupMenuPeer;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuItemPeer_FieldInfo_[] = {
	{"container", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $PRIVATE, $field(XMenuItemPeer, container)},
	{"target", "Ljava/awt/MenuItem;", nullptr, $PRIVATE, $field(XMenuItemPeer, target)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XMenuItemPeer, bounds)},
	{"textOrigin", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(XMenuItemPeer, textOrigin)},
	{"SEPARATOR_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuItemPeer, SEPARATOR_WIDTH)},
	{"SEPARATOR_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuItemPeer, SEPARATOR_HEIGHT)},
	{"textMetrics", "Lsun/awt/X11/XMenuItemPeer$TextMetrics;", nullptr, $PRIVATE, $field(XMenuItemPeer, textMetrics)},
	{}
};

$MethodInfo _XMenuItemPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/MenuItem;)V", nullptr, 0, $method(static_cast<void(XMenuItemPeer::*)($MenuItem*)>(&XMenuItemPeer::init$))},
	{"action", "(JI)V", nullptr, 0},
	{"calcTextMetrics", "()Lsun/awt/X11/XMenuItemPeer$TextMetrics;", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getContainer", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, 0},
	{"getShortcutText", "()Ljava/lang/String;", nullptr, 0},
	{"getTarget", "()Ljava/awt/MenuItem;", nullptr, 0},
	{"getTargetActionCommand", "()Ljava/lang/String;", nullptr, 0},
	{"getTargetFont", "()Ljava/awt/Font;", nullptr, 0},
	{"getTargetLabel", "()Ljava/lang/String;", nullptr, 0},
	{"getTargetShortcut", "()Ljava/awt/MenuShortcut;", nullptr, 0},
	{"getTextMetrics", "()Lsun/awt/X11/XMenuItemPeer$TextMetrics;", nullptr, 0},
	{"getTextOrigin", "()Ljava/awt/Point;", nullptr, 0},
	{"isContainerShowing", "()Z", nullptr, 0},
	{"isSeparator", "()Z", nullptr, 0},
	{"isTargetEnabled", "()Z", nullptr, 0},
	{"isTargetItemEnabled", "()Z", nullptr, 0},
	{"map", "(Ljava/awt/Rectangle;Ljava/awt/Point;)V", nullptr, 0},
	{"repaintIfShowing", "()V", nullptr, 0},
	{"resetTextMetrics", "()V", nullptr, 0},
	{"setContainer", "(Lsun/awt/X11/XBaseMenuWindow;)V", nullptr, 0},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMenuItemPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuItemPeer$TextMetrics", "sun.awt.X11.XMenuItemPeer", "TextMetrics", $STATIC},
	{}
};

$ClassInfo _XMenuItemPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMenuItemPeer",
	"java.lang.Object",
	"java.awt.peer.MenuItemPeer",
	_XMenuItemPeer_FieldInfo_,
	_XMenuItemPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuItemPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuItemPeer$TextMetrics"
};

$Object* allocate$XMenuItemPeer($Class* clazz) {
	return $of($alloc(XMenuItemPeer));
}

void XMenuItemPeer::init$($MenuItem* target) {
	$set(this, target, target);
}

void XMenuItemPeer::dispose() {
}

void XMenuItemPeer::setFont($Font* font) {
	resetTextMetrics();
	repaintIfShowing();
}

void XMenuItemPeer::setLabel($String* label) {
	resetTextMetrics();
	repaintIfShowing();
}

void XMenuItemPeer::setEnabled(bool enabled) {
	repaintIfShowing();
}

$MenuItem* XMenuItemPeer::getTarget() {
	return this->target;
}

$Font* XMenuItemPeer::getTargetFont() {
	if (this->target == nullptr) {
		return $XWindow::getDefaultFont();
	}
	return $nc($($AWTAccessor::getMenuComponentAccessor()))->getFont_NoClientCode(this->target);
}

$String* XMenuItemPeer::getTargetLabel() {
	$useLocalCurrentObjectStackCache();
	if (this->target == nullptr) {
		return ""_s;
	}
	$var($String, label, $nc($($AWTAccessor::getMenuItemAccessor()))->getLabel(this->target));
	return (label == nullptr) ? ""_s : label;
}

bool XMenuItemPeer::isTargetEnabled() {
	if (this->target == nullptr) {
		return false;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->isEnabled(this->target);
}

bool XMenuItemPeer::isTargetItemEnabled() {
	if (this->target == nullptr) {
		return false;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->isItemEnabled(this->target);
}

$String* XMenuItemPeer::getTargetActionCommand() {
	if (this->target == nullptr) {
		return ""_s;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->getActionCommandImpl(this->target);
}

$MenuShortcut* XMenuItemPeer::getTargetShortcut() {
	if (this->target == nullptr) {
		return nullptr;
	}
	return $nc($($AWTAccessor::getMenuItemAccessor()))->getShortcut(this->target);
}

$String* XMenuItemPeer::getShortcutText() {
	$useLocalCurrentObjectStackCache();
	if (this->container == nullptr) {
		return nullptr;
	}
	if ($instanceOf($XPopupMenuPeer, $($nc(this->container)->getRootMenuWindow()))) {
		return nullptr;
	}
	$var($MenuShortcut, sc, getTargetShortcut());
	return (sc == nullptr) ? ($String*)nullptr : $nc(sc)->toString();
}

void XMenuItemPeer::setContainer($XBaseMenuWindow* container) {
	$synchronized($XBaseMenuWindow::getMenuTreeLock()) {
		$set(this, container, container);
	}
}

$XBaseMenuWindow* XMenuItemPeer::getContainer() {
	return this->container;
}

bool XMenuItemPeer::isSeparator() {
	bool r = ($nc($(getTargetLabel()))->equals("-"_s));
	return r;
}

bool XMenuItemPeer::isContainerShowing() {
	if (this->container == nullptr) {
		return false;
	}
	return $nc(this->container)->isShowing();
}

void XMenuItemPeer::repaintIfShowing() {
	if (isContainerShowing()) {
		$nc(this->container)->postPaintEvent();
	}
}

void XMenuItemPeer::action(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !isSeparator();
	if (var$0 && isTargetItemEnabled()) {
		$XWindow::postEventStatic($$new($ActionEvent, this->target, $ActionEvent::ACTION_PERFORMED, $(getTargetActionCommand()), when, modifiers));
	}
}

$XMenuItemPeer$TextMetrics* XMenuItemPeer::getTextMetrics() {
	$var($XMenuItemPeer$TextMetrics, textMetrics, this->textMetrics);
	if (textMetrics == nullptr) {
		$assign(textMetrics, calcTextMetrics());
		$set(this, textMetrics, textMetrics);
	}
	return textMetrics;
}

$XMenuItemPeer$TextMetrics* XMenuItemPeer::calcTextMetrics() {
	$useLocalCurrentObjectStackCache();
	if (this->container == nullptr) {
		return nullptr;
	}
	if (isSeparator()) {
		return $new($XMenuItemPeer$TextMetrics, $$new($Dimension, XMenuItemPeer::SEPARATOR_WIDTH, XMenuItemPeer::SEPARATOR_HEIGHT), 0, 0);
	}
	$var($Graphics, g, $nc(this->container)->getGraphics());
	if (g == nullptr) {
		return nullptr;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($XMenuItemPeer$TextMetrics, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(g)->setFont($(getTargetFont()));
			$var($FontMetrics, fm, g->getFontMetrics());
			$var($String, str, getTargetLabel());
			int32_t width = $nc(fm)->stringWidth(str);
			int32_t height = fm->getHeight();
			$var($Dimension, textDimension, $new($Dimension, width, height));
			int32_t var$3 = fm->getHeight();
			int32_t textBaseline = var$3 - fm->getAscent();
			$var($String, sc, getShortcutText());
			int32_t shortcutWidth = (sc == nullptr) ? 0 : fm->stringWidth(sc);
			$assign(var$2, $new($XMenuItemPeer$TextMetrics, textDimension, shortcutWidth, textBaseline));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
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

void XMenuItemPeer::resetTextMetrics() {
	$set(this, textMetrics, nullptr);
	if (this->container != nullptr) {
		$nc(this->container)->updateSize();
	}
}

void XMenuItemPeer::map($Rectangle* bounds, $Point* textOrigin) {
	$set(this, bounds, bounds);
	$set(this, textOrigin, textOrigin);
}

$Rectangle* XMenuItemPeer::getBounds() {
	return this->bounds;
}

$Point* XMenuItemPeer::getTextOrigin() {
	return this->textOrigin;
}

XMenuItemPeer::XMenuItemPeer() {
}

$Class* XMenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(XMenuItemPeer, name, initialize, &_XMenuItemPeer_ClassInfo_, allocate$XMenuItemPeer);
	return class$;
}

$Class* XMenuItemPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun