#include <com/apple/laf/AquaFileChooserUI$CancelSelectionAction.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$CancelSelectionAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$CancelSelectionAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$CancelSelectionAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$CancelSelectionAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$CancelSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$CancelSelectionAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$CancelSelectionAction", "com.apple.laf.AquaFileChooserUI", "CancelSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$CancelSelectionAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$CancelSelectionAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$CancelSelectionAction_FieldInfo_,
	_AquaFileChooserUI$CancelSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$CancelSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$CancelSelectionAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$CancelSelectionAction));
}

void AquaFileChooserUI$CancelSelectionAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$CancelSelectionAction::actionPerformed($ActionEvent* e) {
	$nc($(this->this$0->getFileChooser()))->cancelSelection();
}

bool AquaFileChooserUI$CancelSelectionAction::isEnabled() {
	return $nc($(this->this$0->getFileChooser()))->isEnabled();
}

AquaFileChooserUI$CancelSelectionAction::AquaFileChooserUI$CancelSelectionAction() {
}

$Class* AquaFileChooserUI$CancelSelectionAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$CancelSelectionAction, name, initialize, &_AquaFileChooserUI$CancelSelectionAction_ClassInfo_, allocate$AquaFileChooserUI$CancelSelectionAction);
	return class$;
}

$Class* AquaFileChooserUI$CancelSelectionAction::class$ = nullptr;

		} // laf
	} // apple
} // com