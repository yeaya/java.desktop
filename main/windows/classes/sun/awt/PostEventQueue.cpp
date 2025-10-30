#include <sun/awt/PostEventQueue.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/EventQueueItem.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $EventQueueItem = ::sun::awt::EventQueueItem;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _PostEventQueue_FieldInfo_[] = {
	{"queueHead", "Lsun/awt/EventQueueItem;", nullptr, $PRIVATE, $field(PostEventQueue, queueHead)},
	{"queueTail", "Lsun/awt/EventQueueItem;", nullptr, $PRIVATE, $field(PostEventQueue, queueTail)},
	{"eventQueue", "Ljava/awt/EventQueue;", nullptr, $PRIVATE | $FINAL, $field(PostEventQueue, eventQueue)},
	{"flushThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(PostEventQueue, flushThread)},
	{}
};

$MethodInfo _PostEventQueue_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue;)V", nullptr, 0, $method(static_cast<void(PostEventQueue::*)($EventQueue*)>(&PostEventQueue::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{}
};

$ClassInfo _PostEventQueue_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.PostEventQueue",
	"java.lang.Object",
	nullptr,
	_PostEventQueue_FieldInfo_,
	_PostEventQueue_MethodInfo_
};

$Object* allocate$PostEventQueue($Class* clazz) {
	return $of($alloc(PostEventQueue));
}

void PostEventQueue::init$($EventQueue* eq) {
	$set(this, queueHead, nullptr);
	$set(this, queueTail, nullptr);
	$set(this, flushThread, nullptr);
	$set(this, eventQueue, eq);
}

void PostEventQueue::flush() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, newThread, $Thread::currentThread());
	try {
		$var($EventQueueItem, tempQueue, nullptr);
		$synchronized(this) {
			if (newThread == this->flushThread) {
				return;
			}
			while (this->flushThread != nullptr) {
				$of(this)->wait();
			}
			if (this->queueHead == nullptr) {
				return;
			}
			$set(this, flushThread, newThread);
			$assign(tempQueue, this->queueHead);
			$set(this, queueHead, ($set(this, queueTail, nullptr)));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				while (tempQueue != nullptr) {
					$nc(this->eventQueue)->postEvent(tempQueue->event);
					$assign(tempQueue, tempQueue->next);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$synchronized(this) {
					$set(this, flushThread, nullptr);
					$of(this)->notifyAll();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($InterruptedException& e) {
		newThread->interrupt();
	}
}

void PostEventQueue::postEvent($AWTEvent* event) {
	$var($EventQueueItem, item, $new($EventQueueItem, event));
	$synchronized(this) {
		if (this->queueHead == nullptr) {
			$set(this, queueHead, ($set(this, queueTail, item)));
		} else {
			$set($nc(this->queueTail), next, item);
			$set(this, queueTail, item);
		}
	}
	$SunToolkit::wakeupEventQueue(this->eventQueue, $equals($nc(event)->getSource(), $AWTAutoShutdown::getInstance()));
}

PostEventQueue::PostEventQueue() {
}

$Class* PostEventQueue::load$($String* name, bool initialize) {
	$loadClass(PostEventQueue, name, initialize, &_PostEventQueue_ClassInfo_, allocate$PostEventQueue);
	return class$;
}

$Class* PostEventQueue::class$ = nullptr;

	} // awt
} // sun