#include <javax/swing/plaf/ScrollPaneUI.h>

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

$MethodInfo _ScrollPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ScrollPaneUI::*)()>(&ScrollPaneUI::init$))},
	{}
};

$ClassInfo _ScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ScrollPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ScrollPaneUI_MethodInfo_
};

$Object* allocate$ScrollPaneUI($Class* clazz) {
	return $of($alloc(ScrollPaneUI));
}

void ScrollPaneUI::init$() {
	$ComponentUI::init$();
}

ScrollPaneUI::ScrollPaneUI() {
}

$Class* ScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneUI, name, initialize, &_ScrollPaneUI_ClassInfo_, allocate$ScrollPaneUI);
	return class$;
}

$Class* ScrollPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax