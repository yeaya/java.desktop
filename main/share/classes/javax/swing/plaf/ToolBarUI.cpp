#include <javax/swing/plaf/ToolBarUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ToolBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ToolBarUI::*)()>(&ToolBarUI::init$))},
	{}
};

$ClassInfo _ToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ToolBarUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ToolBarUI_MethodInfo_
};

$Object* allocate$ToolBarUI($Class* clazz) {
	return $of($alloc(ToolBarUI));
}

void ToolBarUI::init$() {
	$ComponentUI::init$();
}

ToolBarUI::ToolBarUI() {
}

$Class* ToolBarUI::load$($String* name, bool initialize) {
	$loadClass(ToolBarUI, name, initialize, &_ToolBarUI_ClassInfo_, allocate$ToolBarUI);
	return class$;
}

$Class* ToolBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax