#include <bug6432565.h>

#include <bug6432565$1.h>
#include <bug6432565$EventProcessor.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/lang/ArrayStoreException.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $bug6432565$1 = ::bug6432565$1;
using $bug6432565$EventProcessor = ::bug6432565$EventProcessor;
using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $SwingWorker = ::javax::swing::SwingWorker;

$FieldInfo _bug6432565_FieldInfo_[] = {
	{"throwable", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/lang/Throwable;>;", $PRIVATE | $STATIC | $FINAL, $staticField(bug6432565, throwable)},
	{"isDone", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6432565, isDone)},
	{}
};

$MethodInfo _bug6432565_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6432565::*)()>(&bug6432565::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6432565::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6432565_InnerClassesInfo_[] = {
	{"bug6432565$EventProcessor", "bug6432565", "EventProcessor", $PRIVATE | $STATIC | $FINAL},
	{"bug6432565$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6432565_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6432565",
	"java.lang.Object",
	nullptr,
	_bug6432565_FieldInfo_,
	_bug6432565_MethodInfo_,
	nullptr,
	nullptr,
	_bug6432565_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6432565$EventProcessor,bug6432565$1"
};

$Object* allocate$bug6432565($Class* clazz) {
	return $of($alloc(bug6432565));
}

$AtomicReference* bug6432565::throwable = nullptr;
$AtomicBoolean* bug6432565::isDone = nullptr;

void bug6432565::init$() {
}

void bug6432565::main($StringArray* args) {
	$init(bug6432565);
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->push($$new($bug6432565$EventProcessor));
	$var($SwingWorker, swingWorker, $new($bug6432565$1));
	swingWorker->execute();
	while (!$nc(bug6432565::isDone)->get()) {
		$Thread::sleep(100);
	}
	if ($instanceOf($ArrayStoreException, $($nc(bug6432565::throwable)->get()))) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void clinit$bug6432565($Class* class$) {
	$assignStatic(bug6432565::throwable, $new($AtomicReference, nullptr));
	$assignStatic(bug6432565::isDone, $new($AtomicBoolean, false));
}

bug6432565::bug6432565() {
}

$Class* bug6432565::load$($String* name, bool initialize) {
	$loadClass(bug6432565, name, initialize, &_bug6432565_ClassInfo_, clinit$bug6432565, allocate$bug6432565);
	return class$;
}

$Class* bug6432565::class$ = nullptr;