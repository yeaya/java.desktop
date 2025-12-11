#include <com/apple/laf/AquaFileChooserUI$OpenSelectionAction.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$OpenSelectionAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$OpenSelectionAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$OpenSelectionAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$OpenSelectionAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$OpenSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$OpenSelectionAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$OpenSelectionAction", "com.apple.laf.AquaFileChooserUI", "OpenSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$OpenSelectionAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$OpenSelectionAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$OpenSelectionAction_FieldInfo_,
	_AquaFileChooserUI$OpenSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$OpenSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$OpenSelectionAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$OpenSelectionAction));
}

void AquaFileChooserUI$OpenSelectionAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$OpenSelectionAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(this->this$0->fFileList)->getSelectedRow();
	if (index >= 0) {
		$var($File, selectedFile, $cast($File, $nc(($cast($AquaFileSystemModel, $($nc(this->this$0->fFileList)->getModel()))))->getElementAt(index)));
		if (selectedFile != nullptr) {
			this->this$0->openDirectory(selectedFile);
		}
	}
}

AquaFileChooserUI$OpenSelectionAction::AquaFileChooserUI$OpenSelectionAction() {
}

$Class* AquaFileChooserUI$OpenSelectionAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$OpenSelectionAction, name, initialize, &_AquaFileChooserUI$OpenSelectionAction_ClassInfo_, allocate$AquaFileChooserUI$OpenSelectionAction);
	return class$;
}

$Class* AquaFileChooserUI$OpenSelectionAction::class$ = nullptr;

		} // laf
	} // apple
} // com