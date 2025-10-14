#include <bug6484091.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlException.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlException = ::java::security::AccessControlException;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$MethodInfo _bug6484091_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6484091::*)()>(&bug6484091::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6484091::main))},
	{"printDirContent", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&bug6484091::printDirContent))},
	{}
};

$ClassInfo _bug6484091_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6484091",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6484091_MethodInfo_
};

$Object* allocate$bug6484091($Class* clazz) {
	return $of($alloc(bug6484091));
}

void bug6484091::init$() {
}

void bug6484091::main($StringArray* args) {
	$load(bug6484091);
	$beforeCallerSensitive();
	$var($File, dir, $nc($($FileSystemView::getFileSystemView()))->getDefaultDirectory());
	printDirContent(dir);
	$System::setSecurityManager($$new($SecurityManager));
	try {
		printDirContent(dir);
		$throwNew($RuntimeException, "Dir content was derived bypass SecurityManager"_s);
	} catch ($AccessControlException&) {
		$catch();
	}
}

void bug6484091::printDirContent($File* dir) {
	$init($System);
	$nc($System::out)->println($$str({"Files in "_s, $($nc(dir)->getAbsolutePath()), ":"_s}));
	{
		$var($FileArray, arr$, $nc(dir)->listFiles());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			{
				$nc($System::out)->println($($nc(file)->getName()));
			}
		}
	}
}

bug6484091::bug6484091() {
}

$Class* bug6484091::load$($String* name, bool initialize) {
	$loadClass(bug6484091, name, initialize, &_bug6484091_ClassInfo_, allocate$bug6484091);
	return class$;
}

$Class* bug6484091::class$ = nullptr;