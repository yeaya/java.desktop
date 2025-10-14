#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$DirectoryComboBoxAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$DirectoryComboBoxAction, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$DirectoryComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalFileChooserUI$DirectoryComboBoxAction::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$DirectoryComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{}
};

$ClassInfo _MetalFileChooserUI$DirectoryComboBoxAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction",
	"javax.swing.AbstractAction",
	nullptr,
	_MetalFileChooserUI$DirectoryComboBoxAction_FieldInfo_,
	_MetalFileChooserUI$DirectoryComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$DirectoryComboBoxAction($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$DirectoryComboBoxAction));
}

void MetalFileChooserUI$DirectoryComboBoxAction::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void MetalFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->directoryComboBox)->hidePopup();
	$var($File, f, $cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
	if (!$nc($($nc($(this->this$0->getFileChooser()))->getCurrentDirectory()))->equals(f)) {
		$nc($(this->this$0->getFileChooser()))->setCurrentDirectory(f);
	}
}

MetalFileChooserUI$DirectoryComboBoxAction::MetalFileChooserUI$DirectoryComboBoxAction() {
}

$Class* MetalFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$DirectoryComboBoxAction, name, initialize, &_MetalFileChooserUI$DirectoryComboBoxAction_ClassInfo_, allocate$MetalFileChooserUI$DirectoryComboBoxAction);
	return class$;
}

$Class* MetalFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax