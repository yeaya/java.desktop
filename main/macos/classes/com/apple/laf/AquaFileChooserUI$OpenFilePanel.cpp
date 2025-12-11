#include <com/apple/laf/AquaFileChooserUI$OpenFilePanel.h>

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

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
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

$FieldInfo _AquaFileChooserUI$OpenFilePanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$OpenFilePanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$OpenFilePanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$OpenFilePanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$OpenFilePanel::init$))},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getCancelButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getFocusComponent", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JComponent;", nullptr, 0},
	{"inOpenDirectoryMode", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0},
	{"isSelectableInList", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$OpenFilePanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$OpenFilePanel", "com.apple.laf.AquaFileChooserUI", "OpenFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileChooserUI$OpenFilePanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$OpenFilePanel",
	"com.apple.laf.AquaFileChooserUI$FCSubpanel",
	nullptr,
	_AquaFileChooserUI$OpenFilePanel_FieldInfo_,
	_AquaFileChooserUI$OpenFilePanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$OpenFilePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$OpenFilePanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$OpenFilePanel));
}

void AquaFileChooserUI$OpenFilePanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$FCSubpanel::init$(this$0);
}

void AquaFileChooserUI$OpenFilePanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$nc(this->this$0->fTextfieldPanel)->setVisible(false);
	$nc(this->this$0->fOpenButton)->setVisible(false);
	$nc(this->this$0->fNewFolderButton)->setVisible(false);
	this->this$0->setDefaultButtonForMode(fc);
}

bool AquaFileChooserUI$OpenFilePanel::inOpenDirectoryMode($JFileChooser* fc, $File* f) {
	return (f != nullptr && $nc(fc)->isTraversable(f));
}

$JComponent* AquaFileChooserUI$OpenFilePanel::getFocusComponent($JFileChooser* fc) {
	return this->this$0->fFileList;
}

void AquaFileChooserUI$OpenFilePanel::updateButtonState($JFileChooser* fc, $File* f) {
	bool enabled = (f != nullptr) && !$nc(fc)->isTraversable(f);
	$nc($(this->this$0->getApproveButton(fc)))->setEnabled(enabled);
}

bool AquaFileChooserUI$OpenFilePanel::isSelectableInList($JFileChooser* fc, $File* f) {
	return f != nullptr && $nc(fc)->accept(f);
}

$String* AquaFileChooserUI$OpenFilePanel::getApproveButtonText($JFileChooser* fc) {
	return this->getApproveButtonText(fc, this->this$0->openButtonText);
}

int32_t AquaFileChooserUI$OpenFilePanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return this->this$0->openButtonMnemonic;
}

$String* AquaFileChooserUI$OpenFilePanel::getApproveButtonToolTipText($JFileChooser* fc) {
	return this->getApproveButtonToolTipText(fc, this->this$0->openButtonToolTipText);
}

$String* AquaFileChooserUI$OpenFilePanel::getCancelButtonToolTipText($JFileChooser* fc) {
	return this->this$0->cancelOpenButtonToolTipText;
}

AquaFileChooserUI$OpenFilePanel::AquaFileChooserUI$OpenFilePanel() {
}

$Class* AquaFileChooserUI$OpenFilePanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$OpenFilePanel, name, initialize, &_AquaFileChooserUI$OpenFilePanel_ClassInfo_, allocate$AquaFileChooserUI$OpenFilePanel);
	return class$;
}

$Class* AquaFileChooserUI$OpenFilePanel::class$ = nullptr;

		} // laf
	} // apple
} // com