#include <sun/awt/X11/XMenuPeer.h>

#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuItem.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$MenuAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuItem = ::java::awt::MenuItem;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuAccessor = ::sun::awt::AWTAccessor$MenuAccessor;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuWindow = ::sun::awt::X11::XMenuWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XMenuPeer, log)},
	{"menuWindow", "Lsun/awt/X11/XMenuWindow;", nullptr, 0, $field(XMenuPeer, menuWindow)},
	{}
};

$MethodInfo _XMenuPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Menu;)V", nullptr, 0, $method(static_cast<void(XMenuPeer::*)($Menu*)>(&XMenuPeer::init$))},
	{"addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC},
	{"delItem", "(I)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getMenuWindow", "()Lsun/awt/X11/XMenuWindow;", nullptr, 0},
	{"getShortcutText", "()Ljava/lang/String;", nullptr, 0},
	{"getTargetItems", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/MenuItem;>;", 0},
	{"isSeparator", "()Z", nullptr, 0},
	{"setContainer", "(Lsun/awt/X11/XBaseMenuWindow;)V", nullptr, 0},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMenuPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMenuPeer",
	"sun.awt.X11.XMenuItemPeer",
	"java.awt.peer.MenuPeer",
	_XMenuPeer_FieldInfo_,
	_XMenuPeer_MethodInfo_
};

$Object* allocate$XMenuPeer($Class* clazz) {
	return $of($alloc(XMenuPeer));
}

void XMenuPeer::setLabel($String* label) {
	this->$XMenuItemPeer::setLabel(label);
}

void XMenuPeer::setEnabled(bool enabled) {
	this->$XMenuItemPeer::setEnabled(enabled);
}

int32_t XMenuPeer::hashCode() {
	 return this->$XMenuItemPeer::hashCode();
}

bool XMenuPeer::equals(Object$* arg0) {
	 return this->$XMenuItemPeer::equals(arg0);
}

$Object* XMenuPeer::clone() {
	 return this->$XMenuItemPeer::clone();
}

$String* XMenuPeer::toString() {
	 return this->$XMenuItemPeer::toString();
}

void XMenuPeer::finalize() {
	this->$XMenuItemPeer::finalize();
}

$PlatformLogger* XMenuPeer::log = nullptr;

void XMenuPeer::init$($Menu* target) {
	$XMenuItemPeer::init$(target);
}

void XMenuPeer::setContainer($XBaseMenuWindow* container) {
	$XMenuItemPeer::setContainer(container);
	$set(this, menuWindow, $new($XMenuWindow, this));
}

void XMenuPeer::dispose() {
	if (this->menuWindow != nullptr) {
		$nc(this->menuWindow)->dispose();
	}
	$XMenuItemPeer::dispose();
}

void XMenuPeer::setFont($Font* font) {
	resetTextMetrics();
	$var($XMenuWindow, menuWindow, getMenuWindow());
	if (menuWindow != nullptr) {
		menuWindow->setItemsFont(font);
	}
	repaintIfShowing();
}

void XMenuPeer::addItem($MenuItem* item) {
	$var($XMenuWindow, menuWindow, getMenuWindow());
	if (menuWindow != nullptr) {
		menuWindow->addItem(item);
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XMenuPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XMenuPeer::log)->fine("Attempt to use XMenuWindowPeer without window"_s);
		}
	}
}

void XMenuPeer::delItem(int32_t index) {
	$var($XMenuWindow, menuWindow, getMenuWindow());
	if (menuWindow != nullptr) {
		menuWindow->delItem(index);
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XMenuPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XMenuPeer::log)->fine("Attempt to use XMenuWindowPeer without window"_s);
		}
	}
}

$Vector* XMenuPeer::getTargetItems() {
	$useLocalCurrentObjectStackCache();
	return $nc($($AWTAccessor::getMenuAccessor()))->getItems($cast($Menu, $(getTarget())));
}

bool XMenuPeer::isSeparator() {
	return false;
}

$String* XMenuPeer::getShortcutText() {
	return nullptr;
}

$XMenuWindow* XMenuPeer::getMenuWindow() {
	return this->menuWindow;
}

void clinit$XMenuPeer($Class* class$) {
	$assignStatic(XMenuPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XMenuPeer"_s));
}

XMenuPeer::XMenuPeer() {
}

$Class* XMenuPeer::load$($String* name, bool initialize) {
	$loadClass(XMenuPeer, name, initialize, &_XMenuPeer_ClassInfo_, clinit$XMenuPeer, allocate$XMenuPeer);
	return class$;
}

$Class* XMenuPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun