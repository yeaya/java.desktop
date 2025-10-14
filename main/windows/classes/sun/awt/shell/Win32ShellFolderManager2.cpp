#include <sun/awt/shell/Win32ShellFolderManager2.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/shell/ShellFolder$Invoker.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderManager.h>
#include <sun/awt/shell/Win32ShellFolder2$MultiResolutionIconImage.h>
#include <sun/awt/shell/Win32ShellFolder2$SystemIcon.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2$1.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef IDI_ERROR
#undef IDI_EXCLAMATION
#undef IDI_INFORMATION
#undef IDI_QUESTION
#undef STANDARD_VIEW_BUTTONS
#undef TYPE_INT_ARGB
#undef VIEW_DETAILS
#undef VIEW_LIST
#undef VIEW_NEWFOLDER
#undef VIEW_PARENTFOLDER
#undef WARNING

using $ImageArray = $Array<::java::awt::Image>;
using $FileArray = $Array<::java::io::File>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $ShellFolderManager = ::sun::awt::shell::ShellFolderManager;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$MultiResolutionIconImage = ::sun::awt::shell::Win32ShellFolder2$MultiResolutionIconImage;
using $Win32ShellFolder2$SystemIcon = ::sun::awt::shell::Win32ShellFolder2$SystemIcon;
using $Win32ShellFolderManager2$1 = ::sun::awt::shell::Win32ShellFolderManager2$1;
using $Win32ShellFolderManager2$ComInvoker = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace shell {

class Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0 : public $Predicate {
	$class(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($SecurityManager* sm) {
		$set(this, sm, sm);
	}
	virtual bool test(Object$* file) override {
		 return Win32ShellFolderManager2::lambda$checkFiles$0(sm, $cast($File, file));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0>());
	}
	$SecurityManager* sm = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::fieldInfos[2] = {
	{"sm", "Ljava/lang/SecurityManager;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0, sm)},
	{}
};
$MethodInfo Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::*)($SecurityManager*)>(&Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::class$ = nullptr;

class Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1 : public $IntFunction {
	$class(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(Win32ShellFolderManager2::lambda$checkFiles$1(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::*)()>(&Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::class$ = nullptr;

$FieldInfo _Win32ShellFolderManager2_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolderManager2, log)},
	{"VIEW_LIST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolderManager2, VIEW_LIST)},
	{"VIEW_DETAILS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolderManager2, VIEW_DETAILS)},
	{"VIEW_PARENTFOLDER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolderManager2, VIEW_PARENTFOLDER)},
	{"VIEW_NEWFOLDER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolderManager2, VIEW_NEWFOLDER)},
	{"STANDARD_VIEW_BUTTONS", "[Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolderManager2, STANDARD_VIEW_BUTTONS)},
	{"desktop", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, desktop)},
	{"drives", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, drives)},
	{"recent", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, recent)},
	{"network", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, network)},
	{"personal", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, personal)},
	{"roots", "[Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, roots)},
	{"topFolderList", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2;>;", $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2, topFolderList)},
	{}
};

$MethodInfo _Win32ShellFolderManager2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32ShellFolderManager2::*)()>(&Win32ShellFolderManager2::init$))},
	{"checkFile", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($File*)>(&Win32ShellFolderManager2::checkFile))},
	{"checkFile", "(Ljava/io/File;Ljava/lang/SecurityManager;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($File*,$SecurityManager*)>(&Win32ShellFolderManager2::checkFile))},
	{"checkFiles", "([Ljava/io/File;)[Ljava/io/File;", nullptr, $STATIC, $method(static_cast<$FileArray*(*)($FileArray*)>(&Win32ShellFolderManager2::checkFiles))},
	{"checkFiles", "(Ljava/util/List;)[Ljava/io/File;", "(Ljava/util/List<Ljava/io/File;>;)[Ljava/io/File;", $PRIVATE | $STATIC, $method(static_cast<$FileArray*(*)($List*)>(&Win32ShellFolderManager2::checkFiles))},
	{"checkFiles", "(Ljava/util/stream/Stream;Ljava/lang/SecurityManager;)[Ljava/io/File;", "(Ljava/util/stream/Stream<Ljava/io/File;>;Ljava/lang/SecurityManager;)[Ljava/io/File;", $PRIVATE | $STATIC, $method(static_cast<$FileArray*(*)($Stream*,$SecurityManager*)>(&Win32ShellFolderManager2::checkFiles))},
	{"compareNames", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&Win32ShellFolderManager2::compareNames))},
	{"compareShellFolders", "(Lsun/awt/shell/Win32ShellFolder2;Lsun/awt/shell/Win32ShellFolder2;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Win32ShellFolder2*,$Win32ShellFolder2*)>(&Win32ShellFolderManager2::compareShellFolders))},
	{"createInvoker", "()Lsun/awt/shell/ShellFolder$Invoker;", nullptr, $PROTECTED},
	{"createShellFolder", "(Ljava/io/File;)Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC, nullptr, "java.io.FileNotFoundException"},
	{"createShellFolder", "(Lsun/awt/shell/Win32ShellFolder2;Ljava/io/File;)Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)($Win32ShellFolder2*,$File*)>(&Win32ShellFolderManager2::createShellFolder)), "java.io.FileNotFoundException,java.lang.InterruptedException"},
	{"createShellFolderFromRelativePIDL", "(Lsun/awt/shell/Win32ShellFolder2;J)Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)($Win32ShellFolder2*,int64_t)>(&Win32ShellFolderManager2::createShellFolderFromRelativePIDL)), "java.lang.InterruptedException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDesktop", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)()>(&Win32ShellFolderManager2::getDesktop))},
	{"getDrives", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)()>(&Win32ShellFolderManager2::getDrives))},
	{"getNetwork", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)()>(&Win32ShellFolderManager2::getNetwork))},
	{"getPersonal", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)()>(&Win32ShellFolderManager2::getPersonal))},
	{"getRecent", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<$Win32ShellFolder2*(*)()>(&Win32ShellFolderManager2::getRecent))},
	{"getStandardViewButton", "(I)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)(int32_t)>(&Win32ShellFolderManager2::getStandardViewButton))},
	{"initializeCom", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32ShellFolderManager2::initializeCom))},
	{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isDrive", "(Ljava/io/File;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32ShellFolderManager2::*)($File*)>(&Win32ShellFolderManager2::isDrive))},
	{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"lambda$checkFiles$0", "(Ljava/lang/SecurityManager;Ljava/io/File;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($SecurityManager*,$File*)>(&Win32ShellFolderManager2::lambda$checkFiles$0))},
	{"lambda$checkFiles$1", "(I)[Ljava/io/File;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FileArray*(*)(int32_t)>(&Win32ShellFolderManager2::lambda$checkFiles$1))},
	{"uninitializeCom", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32ShellFolderManager2::uninitializeCom))},
	{}
};

