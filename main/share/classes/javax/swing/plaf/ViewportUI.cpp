#include <javax/swing/plaf/ViewportUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ViewportUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ViewportUI::*)()>(&ViewportUI::init$))},
	{}
};

$ClassInfo _ViewportUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ViewportUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ViewportUI_MethodInfo_
};

$Object* allocate$ViewportUI($Class* clazz) {
	return $of($alloc(ViewportUI));
}

void ViewportUI::init$() {
	$ComponentUI::init$();
}

ViewportUI::ViewportUI() {
}

$Class* ViewportUI::load$($String* name, bool initialize) {
	$loadClass(ViewportUI, name, initialize, &_ViewportUI_ClassInfo_, allocate$ViewportUI);
	return class$;
}

$Class* ViewportUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax