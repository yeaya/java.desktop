#include <bug7027139.h>

#include <bug7027139$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7027139$1 = ::bug7027139$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug7027139_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7027139::*)()>(&bug7027139::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7027139::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7027139_InnerClassesInfo_[] = {
	{"bug7027139$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7027139_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7027139",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7027139_MethodInfo_,
	nullptr,
	nullptr,
	_bug7027139_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7027139$1,bug7027139$1$1"
};

$Object* allocate$bug7027139($Class* clazz) {
	return $of($alloc(bug7027139));
}

void bug7027139::init$() {
}

void bug7027139::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug7027139$1));
	$init($System);
	$nc($System::out)->println("Test bug7027139 passed"_s);
}

bug7027139::bug7027139() {
}

$Class* bug7027139::load$($String* name, bool initialize) {
	$loadClass(bug7027139, name, initialize, &_bug7027139_ClassInfo_, allocate$bug7027139);
	return class$;
}

$Class* bug7027139::class$ = nullptr;