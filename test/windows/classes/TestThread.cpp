#include <TestThread.h>

#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef VK_ESCAPE

using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TestThread_FieldInfo_[] = {
	{"testRobot", "Ljava/awt/Robot;", nullptr, 0, $field(TestThread, testRobot)},
	{}
};

$MethodInfo _TestThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestThread::*)()>(&TestThread::init$)), "java.awt.AWTException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestThread_ClassInfo_ = {
	$ACC_SUPER,
	"TestThread",
	"java.lang.Thread",
	nullptr,
	_TestThread_FieldInfo_,
	_TestThread_MethodInfo_
};

$Object* allocate$TestThread($Class* clazz) {
	return $of($alloc(TestThread));
}

void TestThread::init$() {
	$Thread::init$();
	$set(this, testRobot, $new($Robot));
}

void TestThread::run() {
	try {
		$Thread::sleep(5000);
		$nc(this->testRobot)->keyPress($KeyEvent::VK_ESCAPE);
		$nc(this->testRobot)->delay(20);
		$nc(this->testRobot)->keyRelease($KeyEvent::VK_ESCAPE);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ex, $catch());
		$throwNew($RuntimeException, "Exception in TestThread"_s);
	}
}

TestThread::TestThread() {
}

$Class* TestThread::load$($String* name, bool initialize) {
	$loadClass(TestThread, name, initialize, &_TestThread_ClassInfo_, allocate$TestThread);
	return class$;
}

$Class* TestThread::class$ = nullptr;