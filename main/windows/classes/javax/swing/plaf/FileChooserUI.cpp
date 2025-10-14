#include <javax/swing/plaf/FileChooserUI.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileView = ::javax::swing::filechooser::FileView;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _FileChooserUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FileChooserUI::*)()>(&FileChooserUI::init$))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAcceptAllFileFilter", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC | $ABSTRACT},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PUBLIC},
	{"getDialogTitle", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC | $ABSTRACT},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.FileChooserUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_FileChooserUI_MethodInfo_
};

$Object* allocate$FileChooserUI($Class* clazz) {
	return $of($alloc(FileChooserUI));
}

void FileChooserUI::init$() {
	$ComponentUI::init$();
}

$JButton* FileChooserUI::getDefaultButton($JFileChooser* fc) {
	return nullptr;
}

FileChooserUI::FileChooserUI() {
}

$Class* FileChooserUI::load$($String* name, bool initialize) {
	$loadClass(FileChooserUI, name, initialize, &_FileChooserUI_ClassInfo_, allocate$FileChooserUI);
	return class$;
}

$Class* FileChooserUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax