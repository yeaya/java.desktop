#include <com/apple/laf/AquaComboBoxUI$10.h>

#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaComboBoxUI$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$10::*)()>(&AquaComboBoxUI$10::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$10_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$10_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$10_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$10",
	"javax.swing.AbstractAction",
	nullptr,
	nullptr,
	_AquaComboBoxUI$10_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$10_EnclosingMethodInfo_,
	_AquaComboBoxUI$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$10($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$10));
}

void AquaComboBoxUI$10::init$() {
	$AbstractAction::init$();
}

void AquaComboBoxUI$10::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	if (!$nc(comboBox)->isEnabled()) {
		return;
	}
	if ($nc(comboBox)->isEditable()) {
		return;
	}
	$var($AquaComboBoxUI, aquaUi, $cast($AquaComboBoxUI, $cast($ComboBoxUI, $nc(comboBox)->getUI())));
	if (comboBox->isPopupVisible()) {
		comboBox->setSelectedIndex($nc($($nc($($nc(aquaUi)->getPopup()))->getList()))->getSelectedIndex());
		comboBox->setPopupVisible(false);
		return;
	}
	comboBox->setPopupVisible(true);
}

AquaComboBoxUI$10::AquaComboBoxUI$10() {
}

$Class* AquaComboBoxUI$10::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$10, name, initialize, &_AquaComboBoxUI$10_ClassInfo_, allocate$AquaComboBoxUI$10);
	return class$;
}

$Class* AquaComboBoxUI$10::class$ = nullptr;

		} // laf
	} // apple
} // com