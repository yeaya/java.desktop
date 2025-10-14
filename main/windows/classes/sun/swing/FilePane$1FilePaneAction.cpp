#include <sun/swing/FilePane$1FilePaneAction.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/ListSelectionModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY

using $FileArray = $Array<::java::io::File>;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$1FilePaneAction_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$1FilePaneAction, this$0)},
	{}
};

$MethodInfo _FilePane$1FilePaneAction_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FilePane$1FilePaneAction::*)($FilePane*,$String*)>(&FilePane$1FilePaneAction::init$))},
	{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FilePane$1FilePaneAction::*)($FilePane*,$String*,$String*)>(&FilePane$1FilePaneAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$1FilePaneAction_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"getActions",
	"()[Ljavax/swing/Action;"
};

$InnerClassInfo _FilePane$1FilePaneAction_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$1FilePaneAction", nullptr, "FilePaneAction", 0},
	{}
};

$ClassInfo _FilePane$1FilePaneAction_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$1FilePaneAction",
	"javax.swing.AbstractAction",
	nullptr,
	_FilePane$1FilePaneAction_FieldInfo_,
	_FilePane$1FilePaneAction_MethodInfo_,
	nullptr,
	&_FilePane$1FilePaneAction_EnclosingMethodInfo_,
	_FilePane$1FilePaneAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$1FilePaneAction($Class* clazz) {
	return $of($alloc(FilePane$1FilePaneAction));
}

void FilePane$1FilePaneAction::init$($FilePane* this$0, $String* name) {
	FilePane$1FilePaneAction::init$(this$0, name, name);
}

void FilePane$1FilePaneAction::init$($FilePane* this$0, $String* name, $String* cmd) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	$init($Action);
	putValue($Action::ACTION_COMMAND_KEY, cmd);
}

void FilePane$1FilePaneAction::actionPerformed($ActionEvent* e) {
	$init($Action);
	$var($String, cmd, $cast($String, getValue($Action::ACTION_COMMAND_KEY)));
	if (cmd == "cancelSelection"_s) {
		if (this->this$0->editFile != nullptr) {
			this->this$0->cancelEdit();
		} else {
			$nc($(this->this$0->getFileChooser()))->cancelSelection();
		}
	} else if (cmd == "editFileName"_s) {
		$var($JFileChooser, fc, this->this$0->getFileChooser());
		int32_t index = $nc(this->this$0->listSelectionModel)->getMinSelectionIndex();
		bool var$0 = index >= 0 && this->this$0->editFile == nullptr;
		if (var$0) {
			bool var$1 = !$nc(fc)->isMultiSelectionEnabled();
			var$0 = (var$1 || $nc($($nc(fc)->getSelectedFiles()))->length <= 1);
		}
		if (var$0) {
			this->this$0->editFileName(index);
		}
	} else if (cmd == "refresh"_s) {
		$nc($(this->this$0->getFileChooser()))->rescanCurrentDirectory();
	}
}

bool FilePane$1FilePaneAction::isEnabled() {
	$init($Action);
	$var($String, cmd, $cast($String, getValue($Action::ACTION_COMMAND_KEY)));
	if (cmd == "cancelSelection"_s) {
		return $nc($(this->this$0->getFileChooser()))->isEnabled();
	} else if (cmd == "editFileName"_s) {
		return !this->this$0->readOnly && $nc($(this->this$0->getFileChooser()))->isEnabled();
	} else {
		return true;
	}
}

FilePane$1FilePaneAction::FilePane$1FilePaneAction() {
}

$Class* FilePane$1FilePaneAction::load$($String* name, bool initialize) {
	$loadClass(FilePane$1FilePaneAction, name, initialize, &_FilePane$1FilePaneAction_ClassInfo_, allocate$FilePane$1FilePaneAction);
	return class$;
}

$Class* FilePane$1FilePaneAction::class$ = nullptr;

	} // swing
} // sun