#define _METHOD_INDEX_initializeCom 19
#define _METHOD_INDEX_uninitializeCom 25

$InnerClassInfo _Win32ShellFolderManager2_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolderManager2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolderManager2_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.shell.Win32ShellFolderManager2",
	"sun.awt.shell.ShellFolderManager",
	nullptr,
	_Win32ShellFolderManager2_FieldInfo_,
	_Win32ShellFolderManager2_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolderManager2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker,sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2,sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1,sun.awt.shell.Win32ShellFolderManager2$1"
};

$Object* allocate$Win32ShellFolderManager2($Class* clazz) {
	return $of($alloc(Win32ShellFolderManager2));
}

$PlatformLogger* Win32ShellFolderManager2::log = nullptr;
$ImageArray* Win32ShellFolderManager2::STANDARD_VIEW_BUTTONS = nullptr;
$Win32ShellFolder2* Win32ShellFolderManager2::desktop = nullptr;
$Win32ShellFolder2* Win32ShellFolderManager2::drives = nullptr;
$Win32ShellFolder2* Win32ShellFolderManager2::recent = nullptr;
$Win32ShellFolder2* Win32ShellFolderManager2::network = nullptr;
$Win32ShellFolder2* Win32ShellFolderManager2::personal = nullptr;
$FileArray* Win32ShellFolderManager2::roots = nullptr;
$List* Win32ShellFolderManager2::topFolderList = nullptr;

void Win32ShellFolderManager2::init$() {
	$ShellFolderManager::init$();
}

$ShellFolder* Win32ShellFolderManager2::createShellFolder($File* file) {
	try {
		return createShellFolder($(getDesktop()), file);
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($FileNotFoundException, "Execution was interrupted"_s);
	}
	$shouldNotReachHere();
}

$Win32ShellFolder2* Win32ShellFolderManager2::createShellFolder($Win32ShellFolder2* parent, $File* file) {
	$init(Win32ShellFolderManager2);
	int64_t pIDL = 0;
	try {
		pIDL = $nc(parent)->parseDisplayName($($nc(file)->getCanonicalPath()));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		pIDL = 0;
	}
	if (pIDL == 0) {
		$throwNew($FileNotFoundException, $$str({"File "_s, $($nc(file)->getAbsolutePath()), " not found"_s}));
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Win32ShellFolder2, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, createShellFolderFromRelativePIDL(parent, pIDL));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Win32ShellFolder2::releasePIDL(pIDL);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Win32ShellFolder2* Win32ShellFolderManager2::createShellFolderFromRelativePIDL($Win32ShellFolder2* parent$renamed, int64_t pIDL) {
	$init(Win32ShellFolderManager2);
	$var($Win32ShellFolder2, parent, parent$renamed);
	while (pIDL != 0) {
		int64_t curPIDL = $Win32ShellFolder2::copyFirstPIDLEntry(pIDL);
		if (curPIDL != 0) {
			$assign(parent, $Win32ShellFolder2::createShellFolder(parent, curPIDL));
			pIDL = $Win32ShellFolder2::getNextPIDLEntry(pIDL);
		} else {
			break;
		}
	}
	return parent;
}

$Image* Win32ShellFolderManager2::getStandardViewButton(int32_t iconIndex) {
	$init(Win32ShellFolderManager2);
	$var($Image, result, $nc(Win32ShellFolderManager2::STANDARD_VIEW_BUTTONS)->get(iconIndex));
	if (result != nullptr) {
		return result;
	}
	$var($ints, iconBits, $Win32ShellFolder2::getStandardViewButton0(iconIndex, true));
	if (iconBits != nullptr) {
		int32_t size = $cast(int32_t, $Math::sqrt((double)iconBits->length));
		$var($BufferedImage, img, $new($BufferedImage, size, size, $BufferedImage::TYPE_INT_ARGB));
		img->setRGB(0, 0, size, size, iconBits, 0, size);
		$nc(Win32ShellFolderManager2::STANDARD_VIEW_BUTTONS)->set(iconIndex, (size == 16) ? static_cast<$Image*>(img) : static_cast<$Image*>($$new($Win32ShellFolder2$MultiResolutionIconImage, 16, static_cast<$Image*>(img))));
	}
	return $nc(Win32ShellFolderManager2::STANDARD_VIEW_BUTTONS)->get(iconIndex);
}

$Win32ShellFolder2* Win32ShellFolderManager2::getDesktop() {
	$init(Win32ShellFolderManager2);
	if (Win32ShellFolderManager2::desktop == nullptr) {
		try {
			$assignStatic(Win32ShellFolderManager2::desktop, $new($Win32ShellFolder2, 0));
		} catch ($SecurityException&) {
			$catch();
		} catch ($IOException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Desktop\'"_s, static_cast<$Throwable*>(e));
			}
		} catch ($InterruptedException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Desktop\'"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return Win32ShellFolderManager2::desktop;
}

$Win32ShellFolder2* Win32ShellFolderManager2::getDrives() {
	$init(Win32ShellFolderManager2);
	if (Win32ShellFolderManager2::drives == nullptr) {
		try {
			$assignStatic(Win32ShellFolderManager2::drives, $new($Win32ShellFolder2, 17));
		} catch ($SecurityException&) {
			$catch();
		} catch ($IOException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Drives\'"_s, static_cast<$Throwable*>(e));
			}
		} catch ($InterruptedException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Drives\'"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return Win32ShellFolderManager2::drives;
}

$Win32ShellFolder2* Win32ShellFolderManager2::getRecent() {
	$init(Win32ShellFolderManager2);
	if (Win32ShellFolderManager2::recent == nullptr) {
		try {
			$var($String, path, $Win32ShellFolder2::getFileSystemPath(8));
			if (path != nullptr) {
				$var($Win32ShellFolder2, var$0, getDesktop());
				$assignStatic(Win32ShellFolderManager2::recent, createShellFolder(var$0, $$new($File, path)));
			}
		} catch ($SecurityException&) {
			$catch();
		} catch ($InterruptedException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Recent\'"_s, static_cast<$Throwable*>(e));
			}
		} catch ($IOException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Recent\'"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return Win32ShellFolderManager2::recent;
}

$Win32ShellFolder2* Win32ShellFolderManager2::getNetwork() {
	$init(Win32ShellFolderManager2);
	if (Win32ShellFolderManager2::network == nullptr) {
		try {
			$assignStatic(Win32ShellFolderManager2::network, $new($Win32ShellFolder2, 18));
		} catch ($SecurityException&) {
			$catch();
		} catch ($IOException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Network\'"_s, static_cast<$Throwable*>(e));
			}
		} catch ($InterruptedException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Network\'"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return Win32ShellFolderManager2::network;
}

$Win32ShellFolder2* Win32ShellFolderManager2::getPersonal() {
	$init(Win32ShellFolderManager2);
	if (Win32ShellFolderManager2::personal == nullptr) {
		try {
			$var($String, path, $Win32ShellFolder2::getFileSystemPath(5));
			if (path != nullptr) {
				$var($Win32ShellFolder2, desktop, getDesktop());
				$assignStatic(Win32ShellFolderManager2::personal, $nc(desktop)->getChildByPath(path));
				if (Win32ShellFolderManager2::personal == nullptr) {
					$var($Win32ShellFolder2, var$0, getDesktop());
					$assignStatic(Win32ShellFolderManager2::personal, createShellFolder(var$0, $$new($File, path)));
				}
				if (Win32ShellFolderManager2::personal != nullptr) {
					$nc(Win32ShellFolderManager2::personal)->setIsPersonal();
				}
			}
		} catch ($SecurityException&) {
			$catch();
		} catch ($InterruptedException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Personal\'"_s, static_cast<$Throwable*>(e));
			}
		} catch ($IOException&) {
			$var($Exception, e, $catch());
			$init($PlatformLogger$Level);
			if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
				$nc(Win32ShellFolderManager2::log)->warning("Cannot access \'Personal\'"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return Win32ShellFolderManager2::personal;
}

$Object* Win32ShellFolderManager2::get($String* key) {
	if ($nc(key)->equals("fileChooserDefaultFolder"_s)) {
		$var($File, file, getPersonal());
		if (file == nullptr) {
			$assign(file, getDesktop());
		}
		return $of(checkFile(file));
	} else if (key->equals("roots"_s)) {
		if (Win32ShellFolderManager2::roots == nullptr) {
			$var($File, desktop, getDesktop());
			if (desktop != nullptr) {
				$assignStatic(Win32ShellFolderManager2::roots, $new($FileArray, {desktop}));
			} else {
				$assignStatic(Win32ShellFolderManager2::roots, $cast($FileArray, $ShellFolderManager::get(key)));
			}
		}
		return $of(checkFiles(Win32ShellFolderManager2::roots));
	} else if (key->equals("fileChooserComboBoxFolders"_s)) {
		$var($Win32ShellFolder2, desktop, getDesktop());
		if (desktop != nullptr && checkFile(desktop) != nullptr) {
			$var($ArrayList, folders, $new($ArrayList));
			$var($Win32ShellFolder2, drives, getDrives());
			$var($Win32ShellFolder2, recentFolder, getRecent());
			$init($OSInfo);
			if (recentFolder != nullptr && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_2000) >= 0) {
				folders->add(recentFolder);
			}
			folders->add(desktop);
			$var($FileArray, secondLevelFolders, checkFiles($(desktop->listFiles())));
			$Arrays::sort(secondLevelFolders);
			{
				$var($FileArray, arr$, secondLevelFolders);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($File, secondLevelFolder, arr$->get(i$));
					{
						$var($Win32ShellFolder2, folder, $cast($Win32ShellFolder2, secondLevelFolder));
						bool var$0 = !$nc(folder)->isFileSystem();
						if (!var$0) {
							bool var$1 = $nc(folder)->isDirectory();
							var$0 = (var$1 && !folder->isLink());
						}
						if (var$0) {
							folders->add(folder);
							if (folder->equals(drives)) {
								$var($FileArray, thirdLevelFolders, checkFiles($(folder->listFiles())));
								if (thirdLevelFolders != nullptr && thirdLevelFolders->length > 0) {
									$var($List, thirdLevelFoldersList, $Arrays::asList(thirdLevelFolders));
									folder->sortChildren(thirdLevelFoldersList);
									folders->addAll(thirdLevelFoldersList);
								}
							}
						}
					}
				}
			}
			return $of(checkFiles(static_cast<$List*>(folders)));
		} else {
			return $of($ShellFolderManager::get(key));
		}
	} else if (key->equals("fileChooserShortcutPanelFolders"_s)) {
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		$var($ArrayList, folders, $new($ArrayList));
		int32_t i = 0;
		$var($Object, value, nullptr);
		do {
			$assign(value, $nc(toolkit)->getDesktopProperty($$str({"win.comdlg.placesBarPlace"_s, $$str(i++)})));
			try {
				if ($instanceOf($Integer, value)) {
					folders->add($$new($Win32ShellFolder2, $nc(($cast($Integer, value)))->intValue()));
				} else if ($instanceOf($String, value)) {
					folders->add($(createShellFolder($$new($File, $cast($String, value)))));
				}
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$init($PlatformLogger$Level);
				if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
					$nc(Win32ShellFolderManager2::log)->warning($$str({"Cannot read value = "_s, value}), static_cast<$Throwable*>(e));
				}
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				$init($PlatformLogger$Level);
				if ($nc(Win32ShellFolderManager2::log)->isLoggable($PlatformLogger$Level::WARNING)) {
					$nc(Win32ShellFolderManager2::log)->warning($$str({"Cannot read value = "_s, value}), static_cast<$Throwable*>(e));
				}
				return $of($new($FileArray, 0));
			}
		} while (value != nullptr);
		if (folders->size() == 0) {
			{
				$var($FileArray, arr$, $new($FileArray, {
					$(static_cast<$File*>(getRecent())),
					$(static_cast<$File*>(getDesktop())),
					$(static_cast<$File*>(getPersonal())),
					$(static_cast<$File*>(getDrives())),
					$(static_cast<$File*>(getNetwork()))
				}));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($File, f, arr$->get(i$));
					{
						if (f != nullptr) {
							folders->add(f);
						}
					}
				}
			}
		}
		return $of(checkFiles(static_cast<$List*>(folders)));
	} else if (key->startsWith("fileChooserIcon "_s)) {
		$var($String, name, key->substring(key->indexOf(" "_s) + 1));
		int32_t iconIndex = 0;
		bool var$2 = name->equals("ListView"_s);
		if (var$2 || name->equals("ViewMenu"_s)) {
			iconIndex = Win32ShellFolderManager2::VIEW_LIST;
		} else if (name->equals("DetailsView"_s)) {
			iconIndex = Win32ShellFolderManager2::VIEW_DETAILS;
		} else if (name->equals("UpFolder"_s)) {
			iconIndex = Win32ShellFolderManager2::VIEW_PARENTFOLDER;
		} else if (name->equals("NewFolder"_s)) {
			iconIndex = Win32ShellFolderManager2::VIEW_NEWFOLDER;
		} else {
			return $of(nullptr);
		}
		return $of(getStandardViewButton(iconIndex));
	} else if (key->startsWith("optionPaneIcon "_s)) {
		$Win32ShellFolder2$SystemIcon* iconType = nullptr;
		if (key == "optionPaneIcon Error"_s) {
			$init($Win32ShellFolder2$SystemIcon);
			iconType = $Win32ShellFolder2$SystemIcon::IDI_ERROR;
		} else if (key == "optionPaneIcon Information"_s) {
			$init($Win32ShellFolder2$SystemIcon);
			iconType = $Win32ShellFolder2$SystemIcon::IDI_INFORMATION;
		} else if (key == "optionPaneIcon Question"_s) {
			$init($Win32ShellFolder2$SystemIcon);
			iconType = $Win32ShellFolder2$SystemIcon::IDI_QUESTION;
		} else if (key == "optionPaneIcon Warning"_s) {
			$init($Win32ShellFolder2$SystemIcon);
			iconType = $Win32ShellFolder2$SystemIcon::IDI_EXCLAMATION;
		} else {
			return $of(nullptr);
		}
		return $of($Win32ShellFolder2::getSystemIcon(iconType));
	} else {
		bool var$4 = key->startsWith("shell32Icon "_s);
		if (var$4 || key->startsWith("shell32LargeIcon "_s)) {
			$var($String, name, key->substring(key->indexOf(" "_s) + 1));
			try {
				int32_t i = $Integer::parseInt(name);
				if (i >= 0) {
					return $of($Win32ShellFolder2::getShell32Icon(i, key->startsWith("shell32LargeIcon "_s) ? 32 : 16));
				}
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
	}
	return $of(nullptr);
}

$File* Win32ShellFolderManager2::checkFile($File* file) {
	$init(Win32ShellFolderManager2);
	$var($SecurityManager, sm, $System::getSecurityManager());
	return (sm == nullptr || file == nullptr) ? file : checkFile(file, sm);
}

$File* Win32ShellFolderManager2::checkFile($File* file, $SecurityManager* sm) {
	$init(Win32ShellFolderManager2);
	try {
		$nc(sm)->checkRead($($nc(file)->getPath()));
		if ($instanceOf($Win32ShellFolder2, file)) {
			$var($Win32ShellFolder2, f, $cast($Win32ShellFolder2, file));
			if ($nc(f)->isLink()) {
				$var($Win32ShellFolder2, link, $cast($Win32ShellFolder2, f->getLinkLocation()));
				if (link != nullptr) {
					sm->checkRead($(link->getPath()));
				}
			}
		}
		return file;
	} catch ($SecurityException&) {
		$var($SecurityException, se, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$FileArray* Win32ShellFolderManager2::checkFiles($FileArray* files) {
	$init(Win32ShellFolderManager2);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr || files == nullptr || $nc(files)->length == 0) {
		return files;
	}
	return checkFiles($($Arrays::stream(files)), sm);
}

$FileArray* Win32ShellFolderManager2::checkFiles($List* files) {
	$init(Win32ShellFolderManager2);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr || $nc(files)->isEmpty()) {
		return $fcast($FileArray, files->toArray($$new($FileArray, files->size())));
	}
	return checkFiles($($nc(files)->stream()), sm);
}

$FileArray* Win32ShellFolderManager2::checkFiles($Stream* filesStream, $SecurityManager* sm) {
	$init(Win32ShellFolderManager2);
	return $fcast($FileArray, $nc($($nc(filesStream)->filter(static_cast<$Predicate*>($$new(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0, sm)))))->toArray(static_cast<$IntFunction*>($$new(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1))));
}

bool Win32ShellFolderManager2::isComputerNode($File* dir) {
	$beforeCallerSensitive();
	if (dir != nullptr && $equals(dir, getDrives())) {
		return true;
	} else {
		$var($String, path, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32ShellFolderManager2$1, this, dir)))));
		bool var$0 = $nc(path)->startsWith("\\\\"_s);
		return (var$0 && path->indexOf("\\"_s, 2) < 0);
	}
}

bool Win32ShellFolderManager2::isFileSystemRoot($File* dir) {
	if (dir != nullptr) {
		if ($instanceOf($Win32ShellFolder2, dir)) {
			$var($Win32ShellFolder2, sf, $cast($Win32ShellFolder2, dir));
			bool var$0 = sf->isFileSystem() && sf->parent != nullptr;
			if (var$0) {
				bool var$1 = $nc(sf->parent)->equals($(getDrives()));
				if (!var$1) {
					bool var$2 = $nc(sf->parent)->equals($(getDesktop()));
					var$1 = (var$2 && isDrive(dir));
				}
				var$0 = (var$1);
			}
			return (var$0);
		}
		return isDrive(dir);
	}
	return false;
}

bool Win32ShellFolderManager2::isDrive($File* dir) {
	$var($String, path, $nc(dir)->getPath());
	bool var$0 = $nc(path)->length() != 3;
	if (var$0 || $nc(path)->charAt(1) != u':') {
		return false;
	}
	$var($FileArray, roots, $Win32ShellFolder2::listRoots());
	return roots != nullptr && $nc($($Arrays::asList(roots)))->contains(dir);
}

int32_t Win32ShellFolderManager2::compareShellFolders($Win32ShellFolder2* sf1, $Win32ShellFolder2* sf2) {
	$init(Win32ShellFolderManager2);
	bool special1 = $nc(sf1)->isSpecial();
	bool special2 = $nc(sf2)->isSpecial();
	if (special1 || special2) {
		if (Win32ShellFolderManager2::topFolderList == nullptr) {
			$var($ArrayList, tmpTopFolderList, $new($ArrayList));
			tmpTopFolderList->add($(Win32ShellFolderManager2::getPersonal()));
			tmpTopFolderList->add($(Win32ShellFolderManager2::getDesktop()));
			tmpTopFolderList->add($(Win32ShellFolderManager2::getDrives()));
			tmpTopFolderList->add($(Win32ShellFolderManager2::getNetwork()));
			$assignStatic(Win32ShellFolderManager2::topFolderList, tmpTopFolderList);
		}
		int32_t i1 = $nc(Win32ShellFolderManager2::topFolderList)->indexOf(sf1);
		int32_t i2 = $nc(Win32ShellFolderManager2::topFolderList)->indexOf(sf2);
		if (i1 >= 0 && i2 >= 0) {
			return (i1 - i2);
		} else if (i1 >= 0) {
			return -1;
		} else if (i2 >= 0) {
			return 1;
		}
	}
	if (special1 && !special2) {
		return -1;
	} else if (special2 && !special1) {
		return 1;
	}
	$var($String, var$0, sf1->getAbsolutePath());
	return compareNames(var$0, $(sf2->getAbsolutePath()));
}

int32_t Win32ShellFolderManager2::compareNames($String* name1, $String* name2) {
	$init(Win32ShellFolderManager2);
	int32_t diff = $nc(name1)->compareToIgnoreCase(name2);
	if (diff != 0) {
		return diff;
	} else {
		return name1->compareTo(name2);
	}
}

$ShellFolder$Invoker* Win32ShellFolderManager2::createInvoker() {
	return $new($Win32ShellFolderManager2$ComInvoker);
}

void Win32ShellFolderManager2::initializeCom() {
	$init(Win32ShellFolderManager2);
	$prepareNativeStatic(Win32ShellFolderManager2, initializeCom, void);
	$invokeNativeStatic(Win32ShellFolderManager2, initializeCom);
	$finishNativeStatic();
}

void Win32ShellFolderManager2::uninitializeCom() {
	$init(Win32ShellFolderManager2);
	$prepareNativeStatic(Win32ShellFolderManager2, uninitializeCom, void);
	$invokeNativeStatic(Win32ShellFolderManager2, uninitializeCom);
	$finishNativeStatic();
}

$FileArray* Win32ShellFolderManager2::lambda$checkFiles$1(int32_t x$0) {
	$init(Win32ShellFolderManager2);
	return $new($FileArray, x$0);
}

bool Win32ShellFolderManager2::lambda$checkFiles$0($SecurityManager* sm, $File* file) {
	$init(Win32ShellFolderManager2);
	return checkFile(file, sm) != nullptr;
}

void clinit$Win32ShellFolderManager2($Class* class$) {
	$assignStatic(Win32ShellFolderManager2::log, $PlatformLogger::getLogger("sun.awt.shell.Win32ShellFolderManager2"_s));
	{
		$WToolkit::loadLibraries();
	}
	$assignStatic(Win32ShellFolderManager2::STANDARD_VIEW_BUTTONS, $new($ImageArray, 12));
	$assignStatic(Win32ShellFolderManager2::topFolderList, nullptr);
}

Win32ShellFolderManager2::Win32ShellFolderManager2() {
}

$Class* Win32ShellFolderManager2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::classInfo$.name)) {
			return Win32ShellFolderManager2$$Lambda$lambda$checkFiles$0::load$(name, initialize);
		}
		if (name->equals(Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::classInfo$.name)) {
			return Win32ShellFolderManager2$$Lambda$lambda$checkFiles$1$1::load$(name, initialize);
		}
	}
	$loadClass(Win32ShellFolderManager2, name, initialize, &_Win32ShellFolderManager2_ClassInfo_, clinit$Win32ShellFolderManager2, allocate$Win32ShellFolderManager2);
	return class$;
}

$Class* Win32ShellFolderManager2::class$ = nullptr;

		} // shell
	} // awt
} // sun