#include <TestHTMLBulletsSizeAndAliasing.h>

#include <AliasingTest.h>
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

using $AliasingTest = ::AliasingTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$MethodInfo _TestHTMLBulletsSizeAndAliasing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestHTMLBulletsSizeAndAliasing::*)()>(&TestHTMLBulletsSizeAndAliasing::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestHTMLBulletsSizeAndAliasing::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestHTMLBulletsSizeAndAliasing_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestHTMLBulletsSizeAndAliasing",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestHTMLBulletsSizeAndAliasing_MethodInfo_
};

$Object* allocate$TestHTMLBulletsSizeAndAliasing($Class* clazz) {
	return $of($alloc(TestHTMLBulletsSizeAndAliasing));
}

void TestHTMLBulletsSizeAndAliasing::init$() {
}

void TestHTMLBulletsSizeAndAliasing::main($StringArray* args) {
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($AliasingTest, test, $new($AliasingTest, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(60, $TimeUnit::SECONDS);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ie, $catch());
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "JEditorPane unordered list bullets look pixelated"_s);
	}
}

TestHTMLBulletsSizeAndAliasing::TestHTMLBulletsSizeAndAliasing() {
}

$Class* TestHTMLBulletsSizeAndAliasing::load$($String* name, bool initialize) {
	$loadClass(TestHTMLBulletsSizeAndAliasing, name, initialize, &_TestHTMLBulletsSizeAndAliasing_ClassInfo_, allocate$TestHTMLBulletsSizeAndAliasing);
	return class$;
}

$Class* TestHTMLBulletsSizeAndAliasing::class$ = nullptr;