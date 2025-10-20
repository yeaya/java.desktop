#include <sun/awt/shell/ShellFolderManager.h>

#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/awt/shell/DefaultShellFolder.h>
#include <sun/awt/shell/ShellFolder$Invoker.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderManager$DirectInvoker.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $DefaultShellFolder = ::sun::awt::shell::DefaultShellFolder;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $ShellFolderManager$DirectInvoker = ::sun::awt::shell::ShellFolderManager$DirectInvoker;

namespace sun {
	namespace awt {
		namespace shell {

class ShellFolderManager$$Lambda$lambda$checkFiles$0 : public $Predicate {
	$class(ShellFolderManager$$Lambda$lambda$checkFiles$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($SecurityManager* sm) {
		$set(this, sm, sm);
	}
	virtual bool test(Object$* f) override {
		 return ShellFolderManager::lambda$checkFiles$0(sm, $cast($File, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ShellFolderManager$$Lambda$lambda$checkFiles$0>());
	}
	$SecurityManager* sm = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ShellFolderManager$$Lambda$lambda$checkFiles$0::fieldInfos[2] = {
	{"sm", "Ljava/lang/SecurityManager;", nullptr, $PUBLIC, $field(ShellFolderManager$$Lambda$lambda$checkFiles$0, sm)},
	{}
};
$MethodInfo ShellFolderManager$$Lambda$lambda$checkFiles$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderManager$$Lambda$lambda$checkFiles$0::*)($SecurityManager*)>(&ShellFolderManager$$Lambda$lambda$checkFiles$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ShellFolderManager$$Lambda$lambda$checkFiles$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.ShellFolderManager$$Lambda$lambda$checkFiles$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ShellFolderManager$$Lambda$lambda$checkFiles$0::load$($String* name, bool initialize) {
	$loadClass(ShellFolderManager$$Lambda$lambda$checkFiles$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ShellFolderManager$$Lambda$lambda$checkFiles$0::class$ = nullptr;

class ShellFolderManager$$Lambda$lambda$checkFiles$1$1 : public $IntFunction {
	$class(ShellFolderManager$$Lambda$lambda$checkFiles$1$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(ShellFolderManager::lambda$checkFiles$1(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ShellFolderManager$$Lambda$lambda$checkFiles$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ShellFolderManager$$Lambda$lambda$checkFiles$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderManager$$Lambda$lambda$checkFiles$1$1::*)()>(&ShellFolderManager$$Lambda$lambda$checkFiles$1$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ShellFolderManager$$Lambda$lambda$checkFiles$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.ShellFolderManager$$Lambda$lambda$checkFiles$1$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ShellFolderManager$$Lambda$lambda$checkFiles$1$1::load$($String* name, bool initialize) {
	$loadClass(ShellFolderManager$$Lambda$lambda$checkFiles$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ShellFolderManager$$Lambda$lambda$checkFiles$1$1::class$ = nullptr;

$MethodInfo _ShellFolderManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShellFolderManager::*)()>(&ShellFolderManager::init$))},
	{"checkFile", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($File*)>(&ShellFolderManager::checkFile))},
	{"checkFile", "(Ljava/io/File;Ljava/lang/SecurityManager;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($File*,$SecurityManager*)>(&ShellFolderManager::checkFile))},
	{"checkFiles", "([Ljava/io/File;)[Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileArray*(*)($FileArray*)>(&ShellFolderManager::checkFiles))},
	{"checkFiles", "(Ljava/util/stream/Stream;Ljava/lang/SecurityManager;)[Ljava/io/File;", "(Ljava/util/stream/Stream<Ljava/io/File;>;Ljava/lang/SecurityManager;)[Ljava/io/File;", $PRIVATE | $STATIC, $method(static_cast<$FileArray*(*)($Stream*,$SecurityManager*)>(&ShellFolderManager::checkFiles))},
	{"createInvoker", "()Lsun/awt/shell/ShellFolder$Invoker;", nullptr, $PROTECTED},
	{"createShellFolder", "(Ljava/io/File;)Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC, nullptr, "java.io.FileNotFoundException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"lambda$checkFiles$0", "(Ljava/lang/SecurityManager;Ljava/io/File;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($SecurityManager*,$File*)>(&ShellFolderManager::lambda$checkFiles$0))},
	{"lambda$checkFiles$1", "(I)[Ljava/io/File;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FileArray*(*)(int32_t)>(&ShellFolderManager::lambda$checkFiles$1))},
	{}
};

$InnerClassInfo _ShellFolderManager_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolderManager$DirectInvoker", "sun.awt.shell.ShellFolderManager", "DirectInvoker", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ShellFolderManager_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.ShellFolderManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ShellFolderManager_MethodInfo_,
	nullptr,
	nullptr,
	_ShellFolderManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolderManager$DirectInvoker"
};

$Object* allocate$ShellFolderManager($Class* clazz) {
	return $of($alloc(ShellFolderManager));
}

void ShellFolderManager::init$() {
}

$ShellFolder* ShellFolderManager::createShellFolder($File* file) {
	return $new($DefaultShellFolder, nullptr, file);
}

$Object* ShellFolderManager::get($String* key) {
	$useLocalCurrentObjectStackCache();
	if ($nc(key)->equals("fileChooserDefaultFolder"_s)) {
		$var($File, homeDir, $new($File, $($System::getProperty("user.home"_s))));
		try {
			return $of(checkFile($(createShellFolder(homeDir))));
		} catch ($FileNotFoundException&) {
			$var($FileNotFoundException, e, $catch());
			return $of(checkFile(homeDir));
		}
	} else if (key->equals("roots"_s)) {
		return $of(checkFiles($($File::listRoots())));
	} else if (key->equals("fileChooserComboBoxFolders"_s)) {
		return $of(get("roots"_s));
	} else if (key->equals("fileChooserShortcutPanelFolders"_s)) {
		return $of(checkFiles($$new($FileArray, {$cast($File, $(get("fileChooserDefaultFolder"_s)))})));
	}
	return $of(nullptr);
}

$File* ShellFolderManager::checkFile($File* f) {
	$var($SecurityManager, sm, $System::getSecurityManager());
	return (sm == nullptr || f == nullptr) ? f : checkFile(f, sm);
}

$File* ShellFolderManager::checkFile($File* f, $SecurityManager* sm) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(sm)->checkRead($($nc(f)->getPath()));
		if ($instanceOf($ShellFolder, f)) {
			$var($ShellFolder, sf, $cast($ShellFolder, f));
			if ($nc(sf)->isLink()) {
				sm->checkRead($($nc($(sf->getLinkLocation()))->getPath()));
			}
		}
		return f;
	} catch ($SecurityException&) {
		$var($Exception, e, $catch());
		return nullptr;
	} catch ($FileNotFoundException&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$FileArray* ShellFolderManager::checkFiles($FileArray* fs) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	return (sm == nullptr || fs == nullptr) ? fs : checkFiles($($Stream::of(fs)), sm);
}

$FileArray* ShellFolderManager::checkFiles($Stream* fs, $SecurityManager* sm) {
	$useLocalCurrentObjectStackCache();
	return $fcast($FileArray, $nc($($nc(fs)->filter(static_cast<$Predicate*>($$new(ShellFolderManager$$Lambda$lambda$checkFiles$0, sm)))))->toArray(static_cast<$IntFunction*>($$new(ShellFolderManager$$Lambda$lambda$checkFiles$1$1))));
}

bool ShellFolderManager::isComputerNode($File* dir) {
	return false;
}

bool ShellFolderManager::isFileSystemRoot($File* dir) {
	if ($instanceOf($ShellFolder, dir) && !$nc(($cast($ShellFolder, dir)))->isFileSystem()) {
		return false;
	}
	return ($nc(dir)->getParentFile() == nullptr);
}

$ShellFolder$Invoker* ShellFolderManager::createInvoker() {
	return $new($ShellFolderManager$DirectInvoker);
}

$FileArray* ShellFolderManager::lambda$checkFiles$1(int32_t x$0) {
	return $new($FileArray, x$0);
}

bool ShellFolderManager::lambda$checkFiles$0($SecurityManager* sm, $File* f) {
	return f != nullptr && checkFile(f, sm) != nullptr;
}

ShellFolderManager::ShellFolderManager() {
}

$Class* ShellFolderManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ShellFolderManager$$Lambda$lambda$checkFiles$0::classInfo$.name)) {
			return ShellFolderManager$$Lambda$lambda$checkFiles$0::load$(name, initialize);
		}
		if (name->equals(ShellFolderManager$$Lambda$lambda$checkFiles$1$1::classInfo$.name)) {
			return ShellFolderManager$$Lambda$lambda$checkFiles$1$1::load$(name, initialize);
		}
	}
	$loadClass(ShellFolderManager, name, initialize, &_ShellFolderManager_ClassInfo_, allocate$ShellFolderManager);
	return class$;
}

$Class* ShellFolderManager::class$ = nullptr;

		} // shell
	} // awt
} // sun