#include <javax/swing/plaf/PanelUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _PanelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PanelUI::*)()>(&PanelUI::init$))},
	{}
};

$ClassInfo _PanelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.PanelUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_PanelUI_MethodInfo_
};

$Object* allocate$PanelUI($Class* clazz) {
	return $of($alloc(PanelUI));
}

void PanelUI::init$() {
	$ComponentUI::init$();
}

PanelUI::PanelUI() {
}

$Class* PanelUI::load$($String* name, bool initialize) {
	$loadClass(PanelUI, name, initialize, &_PanelUI_ClassInfo_, allocate$PanelUI);
	return class$;
}

$Class* PanelUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax