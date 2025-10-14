#include <javax/swing/plaf/DesktopPaneUI.h>

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

$MethodInfo _DesktopPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DesktopPaneUI::*)()>(&DesktopPaneUI::init$))},
	{}
};

$ClassInfo _DesktopPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.DesktopPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_DesktopPaneUI_MethodInfo_
};

$Object* allocate$DesktopPaneUI($Class* clazz) {
	return $of($alloc(DesktopPaneUI));
}

void DesktopPaneUI::init$() {
	$ComponentUI::init$();
}

DesktopPaneUI::DesktopPaneUI() {
}

$Class* DesktopPaneUI::load$($String* name, bool initialize) {
	$loadClass(DesktopPaneUI, name, initialize, &_DesktopPaneUI_ClassInfo_, allocate$DesktopPaneUI);
	return class$;
}

$Class* DesktopPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax