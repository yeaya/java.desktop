#include <java/awt/EventQueue$2.h>

#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/lang/Runnable.h>
#include <sun/awt/FwDispatcher.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $FwDispatcher = ::sun::awt::FwDispatcher;

namespace java {
	namespace awt {

$MethodInfo _EventQueue$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueue$2::*)()>(&EventQueue$2::init$))},
	{"getDispatchThread", "(Ljava/awt/EventQueue;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{"getMostRecentEventTime", "(Ljava/awt/EventQueue;)J", nullptr, $PUBLIC},
	{"invokeAndWait", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"isDispatchThreadImpl", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC},
	{"noEvents", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC},
	{"removeSourceEvents", "(Ljava/awt/EventQueue;Ljava/lang/Object;Z)V", nullptr, $PUBLIC},
	{"setFwDispatcher", "(Ljava/awt/EventQueue;Lsun/awt/FwDispatcher;)V", nullptr, $PUBLIC},
	{"wakeup", "(Ljava/awt/EventQueue;Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$2_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	nullptr,
	nullptr
};

$InnerClassInfo _EventQueue$2_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$2", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$EventQueueAccessor", "sun.awt.AWTAccessor", "EventQueueAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EventQueue$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$2",
	"java.lang.Object",
	"sun.awt.AWTAccessor$EventQueueAccessor",
	nullptr,
	_EventQueue$2_MethodInfo_,
	nullptr,
	&_EventQueue$2_EnclosingMethodInfo_,
	_EventQueue$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$2($Class* clazz) {
	return $of($alloc(EventQueue$2));
}

void EventQueue$2::init$() {
}

$Thread* EventQueue$2::getDispatchThread($EventQueue* eventQueue) {
	return $nc(eventQueue)->getDispatchThread();
}

bool EventQueue$2::isDispatchThreadImpl($EventQueue* eventQueue) {
	return $nc(eventQueue)->isDispatchThreadImpl();
}

void EventQueue$2::removeSourceEvents($EventQueue* eventQueue, Object$* source, bool removeAllEvents) {
	$nc(eventQueue)->removeSourceEvents(source, removeAllEvents);
}

bool EventQueue$2::noEvents($EventQueue* eventQueue) {
	return $nc(eventQueue)->noEvents();
}

void EventQueue$2::wakeup($EventQueue* eventQueue, bool isShutdown) {
	$nc(eventQueue)->wakeup(isShutdown);
}

void EventQueue$2::invokeAndWait(Object$* source, $Runnable* r) {
	$EventQueue::invokeAndWait(source, r);
}

void EventQueue$2::setFwDispatcher($EventQueue* eventQueue, $FwDispatcher* dispatcher) {
	$nc(eventQueue)->setFwDispatcher(dispatcher);
}

int64_t EventQueue$2::getMostRecentEventTime($EventQueue* eventQueue) {
	return $nc(eventQueue)->getMostRecentEventTimeImpl();
}

EventQueue$2::EventQueue$2() {
}

$Class* EventQueue$2::load$($String* name, bool initialize) {
	$loadClass(EventQueue$2, name, initialize, &_EventQueue$2_ClassInfo_, allocate$EventQueue$2);
	return class$;
}

$Class* EventQueue$2::class$ = nullptr;

	} // awt
} // java