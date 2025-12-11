#include <com/apple/laf/AquaFileChooserUI$DefaultButtonAction.h>

#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DefaultButtonAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DefaultButtonAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$DefaultButtonAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$DefaultButtonAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$DefaultButtonAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DefaultButtonAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DefaultButtonAction", "com.apple.laf.AquaFileChooserUI", "DefaultButtonAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$DefaultButtonAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DefaultButtonAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$DefaultButtonAction_FieldInfo_,
	_AquaFileChooserUI$DefaultButtonAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DefaultButtonAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DefaultButtonAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DefaultButtonAction));
}

void AquaFileChooserUI$DefaultButtonAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$DefaultButtonAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, root, $nc($(this->this$0->getFileChooser()))->getRootPane());
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($JButton, owner, $nc(root)->getDefaultButton());
	bool var$0 = owner != nullptr && $SwingUtilities::getRootPane(owner) == root;
	if (var$0 && owner->isEnabled()) {
		owner->doClick(20);
	} else if (!$nc(fc)->getControlButtonsAreShown()) {
		$var($JButton, defaultButton, $nc(this->this$0->fSubPanel)->getDefaultButton(fc));
		if (defaultButton != nullptr) {
			defaultButton->doClick(20);
		}
	} else {
		$nc($($Toolkit::getDefaultToolkit()))->beep();
	}
}

bool AquaFileChooserUI$DefaultButtonAction::isEnabled() {
	return true;
}

AquaFileChooserUI$DefaultButtonAction::AquaFileChooserUI$DefaultButtonAction() {
}

$Class* AquaFileChooserUI$DefaultButtonAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DefaultButtonAction, name, initialize, &_AquaFileChooserUI$DefaultButtonAction_ClassInfo_, allocate$AquaFileChooserUI$DefaultButtonAction);
	return class$;
}

$Class* AquaFileChooserUI$DefaultButtonAction::class$ = nullptr;

		} // laf
	} // apple
} // com