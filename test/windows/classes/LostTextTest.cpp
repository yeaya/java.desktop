#include <LostTextTest.h>

#include <LostText.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

#undef SECONDS

using $LostText = ::LostText;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$FieldInfo _LostTextTest_FieldInfo_[] = {
	{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(LostTextTest, model)},
	{}
};

$MethodInfo _LostTextTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LostTextTest::*)()>(&LostTextTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LostTextTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _LostTextTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LostTextTest",
	"java.lang.Object",
	nullptr,
	_LostTextTest_FieldInfo_,
	_LostTextTest_MethodInfo_
};

$Object* allocate$LostTextTest($Class* clazz) {
	return $of($alloc(LostTextTest));
}

$DefaultTableModel* LostTextTest::model = nullptr;

void LostTextTest::init$() {
}

void LostTextTest::main($StringArray* args) {
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($LostText, test, $new($LostText, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(30, $TimeUnit::SECONDS);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ie, $catch());
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

LostTextTest::LostTextTest() {
}

$Class* LostTextTest::load$($String* name, bool initialize) {
	$loadClass(LostTextTest, name, initialize, &_LostTextTest_ClassInfo_, allocate$LostTextTest);
	return class$;
}

$Class* LostTextTest::class$ = nullptr;