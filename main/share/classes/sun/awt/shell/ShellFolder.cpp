#include <sun/awt/shell/ShellFolder.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URI.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Comparator.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/Callable.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingConstants.h>
#include <sun/awt/shell/ShellFolder$1.h>
#include <sun/awt/shell/ShellFolder$2.h>
#include <sun/awt/shell/ShellFolder$3.h>
#include <sun/awt/shell/ShellFolder$4.h>
#include <sun/awt/shell/ShellFolder$Invoker.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/awt/shell/ShellFolderManager.h>
#include <jcpp.h>

#undef COLUMN_DATE
#undef COLUMN_NAME
#undef COLUMN_SIZE
#undef DEFAULT_COMPARATOR
#undef FILE_COMPARATOR
#undef LEADING
#undef NOFOLLOW_LINKS
#undef RIGHT

using $FileArray = $Array<::java::io::File>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Constructor = ::java::lang::reflect::Constructor;
using $URI = ::java::net::URI;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Paths = ::java::nio::file::Paths;
using $Comparator = ::java::util::Comparator;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Callable = ::java::util::concurrent::Callable;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ShellFolder$1 = ::sun::awt::shell::ShellFolder$1;
using $ShellFolder$2 = ::sun::awt::shell::ShellFolder$2;
using $ShellFolder$3 = ::sun::awt::shell::ShellFolder$3;
using $ShellFolder$4 = ::sun::awt::shell::ShellFolder$4;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $ShellFolderManager = ::sun::awt::shell::ShellFolderManager;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _ShellFolder_FieldInfo_[] = {
	{"COLUMN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_NAME)},
	{"COLUMN_SIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_SIZE)},
	{"COLUMN_DATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_DATE)},
	{"parent", "Lsun/awt/shell/ShellFolder;", nullptr, $PROTECTED, $field(ShellFolder, parent)},
	{"shellFolderManager", "Lsun/awt/shell/ShellFolderManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, shellFolderManager)},
	{"invoker", "Lsun/awt/shell/ShellFolder$Invoker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, invoker)},
	{"DEFAULT_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, DEFAULT_COMPARATOR)},
	{"FILE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/io/File;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, FILE_COMPARATOR)},
	{}
};

$MethodInfo _ShellFolder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ShellFolder::*)(ShellFolder*,$String*)>(&ShellFolder::init$))},
	{"canRead", "()Z", nullptr, $PUBLIC},
	{"canWrite", "()Z", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"createNewFile", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"deleteOnExit", "()V", nullptr, $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&ShellFolder::get))},
	{"getAbsoluteFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExecutableType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFolderColumnValue", "(Ljava/io/File;I)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($File*,int32_t)>(&ShellFolder::getFolderColumnValue))},
	{"getFolderColumnValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFolderColumns", "(Ljava/io/File;)[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ShellFolderColumnInfoArray*(*)($File*)>(&ShellFolder::getFolderColumns))},
	{"getFolderColumns", "()[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC},
	{"getFolderType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIcon", "(Z)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getIcon", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getLinkLocation", "()Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.FileNotFoundException"},
	{"getNormalizedFile", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$File*(*)($File*)>(&ShellFolder::getNormalizedFile)), "java.io.IOException"},
	{"getParent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParentFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getShellFolder", "(Ljava/io/File;)Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ShellFolder*(*)($File*)>(&ShellFolder::getShellFolder)), "java.io.FileNotFoundException"},
	{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Callable*)>(&ShellFolder::invoke))},
	{"invoke", "(Ljava/util/concurrent/Callable;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;E:Ljava/lang/Throwable;>(Ljava/util/concurrent/Callable<TT;>;Ljava/lang/Class<TE;>;)TT;^Ljava/lang/InterruptedException;^TE;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Callable*,$Class*)>(&ShellFolder::invoke)), "java.lang.InterruptedException,java.lang.Throwable"},
	{"isAbsolute", "()Z", nullptr, $PUBLIC},
	{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($File*)>(&ShellFolder::isComputerNode))},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isFile", "()Z", nullptr, $PUBLIC},
	{"isFileSystem", "()Z", nullptr, $PUBLIC},
	{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($File*)>(&ShellFolder::isFileSystemRoot))},
	{"isLink", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lastModified", "()J", nullptr, $PUBLIC},
	{"length", "()J", nullptr, $PUBLIC},
	{"listFiles", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"listFiles", "(Z)[Ljava/io/File;", nullptr, $PUBLIC},
	{"mkdir", "()Z", nullptr, $PUBLIC},
	{"mkdirs", "()Z", nullptr, $PUBLIC},
	{"renameTo", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"setLastModified", "(J)Z", nullptr, $PUBLIC},
	{"setReadOnly", "()Z", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/io/File;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*)>(&ShellFolder::sort))},
	{"sortChildren", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/io/File;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _ShellFolder_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.shell.ShellFolder$4", nullptr, nullptr, 0},
	{"sun.awt.shell.ShellFolder$3", nullptr, nullptr, 0},
	{"sun.awt.shell.ShellFolder$2", nullptr, nullptr, 0},
	{"sun.awt.shell.ShellFolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShellFolder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.shell.ShellFolder",
	"java.io.File",
	nullptr,
	_ShellFolder_FieldInfo_,
	_ShellFolder_MethodInfo_,
	nullptr,
	nullptr,
	_ShellFolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolder$Invoker,sun.awt.shell.ShellFolder$4,sun.awt.shell.ShellFolder$3,sun.awt.shell.ShellFolder$2,sun.awt.shell.ShellFolder$1"
};

$Object* allocate$ShellFolder($Class* clazz) {
	return $of($alloc(ShellFolder));
}

$String* ShellFolder::COLUMN_NAME = nullptr;
$String* ShellFolder::COLUMN_SIZE = nullptr;
$String* ShellFolder::COLUMN_DATE = nullptr;
$ShellFolderManager* ShellFolder::shellFolderManager = nullptr;
$ShellFolder$Invoker* ShellFolder::invoker = nullptr;
$Comparator* ShellFolder::DEFAULT_COMPARATOR = nullptr;
$Comparator* ShellFolder::FILE_COMPARATOR = nullptr;

void ShellFolder::init$(ShellFolder* parent, $String* pathname) {
	$File::init$((pathname != nullptr) ? pathname : "ShellFolder"_s);
	$set(this, parent, parent);
}

bool ShellFolder::isFileSystem() {
	return (!$nc($(getPath()))->startsWith("ShellFolder"_s));
}

$String* ShellFolder::getParent() {
	if (this->parent == nullptr && isFileSystem()) {
		return $File::getParent();
	}
	if (this->parent != nullptr) {
		return ($nc(this->parent)->getPath());
	} else {
		return nullptr;
	}
}

$File* ShellFolder::getParentFile() {
	if (this->parent != nullptr) {
		return this->parent;
	} else if (isFileSystem()) {
		return $File::getParentFile();
	} else {
		return nullptr;
	}
}

$FileArray* ShellFolder::listFiles() {
	return listFiles(true);
}

$FileArray* ShellFolder::listFiles(bool includeHiddenFiles) {
	$useLocalCurrentObjectStackCache();
	$var($FileArray, files, $File::listFiles());
	if (!includeHiddenFiles) {
		$var($Vector, v, $new($Vector));
		int32_t nameCount = (files == nullptr) ? 0 : $nc(files)->length;
		for (int32_t i = 0; i < nameCount; ++i) {
			if (!$nc(files->get(i))->isHidden()) {
				v->addElement(files->get(i));
			}
		}
		$assign(files, $fcast($FileArray, v->toArray($$new($FileArray, v->size()))));
	}
	return files;
}

int32_t ShellFolder::compareTo($File* file2) {
	$useLocalCurrentObjectStackCache();
	if (file2 == nullptr || !($instanceOf(ShellFolder, file2)) || (($instanceOf(ShellFolder, file2)) && $nc(($cast(ShellFolder, file2)))->isFileSystem())) {
		if (isFileSystem()) {
			return $File::compareTo(file2);
		} else {
			return -1;
		}
	} else if (isFileSystem()) {
		return 1;
	} else {
		return $nc($(getName()))->compareTo($($nc(file2)->getName()));
	}
}

$Image* ShellFolder::getIcon(bool getLargeIcon) {
	return nullptr;
}

$Image* ShellFolder::getIcon(int32_t width, int32_t height) {
	return nullptr;
}

ShellFolder* ShellFolder::getShellFolder($File* file) {
	$init(ShellFolder);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(ShellFolder, file)) {
		return $cast(ShellFolder, file);
	}
	$init($LinkOption);
	if (!$Files::exists($($Paths::get($($nc(file)->getPath()), $$new($StringArray, 0))), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
		$throwNew($FileNotFoundException);
	}
	return $nc(ShellFolder::shellFolderManager)->createShellFolder(file);
}

$Object* ShellFolder::get($String* key) {
	$init(ShellFolder);
	return $of($nc(ShellFolder::shellFolderManager)->get(key));
}

bool ShellFolder::isComputerNode($File* dir) {
	$init(ShellFolder);
	return $nc(ShellFolder::shellFolderManager)->isComputerNode(dir);
}

bool ShellFolder::isFileSystemRoot($File* dir) {
	$init(ShellFolder);
	return $nc(ShellFolder::shellFolderManager)->isFileSystemRoot(dir);
}

$File* ShellFolder::getNormalizedFile($File* f) {
	$init(ShellFolder);
	$useLocalCurrentObjectStackCache();
	$var($File, canonical, $nc(f)->getCanonicalFile());
	if (f->equals(canonical)) {
		return canonical;
	}
	return $new($File, $($nc($(f->toURI()))->normalize()));
}

void ShellFolder::sort($List* files) {
	$init(ShellFolder);
	if (files == nullptr || $nc(files)->size() <= 1) {
		return;
	}
	invoke($$new($ShellFolder$1, files));
}

void ShellFolder::sortChildren($List* files) {
	invoke($$new($ShellFolder$2, this, files));
}

bool ShellFolder::isAbsolute() {
	bool var$0 = !isFileSystem();
	return (var$0 || $File::isAbsolute());
}

$File* ShellFolder::getAbsoluteFile() {
	return (isFileSystem() ? $File::getAbsoluteFile() : static_cast<$File*>(this));
}

bool ShellFolder::canRead() {
	return (isFileSystem() ? $File::canRead() : true);
}

bool ShellFolder::canWrite() {
	return (isFileSystem() ? $File::canWrite() : false);
}

bool ShellFolder::exists() {
	bool var$1 = !isFileSystem();
	bool var$0 = var$1 || isFileSystemRoot(this);
	return (var$0 || $File::exists());
}

bool ShellFolder::isDirectory() {
	return (isFileSystem() ? $File::isDirectory() : true);
}

bool ShellFolder::isFile() {
	return (isFileSystem() ? $File::isFile() : !isDirectory());
}

int64_t ShellFolder::lastModified() {
	return (isFileSystem() ? $File::lastModified() : (int64_t)0);
}

int64_t ShellFolder::length() {
	return (isFileSystem() ? $File::length() : (int64_t)0);
}

bool ShellFolder::createNewFile() {
	return (isFileSystem() ? $File::createNewFile() : false);
}

bool ShellFolder::delete$() {
	return (isFileSystem() ? $File::delete$() : false);
}

void ShellFolder::deleteOnExit() {
	if (isFileSystem()) {
		$File::deleteOnExit();
	} else {
	}
}

bool ShellFolder::mkdir() {
	return (isFileSystem() ? $File::mkdir() : false);
}

bool ShellFolder::mkdirs() {
	return (isFileSystem() ? $File::mkdirs() : false);
}

bool ShellFolder::renameTo($File* dest) {
	return (isFileSystem() ? $File::renameTo(dest) : false);
}

bool ShellFolder::setLastModified(int64_t time) {
	return (isFileSystem() ? $File::setLastModified(time) : false);
}

bool ShellFolder::setReadOnly() {
	return (isFileSystem() ? $File::setReadOnly() : false);
}

$String* ShellFolder::toString() {
	return (isFileSystem() ? $File::toString() : getDisplayName());
}

$ShellFolderColumnInfoArray* ShellFolder::getFolderColumns($File* dir) {
	$init(ShellFolder);
	$useLocalCurrentObjectStackCache();
	$var($ShellFolderColumnInfoArray, columns, nullptr);
	if ($instanceOf(ShellFolder, dir)) {
		$assign(columns, $nc(($cast(ShellFolder, dir)))->getFolderColumns());
	}
	if (columns == nullptr) {
		$var($String, var$0, ShellFolder::COLUMN_NAME);
		$var($Integer, var$1, $Integer::valueOf(150));
		$var($String, var$2, ShellFolder::COLUMN_SIZE);
		$var($Integer, var$3, $Integer::valueOf(75));
		$var($String, var$4, ShellFolder::COLUMN_DATE);
		$var($Integer, var$5, $Integer::valueOf(130));
		$assign(columns, $new($ShellFolderColumnInfoArray, {
			$$new($ShellFolderColumnInfo, var$0, var$1, $($Integer::valueOf($SwingConstants::LEADING)), true, nullptr, ShellFolder::FILE_COMPARATOR),
			$$new($ShellFolderColumnInfo, var$2, var$3, $($Integer::valueOf($SwingConstants::RIGHT)), true, nullptr, ShellFolder::DEFAULT_COMPARATOR, true),
			$$new($ShellFolderColumnInfo, var$4, var$5, $($Integer::valueOf($SwingConstants::LEADING)), true, nullptr, ShellFolder::DEFAULT_COMPARATOR, true)
		}));
	}
	return columns;
}

$ShellFolderColumnInfoArray* ShellFolder::getFolderColumns() {
	return nullptr;
}

$Object* ShellFolder::getFolderColumnValue($File* file, int32_t column) {
	$init(ShellFolder);
	if ($instanceOf(ShellFolder, file)) {
		$var($Object, value, $nc(($cast(ShellFolder, file)))->getFolderColumnValue(column));
		if (value != nullptr) {
			return $of(value);
		}
	}
	if (file == nullptr || !$nc(file)->exists()) {
		return $of(nullptr);
	}
	{
		int64_t time = 0;
		switch (column) {
		case 0:
			{
				return $of(file);
			}
		case 1:
			{
				return $of($nc(file)->isDirectory() ? ($Long*)nullptr : $Long::valueOf($nc(file)->length()));
			}
		case 2:
			{
				if (isFileSystemRoot(file)) {
					return $of(nullptr);
				}
				time = $nc(file)->lastModified();
				return $of((time == (int64_t)0) ? ($Object*)nullptr : $of($new($Date, time)));
			}
		default:
			{
				return $of(nullptr);
			}
		}
	}
}

$Object* ShellFolder::getFolderColumnValue(int32_t column) {
	return $of(nullptr);
}

$Object* ShellFolder::invoke($Callable* task) {
	$init(ShellFolder);
	try {
		$load($RuntimeException);
		return $of(invoke(task, $RuntimeException::class$));
	} catch ($InterruptedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$Object* ShellFolder::invoke($Callable* task, $Class* exceptionClass) {
	$init(ShellFolder);
	$useLocalCurrentObjectStackCache();
	try {
		return $of($nc(ShellFolder::invoker)->invoke(task));
	} catch ($Exception& e) {
		if ($instanceOf($RuntimeException, e)) {
			$throw($cast($RuntimeException, e));
		}
		if ($instanceOf($InterruptedException, e)) {
			$($Thread::currentThread())->interrupt();
			$throw($cast($InterruptedException, e));
		}
		if ($nc(exceptionClass)->isInstance(e)) {
			$throw($cast($Throwable, $(exceptionClass->cast(e))));
		}
		$throwNew($RuntimeException, "Unexpected error"_s, e);
	}
	$shouldNotReachHere();
}

int32_t ShellFolder::compareTo(Object$* file2) {
	return this->compareTo($cast($File, file2));
}

void clinit$ShellFolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ShellFolder::COLUMN_NAME, "FileChooser.fileNameHeaderText"_s);
	$assignStatic(ShellFolder::COLUMN_SIZE, "FileChooser.fileSizeHeaderText"_s);
	$assignStatic(ShellFolder::COLUMN_DATE, "FileChooser.fileDateHeaderText"_s);
	$beforeCallerSensitive();
	{
		$var($String, managerClassName, $cast($String, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("Shell.shellFolderManager"_s)));
		$Class* managerClass = nullptr;
		try {
			managerClass = $Class::forName(managerClassName, false, nullptr);
			$load($ShellFolderManager);
			if (!$ShellFolderManager::class$->isAssignableFrom(managerClass)) {
				managerClass = nullptr;
			}
		} catch ($ClassNotFoundException& e) {
		} catch ($NullPointerException& e) {
		} catch ($SecurityException& e) {
		}
		if (managerClass == nullptr) {
			$load($ShellFolderManager);
			managerClass = $ShellFolderManager::class$;
		}
		try {
			$assignStatic(ShellFolder::shellFolderManager, $cast($ShellFolderManager, $nc($($nc(managerClass)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($Error, $$str({"Could not instantiate Shell Folder Manager: "_s, $($nc(managerClass)->getName())}));
		}
		$assignStatic(ShellFolder::invoker, $nc(ShellFolder::shellFolderManager)->createInvoker());
	}
	$assignStatic(ShellFolder::DEFAULT_COMPARATOR, $new($ShellFolder$3));
	$assignStatic(ShellFolder::FILE_COMPARATOR, $new($ShellFolder$4));
}

ShellFolder::ShellFolder() {
}

$Class* ShellFolder::load$($String* name, bool initialize) {
	$loadClass(ShellFolder, name, initialize, &_ShellFolder_ClassInfo_, clinit$ShellFolder, allocate$ShellFolder);
	return class$;
}

$Class* ShellFolder::class$ = nullptr;

		} // shell
	} // awt
} // sun