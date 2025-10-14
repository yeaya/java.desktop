#include <sun/awt/im/AWTInputMethodPopupMenu.h>

#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Component.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/im/InputMethodPopupMenu.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Component = ::java::awt::Component;
using $Menu = ::java::awt::Menu;
using $MenuItem = ::java::awt::MenuItem;
using $PopupMenu = ::java::awt::PopupMenu;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMethodPopupMenu = ::sun::awt::im::InputMethodPopupMenu;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _AWTInputMethodPopupMenu_FieldInfo_[] = {
	{"delegate", "Ljava/awt/PopupMenu;", nullptr, $STATIC, $staticField(AWTInputMethodPopupMenu, delegate)},
	{}
};

$MethodInfo _AWTInputMethodPopupMenu_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AWTInputMethodPopupMenu::*)($String*)>(&AWTInputMethodPopupMenu::init$))},
	{"add", "(Ljava/lang/Object;)V", nullptr, 0},
	{"addMenuItem", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"addMenuItem", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"addSeparator", "()V", nullptr, 0},
	{"addToComponent", "(Ljava/awt/Component;)V", nullptr, 0},
	{"createSubmenu", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"removeAll", "()V", nullptr, 0},
	{"show", "(Ljava/awt/Component;II)V", nullptr, 0},
	{}
};

$ClassInfo _AWTInputMethodPopupMenu_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.AWTInputMethodPopupMenu",
	"sun.awt.im.InputMethodPopupMenu",
	nullptr,
	_AWTInputMethodPopupMenu_FieldInfo_,
	_AWTInputMethodPopupMenu_MethodInfo_
};

$Object* allocate$AWTInputMethodPopupMenu($Class* clazz) {
	return $of($alloc(AWTInputMethodPopupMenu));
}

$PopupMenu* AWTInputMethodPopupMenu::delegate = nullptr;

void AWTInputMethodPopupMenu::init$($String* title) {
	$InputMethodPopupMenu::init$();
	$synchronized(this) {
		if (AWTInputMethodPopupMenu::delegate == nullptr) {
			$assignStatic(AWTInputMethodPopupMenu::delegate, $new($PopupMenu, title));
		}
	}
}

void AWTInputMethodPopupMenu::show($Component* c, int32_t x, int32_t y) {
	$nc(AWTInputMethodPopupMenu::delegate)->show(c, x, y);
}

void AWTInputMethodPopupMenu::removeAll() {
	$nc(AWTInputMethodPopupMenu::delegate)->removeAll();
}

void AWTInputMethodPopupMenu::addSeparator() {
	$nc(AWTInputMethodPopupMenu::delegate)->addSeparator();
}

void AWTInputMethodPopupMenu::addToComponent($Component* c) {
	$nc(c)->add(AWTInputMethodPopupMenu::delegate);
}

$Object* AWTInputMethodPopupMenu::createSubmenu($String* label) {
	return $of($new($Menu, label));
}

void AWTInputMethodPopupMenu::add(Object$* menuItem) {
	$nc(AWTInputMethodPopupMenu::delegate)->add($cast($MenuItem, menuItem));
}

void AWTInputMethodPopupMenu::addMenuItem($String* label, $String* command, $String* currentSelection) {
	addMenuItem(AWTInputMethodPopupMenu::delegate, label, command, currentSelection);
}

void AWTInputMethodPopupMenu::addMenuItem(Object$* targetMenu, $String* label, $String* command, $String* currentSelection) {
	$var($MenuItem, menuItem, nullptr);
	if (isSelected(command, currentSelection)) {
		$assign(menuItem, $new($CheckboxMenuItem, label, true));
	} else {
		$assign(menuItem, $new($MenuItem, label));
	}
	$nc(menuItem)->setActionCommand(command);
	menuItem->addActionListener(this);
	menuItem->setEnabled(command != nullptr);
	$nc(($cast($Menu, targetMenu)))->add(menuItem);
}

void clinit$AWTInputMethodPopupMenu($Class* class$) {
	$assignStatic(AWTInputMethodPopupMenu::delegate, nullptr);
}

AWTInputMethodPopupMenu::AWTInputMethodPopupMenu() {
}

$Class* AWTInputMethodPopupMenu::load$($String* name, bool initialize) {
	$loadClass(AWTInputMethodPopupMenu, name, initialize, &_AWTInputMethodPopupMenu_ClassInfo_, clinit$AWTInputMethodPopupMenu, allocate$AWTInputMethodPopupMenu);
	return class$;
}

$Class* AWTInputMethodPopupMenu::class$ = nullptr;

		} // im
	} // awt
} // sun