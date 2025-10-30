#include <javax/swing/plaf/InternalFrameUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _InternalFrameUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(InternalFrameUI::*)()>(&InternalFrameUI::init$))},
	{}
};

$ClassInfo _InternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.InternalFrameUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_InternalFrameUI_MethodInfo_
};

$Object* allocate$InternalFrameUI($Class* clazz) {
	return $of($alloc(InternalFrameUI));
}

void InternalFrameUI::init$() {
	$ComponentUI::init$();
}

InternalFrameUI::InternalFrameUI() {
}

$Class* InternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(InternalFrameUI, name, initialize, &_InternalFrameUI_ClassInfo_, allocate$InternalFrameUI);
	return class$;
}

$Class* InternalFrameUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax