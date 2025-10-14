#include <javax/swing/filechooser/WindowsFileSystemView.h>

#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/WindowsFileSystemView$1.h>
#include <javax/swing/filechooser/WindowsFileSystemView$2.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MessageFormat = ::java::text::MessageFormat;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileSystemView$FileSystemRoot = ::javax::swing::filechooser::FileSystemView$FileSystemRoot;
using $WindowsFileSystemView$1 = ::javax::swing::filechooser::WindowsFileSystemView$1;
using $WindowsFileSystemView$2 = ::javax::swing::filechooser::WindowsFileSystemView$2;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _WindowsFileSystemView_FieldInfo_[] = {
	{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileSystemView, newFolderString)},
	{"newFolderNextString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileSystemView, newFolderNextString)},
	{}
};

$MethodInfo _WindowsFileSystemView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsFileSystemView::*)()>(&WindowsFileSystemView::init$))},
	{"createFileObject", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC},
	{"createFileSystemRoot", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PROTECTED},
	{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getChild", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC},
	{"getHomeDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getSystemTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileSystemView_InnerClassesInfo_[] = {
	{"javax.swing.filechooser.WindowsFileSystemView$2", nullptr, nullptr, 0},
	{"javax.swing.filechooser.WindowsFileSystemView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystemView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.filechooser.WindowsFileSystemView",
	"javax.swing.filechooser.FileSystemView",
	nullptr,
	_WindowsFileSystemView_FieldInfo_,
	_WindowsFileSystemView_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileSystemView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.filechooser.WindowsFileSystemView$2,javax.swing.filechooser.WindowsFileSystemView$1"
};

$Object* allocate$WindowsFileSystemView($Class* clazz) {
	return $of($alloc(WindowsFileSystemView));
}

$String* WindowsFileSystemView::newFolderString = nullptr;
$String* WindowsFileSystemView::newFolderNextString = nullptr;

void WindowsFileSystemView::init$() {
	$FileSystemView::init$();
}

$Boolean* WindowsFileSystemView::isTraversable($File* f) {
	bool var$1 = isFileSystemRoot(f);
	bool var$0 = var$1 || isComputerNode(f);
	return $Boolean::valueOf(var$0 || $nc(f)->isDirectory());
}

$File* WindowsFileSystemView::getChild($File* parent, $String* fileName) {
	bool var$1 = $nc(fileName)->startsWith("\\"_s);
	bool var$0 = var$1 && !fileName->startsWith("\\\\"_s);
	if (var$0 && isFileSystem(parent)) {
		$var($String, path, $nc(parent)->getAbsolutePath());
		bool var$3 = $nc(path)->length() >= 2;
		bool var$2 = var$3 && path->charAt(1) == u':';
		if (var$2 && $Character::isLetter(path->charAt(0))) {
			return createFileObject($$str({$(path->substring(0, 2)), fileName}));
		}
	}
	return $FileSystemView::getChild(parent, fileName);
}

$String* WindowsFileSystemView::getSystemTypeDescription($File* f) {
	if (f == nullptr) {
		return nullptr;
	}
	try {
		return $nc($(getShellFolder(f)))->getFolderType();
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$File* WindowsFileSystemView::getHomeDirectory() {
	$var($FileArray, roots, getRoots());
	return ($nc(roots)->length == 0) ? ($File*)nullptr : $nc(roots)->get(0);
}

$File* WindowsFileSystemView::createNewFolder($File* containingDir) {
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, createFileObject(containingDir, WindowsFileSystemView::newFolderString));
	int32_t i = 2;
	while ($nc(newFolder)->exists() && i < 100) {
		$assign(newFolder, createFileObject(containingDir, $($MessageFormat::format(WindowsFileSystemView::newFolderNextString, $$new($ObjectArray, {$($of($Integer::valueOf(i)))})))));
		++i;
	}
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

bool WindowsFileSystemView::isDrive($File* dir) {
	return isFileSystemRoot(dir);
}

bool WindowsFileSystemView::isFloppyDrive($File* dir) {
	$beforeCallerSensitive();
	$var($String, path, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WindowsFileSystemView$1, this, dir)))));
	bool var$0 = path != nullptr;
	if (var$0) {
		bool var$1 = path->equals("A:\\"_s);
		var$0 = (var$1 || path->equals("B:\\"_s));
	}
	return var$0;
}

$File* WindowsFileSystemView::createFileObject($String* path$renamed) {
	$var($String, path, path$renamed);
	bool var$1 = $nc(path)->length() >= 2;
	bool var$0 = var$1 && path->charAt(1) == u':';
	if (var$0 && $Character::isLetter(path->charAt(0))) {
		if (path->length() == 2) {
			$plusAssign(path, "\\"_s);
		} else if (path->charAt(2) != u'\\') {
			$var($String, var$2, $$str({$(path->substring(0, 2)), "\\"_s}));
			$assign(path, $concat(var$2, $(path->substring(2))));
		}
	}
	return $FileSystemView::createFileObject(path);
}

$File* WindowsFileSystemView::createFileSystemRoot($File* f) {
	return $new($WindowsFileSystemView$2, this, f);
}

void clinit$WindowsFileSystemView($Class* class$) {
	$assignStatic(WindowsFileSystemView::newFolderString, $UIManager::getString("FileChooser.win32.newFolder"_s));
	$assignStatic(WindowsFileSystemView::newFolderNextString, $UIManager::getString("FileChooser.win32.newFolder.subsequent"_s));
}

WindowsFileSystemView::WindowsFileSystemView() {
}

$Class* WindowsFileSystemView::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystemView, name, initialize, &_WindowsFileSystemView_ClassInfo_, clinit$WindowsFileSystemView, allocate$WindowsFileSystemView);
	return class$;
}

$Class* WindowsFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax