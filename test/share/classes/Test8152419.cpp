#include <Test8152419.h>

#include <JColorChooserTest.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $JColorChooserTest = ::JColorChooserTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _Test8152419_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8152419::*)()>(&Test8152419::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8152419::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Test8152419_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8152419",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test8152419_MethodInfo_
};

$Object* allocate$Test8152419($Class* clazz) {
	return $of($alloc(Test8152419));
}

void Test8152419::init$() {
}

void Test8152419::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($JColorChooserTest, test, $new($JColorChooserTest, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	try {
		latch->await();
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "User Clicked Fail!"_s);
	}
}

Test8152419::Test8152419() {
}

$Class* Test8152419::load$($String* name, bool initialize) {
	$loadClass(Test8152419, name, initialize, &_Test8152419_ClassInfo_, allocate$Test8152419);
	return class$;
}

$Class* Test8152419::class$ = nullptr;