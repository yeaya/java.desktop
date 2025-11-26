#include <SliderTickTest.h>

#include <SliderTickTest$1.h>
#include <SliderTickTest$2.h>
#include <TestUI.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $SliderTickTest$1 = ::SliderTickTest$1;
using $SliderTickTest$2 = ::SliderTickTest$2;
using $TestUI = ::TestUI;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _SliderTickTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SliderTickTest::*)()>(&SliderTickTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SliderTickTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SliderTickTest_InnerClassesInfo_[] = {
	{"SliderTickTest$2", nullptr, nullptr, 0},
	{"SliderTickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SliderTickTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SliderTickTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SliderTickTest_MethodInfo_,
	nullptr,
	nullptr,
	_SliderTickTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SliderTickTest$2,SliderTickTest$1"
};

$Object* allocate$SliderTickTest($Class* clazz) {
	return $of($alloc(SliderTickTest));
}

void SliderTickTest::init$() {
}

void SliderTickTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TestUI, test, $new($TestUI, latch));
	$SwingUtilities::invokeLater($$new($SliderTickTest$1, test));
	$init($TimeUnit);
	bool status = latch->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	$SwingUtilities::invokeAndWait($$new($SliderTickTest$2, test));
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

SliderTickTest::SliderTickTest() {
}

$Class* SliderTickTest::load$($String* name, bool initialize) {
	$loadClass(SliderTickTest, name, initialize, &_SliderTickTest_ClassInfo_, allocate$SliderTickTest);
	return class$;
}

$Class* SliderTickTest::class$ = nullptr;