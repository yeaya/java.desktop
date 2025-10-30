#include <java/awt/Menu$AccessibleAWTMenu.h>

#include <java/awt/Menu.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuItem.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef MENU

using $Menu = ::java::awt::Menu;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _Menu$AccessibleAWTMenu_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Menu;", nullptr, $FINAL | $SYNTHETIC, $field(Menu$AccessibleAWTMenu, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Menu$AccessibleAWTMenu, serialVersionUID)},
	{}
};

$MethodInfo _Menu$AccessibleAWTMenu_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Menu;)V", nullptr, $PROTECTED, $method(static_cast<void(Menu$AccessibleAWTMenu::*)($Menu*)>(&Menu$AccessibleAWTMenu::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Menu$AccessibleAWTMenu_InnerClassesInfo_[] = {
	{"java.awt.Menu$AccessibleAWTMenu", "java.awt.Menu", "AccessibleAWTMenu", $PROTECTED},
	{"java.awt.MenuItem$AccessibleAWTMenuItem", "java.awt.MenuItem", "AccessibleAWTMenuItem", $PROTECTED},
	{}
};

$ClassInfo _Menu$AccessibleAWTMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Menu$AccessibleAWTMenu",
	"java.awt.MenuItem$AccessibleAWTMenuItem",
	nullptr,
	_Menu$AccessibleAWTMenu_FieldInfo_,
	_Menu$AccessibleAWTMenu_MethodInfo_,
	nullptr,
	nullptr,
	_Menu$AccessibleAWTMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Menu"
};

$Object* allocate$Menu$AccessibleAWTMenu($Class* clazz) {
	return $of($alloc(Menu$AccessibleAWTMenu));
}

void Menu$AccessibleAWTMenu::init$($Menu* this$0) {
	$set(this, this$0, this$0);
	$MenuItem$AccessibleAWTMenuItem::init$(this$0);
}

$AccessibleRole* Menu$AccessibleAWTMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU;
}

Menu$AccessibleAWTMenu::Menu$AccessibleAWTMenu() {
}

$Class* Menu$AccessibleAWTMenu::load$($String* name, bool initialize) {
	$loadClass(Menu$AccessibleAWTMenu, name, initialize, &_Menu$AccessibleAWTMenu_ClassInfo_, allocate$Menu$AccessibleAWTMenu);
	return class$;
}

$Class* Menu$AccessibleAWTMenu::class$ = nullptr;

	} // awt
} // java