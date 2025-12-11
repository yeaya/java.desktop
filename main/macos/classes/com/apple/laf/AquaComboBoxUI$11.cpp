#include <com/apple/laf/AquaComboBoxUI$11.h>

#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$11_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$11, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$11_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$11::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$11::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$11_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$11_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$11",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaComboBoxUI$11_FieldInfo_,
	_AquaComboBoxUI$11_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$11_EnclosingMethodInfo_,
	_AquaComboBoxUI$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$11($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$11));
}

void AquaComboBoxUI$11::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaComboBoxUI$11::actionPerformed($ActionEvent* e) {
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	$nc(comboBox)->firePopupMenuCanceled();
	comboBox->setPopupVisible(false);
}

bool AquaComboBoxUI$11::isEnabled() {
	bool var$0 = $nc($($AquaComboBoxUI::access$6600(this->this$0)))->isPopupVisible();
	return var$0 && $AbstractAction::isEnabled();
}

AquaComboBoxUI$11::AquaComboBoxUI$11() {
}

$Class* AquaComboBoxUI$11::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$11, name, initialize, &_AquaComboBoxUI$11_ClassInfo_, allocate$AquaComboBoxUI$11);
	return class$;
}

$Class* AquaComboBoxUI$11::class$ = nullptr;

		} // laf
	} // apple
} // com