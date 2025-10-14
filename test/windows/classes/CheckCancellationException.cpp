#include <CheckCancellationException.h>

#include <CheckCancellationException$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CancellationException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CheckCancellationException$1 = ::CheckCancellationException$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CancellationException = ::java::util::concurrent::CancellationException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $SwingWorker = ::javax::swing::SwingWorker;

$FieldInfo _CheckCancellationException_FieldInfo_[] = {
	{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CheckCancellationException, go)},
	{}
};

$MethodInfo _CheckCancellationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckCancellationException::*)()>(&CheckCancellationException::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckCancellationException::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CheckCancellationException_InnerClassesInfo_[] = {
	{"CheckCancellationException$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckCancellationException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"CheckCancellationException",
	"java.lang.Object",
	nullptr,
	_CheckCancellationException_FieldInfo_,
	_CheckCancellationException_MethodInfo_,
	nullptr,
	nullptr,
	_CheckCancellationException_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CheckCancellationException$1"
};

$Object* allocate$CheckCancellationException($Class* clazz) {
	return $of($alloc(CheckCancellationException));
}

$CountDownLatch* CheckCancellationException::go = nullptr;

void CheckCancellationException::init$() {
}

void CheckCancellationException::main($StringArray* args) {
	$init(CheckCancellationException);
	$var($SwingWorker, worker, $new($CheckCancellationException$1));
	worker->execute();
	$nc(CheckCancellationException::go)->await();
	worker->cancel(true);
	try {
		worker->get();
	} catch ($CancellationException&) {
		$var($CancellationException, expected, $catch());
		return;
	}
	$throwNew($RuntimeException, "CancellationException was not thrown"_s);
}

void clinit$CheckCancellationException($Class* class$) {
	$assignStatic(CheckCancellationException::go, $new($CountDownLatch, 1));
}

CheckCancellationException::CheckCancellationException() {
}

$Class* CheckCancellationException::load$($String* name, bool initialize) {
	$loadClass(CheckCancellationException, name, initialize, &_CheckCancellationException_ClassInfo_, clinit$CheckCancellationException, allocate$CheckCancellationException);
	return class$;
}

$Class* CheckCancellationException::class$ = nullptr;