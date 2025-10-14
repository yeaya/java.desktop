#include <sun/awt/im/JInputMethodPopupMenu.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <sun/awt/im/InputMethodPopupMenu.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $InputMethodPopupMenu = ::sun::awt::im::InputMethodPopupMenu;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _JInputMethodPopupMenu_FieldInfo_[] = {
	{"delegate", "Ljavax/swing/JPopupMenu;", nullptr, $STATIC, $staticField(JInputMethodPopupMenu, delegate)},
	{}
};

$MethodInfo _JInputMethodPopupMenu_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JInputMethodPopupMenu::*)($String*)>(&JInputMethodPopupMenu::init$))},
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

$ClassInfo _JInputMethodPopupMenu_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.JInputMethodPopupMenu",
	"sun.awt.im.InputMethodPopupMenu",
	nullptr,
	_JInputMethodPopupMenu_FieldInfo_,
	_JInputMethodPopupMenu_MethodInfo_
};

$Object* allocate$JInputMethodPopupMenu($Class* clazz) {
	return $of($alloc(JInputMethodPopupMenu));
}

$JPopupMenu* JInputMethodPopupMenu::delegate = nullptr;

void JInputMethodPopupMenu::init$($String* title) {
	$InputMethodPopupMenu::init$();
	$synchronized(this) {
		if (JInputMethodPopupMenu::delegate == nullptr) {
			$assignStatic(JInputMethodPopupMenu::delegate, $new($JPopupMenu, title));
		}
	}
}

void JInputMethodPopupMenu::show($Component* c, int32_t x, int32_t y) {
	$nc(JInputMethodPopupMenu::delegate)->show(c, x, y);
}

void JInputMethodPopupMenu::removeAll() {
	$nc(JInputMethodPopupMenu::delegate)->removeAll();
}

void JInputMethodPopupMenu::addSeparator() {
	$nc(JInputMethodPopupMenu::delegate)->addSeparator();
}

void JInputMethodPopupMenu::addToComponent($Component* c) {
}

$Object* JInputMethodPopupMenu::createSubmenu($String* label) {
	return $of($new($JMenu, label));
}

void JInputMethodPopupMenu::add(Object$* menuItem) {
	$nc(JInputMethodPopupMenu::delegate)->add($cast($JMenuItem, menuItem));
}

void JInputMethodPopupMenu::addMenuItem($String* label, $String* command, $String* currentSelection) {
	addMenuItem(JInputMethodPopupMenu::delegate, label, command, currentSelection);
}

void JInputMethodPopupMenu::addMenuItem(Object$* targetMenu, $String* label, $String* command, $String* currentSelection) {
	$var($JMenuItem, menuItem, nullptr);
	if (isSelected(command, currentSelection)) {
		$assign(menuItem, $new($JCheckBoxMenuItem, label, true));
	} else {
		$assign(menuItem, $new($JMenuItem, label));
	}
	$nc(menuItem)->setActionCommand(command);
	menuItem->addActionListener(this);
	menuItem->setEnabled(command != nullptr);
	if ($instanceOf($JMenu, targetMenu)) {
		$nc(($cast($JMenu, targetMenu)))->add(menuItem);
	} else {
		$nc(($cast($JPopupMenu, targetMenu)))->add(menuItem);
	}
}

void clinit$JInputMethodPopupMenu($Class* class$) {
	$assignStatic(JInputMethodPopupMenu::delegate, nullptr);
}

JInputMethodPopupMenu::JInputMethodPopupMenu() {
}

$Class* JInputMethodPopupMenu::load$($String* name, bool initialize) {
	$loadClass(JInputMethodPopupMenu, name, initialize, &_JInputMethodPopupMenu_ClassInfo_, clinit$JInputMethodPopupMenu, allocate$JInputMethodPopupMenu);
	return class$;
}

$Class* JInputMethodPopupMenu::class$ = nullptr;

		} // im
	} // awt
} // sun