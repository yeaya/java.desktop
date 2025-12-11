#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DIRECTORIES_ONLY

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$FCSubpanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FCSubpanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$FCSubpanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$FCSubpanel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$FCSubpanel::init$))},
	{"approveSelection", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getCancelButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0},
	{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, 0},
	{"getFocusComponent", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JComponent;", nullptr, 0},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, $ABSTRACT},
	{"isSelectableInList", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _AquaFileChooserUI$FCSubpanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileChooserUI$FCSubpanel_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaFileChooserUI$FCSubpanel",
	"java.lang.Object",
	nullptr,
	_AquaFileChooserUI$FCSubpanel_FieldInfo_,
	_AquaFileChooserUI$FCSubpanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$FCSubpanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$FCSubpanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$FCSubpanel));
}

void AquaFileChooserUI$FCSubpanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

bool AquaFileChooserUI$FCSubpanel::isSelectableInList($JFileChooser* fc, $File* f) {
	if (f == nullptr) {
		return false;
	}
	if ($nc(fc)->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		return fc->isTraversable(f);
	}
	return $nc(fc)->accept(f);
}

void AquaFileChooserUI$FCSubpanel::approveSelection($JFileChooser* fc) {
	$nc(fc)->approveSelection();
}

$JButton* AquaFileChooserUI$FCSubpanel::getDefaultButton($JFileChooser* fc) {
	return this->this$0->fApproveButton;
}

$JComponent* AquaFileChooserUI$FCSubpanel::getFocusComponent($JFileChooser* fc) {
	return this->this$0->filenameTextField;
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonText($JFileChooser* fc) {
	return this->getApproveButtonText(fc, this->this$0->chooseButtonText);
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonText($JFileChooser* fc, $String* fallbackText) {
	$var($String, buttonText, $nc(fc)->getApproveButtonText());
	return buttonText != nullptr ? buttonText : fallbackText;
}

int32_t AquaFileChooserUI$FCSubpanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return $nc(fc)->getApproveButtonMnemonic();
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText($JFileChooser* fc) {
	return getApproveButtonToolTipText(fc, nullptr);
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText($JFileChooser* fc, $String* fallbackText) {
	$var($String, tooltipText, $nc(fc)->getApproveButtonToolTipText());
	return tooltipText != nullptr ? tooltipText : fallbackText;
}

$String* AquaFileChooserUI$FCSubpanel::getCancelButtonToolTipText($JFileChooser* fc) {
	return this->this$0->cancelChooseButtonToolTipText;
}

AquaFileChooserUI$FCSubpanel::AquaFileChooserUI$FCSubpanel() {
}

$Class* AquaFileChooserUI$FCSubpanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$FCSubpanel, name, initialize, &_AquaFileChooserUI$FCSubpanel_ClassInfo_, allocate$AquaFileChooserUI$FCSubpanel);
	return class$;
}

$Class* AquaFileChooserUI$FCSubpanel::class$ = nullptr;

		} // laf
	} // apple
} // com