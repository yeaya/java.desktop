#include <javax/swing/plaf/ButtonUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ButtonUI::*)()>(&ButtonUI::init$))},
	{}
};

$ClassInfo _ButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ButtonUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ButtonUI_MethodInfo_
};

$Object* allocate$ButtonUI($Class* clazz) {
	return $of($alloc(ButtonUI));
}

void ButtonUI::init$() {
	$ComponentUI::init$();
}

ButtonUI::ButtonUI() {
}

$Class* ButtonUI::load$($String* name, bool initialize) {
	$loadClass(ButtonUI, name, initialize, &_ButtonUI_ClassInfo_, allocate$ButtonUI);
	return class$;
}

$Class* ButtonUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax