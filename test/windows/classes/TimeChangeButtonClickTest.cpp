#include <TimeChangeButtonClickTest.h>

#include <TestUI.h>
#include <TimeChangeButtonClickTest$1.h>
#include <TimeChangeButtonClickTest$2.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $TestUI = ::TestUI;
using $TimeChangeButtonClickTest$1 = ::TimeChangeButtonClickTest$1;
using $TimeChangeButtonClickTest$2 = ::TimeChangeButtonClickTest$2;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _TimeChangeButtonClickTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeChangeButtonClickTest::*)()>(&TimeChangeButtonClickTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TimeChangeButtonClickTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TimeChangeButtonClickTest_InnerClassesInfo_[] = {
	{"TimeChangeButtonClickTest$2", nullptr, nullptr, 0},
	{"TimeChangeButtonClickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TimeChangeButtonClickTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TimeChangeButtonClickTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TimeChangeButtonClickTest_MethodInfo_,
	nullptr,
	nullptr,
	_TimeChangeButtonClickTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TimeChangeButtonClickTest$2,TimeChangeButtonClickTest$1"
};

$Object* allocate$TimeChangeButtonClickTest($Class* clazz) {
	return $of($alloc(TimeChangeButtonClickTest));
}

void TimeChangeButtonClickTest::init$() {
}

void TimeChangeButtonClickTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TestUI, test, $new($TestUI, latch));
	$SwingUtilities::invokeLater($$new($TimeChangeButtonClickTest$1, test));
	$init($TimeUnit);
	bool status = latch->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	$SwingUtilities::invokeAndWait($$new($TimeChangeButtonClickTest$2, test));
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

TimeChangeButtonClickTest::TimeChangeButtonClickTest() {
}

$Class* TimeChangeButtonClickTest::load$($String* name, bool initialize) {
	$loadClass(TimeChangeButtonClickTest, name, initialize, &_TimeChangeButtonClickTest_ClassInfo_, allocate$TimeChangeButtonClickTest);
	return class$;
}

$Class* TimeChangeButtonClickTest::class$ = nullptr;