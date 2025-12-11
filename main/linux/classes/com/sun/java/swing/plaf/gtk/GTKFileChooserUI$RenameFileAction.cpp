#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$RenameFileAction.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_EDIT_FILE_NAME
#undef ERROR_MESSAGE
#undef PLAIN_MESSAGE

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$RenameFileAction_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$RenameFileAction, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$RenameFileAction_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKFileChooserUI$RenameFileAction::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$RenameFileAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$RenameFileAction_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$RenameFileAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "RenameFileAction", $PRIVATE},
	{}
};

$ClassInfo _GTKFileChooserUI$RenameFileAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$RenameFileAction",
	"javax.swing.AbstractAction",
	nullptr,
	_GTKFileChooserUI$RenameFileAction_FieldInfo_,
	_GTKFileChooserUI$RenameFileAction_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$RenameFileAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$RenameFileAction($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$RenameFileAction));
}

void GTKFileChooserUI$RenameFileAction::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_EDIT_FILE_NAME);
}

void GTKFileChooserUI$RenameFileAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(this->this$0->getFileName()))->isEmpty()) {
		return;
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	$var($Component, var$0, static_cast<$Component*>(fc));
	$var($Object, var$1, $of($$new($MessageFormat, this->this$0->renameFileDialogText)->format($$new($ObjectArray, {$($of(this->this$0->getFileName()))}))));
	$var($String, var$2, this->this$0->renameFileButtonText);
	$var($String, newFileName, $cast($String, $JOptionPane::showInputDialog(var$0, var$1, var$2, $JOptionPane::PLAIN_MESSAGE, nullptr, nullptr, $(this->this$0->getFileName()))));
	if (newFileName != nullptr) {
		$var($File, oldFile, $nc($(fc->getFileSystemView()))->createFileObject(currentDirectory, $(this->this$0->getFileName())));
		$var($File, newFile, $nc($(fc->getFileSystemView()))->createFileObject(currentDirectory, newFileName));
		if (oldFile == nullptr || newFile == nullptr || !$nc($(this->this$0->getModel()))->renameFile(oldFile, newFile)) {
			$JOptionPane::showMessageDialog(fc, $($$new($MessageFormat, this->this$0->renameFileErrorText)->format($$new($ObjectArray, {
				$($of(this->this$0->getFileName())),
				$of(newFileName)
			}))), this->this$0->renameFileErrorTitle, $JOptionPane::ERROR_MESSAGE);
		} else {
			this->this$0->setFileName($($nc($(this->this$0->getFileChooser()))->getName(newFile)));
			fc->rescanCurrentDirectory();
		}
	}
}

GTKFileChooserUI$RenameFileAction::GTKFileChooserUI$RenameFileAction() {
}

$Class* GTKFileChooserUI$RenameFileAction::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$RenameFileAction, name, initialize, &_GTKFileChooserUI$RenameFileAction_ClassInfo_, allocate$GTKFileChooserUI$RenameFileAction);
	return class$;
}

$Class* GTKFileChooserUI$RenameFileAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com