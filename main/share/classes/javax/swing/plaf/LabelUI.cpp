#include <javax/swing/plaf/LabelUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _LabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LabelUI::*)()>(&LabelUI::init$))},
	{}
};

$ClassInfo _LabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.LabelUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_LabelUI_MethodInfo_
};

$Object* allocate$LabelUI($Class* clazz) {
	return $of($alloc(LabelUI));
}

void LabelUI::init$() {
	$ComponentUI::init$();
}

LabelUI::LabelUI() {
}

$Class* LabelUI::load$($String* name, bool initialize) {
	$loadClass(LabelUI, name, initialize, &_LabelUI_ClassInfo_, allocate$LabelUI);
	return class$;
}

$Class* LabelUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax