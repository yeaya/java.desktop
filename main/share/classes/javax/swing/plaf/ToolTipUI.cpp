#include <javax/swing/plaf/ToolTipUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ToolTipUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ToolTipUI::*)()>(&ToolTipUI::init$))},
	{}
};

$ClassInfo _ToolTipUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ToolTipUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ToolTipUI_MethodInfo_
};

$Object* allocate$ToolTipUI($Class* clazz) {
	return $of($alloc(ToolTipUI));
}

void ToolTipUI::init$() {
	$ComponentUI::init$();
}

ToolTipUI::ToolTipUI() {
}

$Class* ToolTipUI::load$($String* name, bool initialize) {
	$loadClass(ToolTipUI, name, initialize, &_ToolTipUI_ClassInfo_, allocate$ToolTipUI);
	return class$;
}

$Class* ToolTipUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax