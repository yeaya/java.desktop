#include <javax/swing/plaf/MenuItemUI.h>

#include <javax/swing/plaf/ButtonUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _MenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MenuItemUI::*)()>(&MenuItemUI::init$))},
	{}
};

$ClassInfo _MenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.MenuItemUI",
	"javax.swing.plaf.ButtonUI",
	nullptr,
	nullptr,
	_MenuItemUI_MethodInfo_
};

$Object* allocate$MenuItemUI($Class* clazz) {
	return $of($alloc(MenuItemUI));
}

void MenuItemUI::init$() {
	$ButtonUI::init$();
}

MenuItemUI::MenuItemUI() {
}

$Class* MenuItemUI::load$($String* name, bool initialize) {
	$loadClass(MenuItemUI, name, initialize, &_MenuItemUI_ClassInfo_, allocate$MenuItemUI);
	return class$;
}

$Class* MenuItemUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax