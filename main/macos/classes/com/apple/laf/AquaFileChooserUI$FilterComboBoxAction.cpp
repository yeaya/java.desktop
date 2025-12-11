#include <com/apple/laf/AquaFileChooserUI$FilterComboBoxAction.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$FilterComboBoxAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FilterComboBoxAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$FilterComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$FilterComboBoxAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$FilterComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$FilterComboBoxAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$FilterComboBoxAction", "com.apple.laf.AquaFileChooserUI", "FilterComboBoxAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$FilterComboBoxAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$FilterComboBoxAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$FilterComboBoxAction_FieldInfo_,
	_AquaFileChooserUI$FilterComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$FilterComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$FilterComboBoxAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$FilterComboBoxAction));
}

void AquaFileChooserUI$FilterComboBoxAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("FilterComboBoxAction"_s);
}

void AquaFileChooserUI$FilterComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, selectedFilter, $nc(this->this$0->filterComboBox)->getSelectedItem());
	if (!this->this$0->containsFileFilter(selectedFilter)) {
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, selectedFilter));
	}
}

AquaFileChooserUI$FilterComboBoxAction::AquaFileChooserUI$FilterComboBoxAction() {
}

$Class* AquaFileChooserUI$FilterComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$FilterComboBoxAction, name, initialize, &_AquaFileChooserUI$FilterComboBoxAction_ClassInfo_, allocate$AquaFileChooserUI$FilterComboBoxAction);
	return class$;
}

$Class* AquaFileChooserUI$FilterComboBoxAction::class$ = nullptr;

		} // laf
	} // apple
} // com