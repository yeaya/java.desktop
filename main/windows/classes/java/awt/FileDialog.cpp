#include <java/awt/FileDialog.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FileDialog$1.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef LOAD
#undef SAVE

using $FileArray = $Array<::java::io::File>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FileDialog$1 = ::java::awt::FileDialog$1;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _FileDialog_FieldInfo_[] = {
	{"LOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDialog, LOAD)},
	{"SAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDialog, SAVE)},
	{"mode", "I", nullptr, 0, $field(FileDialog, mode)},
	{"dir", "Ljava/lang/String;", nullptr, 0, $field(FileDialog, dir)},
	{"file", "Ljava/lang/String;", nullptr, 0, $field(FileDialog, file)},
	{"files", "[Ljava/io/File;", nullptr, $PRIVATE, $field(FileDialog, files)},
	{"multipleMode", "Z", nullptr, $PRIVATE, $field(FileDialog, multipleMode)},
	{"filter", "Ljava/io/FilenameFilter;", nullptr, 0, $field(FileDialog, filter)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileDialog, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileDialog, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileDialog, serialVersionUID)},
	{}
};

$MethodInfo _FileDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Frame*)>(&FileDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Frame*,$String*)>(&FileDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Frame*,$String*,int32_t)>(&FileDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Dialog*)>(&FileDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Dialog*,$String*)>(&FileDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialog::*)($Dialog*,$String*,int32_t)>(&FileDialog::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFile", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFilenameFilter", "()Ljava/io/FilenameFilter;", nullptr, $PUBLIC},
	{"getFiles", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"getMode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&FileDialog::initIDs))},
	{"isMultipleMode", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"postsOldMouseEvents", "()Z", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FileDialog::*)($ObjectInputStream*)>(&FileDialog::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setFiles", "([Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(FileDialog::*)($FileArray*)>(&FileDialog::setFiles))},
	{"setMode", "(I)V", nullptr, $PUBLIC},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 13

$InnerClassInfo _FileDialog_InnerClassesInfo_[] = {
	{"java.awt.FileDialog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.FileDialog",
	"java.awt.Dialog",
	nullptr,
	_FileDialog_FieldInfo_,
	_FileDialog_MethodInfo_,
	nullptr,
	nullptr,
	_FileDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.FileDialog$1"
};

$Object* allocate$FileDialog($Class* clazz) {
	return $of($alloc(FileDialog));
}

$String* FileDialog::base = nullptr;
int32_t FileDialog::nameCounter = 0;

void FileDialog::initIDs() {
	$init(FileDialog);
	$prepareNativeStatic(FileDialog, initIDs, void);
	$invokeNativeStatic(FileDialog, initIDs);
	$finishNativeStatic();
}

void FileDialog::init$($Frame* parent) {
	FileDialog::init$(parent, ""_s, FileDialog::LOAD);
}

void FileDialog::init$($Frame* parent, $String* title) {
	FileDialog::init$(parent, title, FileDialog::LOAD);
}

void FileDialog::init$($Frame* parent, $String* title, int32_t mode) {
	$Dialog::init$(parent, title, true);
	this->multipleMode = false;
	this->setMode(mode);
	setLayout(nullptr);
}

void FileDialog::init$($Dialog* parent) {
	FileDialog::init$(parent, ""_s, FileDialog::LOAD);
}

void FileDialog::init$($Dialog* parent, $String* title) {
	FileDialog::init$(parent, title, FileDialog::LOAD);
}

void FileDialog::init$($Dialog* parent, $String* title, int32_t mode) {
	$Dialog::init$(parent, title, true);
	this->multipleMode = false;
	this->setMode(mode);
	setLayout(nullptr);
}

void FileDialog::setTitle($String* title) {
	$Dialog::setTitle(title);
}

$String* FileDialog::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(FileDialog::class$) {
		$var($String, var$0, FileDialog::base);
		return $concat(var$0, $$str(FileDialog::nameCounter++));
	}
}

void FileDialog::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr && $nc(this->parent)->peer == nullptr) {
			$nc(this->parent)->addNotify();
		}
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createFileDialog(this));
		}
		$Dialog::addNotify();
	}
}

int32_t FileDialog::getMode() {
	return this->mode;
}

void FileDialog::setMode(int32_t mode) {
	switch (mode) {
	case FileDialog::LOAD:
		{}
	case FileDialog::SAVE:
		{
			this->mode = mode;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "illegal file dialog mode"_s);
		}
	}
}

$String* FileDialog::getDirectory() {
	return this->dir;
}

void FileDialog::setDirectory($String* dir) {
	$set(this, dir, (dir != nullptr && dir->isEmpty()) ? ($String*)nullptr : dir);
	$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
	if (peer != nullptr) {
		peer->setDirectory(this->dir);
	}
}

$String* FileDialog::getFile() {
	return this->file;
}

$FileArray* FileDialog::getFiles() {
	$synchronized(getObjectLock()) {
		if (this->files != nullptr) {
			return $cast($FileArray, $nc(this->files)->clone());
		} else {
			return $new($FileArray, 0);
		}
	}
}

void FileDialog::setFiles($FileArray* files) {
	$synchronized(getObjectLock()) {
		$set(this, files, files);
	}
}

void FileDialog::setFile($String* file) {
	$set(this, file, (file != nullptr && file->isEmpty()) ? ($String*)nullptr : file);
	$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
	if (peer != nullptr) {
		peer->setFile(this->file);
	}
}

void FileDialog::setMultipleMode(bool enable) {
	$synchronized(getObjectLock()) {
		this->multipleMode = enable;
	}
}

bool FileDialog::isMultipleMode() {
	$synchronized(getObjectLock()) {
		return this->multipleMode;
	}
}

$FilenameFilter* FileDialog::getFilenameFilter() {
	return this->filter;
}

void FileDialog::setFilenameFilter($FilenameFilter* filter) {
	$synchronized(this) {
		$set(this, filter, filter);
		$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
		if (peer != nullptr) {
			peer->setFilenameFilter(filter);
		}
	}
}

void FileDialog::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->dir != nullptr && $nc(this->dir)->isEmpty()) {
		$set(this, dir, nullptr);
	}
	if (this->file != nullptr && $nc(this->file)->isEmpty()) {
		$set(this, file, nullptr);
	}
}

$String* FileDialog::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $Dialog::paramString());
	$plusAssign(str, $$str({",dir= "_s, this->dir}));
	$plusAssign(str, $$str({",file= "_s, this->file}));
	return $str({str, ((this->mode == FileDialog::LOAD) ? ",load"_s : ",save"_s)});
}

bool FileDialog::postsOldMouseEvents() {
	return false;
}

void clinit$FileDialog($Class* class$) {
	$assignStatic(FileDialog::base, "filedlg"_s);
	FileDialog::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			FileDialog::initIDs();
		}
	}
	{
		$AWTAccessor::setFileDialogAccessor($$new($FileDialog$1));
	}
}

FileDialog::FileDialog() {
}

$Class* FileDialog::load$($String* name, bool initialize) {
	$loadClass(FileDialog, name, initialize, &_FileDialog_ClassInfo_, clinit$FileDialog, allocate$FileDialog);
	return class$;
}

$Class* FileDialog::class$ = nullptr;

	} // awt
} // java