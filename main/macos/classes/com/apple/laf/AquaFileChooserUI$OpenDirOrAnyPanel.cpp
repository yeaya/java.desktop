#include <com/apple/laf/AquaFileChooserUI$OpenDirOrAnyPanel.h>

#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef DIRECTORIES_ONLY

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JPanel = ::javax::swing::JPanel;
using $JTable = ::javax::swing::JTable;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$OpenDirOrAnyPanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$OpenDirOrAnyPanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$OpenDirOrAnyPanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$OpenDirOrAnyPanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$OpenDirOrAnyPanel::init$))},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getFocusComponent", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JComponent;", nullptr, 0},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$OpenDirOrAnyPanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "OpenDirOrAnyPanel", 0},
	{"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "DirOrAnyPanel", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileChooserUI$OpenDirOrAnyPanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel",
	"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel",
	nullptr,
	_AquaFileChooserUI$OpenDirOrAnyPanel_FieldInfo_,
	_AquaFileChooserUI$OpenDirOrAnyPanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$OpenDirOrAnyPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$OpenDirOrAnyPanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$OpenDirOrAnyPanel));
}

void AquaFileChooserUI$OpenDirOrAnyPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$DirOrAnyPanel::init$(this$0);
}

void AquaFileChooserUI$OpenDirOrAnyPanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$AquaFileChooserUI$DirOrAnyPanel::installPanel(fc, controlButtonsAreShown);
	$nc(this->this$0->fTextfieldPanel)->setVisible(false);
	$nc(this->this$0->fNewFolderButton)->setVisible(false);
}

$JComponent* AquaFileChooserUI$OpenDirOrAnyPanel::getFocusComponent($JFileChooser* fc) {
	return this->this$0->fFileList;
}

int32_t AquaFileChooserUI$OpenDirOrAnyPanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return this->this$0->chooseButtonMnemonic;
}

$String* AquaFileChooserUI$OpenDirOrAnyPanel::getApproveButtonToolTipText($JFileChooser* fc) {
	$var($String, fallbackText, nullptr);
	if ($nc(fc)->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$assign(fallbackText, this->this$0->chooseFolderButtonToolTipText);
	} else {
		$assign(fallbackText, this->this$0->chooseItemButtonToolTipText);
	}
	return this->getApproveButtonToolTipText(fc, fallbackText);
}

void AquaFileChooserUI$OpenDirOrAnyPanel::updateButtonState($JFileChooser* fc, $File* f) {
	$nc($(this->this$0->getApproveButton(fc)))->setEnabled(f != nullptr);
	$AquaFileChooserUI$DirOrAnyPanel::updateButtonState(fc, f);
}

AquaFileChooserUI$OpenDirOrAnyPanel::AquaFileChooserUI$OpenDirOrAnyPanel() {
}

$Class* AquaFileChooserUI$OpenDirOrAnyPanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$OpenDirOrAnyPanel, name, initialize, &_AquaFileChooserUI$OpenDirOrAnyPanel_ClassInfo_, allocate$AquaFileChooserUI$OpenDirOrAnyPanel);
	return class$;
}

$Class* AquaFileChooserUI$OpenDirOrAnyPanel::class$ = nullptr;

		} // laf
	} // apple
} // com