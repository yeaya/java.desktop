#include <javax/swing/plaf/DesktopIconUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _DesktopIconUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DesktopIconUI::*)()>(&DesktopIconUI::init$))},
	{}
};

$ClassInfo _DesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.DesktopIconUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_DesktopIconUI_MethodInfo_
};

$Object* allocate$DesktopIconUI($Class* clazz) {
	return $of($alloc(DesktopIconUI));
}

void DesktopIconUI::init$() {
	$ComponentUI::init$();
}

DesktopIconUI::DesktopIconUI() {
}

$Class* DesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(DesktopIconUI, name, initialize, &_DesktopIconUI_ClassInfo_, allocate$DesktopIconUI);
	return class$;
}

$Class* DesktopIconUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax