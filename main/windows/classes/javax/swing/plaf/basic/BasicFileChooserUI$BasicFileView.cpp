#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>

#include <java/io/File.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Icon = ::javax::swing::Icon;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$BasicFileView_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$BasicFileView, this$0)},
	{"iconCache", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/io/File;Ljavax/swing/Icon;>;", $PROTECTED, $field(BasicFileChooserUI$BasicFileView, iconCache)},
	{}
};

$MethodInfo _BasicFileChooserUI$BasicFileView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicFileChooserUI$BasicFileView::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$BasicFileView::init$))},
	{"cacheIcon", "(Ljava/io/File;Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"clearIconCache", "()V", nullptr, $PUBLIC},
	{"getCachedIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isHidden", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$BasicFileView_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$BasicFileView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView",
	"javax.swing.filechooser.FileView",
	nullptr,
	_BasicFileChooserUI$BasicFileView_FieldInfo_,
	_BasicFileChooserUI$BasicFileView_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$BasicFileView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$BasicFileView($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$BasicFileView));
}

void BasicFileChooserUI$BasicFileView::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileView::init$();
	$set(this, iconCache, $new($Hashtable));
}

void BasicFileChooserUI$BasicFileView::clearIconCache() {
	$set(this, iconCache, $new($Hashtable));
}

$String* BasicFileChooserUI$BasicFileView::getName($File* f) {
	$var($String, fileName, nullptr);
	if (f != nullptr) {
		$assign(fileName, $nc($($nc($(this->this$0->getFileChooser()))->getFileSystemView()))->getSystemDisplayName(f));
	}
	return fileName;
}

$String* BasicFileChooserUI$BasicFileView::getDescription($File* f) {
	return $nc(f)->getName();
}

$String* BasicFileChooserUI$BasicFileView::getTypeDescription($File* f) {
	$var($String, type, $nc($($nc($(this->this$0->getFileChooser()))->getFileSystemView()))->getSystemTypeDescription(f));
	if (type == nullptr) {
		if ($nc(f)->isDirectory()) {
			$assign(type, this->this$0->directoryDescriptionText);
		} else {
			$assign(type, this->this$0->fileDescriptionText);
		}
	}
	return type;
}

$Icon* BasicFileChooserUI$BasicFileView::getCachedIcon($File* f) {
	return $cast($Icon, $nc(this->iconCache)->get(f));
}

void BasicFileChooserUI$BasicFileView::cacheIcon($File* f, $Icon* i) {
	if (f == nullptr || i == nullptr) {
		return;
	}
	$nc(this->iconCache)->put(f, i);
}

$Icon* BasicFileChooserUI$BasicFileView::getIcon($File* f) {
	$var($Icon, icon, getCachedIcon(f));
	if (icon != nullptr) {
		return icon;
	}
	$assign(icon, this->this$0->fileIcon);
	if (f != nullptr) {
		$var($FileSystemView, fsv, $nc($(this->this$0->getFileChooser()))->getFileSystemView());
		if ($nc(fsv)->isFloppyDrive(f)) {
			$assign(icon, this->this$0->floppyDriveIcon);
		} else if (fsv->isDrive(f)) {
			$assign(icon, this->this$0->hardDriveIcon);
		} else if (fsv->isComputerNode(f)) {
			$assign(icon, this->this$0->computerIcon);
		} else if (f->isDirectory()) {
			$assign(icon, this->this$0->directoryIcon);
		}
	}
	cacheIcon(f, icon);
	return icon;
}

$Boolean* BasicFileChooserUI$BasicFileView::isHidden($File* f) {
	$var($String, name, $nc(f)->getName());
	if (name != nullptr && name->charAt(0) == u'.') {
		$init($Boolean);
		return $Boolean::TRUE;
	} else {
		$init($Boolean);
		return $Boolean::FALSE;
	}
}

BasicFileChooserUI$BasicFileView::BasicFileChooserUI$BasicFileView() {
}

$Class* BasicFileChooserUI$BasicFileView::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$BasicFileView, name, initialize, &_BasicFileChooserUI$BasicFileView_ClassInfo_, allocate$BasicFileChooserUI$BasicFileView);
	return class$;
}

$Class* BasicFileChooserUI$BasicFileView::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax