#include <com/apple/laf/AquaFileChooserUI$CustomFilePanel.h>

#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
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

$FieldInfo _AquaFileChooserUI$CustomFilePanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$CustomFilePanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$CustomFilePanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$CustomFilePanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$CustomFilePanel::init$))},
	{"approveSelection", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"inOpenDirectoryMode", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0},
	{"isSelectableInList", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$CustomFilePanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$CustomFilePanel", "com.apple.laf.AquaFileChooserUI", "CustomFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileChooserUI$CustomFilePanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$CustomFilePanel",
	"com.apple.laf.AquaFileChooserUI$FCSubpanel",
	nullptr,
	_AquaFileChooserUI$CustomFilePanel_FieldInfo_,
	_AquaFileChooserUI$CustomFilePanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$CustomFilePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$CustomFilePanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$CustomFilePanel));
}

void AquaFileChooserUI$CustomFilePanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$FCSubpanel::init$(this$0);
}

void AquaFileChooserUI$CustomFilePanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$nc(this->this$0->fTextfieldPanel)->setVisible(true);
	$nc(this->this$0->fOpenButton)->setVisible(false);
	$nc(this->this$0->fNewFolderButton)->setVisible(true);
}

bool AquaFileChooserUI$CustomFilePanel::inOpenDirectoryMode($JFileChooser* fc, $File* f) {
	bool selectionIsDirectory = (f != nullptr && $nc(fc)->isTraversable(f));
	if ($nc(this->this$0->fFileList)->hasFocus()) {
		return selectionIsDirectory;
	} else if (this->this$0->textfieldIsValid()) {
		return false;
	}
	return selectionIsDirectory;
}

void AquaFileChooserUI$CustomFilePanel::approveSelection($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, this->this$0->getFirstSelectedItem());
	if (inOpenDirectoryMode(fc, f)) {
		this->this$0->openDirectory(f);
	} else {
		$assign(f, this->this$0->makeFile(fc, $(this->this$0->getFileName())));
		if (f != nullptr) {
			this->this$0->selectionInProgress = true;
			$nc($(this->this$0->getFileChooser()))->setSelectedFile(f);
			this->this$0->selectionInProgress = false;
		}
		$nc($(this->this$0->getFileChooser()))->approveSelection();
	}
}

void AquaFileChooserUI$CustomFilePanel::updateButtonState($JFileChooser* fc, $File* f) {
	bool enabled = true;
	if (!inOpenDirectoryMode(fc, f)) {
		enabled = (f != nullptr) || this->this$0->textfieldIsValid();
	}
	$nc($(this->this$0->getApproveButton(fc)))->setEnabled(enabled);
	$nc(this->this$0->fOpenButton)->setEnabled(f != nullptr && $nc(fc)->isTraversable(f));
	this->this$0->setDefaultButtonForMode(fc);
}

bool AquaFileChooserUI$CustomFilePanel::isSelectableInList($JFileChooser* fc, $File* f) {
	if (f == nullptr) {
		return false;
	}
	return $nc(fc)->accept(f);
}

$String* AquaFileChooserUI$CustomFilePanel::getApproveButtonToolTipText($JFileChooser* fc) {
	if (inOpenDirectoryMode(fc, $(this->this$0->getFirstSelectedItem()))) {
		return this->this$0->openDirectoryButtonToolTipText;
	}
	return $AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText(fc);
}

AquaFileChooserUI$CustomFilePanel::AquaFileChooserUI$CustomFilePanel() {
}

$Class* AquaFileChooserUI$CustomFilePanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$CustomFilePanel, name, initialize, &_AquaFileChooserUI$CustomFilePanel_ClassInfo_, allocate$AquaFileChooserUI$CustomFilePanel);
	return class$;
}

$Class* AquaFileChooserUI$CustomFilePanel::class$ = nullptr;

		} // laf
	} // apple
} // com