#include <java/awt/PopupMenu.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Event.h>
#include <java/awt/Menu$AccessibleAWTMenu.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu$1.h>
#include <java/awt/PopupMenu$AccessibleAWTPopupMenu.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef MOUSE_DOWN

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Event = ::java::awt::Event;
using $Menu = ::java::awt::Menu;
using $Menu$AccessibleAWTMenu = ::java::awt::Menu$AccessibleAWTMenu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $PopupMenu$1 = ::java::awt::PopupMenu$1;
using $PopupMenu$AccessibleAWTPopupMenu = ::java::awt::PopupMenu$AccessibleAWTPopupMenu;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$PopupMenuAccessor = ::sun::awt::AWTAccessor$PopupMenuAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _PopupMenu_FieldInfo_[] = {
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupMenu, base)},
	{"nameCounter", "I", nullptr, $STATIC, $staticField(PopupMenu, nameCounter)},
	{"isTrayIconPopup", "Z", nullptr, $VOLATILE | $TRANSIENT, $field(PopupMenu, isTrayIconPopup)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PopupMenu, serialVersionUID)},
	{}
};

$MethodInfo _PopupMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PopupMenu::*)()>(&PopupMenu::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PopupMenu::*)($String*)>(&PopupMenu::init$)), "java.awt.HeadlessException"},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getParent", "()Ljava/awt/MenuContainer;", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupMenu_InnerClassesInfo_[] = {
	{"java.awt.PopupMenu$AccessibleAWTPopupMenu", "java.awt.PopupMenu", "AccessibleAWTPopupMenu", $PROTECTED},
	{"java.awt.PopupMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.PopupMenu",
	"java.awt.Menu",
	nullptr,
	_PopupMenu_FieldInfo_,
	_PopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_PopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.PopupMenu$AccessibleAWTPopupMenu,java.awt.PopupMenu$1"
};

$Object* allocate$PopupMenu($Class* clazz) {
	return $of($alloc(PopupMenu));
}

$String* PopupMenu::base = nullptr;
int32_t PopupMenu::nameCounter = 0;

void PopupMenu::init$() {
	PopupMenu::init$(""_s);
}

void PopupMenu::init$($String* label) {
	$Menu::init$(label);
}

$MenuContainer* PopupMenu::getParent() {
	if (this->isTrayIconPopup) {
		return nullptr;
	}
	return $Menu::getParent();
}

$String* PopupMenu::constructComponentName() {
	$synchronized(PopupMenu::class$) {
		$var($String, var$0, PopupMenu::base);
		return $concat(var$0, $$str(PopupMenu::nameCounter++));
	}
}

void PopupMenu::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr && !($instanceOf($Component, this->parent))) {
			$Menu::addNotify();
		} else {
			if (this->peer == nullptr) {
				$set(this, peer, $nc($(getComponentFactory()))->createPopupMenu(this));
			}
			int32_t nitems = getItemCount();
			for (int32_t i = 0; i < nitems; ++i) {
				$var($MenuItem, mi, getItem(i));
				$set($nc(mi), parent, this);
				mi->addNotify();
			}
		}
	}
}

void PopupMenu::show($Component* origin, int32_t x, int32_t y) {
	$var($MenuContainer, localParent, this->parent);
	if (localParent == nullptr) {
		$throwNew($NullPointerException, "parent is null"_s);
	}
	if (!($instanceOf($Component, localParent))) {
		$throwNew($IllegalArgumentException, "PopupMenus with non-Component parents cannot be shown"_s);
	}
	$var($Component, compParent, $cast($Component, localParent));
	if (compParent != origin) {
		if ($instanceOf($Container, compParent)) {
			if (!$nc(($cast($Container, compParent)))->isAncestorOf(origin)) {
				$throwNew($IllegalArgumentException, "origin not in parent\'s hierarchy"_s);
			}
		} else {
			$throwNew($IllegalArgumentException, "origin not in parent\'s hierarchy"_s);
		}
	}
	if ($nc(compParent)->peer == nullptr || !$nc(compParent)->isShowing()) {
		$throwNew($RuntimeException, "parent not showing on screen"_s);
	}
	if (this->peer == nullptr) {
		addNotify();
	}
	$synchronized(getTreeLock()) {
		if (this->peer != nullptr) {
			$nc(($cast($PopupMenuPeer, this->peer)))->show($$new($Event, origin, 0, $Event::MOUSE_DOWN, x, y, 0, 0));
		}
	}
}

$AccessibleContext* PopupMenu::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($PopupMenu$AccessibleAWTPopupMenu, this));
	}
	return this->accessibleContext;
}

void clinit$PopupMenu($Class* class$) {
	$assignStatic(PopupMenu::base, "popup"_s);
	PopupMenu::nameCounter = 0;
	{
		$AWTAccessor::setPopupMenuAccessor($$new($PopupMenu$1));
	}
}

PopupMenu::PopupMenu() {
}

$Class* PopupMenu::load$($String* name, bool initialize) {
	$loadClass(PopupMenu, name, initialize, &_PopupMenu_ClassInfo_, clinit$PopupMenu, allocate$PopupMenu);
	return class$;
}

$Class* PopupMenu::class$ = nullptr;

	} // awt
} // java