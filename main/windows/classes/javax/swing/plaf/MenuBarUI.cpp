#include <javax/swing/plaf/MenuBarUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _MenuBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MenuBarUI::*)()>(&MenuBarUI::init$))},
	{}
};

$ClassInfo _MenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.MenuBarUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_MenuBarUI_MethodInfo_
};

$Object* allocate$MenuBarUI($Class* clazz) {
	return $of($alloc(MenuBarUI));
}

void MenuBarUI::init$() {
	$ComponentUI::init$();
}

MenuBarUI::MenuBarUI() {
}

$Class* MenuBarUI::load$($String* name, bool initialize) {
	$loadClass(MenuBarUI, name, initialize, &_MenuBarUI_ClassInfo_, allocate$MenuBarUI);
	return class$;
}

$Class* MenuBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax