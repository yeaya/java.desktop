#include <java/awt/FileDialog$1.h>

#include <java/awt/Component.h>
#include <java/awt/FileDialog.h>
#include <java/io/File.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $FileDialog = ::java::awt::FileDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _FileDialog$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileDialog$1::*)()>(&FileDialog$1::init$))},
	{"isMultipleMode", "(Ljava/awt/FileDialog;)Z", nullptr, $PUBLIC},
	{"setDirectory", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFiles", "(Ljava/awt/FileDialog;[Ljava/io/File;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileDialog$1_EnclosingMethodInfo_ = {
	"java.awt.FileDialog",
	nullptr,
	nullptr
};

$InnerClassInfo _FileDialog$1_InnerClassesInfo_[] = {
	{"java.awt.FileDialog$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$FileDialogAccessor", "sun.awt.AWTAccessor", "FileDialogAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FileDialog$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.FileDialog$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$FileDialogAccessor",
	nullptr,
	_FileDialog$1_MethodInfo_,
	nullptr,
	&_FileDialog$1_EnclosingMethodInfo_,
	_FileDialog$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.FileDialog"
};

$Object* allocate$FileDialog$1($Class* clazz) {
	return $of($alloc(FileDialog$1));
}

void FileDialog$1::init$() {
}

void FileDialog$1::setFiles($FileDialog* fileDialog, $FileArray* files) {
	$nc(fileDialog)->setFiles(files);
}

void FileDialog$1::setFile($FileDialog* fileDialog, $String* file) {
	$set($nc(fileDialog), file, (""_s->equals(file)) ? ($String*)nullptr : file);
}

void FileDialog$1::setDirectory($FileDialog* fileDialog, $String* directory) {
	$set($nc(fileDialog), dir, (""_s->equals(directory)) ? ($String*)nullptr : directory);
}

bool FileDialog$1::isMultipleMode($FileDialog* fileDialog) {
	$synchronized($nc(fileDialog)->getObjectLock()) {
		return fileDialog->multipleMode;
	}
}

FileDialog$1::FileDialog$1() {
}

$Class* FileDialog$1::load$($String* name, bool initialize) {
	$loadClass(FileDialog$1, name, initialize, &_FileDialog$1_ClassInfo_, allocate$FileDialog$1);
	return class$;
}

$Class* FileDialog$1::class$ = nullptr;

	} // awt
} // java