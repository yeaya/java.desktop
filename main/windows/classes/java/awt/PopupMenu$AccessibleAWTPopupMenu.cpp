#include <java/awt/PopupMenu$AccessibleAWTPopupMenu.h>

#include <java/awt/Menu$AccessibleAWTMenu.h>
#include <java/awt/Menu.h>
#include <java/awt/PopupMenu.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef POPUP_MENU

using $Menu = ::java::awt::Menu;
using $Menu$AccessibleAWTMenu = ::java::awt::Menu$AccessibleAWTMenu;
using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _PopupMenu$AccessibleAWTPopupMenu_FieldInfo_[] = {
	{"this$0", "Ljava/awt/PopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenu$AccessibleAWTPopupMenu, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PopupMenu$AccessibleAWTPopupMenu, serialVersionUID)},
	{}
};

$MethodInfo _PopupMenu$AccessibleAWTPopupMenu_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/PopupMenu;)V", nullptr, $PROTECTED, $method(static_cast<void(PopupMenu$AccessibleAWTPopupMenu::*)($PopupMenu*)>(&PopupMenu$AccessibleAWTPopupMenu::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupMenu$AccessibleAWTPopupMenu_InnerClassesInfo_[] = {
	{"java.awt.PopupMenu$AccessibleAWTPopupMenu", "java.awt.PopupMenu", "AccessibleAWTPopupMenu", $PROTECTED},
	{"java.awt.Menu$AccessibleAWTMenu", "java.awt.Menu", "AccessibleAWTMenu", $PROTECTED},
	{}
};

$ClassInfo _PopupMenu$AccessibleAWTPopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.PopupMenu$AccessibleAWTPopupMenu",
	"java.awt.Menu$AccessibleAWTMenu",
	nullptr,
	_PopupMenu$AccessibleAWTPopupMenu_FieldInfo_,
	_PopupMenu$AccessibleAWTPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_PopupMenu$AccessibleAWTPopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PopupMenu"
};

$Object* allocate$PopupMenu$AccessibleAWTPopupMenu($Class* clazz) {
	return $of($alloc(PopupMenu$AccessibleAWTPopupMenu));
}

void PopupMenu$AccessibleAWTPopupMenu::init$($PopupMenu* this$0) {
	$set(this, this$0, this$0);
	$Menu$AccessibleAWTMenu::init$(this$0);
}

$AccessibleRole* PopupMenu$AccessibleAWTPopupMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::POPUP_MENU;
}

PopupMenu$AccessibleAWTPopupMenu::PopupMenu$AccessibleAWTPopupMenu() {
}

$Class* PopupMenu$AccessibleAWTPopupMenu::load$($String* name, bool initialize) {
	$loadClass(PopupMenu$AccessibleAWTPopupMenu, name, initialize, &_PopupMenu$AccessibleAWTPopupMenu_ClassInfo_, allocate$PopupMenu$AccessibleAWTPopupMenu);
	return class$;
}

$Class* PopupMenu$AccessibleAWTPopupMenu::class$ = nullptr;

	} // awt
} // java