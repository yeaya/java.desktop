#include <javax/swing/plaf/RootPaneUI.h>

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

$MethodInfo _RootPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RootPaneUI::*)()>(&RootPaneUI::init$))},
	{}
};

$ClassInfo _RootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.RootPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_RootPaneUI_MethodInfo_
};

$Object* allocate$RootPaneUI($Class* clazz) {
	return $of($alloc(RootPaneUI));
}

void RootPaneUI::init$() {
	$ComponentUI::init$();
}

RootPaneUI::RootPaneUI() {
}

$Class* RootPaneUI::load$($String* name, bool initialize) {
	$loadClass(RootPaneUI, name, initialize, &_RootPaneUI_ClassInfo_, allocate$RootPaneUI);
	return class$;
}

$Class* RootPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax