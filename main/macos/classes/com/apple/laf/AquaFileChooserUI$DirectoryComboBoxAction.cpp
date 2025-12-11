#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxAction.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DirectoryComboBoxAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DirectoryComboBoxAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$DirectoryComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$DirectoryComboBoxAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$DirectoryComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction", "com.apple.laf.AquaFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$DirectoryComboBoxAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$DirectoryComboBoxAction_FieldInfo_,
	_AquaFileChooserUI$DirectoryComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DirectoryComboBoxAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DirectoryComboBoxAction));
}

void AquaFileChooserUI$DirectoryComboBoxAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void AquaFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc($(this->this$0->getFileChooser()))->setCurrentDirectory($cast($File, $($nc(this->this$0->directoryComboBox)->getSelectedItem())));
}

AquaFileChooserUI$DirectoryComboBoxAction::AquaFileChooserUI$DirectoryComboBoxAction() {
}

$Class* AquaFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DirectoryComboBoxAction, name, initialize, &_AquaFileChooserUI$DirectoryComboBoxAction_ClassInfo_, allocate$AquaFileChooserUI$DirectoryComboBoxAction);
	return class$;
}

$Class* AquaFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

		} // laf
	} // apple
} // com