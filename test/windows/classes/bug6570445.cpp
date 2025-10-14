#include <bug6570445.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$MethodInfo _bug6570445_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6570445::*)()>(&bug6570445::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6570445::main))},
	{}
};

$ClassInfo _bug6570445_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6570445",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6570445_MethodInfo_
};

$Object* allocate$bug6570445($Class* clazz) {
	return $of($alloc(bug6570445));
}

void bug6570445::init$() {
}

void bug6570445::main($StringArray* args) {
	$load(bug6570445);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$nc($($FileSystemView::getFileSystemView()))->getRoots();
	$nc($System::out)->println("Passed."_s);
}

bug6570445::bug6570445() {
}

$Class* bug6570445::load$($String* name, bool initialize) {
	$loadClass(bug6570445, name, initialize, &_bug6570445_ClassInfo_, allocate$bug6570445);
	return class$;
}

$Class* bug6570445::class$ = nullptr;