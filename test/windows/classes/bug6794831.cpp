#include <bug6794831.h>

#include <bug6794831$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MILLISECONDS

using $bug6794831$1 = ::bug6794831$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6794831_FieldInfo_[] = {
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(bug6794831, countDownLatch)},
	{}
};

$MethodInfo _bug6794831_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6794831::*)()>(&bug6794831::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6794831::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6794831::main)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"run", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6794831::*)()>(&bug6794831::run)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{}
};

$InnerClassInfo _bug6794831_InnerClassesInfo_[] = {
	{"bug6794831$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6794831_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6794831",
	"java.lang.Object",
	nullptr,
	_bug6794831_FieldInfo_,
	_bug6794831_MethodInfo_,
	nullptr,
	nullptr,
	_bug6794831_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6794831$1"
};

$Object* allocate$bug6794831($Class* clazz) {
	return $of($alloc(bug6794831));
}

void bug6794831::init$() {
	$set(this, countDownLatch, $new($CountDownLatch, 1));
}

void bug6794831::main($StringArray* args) {
	$$new(bug6794831)->run();
}

void bug6794831::run() {
	$SwingUtilities::invokeAndWait($$new($bug6794831$1, this));
	$init($TimeUnit);
	if ($nc(this->countDownLatch)->await(3000, $TimeUnit::MILLISECONDS)) {
		$init($System);
		$nc($System::out)->println("bug6794831 passed"_s);
	} else {
		fail("bug6794831 failed"_s);
	}
}

void bug6794831::fail($String* msg) {
	$throwNew($RuntimeException, msg);
}

bug6794831::bug6794831() {
}

$Class* bug6794831::load$($String* name, bool initialize) {
	$loadClass(bug6794831, name, initialize, &_bug6794831_ClassInfo_, allocate$bug6794831);
	return class$;
}

$Class* bug6794831::class$ = nullptr;