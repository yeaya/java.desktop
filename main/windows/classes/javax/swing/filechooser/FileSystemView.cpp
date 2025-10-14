#include <javax/swing/filechooser/FileSystemView.h>

#include <java/awt/Image.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>
#include <javax/swing/filechooser/GenericFileSystemView.h>
#include <javax/swing/filechooser/UnixFileSystemView.h>
#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $Image = ::java::awt::Image;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView$FileSystemRoot = ::javax::swing::filechooser::FileSystemView$FileSystemRoot;
using $GenericFileSystemView = ::javax::swing::filechooser::GenericFileSystemView;
using $UnixFileSystemView = ::javax::swing::filechooser::UnixFileSystemView;
using $WindowsFileSystemView = ::javax::swing::filechooser::WindowsFileSystemView;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace javax {
	namespace swing {
		namespace filechooser {

class FileSystemView$$Lambda$lambda$new$0 : public $PropertyChangeListener {
	$class(FileSystemView$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($WeakReference* weakReference) {
		$set(this, weakReference, weakReference);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		FileSystemView::lambda$new$0(weakReference, evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileSystemView$$Lambda$lambda$new$0>());
	}
	$WeakReference* weakReference = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileSystemView$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"weakReference", "Ljava/lang/ref/WeakReference;", nullptr, $PUBLIC, $field(FileSystemView$$Lambda$lambda$new$0, weakReference)},
	{}
};
$MethodInfo FileSystemView$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ref/WeakReference;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemView$$Lambda$lambda$new$0::*)($WeakReference*)>(&FileSystemView$$Lambda$lambda$new$0::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileSystemView$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.filechooser.FileSystemView$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	fieldInfos,
	methodInfos
};
$Class* FileSystemView$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(FileSystemView$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileSystemView$$Lambda$lambda$new$0::class$ = nullptr;

class FileSystemView$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(FileSystemView$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PropertyChangeListener* pcl) {
		$set(this, pcl, pcl);
	}
	virtual void run() override {
		FileSystemView::lambda$new$1(pcl);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileSystemView$$Lambda$lambda$new$1$1>());
	}
	$PropertyChangeListener* pcl = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileSystemView$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"pcl", "Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $field(FileSystemView$$Lambda$lambda$new$1$1, pcl)},
	{}
};
$MethodInfo FileSystemView$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemView$$Lambda$lambda$new$1$1::*)($PropertyChangeListener*)>(&FileSystemView$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileSystemView$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.filechooser.FileSystemView$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FileSystemView$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemView$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileSystemView$$Lambda$lambda$new$1$1::class$ = nullptr;

$FieldInfo _FileSystemView_FieldInfo_[] = {
	{"windowsFileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC, $staticField(FileSystemView, windowsFileSystemView)},
	{"unixFileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC, $staticField(FileSystemView, unixFileSystemView)},
	{"genericFileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC, $staticField(FileSystemView, genericFileSystemView)},
	{"useSystemExtensionHiding", "Z", nullptr, $PRIVATE, $field(FileSystemView, useSystemExtensionHiding)},
	{}
};

$MethodInfo _FileSystemView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemView::*)()>(&FileSystemView::init$))},
	{"createFileObject", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC},
	{"createFileObject", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC},
	{"createFileSystemRoot", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PROTECTED},
	{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getChild", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC},
	{"getChooserComboBoxFiles", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"getChooserShortcutPanelFiles", "()[Ljava/io/File;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$FileArray*(FileSystemView::*)()>(&FileSystemView::getChooserShortcutPanelFiles))},
	{"getDefaultDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getFileSystemView", "()Ljavax/swing/filechooser/FileSystemView;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileSystemView*(*)()>(&FileSystemView::getFileSystemView))},
	{"getFiles", "(Ljava/io/File;Z)[Ljava/io/File;", nullptr, $PUBLIC},
	{"getHomeDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getLinkLocation", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.FileNotFoundException"},
	{"getParentDirectory", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC},
	{"getRoots", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"getShellFolder", "(Ljava/io/File;)Lsun/awt/shell/ShellFolder;", nullptr, 0, nullptr, "java.io.FileNotFoundException"},
	{"getSystemDisplayName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getSystemIcon", "(Ljava/io/File;II)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getSystemTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFileSystem", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isHiddenFile", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isLink", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isParent", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"lambda$new$0", "(Ljava/lang/ref/WeakReference;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($WeakReference*,$PropertyChangeEvent*)>(&FileSystemView::lambda$new$0))},
	{"lambda$new$1", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeListener*)>(&FileSystemView::lambda$new$1))},
	{}
};

$InnerClassInfo _FileSystemView_InnerClassesInfo_[] = {
	{"javax.swing.filechooser.FileSystemView$FileSystemRoot", "javax.swing.filechooser.FileSystemView", "FileSystemRoot", $STATIC},
	{}
};

$ClassInfo _FileSystemView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.filechooser.FileSystemView",
	"java.lang.Object",
	nullptr,
	_FileSystemView_FieldInfo_,
	_FileSystemView_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.filechooser.FileSystemView$FileSystemRoot"
};

$Object* allocate$FileSystemView($Class* clazz) {
	return $of($alloc(FileSystemView));
}

FileSystemView* FileSystemView::windowsFileSystemView = nullptr;
FileSystemView* FileSystemView::unixFileSystemView = nullptr;
FileSystemView* FileSystemView::genericFileSystemView = nullptr;

FileSystemView* FileSystemView::getFileSystemView() {
	$init(FileSystemView);
	$init($File);
	if ($File::separatorChar == u'\\') {
		if (FileSystemView::windowsFileSystemView == nullptr) {
			$assignStatic(FileSystemView::windowsFileSystemView, $new($WindowsFileSystemView));
		}
		return FileSystemView::windowsFileSystemView;
	}
	if ($File::separatorChar == u'/') {
		if (FileSystemView::unixFileSystemView == nullptr) {
			$assignStatic(FileSystemView::unixFileSystemView, $new($UnixFileSystemView));
		}
		return FileSystemView::unixFileSystemView;
	}
	if (FileSystemView::genericFileSystemView == nullptr) {
		$assignStatic(FileSystemView::genericFileSystemView, $new($GenericFileSystemView));
	}
	return FileSystemView::genericFileSystemView;
}

void FileSystemView::init$() {
	this->useSystemExtensionHiding = $nc($($UIManager::getDefaults()))->getBoolean("FileChooser.useSystemExtensionHiding"_s);
	$var($WeakReference, weakReference, $new($WeakReference, this));
	$var($PropertyChangeListener, pcl, static_cast<$PropertyChangeListener*>($new(FileSystemView$$Lambda$lambda$new$0, weakReference)));
	$UIManager::addPropertyChangeListener(pcl);
	$nc($($CleanerFactory::cleaner()))->register$(this, static_cast<$Runnable*>($$new(FileSystemView$$Lambda$lambda$new$1$1, pcl)));
}

bool FileSystemView::isRoot($File* f) {
	if (f == nullptr || !$nc(f)->isAbsolute()) {
		return false;
	}
	$var($FileArray, roots, getRoots());
	{
		$var($FileArray, arr$, roots);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, root, arr$->get(i$));
			{
				if ($nc(root)->equals(f)) {
					return true;
				}
			}
		}
	}
	return false;
}

