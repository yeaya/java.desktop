#include <EventQueueProxy.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EventQueueProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueueProxy::*)()>(&EventQueueProxy::init$))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _EventQueueProxy_ClassInfo_ = {
	$ACC_SUPER,
	"EventQueueProxy",
	"java.awt.EventQueue",
	nullptr,
	nullptr,
	_EventQueueProxy_MethodInfo_
};

$Object* allocate$EventQueueProxy($Class* clazz) {
	return $of($alloc(EventQueueProxy));
}

void EventQueueProxy::init$() {
	$EventQueue::init$();
}

void EventQueueProxy::dispatchEvent($AWTEvent* evt) {
	try {
		$EventQueue::dispatchEvent(evt);
	} catch ($Exception& e) {
		$nc($System::out)->println("Intentionally consumed Exception from ActionListener"_s);
		e->printStackTrace();
	}
}

EventQueueProxy::EventQueueProxy() {
}

$Class* EventQueueProxy::load$($String* name, bool initialize) {
	$loadClass(EventQueueProxy, name, initialize, &_EventQueueProxy_ClassInfo_, allocate$EventQueueProxy);
	return class$;
}

$Class* EventQueueProxy::class$ = nullptr;