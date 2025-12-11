#include <com/apple/laf/AquaFileChooserUI$ApproveSelectionAction.h>

#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$ApproveSelectionAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$ApproveSelectionAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$ApproveSelectionAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$ApproveSelectionAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$ApproveSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$ApproveSelectionAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$ApproveSelectionAction", "com.apple.laf.AquaFileChooserUI", "ApproveSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$ApproveSelectionAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$ApproveSelectionAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$ApproveSelectionAction_FieldInfo_,
	_AquaFileChooserUI$ApproveSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$ApproveSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$ApproveSelectionAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$ApproveSelectionAction));
}

void AquaFileChooserUI$ApproveSelectionAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$ApproveSelectionAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->fSubPanel)->approveSelection($(this->this$0->getFileChooser()));
}

AquaFileChooserUI$ApproveSelectionAction::AquaFileChooserUI$ApproveSelectionAction() {
}

$Class* AquaFileChooserUI$ApproveSelectionAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$ApproveSelectionAction, name, initialize, &_AquaFileChooserUI$ApproveSelectionAction_ClassInfo_, allocate$AquaFileChooserUI$ApproveSelectionAction);
	return class$;
}

$Class* AquaFileChooserUI$ApproveSelectionAction::class$ = nullptr;

		} // laf
	} // apple
} // com