$Boolean* FileSystemView::isTraversable($File* f) {
	return $Boolean::valueOf($nc(f)->isDirectory());
}

$String* FileSystemView::getSystemDisplayName($File* f) {
	if (f == nullptr) {
		return nullptr;
	}
	$var($String, name, $nc(f)->getName());
	bool var$2 = !$nc(name)->equals(".."_s);
	bool var$1 = var$2 && !name->equals("."_s);
	if (var$1) {
		bool var$3 = this->useSystemExtensionHiding || !isFileSystem(f);
		var$1 = (var$3 || isFileSystemRoot(f));
	}
	bool var$0 = var$1;
	if (var$0 && ($instanceOf($ShellFolder, f) || f->exists())) {
		try {
			$assign(name, $nc($(getShellFolder(f)))->getDisplayName());
		} catch ($FileNotFoundException&) {
			$var($FileNotFoundException, e, $catch());
			return nullptr;
		}
		if (name == nullptr || $nc(name)->length() == 0) {
			$assign(name, f->getPath());
		}
	}
	return name;
}

$String* FileSystemView::getSystemTypeDescription($File* f) {
	return nullptr;
}

$Icon* FileSystemView::getSystemIcon($File* f) {
	if (f == nullptr) {
		return nullptr;
	}
	$var($ShellFolder, sf, nullptr);
	try {
		$assign(sf, getShellFolder(f));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	$var($Image, img, $nc(sf)->getIcon(false));
	if (img != nullptr) {
		return $new($ImageIcon, img, $(sf->getFolderType()));
	} else {
		return $UIManager::getIcon($nc(f)->isDirectory() ? $of("FileView.directoryIcon"_s) : $of("FileView.fileIcon"_s));
	}
}

$Icon* FileSystemView::getSystemIcon($File* f, int32_t width, int32_t height) {
	if (height < 1 || width < 1) {
		$throwNew($IllegalArgumentException, "Icon size can not be below 1"_s);
	}
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "The file reference should not be null"_s);
	}
	if (!$nc(f)->exists()) {
		return nullptr;
	}
	$var($ShellFolder, sf, nullptr);
	try {
		$assign(sf, $ShellFolder::getShellFolder(f));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	$var($Image, img, $nc(sf)->getIcon(width, height));
	if (img != nullptr) {
		return $new($ImageIcon, img, $(sf->getFolderType()));
	} else {
		return $UIManager::getIcon($nc(f)->isDirectory() ? $of("FileView.directoryIcon"_s) : $of("FileView.fileIcon"_s));
	}
}

bool FileSystemView::isParent($File* folder, $File* file) {
	if (folder == nullptr || file == nullptr) {
		return false;
	} else if ($instanceOf($ShellFolder, folder)) {
		$var($File, parent, $nc(file)->getParentFile());
		if (parent != nullptr && parent->equals(folder)) {
			return true;
		}
		$var($FileArray, children, getFiles(folder, false));
		{
			$var($FileArray, arr$, children);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($File, child, arr$->get(i$));
				{
					if (file->equals(child)) {
						return true;
					}
				}
			}
		}
		return false;
	} else {
		return $nc(folder)->equals($($nc(file)->getParentFile()));
	}
}

$File* FileSystemView::getChild($File* parent, $String* fileName) {
	if ($instanceOf($ShellFolder, parent)) {
		$var($FileArray, children, getFiles(parent, false));
		{
			$var($FileArray, arr$, children);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($File, child, arr$->get(i$));
				{
					if ($nc($($nc(child)->getName()))->equals(fileName)) {
						return child;
					}
				}
			}
		}
	}
	return createFileObject(parent, fileName);
}

bool FileSystemView::isFileSystem($File* f) {
	if ($instanceOf($ShellFolder, f)) {
		$var($ShellFolder, sf, $cast($ShellFolder, f));
		bool var$0 = $nc(sf)->isFileSystem();
		if (var$0) {
			bool var$1 = sf->isLink();
			var$0 = !(var$1 && sf->isDirectory());
		}
		return var$0;
	} else {
		return true;
	}
}

bool FileSystemView::isHiddenFile($File* f) {
	return $nc(f)->isHidden();
}

bool FileSystemView::isFileSystemRoot($File* dir) {
	return $ShellFolder::isFileSystemRoot(dir);
}

bool FileSystemView::isDrive($File* dir) {
	return false;
}

bool FileSystemView::isFloppyDrive($File* dir) {
	return false;
}

bool FileSystemView::isComputerNode($File* dir) {
	return $ShellFolder::isComputerNode(dir);
}

$FileArray* FileSystemView::getRoots() {
	$var($FileArray, roots, $cast($FileArray, $ShellFolder::get("roots"_s)));
	for (int32_t i = 0; i < $nc(roots)->length; ++i) {
		if (isFileSystemRoot(roots->get(i))) {
			roots->set(i, $(createFileSystemRoot(roots->get(i))));
		}
	}
	return roots;
}

$File* FileSystemView::getHomeDirectory() {
	return createFileObject($($System::getProperty("user.home"_s)));
}

$File* FileSystemView::getDefaultDirectory() {
	$var($File, f, $cast($File, $ShellFolder::get("fileChooserDefaultFolder"_s)));
	if (isFileSystemRoot(f)) {
		$assign(f, createFileSystemRoot(f));
	}
	return f;
}

$File* FileSystemView::createFileObject($File* dir, $String* filename) {
	if (dir == nullptr) {
		return $new($File, filename);
	} else {
		return $new($File, dir, filename);
	}
}

$File* FileSystemView::createFileObject($String* path) {
	$var($File, f, $new($File, path));
	if (isFileSystemRoot(f)) {
		$assign(f, createFileSystemRoot(f));
	}
	return f;
}

$FileArray* FileSystemView::getFiles($File* dir$renamed, bool useFileHiding) {
	$var($File, dir, dir$renamed);
	$var($List, files, $new($ArrayList));
	if (!($instanceOf($ShellFolder, dir))) {
		try {
			$assign(dir, getShellFolder(dir));
		} catch ($FileNotFoundException&) {
			$var($FileNotFoundException, e, $catch());
			return $new($FileArray, 0);
		}
	}
	$var($FileArray, names, $nc(($cast($ShellFolder, dir)))->listFiles(!useFileHiding));
	if (names == nullptr) {
		return $new($FileArray, 0);
	}
	{
		$var($FileArray, arr$, names);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, f, arr$->get(i$));
			{
				if ($($Thread::currentThread())->isInterrupted()) {
					break;
				}
				if (!($instanceOf($ShellFolder, f))) {
					if (isFileSystemRoot(f)) {
						$assign(f, createFileSystemRoot(f));
					}
					try {
						$assign(f, $ShellFolder::getShellFolder(f));
					} catch ($FileNotFoundException&) {
						$var($FileNotFoundException, e, $catch());
						continue;
					} catch ($InternalError&) {
						$var($InternalError, e, $catch());
						continue;
					}
				}
				if (!useFileHiding || !isHiddenFile(f)) {
					files->add(f);
				}
			}
		}
	}
	return $fcast($FileArray, files->toArray($$new($FileArray, files->size())));
}

