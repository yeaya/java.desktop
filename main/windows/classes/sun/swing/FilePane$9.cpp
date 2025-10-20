#include <sun/swing/FilePane$9.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
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
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_NEW_FOLDER

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$9_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$9, this$0)},
	{"basicNewFolderAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(FilePane$9, basicNewFolderAction)},
	{}
};

$MethodInfo _FilePane$9_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FilePane$9::*)($FilePane*,$String*)>(&FilePane$9::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$9_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"getNewFolderAction",
	"()Ljavax/swing/Action;"
};

$InnerClassInfo _FilePane$9_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$9",
	"javax.swing.AbstractAction",
	nullptr,
	_FilePane$9_FieldInfo_,
	_FilePane$9_MethodInfo_,
	nullptr,
	&_FilePane$9_EnclosingMethodInfo_,
	_FilePane$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$9($Class* clazz) {
	return $of($alloc(FilePane$9));
}

void FilePane$9::init$($FilePane* this$0, $String* name) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	{
		$init($Action);
		$init($FilePane);
		putValue($Action::ACTION_COMMAND_KEY, $FilePane::ACTION_NEW_FOLDER);
		$var($File, currentDirectory, $nc($(this->this$0->getFileChooser()))->getCurrentDirectory());
		if (currentDirectory != nullptr) {
			setEnabled(this->this$0->canWrite(currentDirectory));
		}
	}
}

void FilePane$9::actionPerformed($ActionEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (this->basicNewFolderAction == nullptr) {
		$set(this, basicNewFolderAction, $nc(this->this$0->fileChooserUIAccessor)->getNewFolderAction());
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, oldFile, $nc(fc)->getSelectedFile());
	$nc(this->basicNewFolderAction)->actionPerformed(ev);
	$var($File, newFile, fc->getSelectedFile());
	bool var$0 = newFile != nullptr && !newFile->equals(oldFile);
	if (var$0 && newFile->isDirectory()) {
		$set(this->this$0, newFolderFile, newFile);
	}
}

FilePane$9::FilePane$9() {
}

$Class* FilePane$9::load$($String* name, bool initialize) {
	$loadClass(FilePane$9, name, initialize, &_FilePane$9_ClassInfo_, allocate$FilePane$9);
	return class$;
}

$Class* FilePane$9::class$ = nullptr;

	} // swing
} // sun