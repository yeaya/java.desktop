#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>

#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$ComboBoxAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$ComboBoxAction, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$ComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, $PRIVATE, $method(static_cast<void(AquaComboBoxUI$ComboBoxAction::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$ComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _AquaComboBoxUI$ComboBoxAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$ComboBoxAction_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaComboBoxUI$ComboBoxAction_FieldInfo_,
	_AquaComboBoxUI$ComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxUI$ComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$ComboBoxAction($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$ComboBoxAction));
}

void AquaComboBoxUI$ComboBoxAction::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaComboBoxUI$ComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc($($AquaComboBoxUI::access$1900(this->this$0)))->isEnabled();
	if (var$0 || !$nc($($AquaComboBoxUI::access$2000(this->this$0)))->isShowing()) {
		return;
	}
	if ($nc($($AquaComboBoxUI::access$2100(this->this$0)))->isPopupVisible()) {
		$var($AquaComboBoxUI, ui, $cast($AquaComboBoxUI, $cast($ComboBoxUI, $nc($($AquaComboBoxUI::access$2200(this->this$0)))->getUI())));
		performComboBoxAction(ui);
	} else {
		$nc($($AquaComboBoxUI::access$2300(this->this$0)))->setPopupVisible(true);
	}
}

AquaComboBoxUI$ComboBoxAction::AquaComboBoxUI$ComboBoxAction() {
}

$Class* AquaComboBoxUI$ComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$ComboBoxAction, name, initialize, &_AquaComboBoxUI$ComboBoxAction_ClassInfo_, allocate$AquaComboBoxUI$ComboBoxAction);
	return class$;
}

$Class* AquaComboBoxUI$ComboBoxAction::class$ = nullptr;

		} // laf
	} // apple
} // com