$File* FileSystemView::getParentDirectory($File* dir) {
	if (dir == nullptr || !$nc(dir)->exists()) {
		return nullptr;
	}
	$var($ShellFolder, sf, nullptr);
	try {
		$assign(sf, getShellFolder(dir));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	$var($File, psf, $nc(sf)->getParentFile());
	if (psf == nullptr) {
		return nullptr;
	}
	if (isFileSystem(psf)) {
		$var($File, f, psf);
		if (!$nc(f)->exists()) {
			$var($File, ppsf, $nc(psf)->getParentFile());
			if (ppsf == nullptr || !isFileSystem(ppsf)) {
				$assign(f, createFileSystemRoot(f));
			}
		}
		return f;
	} else {
		return psf;
	}
}

$FileArray* FileSystemView::getChooserComboBoxFiles() {
	return $cast($FileArray, $ShellFolder::get("fileChooserComboBoxFolders"_s));
}

$FileArray* FileSystemView::getChooserShortcutPanelFiles() {
	return $cast($FileArray, $ShellFolder::get("fileChooserShortcutPanelFolders"_s));
}

bool FileSystemView::isLink($File* file) {
	if (file == nullptr) {
		$throwNew($NullPointerException, "file is null"_s);
	}
	try {
		return $nc($($ShellFolder::getShellFolder(file)))->isLink();
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$File* FileSystemView::getLinkLocation($File* file) {
	if (file == nullptr) {
		$throwNew($NullPointerException, "file is null"_s);
	}
	$var($ShellFolder, shellFolder, nullptr);
	try {
		$assign(shellFolder, $ShellFolder::getShellFolder(file));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	return $nc(shellFolder)->isLink() ? static_cast<$File*>($nc(shellFolder)->getLinkLocation()) : ($File*)nullptr;
}

$ShellFolder* FileSystemView::getShellFolder($File* f$renamed) {
	$var($File, f, f$renamed);
	if (!($instanceOf($ShellFolder, f)) && !($instanceOf($FileSystemView$FileSystemRoot, f)) && isFileSystemRoot(f)) {
		$assign(f, createFileSystemRoot(f));
	}
	try {
		return $ShellFolder::getShellFolder(f);
	} catch ($InternalError&) {
		$var($InternalError, e, $catch());
		$init($System);
		$nc($System::err)->println($$str({"FileSystemView.getShellFolder: f="_s, f}));
		e->printStackTrace();
		return nullptr;
	}
	$shouldNotReachHere();
}

$File* FileSystemView::createFileSystemRoot($File* f) {
	return $new($FileSystemView$FileSystemRoot, f);
}

void FileSystemView::lambda$new$1($PropertyChangeListener* pcl) {
	$init(FileSystemView);
	$UIManager::removePropertyChangeListener(pcl);
}

void FileSystemView::lambda$new$0($WeakReference* weakReference, $PropertyChangeEvent* evt) {
	$init(FileSystemView);
	$var(FileSystemView, fsv, $cast(FileSystemView, $nc(weakReference)->get()));
	if (fsv != nullptr && $nc($($nc(evt)->getPropertyName()))->equals("lookAndFeel"_s)) {
		fsv->useSystemExtensionHiding = $nc($($UIManager::getDefaults()))->getBoolean("FileChooser.useSystemExtensionHiding"_s);
	}
}

void clinit$FileSystemView($Class* class$) {
	$assignStatic(FileSystemView::windowsFileSystemView, nullptr);
	$assignStatic(FileSystemView::unixFileSystemView, nullptr);
	$assignStatic(FileSystemView::genericFileSystemView, nullptr);
}

FileSystemView::FileSystemView() {
}

$Class* FileSystemView::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FileSystemView$$Lambda$lambda$new$0::classInfo$.name)) {
			return FileSystemView$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(FileSystemView$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return FileSystemView$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$loadClass(FileSystemView, name, initialize, &_FileSystemView_ClassInfo_, clinit$FileSystemView, allocate$FileSystemView);
	return class$;
}

$Class* FileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax