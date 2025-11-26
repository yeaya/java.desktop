#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKApproveSelectionAction.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$ApproveSelectionAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$ApproveSelectionAction = ::javax::swing::plaf::basic::BasicFileChooserUI$ApproveSelectionAction;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$GTKApproveSelectionAction_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKApproveSelectionAction, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKApproveSelectionAction_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI$GTKApproveSelectionAction::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKApproveSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKApproveSelectionAction_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKApproveSelectionAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKApproveSelectionAction", $PRIVATE},
	{"javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction", "javax.swing.plaf.basic.BasicFileChooserUI", "ApproveSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKApproveSelectionAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKApproveSelectionAction",
	"javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction",
	nullptr,
	_GTKFileChooserUI$GTKApproveSelectionAction_FieldInfo_,
	_GTKFileChooserUI$GTKApproveSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$GTKApproveSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKApproveSelectionAction($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKApproveSelectionAction));
}

void GTKFileChooserUI$GTKApproveSelectionAction::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicFileChooserUI$ApproveSelectionAction::init$(this$0);
}

void GTKFileChooserUI$GTKApproveSelectionAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($GTKFileChooserUI::access$800(this->this$0)) {
		$var($File, dir, $GTKFileChooserUI::access$900(this->this$0));
		try {
			if (dir != nullptr) {
				$assign(dir, $ShellFolder::getNormalizedFile(dir));
			}
		} catch ($IOException& ex) {
		}
		if ($nc($($nc($(this->this$0->getFileChooser()))->getCurrentDirectory()))->equals(dir)) {
			$nc(this->this$0->directoryList)->clearSelection();
			$nc(this->this$0->fileList)->clearSelection();
			$var($ListSelectionModel, sm, $nc(this->this$0->fileList)->getSelectionModel());
			if ($instanceOf($DefaultListSelectionModel, sm)) {
				$nc(($cast($DefaultListSelectionModel, sm)))->moveLeadSelectionIndex(0);
				$nc(sm)->setAnchorSelectionIndex(0);
			}
			this->this$0->rescanCurrentDirectory($(this->this$0->getFileChooser()));
			return;
		}
	}
	$BasicFileChooserUI$ApproveSelectionAction::actionPerformed(e);
}

GTKFileChooserUI$GTKApproveSelectionAction::GTKFileChooserUI$GTKApproveSelectionAction() {
}

$Class* GTKFileChooserUI$GTKApproveSelectionAction::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKApproveSelectionAction, name, initialize, &_GTKFileChooserUI$GTKApproveSelectionAction_ClassInfo_, allocate$GTKFileChooserUI$GTKApproveSelectionAction);
	return class$;
}

$Class* GTKFileChooserUI$GTKApproveSelectionAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com