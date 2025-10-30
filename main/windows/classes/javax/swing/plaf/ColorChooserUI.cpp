#include <javax/swing/plaf/ColorChooserUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ColorChooserUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ColorChooserUI::*)()>(&ColorChooserUI::init$))},
	{}
};

$ClassInfo _ColorChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ColorChooserUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ColorChooserUI_MethodInfo_
};

$Object* allocate$ColorChooserUI($Class* clazz) {
	return $of($alloc(ColorChooserUI));
}

void ColorChooserUI::init$() {
	$ComponentUI::init$();
}

ColorChooserUI::ColorChooserUI() {
}

$Class* ColorChooserUI::load$($String* name, bool initialize) {
	$loadClass(ColorChooserUI, name, initialize, &_ColorChooserUI_ClassInfo_, allocate$ColorChooserUI);
	return class$;
}

$Class* ColorChooserUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax