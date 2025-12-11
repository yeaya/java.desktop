#include <com/apple/laf/AquaFileChooserUI$SaveFilePanel.h>

#include <com/apple/laf/AquaFileChooserUI$CustomFilePanel.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$CustomFilePanel = ::com::apple::laf::AquaFileChooserUI$CustomFilePanel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JPanel = ::javax::swing::JPanel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$SaveFilePanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SaveFilePanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$SaveFilePanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$SaveFilePanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$SaveFilePanel::init$))},
	{"approveSelection", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getCancelButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0},
	{"isSelectableInList", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$SaveFilePanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$SaveFilePanel", "com.apple.laf.AquaFileChooserUI", "SaveFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$CustomFilePanel", "com.apple.laf.AquaFileChooserUI", "CustomFilePanel", 0},
	{}
};

$ClassInfo _AquaFileChooserUI$SaveFilePanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$SaveFilePanel",
	"com.apple.laf.AquaFileChooserUI$CustomFilePanel",
	nullptr,
	_AquaFileChooserUI$SaveFilePanel_FieldInfo_,
	_AquaFileChooserUI$SaveFilePanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$SaveFilePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$SaveFilePanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$SaveFilePanel));
}

void AquaFileChooserUI$SaveFilePanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$CustomFilePanel::init$(this$0);
}

void AquaFileChooserUI$SaveFilePanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$nc(this->this$0->fTextfieldPanel)->setVisible(true);
	$nc(this->this$0->fOpenButton)->setVisible(false);
	$nc(this->this$0->fNewFolderButton)->setVisible(true);
}

bool AquaFileChooserUI$SaveFilePanel::isSelectableInList($JFileChooser* fc, $File* f) {
	bool var$0 = $nc(fc)->accept(f);
	return var$0 && fc->isTraversable(f);
}

void AquaFileChooserUI$SaveFilePanel::approveSelection($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, this->this$0->makeFile(fc, $(this->this$0->getFileName())));
	if (f != nullptr) {
		this->this$0->selectionInProgress = true;
		$nc($(this->this$0->getFileChooser()))->setSelectedFile(f);
		this->this$0->selectionInProgress = false;
		$nc($(this->this$0->getFileChooser()))->approveSelection();
	}
}

void AquaFileChooserUI$SaveFilePanel::updateButtonState($JFileChooser* fc, $File* f) {
	bool enabled = this->this$0->textfieldIsValid();
	$nc($(this->this$0->getApproveButton(fc)))->setEnabled(enabled);
}

$String* AquaFileChooserUI$SaveFilePanel::getApproveButtonText($JFileChooser* fc) {
	return this->getApproveButtonText(fc, this->this$0->saveButtonText);
}

int32_t AquaFileChooserUI$SaveFilePanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return this->this$0->saveButtonMnemonic;
}

$String* AquaFileChooserUI$SaveFilePanel::getApproveButtonToolTipText($JFileChooser* fc) {
	if (inOpenDirectoryMode(fc, $(this->this$0->getFirstSelectedItem()))) {
		return this->this$0->openDirectoryButtonToolTipText;
	}
	return this->getApproveButtonToolTipText(fc, this->this$0->saveButtonToolTipText);
}

$String* AquaFileChooserUI$SaveFilePanel::getCancelButtonToolTipText($JFileChooser* fc) {
	return this->this$0->cancelSaveButtonToolTipText;
}

AquaFileChooserUI$SaveFilePanel::AquaFileChooserUI$SaveFilePanel() {
}

$Class* AquaFileChooserUI$SaveFilePanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$SaveFilePanel, name, initialize, &_AquaFileChooserUI$SaveFilePanel_ClassInfo_, allocate$AquaFileChooserUI$SaveFilePanel);
	return class$;
}

$Class* AquaFileChooserUI$SaveFilePanel::class$ = nullptr;

		} // laf
	} // apple
} // com