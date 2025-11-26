#include <bug6432565$EventProcessor.h>

#include <bug6432565.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

using $bug6432565 = ::bug6432565;
using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

$MethodInfo _bug6432565$EventProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6432565$EventProcessor::*)()>(&bug6432565$EventProcessor::init$))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug6432565$EventProcessor_InnerClassesInfo_[] = {
	{"bug6432565$EventProcessor", "bug6432565", "EventProcessor", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _bug6432565$EventProcessor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"bug6432565$EventProcessor",
	"java.awt.EventQueue",
	nullptr,
	nullptr,
	_bug6432565$EventProcessor_MethodInfo_,
	nullptr,
	nullptr,
	_bug6432565$EventProcessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6432565"
};

$Object* allocate$bug6432565$EventProcessor($Class* clazz) {
	return $of($alloc(bug6432565$EventProcessor));
}

void bug6432565$EventProcessor::init$() {
	$EventQueue::init$();
}

void bug6432565$EventProcessor::dispatchEvent($AWTEvent* event) {
	try {
		$EventQueue::dispatchEvent(event);
	} catch ($Throwable& e) {
		e->printStackTrace();
		$init($bug6432565);
		$nc($bug6432565::throwable)->set(e);
	}
}

bug6432565$EventProcessor::bug6432565$EventProcessor() {
}

$Class* bug6432565$EventProcessor::load$($String* name, bool initialize) {
	$loadClass(bug6432565$EventProcessor, name, initialize, &_bug6432565$EventProcessor_ClassInfo_, allocate$bug6432565$EventProcessor);
	return class$;
}

$Class* bug6432565$EventProcessor::class$ = nullptr;