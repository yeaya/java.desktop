#include <com/apple/laf/AquaComboBoxUI$9.h>

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

$FieldInfo _AquaComboBoxUI$9_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$9, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$9_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$9::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$9::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$9_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$9_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$9",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaComboBoxUI$9_FieldInfo_,
	_AquaComboBoxUI$9_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$9_EnclosingMethodInfo_,
	_AquaComboBoxUI$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$9($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$9));
}

void AquaComboBoxUI$9::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaComboBoxUI$9::actionPerformed($ActionEvent* e) {
	$AquaComboBoxUI::triggerSelectionEvent($cast($JComboBox, $($nc(e)->getSource())), e);
}

bool AquaComboBoxUI$9::isEnabled() {
	bool var$0 = $nc($($AquaComboBoxUI::access$6500(this->this$0)))->isPopupVisible();
	return var$0 && $AbstractAction::isEnabled();
}

AquaComboBoxUI$9::AquaComboBoxUI$9() {
}

$Class* AquaComboBoxUI$9::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$9, name, initialize, &_AquaComboBoxUI$9_ClassInfo_, allocate$AquaComboBoxUI$9);
	return class$;
}

$Class* AquaComboBoxUI$9::class$ = nullptr;

		} // laf
	} // apple
} // com