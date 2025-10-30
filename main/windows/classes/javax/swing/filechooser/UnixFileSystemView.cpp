#include <javax/swing/filechooser/UnixFileSystemView.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _UnixFileSystemView_FieldInfo_[] = {
	{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileSystemView, newFolderString)},
	{"newFolderNextString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileSystemView, newFolderNextString)},
	{}
};

$MethodInfo _UnixFileSystemView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UnixFileSystemView::*)()>(&UnixFileSystemView::init$))},
	{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnixFileSystemView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.UnixFileSystemView",
	"javax.swing.filechooser.FileSystemView",
	nullptr,
	_UnixFileSystemView_FieldInfo_,
	_UnixFileSystemView_MethodInfo_
};

$Object* allocate$UnixFileSystemView($Class* clazz) {
	return $of($alloc(UnixFileSystemView));
}

$String* UnixFileSystemView::newFolderString = nullptr;
$String* UnixFileSystemView::newFolderNextString = nullptr;

void UnixFileSystemView::init$() {
	$FileSystemView::init$();
}

$File* UnixFileSystemView::createNewFolder($File* containingDir) {
	$useLocalCurrentObjectStackCache();
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, nullptr);
	$assign(newFolder, createFileObject(containingDir, UnixFileSystemView::newFolderString));
	int32_t i = 1;
	while ($nc(newFolder)->exists() && i < 100) {
		$assign(newFolder, createFileObject(containingDir, $($MessageFormat::format(UnixFileSystemView::newFolderNextString, $$new($ObjectArray, {$($of($Integer::valueOf(i)))})))));
		++i;
	}
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

bool UnixFileSystemView::isFileSystemRoot($File* dir) {
	return dir != nullptr && $nc($(dir->getAbsolutePath()))->equals("/"_s);
}

bool UnixFileSystemView::isDrive($File* dir) {
	return isFloppyDrive(dir);
}

bool UnixFileSystemView::isFloppyDrive($File* dir) {
	return false;
}

bool UnixFileSystemView::isComputerNode($File* dir) {
	if (dir != nullptr) {
		$var($String, parent, dir->getParent());
		if (parent != nullptr && parent->equals("/net"_s)) {
			return true;
		}
	}
	return false;
}

void clinit$UnixFileSystemView($Class* class$) {
	$assignStatic(UnixFileSystemView::newFolderString, $UIManager::getString("FileChooser.other.newFolder"_s));
	$assignStatic(UnixFileSystemView::newFolderNextString, $UIManager::getString("FileChooser.other.newFolder.subsequent"_s));
}

UnixFileSystemView::UnixFileSystemView() {
}

$Class* UnixFileSystemView::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystemView, name, initialize, &_UnixFileSystemView_ClassInfo_, clinit$UnixFileSystemView, allocate$UnixFileSystemView);
	return class$;
}

$Class* UnixFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax