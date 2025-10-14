#include <CheckCancellationException$1.h>

#include <CheckCancellationException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CheckCancellationException = ::CheckCancellationException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $SwingWorker = ::javax::swing::SwingWorker;

$MethodInfo _CheckCancellationException$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckCancellationException$1::*)()>(&CheckCancellationException$1::init$))},
	{"doInBackground", "()Ljava/lang/Void;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _CheckCancellationException$1_EnclosingMethodInfo_ = {
	"CheckCancellationException",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _CheckCancellationException$1_InnerClassesInfo_[] = {
	{"CheckCancellationException$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckCancellationException$1_ClassInfo_ = {
	$ACC_SUPER,
	"CheckCancellationException$1",
	"javax.swing.SwingWorker",
	nullptr,
	nullptr,
	_CheckCancellationException$1_MethodInfo_,
	nullptr,
	&_CheckCancellationException$1_EnclosingMethodInfo_,
	_CheckCancellationException$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckCancellationException"
};

$Object* allocate$CheckCancellationException$1($Class* clazz) {
	return $of($alloc(CheckCancellationException$1));
}

void CheckCancellationException$1::init$() {
	$SwingWorker::init$();
}

$Object* CheckCancellationException$1::doInBackground() {
	$init($CheckCancellationException);
	$nc($CheckCancellationException::go)->countDown();
	while (!$Thread::interrupted()) {
	}
	return $of(nullptr);
}

CheckCancellationException$1::CheckCancellationException$1() {
}

$Class* CheckCancellationException$1::load$($String* name, bool initialize) {
	$loadClass(CheckCancellationException$1, name, initialize, &_CheckCancellationException$1_ClassInfo_, allocate$CheckCancellationException$1);
	return class$;
}

$Class* CheckCancellationException$1::class$ = nullptr;