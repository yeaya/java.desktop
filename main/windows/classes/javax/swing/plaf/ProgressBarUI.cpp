#include <javax/swing/plaf/ProgressBarUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ProgressBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ProgressBarUI::*)()>(&ProgressBarUI::init$))},
	{}
};

$ClassInfo _ProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ProgressBarUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ProgressBarUI_MethodInfo_
};

$Object* allocate$ProgressBarUI($Class* clazz) {
	return $of($alloc(ProgressBarUI));
}

void ProgressBarUI::init$() {
	$ComponentUI::init$();
}

ProgressBarUI::ProgressBarUI() {
}

$Class* ProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(ProgressBarUI, name, initialize, &_ProgressBarUI_ClassInfo_, allocate$ProgressBarUI);
	return class$;
}

$Class* ProgressBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax