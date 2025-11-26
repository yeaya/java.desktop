#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$NewFolderAction.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/text/MessageFormat.h>
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
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$NewFolderAction_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$NewFolderAction, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$NewFolderAction_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKFileChooserUI$NewFolderAction::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$NewFolderAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$NewFolderAction_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "NewFolderAction", $PRIVATE},
	{}
};

$ClassInfo _GTKFileChooserUI$NewFolderAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction",
	"javax.swing.AbstractAction",
	nullptr,
	_GTKFileChooserUI$NewFolderAction_FieldInfo_,
	_GTKFileChooserUI$NewFolderAction_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$NewFolderAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$NewFolderAction($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$NewFolderAction));
}

void GTKFileChooserUI$NewFolderAction::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_NEW_FOLDER);
}

void GTKFileChooserUI$NewFolderAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->readOnly) {
		return;
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	$var($String, dirName, $JOptionPane::showInputDialog(fc, this->this$0->newFolderDialogText, this->this$0->newFolderButtonText, $JOptionPane::PLAIN_MESSAGE));
	if (dirName != nullptr) {
		if (!$nc(currentDirectory)->exists()) {
			$JOptionPane::showMessageDialog(fc, $($MessageFormat::format(this->this$0->newFolderNoDirectoryErrorText, $$new($ObjectArray, {$of(dirName)}))), this->this$0->newFolderNoDirectoryErrorTitleText, $JOptionPane::ERROR_MESSAGE);
			return;
		}
		$var($File, newDir, $nc($(fc->getFileSystemView()))->createFileObject(currentDirectory, dirName));
		if (newDir == nullptr || !$nc(newDir)->mkdir()) {
			$JOptionPane::showMessageDialog(fc, $$str({this->this$0->newFolderErrorText, this->this$0->newFolderErrorSeparator, " \""_s, dirName, "\""_s}), this->this$0->newFolderErrorText, $JOptionPane::ERROR_MESSAGE);
		}
		fc->rescanCurrentDirectory();
	}
}

GTKFileChooserUI$NewFolderAction::GTKFileChooserUI$NewFolderAction() {
}

$Class* GTKFileChooserUI$NewFolderAction::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$NewFolderAction, name, initialize, &_GTKFileChooserUI$NewFolderAction_ClassInfo_, allocate$GTKFileChooserUI$NewFolderAction);
	return class$;
}

$Class* GTKFileChooserUI$NewFolderAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com