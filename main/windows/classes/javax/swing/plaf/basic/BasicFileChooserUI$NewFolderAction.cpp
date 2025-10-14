#include <javax/swing/plaf/basic/BasicFileChooserUI$NewFolderAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_NEW_FOLDER
#undef ERROR_MESSAGE
#undef WARNING_MESSAGE

using $FileArray = $Array<::java::io::File>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$NewFolderAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$NewFolderAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$NewFolderAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$NewFolderAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$NewFolderAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$NewFolderAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction", "javax.swing.plaf.basic.BasicFileChooserUI", "NewFolderAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$NewFolderAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$NewFolderAction_FieldInfo_,
	_BasicFileChooserUI$NewFolderAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$NewFolderAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$NewFolderAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$NewFolderAction));
}

void BasicFileChooserUI$NewFolderAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_NEW_FOLDER);
}

void BasicFileChooserUI$NewFolderAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->readOnly) {
		return;
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	if (!$nc(currentDirectory)->exists()) {
		$JOptionPane::showMessageDialog(fc, this->this$0->newFolderParentDoesntExistText, this->this$0->newFolderParentDoesntExistTitleText, $JOptionPane::WARNING_MESSAGE);
		return;
	}
	$var($File, newFolder, nullptr);
	try {
		$assign(newFolder, $nc($(fc->getFileSystemView()))->createNewFolder(currentDirectory));
		if (fc->isMultiSelectionEnabled()) {
			fc->setSelectedFiles($$new($FileArray, {newFolder}));
		} else {
			fc->setSelectedFile(newFolder);
		}
	} catch ($IOException&) {
		$var($IOException, exc, $catch());
		$JOptionPane::showMessageDialog(fc, $$str({this->this$0->newFolderErrorText, this->this$0->newFolderErrorSeparator, exc}), this->this$0->newFolderErrorText, $JOptionPane::ERROR_MESSAGE);
		return;
	}
	fc->rescanCurrentDirectory();
}

BasicFileChooserUI$NewFolderAction::BasicFileChooserUI$NewFolderAction() {
}

$Class* BasicFileChooserUI$NewFolderAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$NewFolderAction, name, initialize, &_BasicFileChooserUI$NewFolderAction_ClassInfo_, allocate$BasicFileChooserUI$NewFolderAction);
	return class$;
}

$Class* BasicFileChooserUI$NewFolderAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax