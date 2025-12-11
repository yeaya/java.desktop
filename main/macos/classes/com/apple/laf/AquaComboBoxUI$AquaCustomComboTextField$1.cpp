#include <com/apple/laf/AquaComboBoxUI$AquaCustomComboTextField$1.h>

#include <com/apple/laf/AquaComboBoxUI$AquaCustomComboTextField.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$AquaCustomComboTextField = ::com::apple::laf::AquaComboBoxUI$AquaCustomComboTextField;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$AquaCustomComboTextField$1_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaComboBoxUI$AquaCustomComboTextField;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaCustomComboTextField$1, this$1)},
	{"val$action", "Ljavax/swing/Action;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaCustomComboTextField$1, val$action)},
	{"val$this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaCustomComboTextField$1, val$this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$AquaCustomComboTextField$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$AquaCustomComboTextField;Lcom/apple/laf/AquaComboBoxUI;Ljavax/swing/Action;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$AquaCustomComboTextField$1::*)($AquaComboBoxUI$AquaCustomComboTextField*,$AquaComboBoxUI*,$Action*)>(&AquaComboBoxUI$AquaCustomComboTextField$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$AquaCustomComboTextField$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField",
	"<init>",
	"(Lcom/apple/laf/AquaComboBoxUI;)V"
};

$InnerClassInfo _AquaComboBoxUI$AquaCustomComboTextField$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField", "com.apple.laf.AquaComboBoxUI", "AquaCustomComboTextField", 0},
	{"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$AquaCustomComboTextField$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField$1",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaComboBoxUI$AquaCustomComboTextField$1_FieldInfo_,
	_AquaComboBoxUI$AquaCustomComboTextField$1_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$AquaCustomComboTextField$1_EnclosingMethodInfo_,
	_AquaComboBoxUI$AquaCustomComboTextField$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$AquaCustomComboTextField$1($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$AquaCustomComboTextField$1));
}

void AquaComboBoxUI$AquaCustomComboTextField$1::init$($AquaComboBoxUI$AquaCustomComboTextField* this$1, $AquaComboBoxUI* val$this$0, $Action* val$action) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$action, val$action);
	$AbstractAction::init$();
}

void AquaComboBoxUI$AquaCustomComboTextField$1::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($AquaComboBoxUI::access$700(this->this$1->this$0)))->isVisible()) {
		$AquaComboBoxUI::triggerSelectionEvent($($AquaComboBoxUI::access$800(this->this$1->this$0)), e);
		if ($instanceOf($AquaComboBoxUI$AquaCustomComboTextField, $($AquaComboBoxUI::access$900(this->this$1->this$0)))) {
			$nc(($cast($AquaComboBoxUI$AquaCustomComboTextField, $($AquaComboBoxUI::access$1000(this->this$1->this$0)))))->selectAll();
		}
	} else {
		$nc(this->val$action)->actionPerformed(e);
	}
}

AquaComboBoxUI$AquaCustomComboTextField$1::AquaComboBoxUI$AquaCustomComboTextField$1() {
}

$Class* AquaComboBoxUI$AquaCustomComboTextField$1::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$AquaCustomComboTextField$1, name, initialize, &_AquaComboBoxUI$AquaCustomComboTextField$1_ClassInfo_, allocate$AquaComboBoxUI$AquaCustomComboTextField$1);
	return class$;
}

$Class* AquaComboBoxUI$AquaCustomComboTextField$1::class$ = nullptr;

		} // laf
	} // apple
} // com