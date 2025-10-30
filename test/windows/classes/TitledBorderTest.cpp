#include <TitledBorderTest.h>

#include <TitledBorder.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TitledBorder = ::TitledBorder;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _TitledBorderTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderTest::*)()>(&TitledBorderTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TitledBorderTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TitledBorderTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TitledBorderTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TitledBorderTest_MethodInfo_
};

$Object* allocate$TitledBorderTest($Class* clazz) {
	return $of($alloc(TitledBorderTest));
}

void TitledBorderTest::init$() {
}

void TitledBorderTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TitledBorder, test, $new($TitledBorder, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	latch->await();
	if (test->testResult == false) {
		$throwNew($RuntimeException, "User Clicked Fail! TitledBorder Not Valid"_s);
	}
}

TitledBorderTest::TitledBorderTest() {
}

$Class* TitledBorderTest::load$($String* name, bool initialize) {
	$loadClass(TitledBorderTest, name, initialize, &_TitledBorderTest_ClassInfo_, allocate$TitledBorderTest);
	return class$;
}

$Class* TitledBorderTest::class$ = nullptr;