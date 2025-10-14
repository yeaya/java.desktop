#include <javax/swing/plaf/SpinnerUI.h>

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

$MethodInfo _SpinnerUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SpinnerUI::*)()>(&SpinnerUI::init$))},
	{}
};

$ClassInfo _SpinnerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.SpinnerUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_SpinnerUI_MethodInfo_
};

$Object* allocate$SpinnerUI($Class* clazz) {
	return $of($alloc(SpinnerUI));
}

void SpinnerUI::init$() {
	$ComponentUI::init$();
}

SpinnerUI::SpinnerUI() {
}

$Class* SpinnerUI::load$($String* name, bool initialize) {
	$loadClass(SpinnerUI, name, initialize, &_SpinnerUI_ClassInfo_, allocate$SpinnerUI);
	return class$;
}

$Class* SpinnerUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax