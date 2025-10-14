#include <javax/swing/plaf/ScrollBarUI.h>

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

$MethodInfo _ScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ScrollBarUI::*)()>(&ScrollBarUI::init$))},
	{}
};

$ClassInfo _ScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ScrollBarUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ScrollBarUI_MethodInfo_
};

$Object* allocate$ScrollBarUI($Class* clazz) {
	return $of($alloc(ScrollBarUI));
}

void ScrollBarUI::init$() {
	$ComponentUI::init$();
}

ScrollBarUI::ScrollBarUI() {
}

$Class* ScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(ScrollBarUI, name, initialize, &_ScrollBarUI_ClassInfo_, allocate$ScrollBarUI);
	return class$;
}

$Class* ScrollBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax