#include <javax/swing/filechooser/GenericFileSystemView.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _GenericFileSystemView_FieldInfo_[] = {
	{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GenericFileSystemView, newFolderString)},
	{}
};

$MethodInfo _GenericFileSystemView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GenericFileSystemView::*)()>(&GenericFileSystemView::init$))},
	{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _GenericFileSystemView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.GenericFileSystemView",
	"javax.swing.filechooser.FileSystemView",
	nullptr,
	_GenericFileSystemView_FieldInfo_,
	_GenericFileSystemView_MethodInfo_
};

$Object* allocate$GenericFileSystemView($Class* clazz) {
	return $of($alloc(GenericFileSystemView));
}

$String* GenericFileSystemView::newFolderString = nullptr;

void GenericFileSystemView::init$() {
	$FileSystemView::init$();
}

$File* GenericFileSystemView::createNewFolder($File* containingDir) {
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, createFileObject(containingDir, GenericFileSystemView::newFolderString));
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

void clinit$GenericFileSystemView($Class* class$) {
	$assignStatic(GenericFileSystemView::newFolderString, $UIManager::getString("FileChooser.other.newFolder"_s));
}

GenericFileSystemView::GenericFileSystemView() {
}

$Class* GenericFileSystemView::load$($String* name, bool initialize) {
	$loadClass(GenericFileSystemView, name, initialize, &_GenericFileSystemView_ClassInfo_, clinit$GenericFileSystemView, allocate$GenericFileSystemView);
	return class$;
}

$Class* GenericFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax