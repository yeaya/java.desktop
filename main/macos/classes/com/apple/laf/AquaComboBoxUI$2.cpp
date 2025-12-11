#include <com/apple/laf/AquaComboBoxUI$2.h>

#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$FocusHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$2, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$2::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$2::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	"createFocusListener",
	"()Ljava/awt/event/FocusListener;"
};

$InnerClassInfo _AquaComboBoxUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaComboBoxUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$2",
	"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler",
	nullptr,
	_AquaComboBoxUI$2_FieldInfo_,
	_AquaComboBoxUI$2_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$2_EnclosingMethodInfo_,
	_AquaComboBoxUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$2($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$2));
}

void AquaComboBoxUI$2::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$FocusHandler::init$(this$0);
}

void AquaComboBoxUI$2::focusGained($FocusEvent* e) {
	$BasicComboBoxUI$FocusHandler::focusGained(e);
	if ($AquaComboBoxUI::access$1100(this->this$0) != nullptr) {
		$nc($($AquaComboBoxUI::access$1200(this->this$0)))->repaint();
	}
}

void AquaComboBoxUI$2::focusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$AquaComboBoxUI::access$1302(this->this$0, false);
	if (!$nc(e)->isTemporary()) {
		this->this$0->setPopupVisible($($AquaComboBoxUI::access$1400(this->this$0)), false);
	}
	$nc($($AquaComboBoxUI::access$1500(this->this$0)))->repaint();
	$var($AccessibleContext, ac, $nc((static_cast<$Accessible*>($($AquaComboBoxUI::access$1600(this->this$0)))))->getAccessibleContext());
	if (ac != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		ac->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
	if ($AquaComboBoxUI::access$1700(this->this$0) != nullptr) {
		$nc($($AquaComboBoxUI::access$1800(this->this$0)))->repaint();
	}
}

AquaComboBoxUI$2::AquaComboBoxUI$2() {
}

$Class* AquaComboBoxUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$2, name, initialize, &_AquaComboBoxUI$2_ClassInfo_, allocate$AquaComboBoxUI$2);
	return class$;
}

$Class* AquaComboBoxUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com