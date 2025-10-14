#include <javax/swing/plaf/OptionPaneUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _OptionPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(OptionPaneUI::*)()>(&OptionPaneUI::init$))},
	{"containsCustomComponents", "(Ljavax/swing/JOptionPane;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"selectInitialValue", "(Ljavax/swing/JOptionPane;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OptionPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.OptionPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_OptionPaneUI_MethodInfo_
};

$Object* allocate$OptionPaneUI($Class* clazz) {
	return $of($alloc(OptionPaneUI));
}

void OptionPaneUI::init$() {
	$ComponentUI::init$();
}

OptionPaneUI::OptionPaneUI() {
}

$Class* OptionPaneUI::load$($String* name, bool initialize) {
	$loadClass(OptionPaneUI, name, initialize, &_OptionPaneUI_ClassInfo_, allocate$OptionPaneUI);
	return class$;
}

$Class* OptionPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax