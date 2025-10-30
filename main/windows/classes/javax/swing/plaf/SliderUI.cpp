#include <javax/swing/plaf/SliderUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _SliderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SliderUI::*)()>(&SliderUI::init$))},
	{}
};

$ClassInfo _SliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.SliderUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_SliderUI_MethodInfo_
};

$Object* allocate$SliderUI($Class* clazz) {
	return $of($alloc(SliderUI));
}

void SliderUI::init$() {
	$ComponentUI::init$();
}

SliderUI::SliderUI() {
}

$Class* SliderUI::load$($String* name, bool initialize) {
	$loadClass(SliderUI, name, initialize, &_SliderUI_ClassInfo_, allocate$SliderUI);
	return class$;
}

$Class* SliderUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax