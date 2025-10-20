#include <GetSpanHiDpiBug.h>

#include <SpanTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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
#include <jcpp.h>

#undef SECONDS

using $SpanTest = ::SpanTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$MethodInfo _GetSpanHiDpiBug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetSpanHiDpiBug::*)()>(&GetSpanHiDpiBug::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetSpanHiDpiBug::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetSpanHiDpiBug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetSpanHiDpiBug",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetSpanHiDpiBug_MethodInfo_
};

$Object* allocate$GetSpanHiDpiBug($Class* clazz) {
	return $of($alloc(GetSpanHiDpiBug));
}

void GetSpanHiDpiBug::init$() {
}

void GetSpanHiDpiBug::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($SpanTest, test, $new($SpanTest, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(3000, $TimeUnit::SECONDS);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ie, $catch());
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Some characters overlap"_s);
	}
}

GetSpanHiDpiBug::GetSpanHiDpiBug() {
}

$Class* GetSpanHiDpiBug::load$($String* name, bool initialize) {
	$loadClass(GetSpanHiDpiBug, name, initialize, &_GetSpanHiDpiBug_ClassInfo_, allocate$GetSpanHiDpiBug);
	return class$;
}

$Class* GetSpanHiDpiBug::class$ = nullptr;