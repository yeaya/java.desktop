#include <TestClearSel.h>

#include <ClearSelTest.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

#undef SECONDS

using $ClearSelTest = ::ClearSelTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$FieldInfo _TestClearSel_FieldInfo_[] = {
	{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(TestClearSel, model)},
	{}
};

$MethodInfo _TestClearSel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestClearSel::*)()>(&TestClearSel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestClearSel::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestClearSel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestClearSel",
	"java.lang.Object",
	nullptr,
	_TestClearSel_FieldInfo_,
	_TestClearSel_MethodInfo_
};

$Object* allocate$TestClearSel($Class* clazz) {
	return $of($alloc(TestClearSel));
}

$DefaultTableModel* TestClearSel::model = nullptr;

void TestClearSel::init$() {
}

void TestClearSel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($ClearSelTest, test, $new($ClearSelTest, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(60, $TimeUnit::SECONDS);
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Some text were not rendered properly during painting of Jtable rows "_s);
	}
}

TestClearSel::TestClearSel() {
}

$Class* TestClearSel::load$($String* name, bool initialize) {
	$loadClass(TestClearSel, name, initialize, &_TestClearSel_ClassInfo_, allocate$TestClearSel);
	return class$;
}

$Class* TestClearSel::class$ = nullptr;