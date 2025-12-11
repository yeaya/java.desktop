#include <java/awt/EventDispatchThread.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread$1.h>
#include <java/awt/EventDispatchThread$HierarchyEventFilter.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/ModalEventFilter.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/ArrayList.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCEPT_IMMEDIATELY
#undef ANY_EVENT
#undef FINE
#undef FINEST
#undef REJECT

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread$1 = ::java::awt::EventDispatchThread$1;
using $EventDispatchThread$HierarchyEventFilter = ::java::awt::EventDispatchThread$HierarchyEventFilter;
using $EventFilter = ::java::awt::EventFilter;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $EventQueue = ::java::awt::EventQueue;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ArrayList = ::java::util::ArrayList;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _EventDispatchThread_FieldInfo_[] = {
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EventDispatchThread, eventLog)},
	{"theQueue", "Ljava/awt/EventQueue;", nullptr, $PRIVATE, $field(EventDispatchThread, theQueue)},
	{"doDispatch", "Z", nullptr, $PRIVATE | $VOLATILE, $field(EventDispatchThread, doDispatch)},
	{"ANY_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventDispatchThread, ANY_EVENT)},
	{"eventFilters", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/awt/EventFilter;>;", $PRIVATE, $field(EventDispatchThread, eventFilters)},
	{}
};

$MethodInfo _EventDispatchThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EventDispatchThread::*)()>(&EventDispatchThread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;Ljava/awt/EventQueue;)V", nullptr, 0, $method(static_cast<void(EventDispatchThread::*)($ThreadGroup*,$String*,$EventQueue*)>(&EventDispatchThread::init$))},
	{"addEventFilter", "(Ljava/awt/EventFilter;)V", nullptr, 0},
	{"filterAndCheckEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getEventQueue", "()Ljava/awt/EventQueue;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"processException", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(static_cast<void(EventDispatchThread::*)($Throwable*)>(&EventDispatchThread::processException))},
	{"pumpEvents", "(Ljava/awt/Conditional;)V", nullptr, 0},
	{"pumpEvents", "(ILjava/awt/Conditional;)V", nullptr, 0},
	{"pumpEventsForFilter", "(Ljava/awt/Conditional;Ljava/awt/EventFilter;)V", nullptr, 0},
	{"pumpEventsForFilter", "(ILjava/awt/Conditional;Ljava/awt/EventFilter;)V", nullptr, 0},
	{"pumpEventsForHierarchy", "(Ljava/awt/Conditional;Ljava/awt/Component;)V", nullptr, 0},
	{"pumpEventsForHierarchy", "(ILjava/awt/Conditional;Ljava/awt/Component;)V", nullptr, 0},
	{"pumpOneEventForFilters", "(I)V", nullptr, 0},
	{"removeEventFilter", "(Ljava/awt/EventFilter;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"setEventQueue", "(Ljava/awt/EventQueue;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stopDispatching", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EventDispatchThread_InnerClassesInfo_[] = {
	{"java.awt.EventDispatchThread$HierarchyEventFilter", "java.awt.EventDispatchThread", "HierarchyEventFilter", $PRIVATE | $STATIC},
	{"java.awt.EventDispatchThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventDispatchThread_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventDispatchThread",
	"java.lang.Thread",
	nullptr,
	_EventDispatchThread_FieldInfo_,
	_EventDispatchThread_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatchThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.EventDispatchThread$HierarchyEventFilter,java.awt.EventDispatchThread$1"
};

$Object* allocate$EventDispatchThread($Class* clazz) {
	return $of($alloc(EventDispatchThread));
}

$PlatformLogger* EventDispatchThread::eventLog = nullptr;

void EventDispatchThread::init$() {
	$Thread::init$();
	this->doDispatch = true;
	$set(this, eventFilters, $new($ArrayList));
	$throwNew($UnsupportedOperationException, "Must erase locals"_s);
}

void EventDispatchThread::init$($ThreadGroup* group, $String* name, $EventQueue* queue) {
	$Thread::init$(group, nullptr, name, 0, false);
	this->doDispatch = true;
	$set(this, eventFilters, $new($ArrayList));
	setEventQueue(queue);
}

void EventDispatchThread::stopDispatching() {
	this->doDispatch = false;
}

void EventDispatchThread::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			pumpEvents($$new($EventDispatchThread$1, this));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(getEventQueue()))->detachDispatchThread(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void EventDispatchThread::pumpEvents($Conditional* cond) {
	pumpEvents(EventDispatchThread::ANY_EVENT, cond);
}

void EventDispatchThread::pumpEventsForHierarchy($Conditional* cond, $Component* modalComponent) {
	pumpEventsForHierarchy(EventDispatchThread::ANY_EVENT, cond, modalComponent);
}

void EventDispatchThread::pumpEvents(int32_t id, $Conditional* cond) {
	pumpEventsForHierarchy(id, cond, nullptr);
}

void EventDispatchThread::pumpEventsForHierarchy(int32_t id, $Conditional* cond, $Component* modalComponent) {
	pumpEventsForFilter(id, cond, $$new($EventDispatchThread$HierarchyEventFilter, modalComponent));
}

void EventDispatchThread::pumpEventsForFilter($Conditional* cond, $EventFilter* filter) {
	pumpEventsForFilter(EventDispatchThread::ANY_EVENT, cond, filter);
}

void EventDispatchThread::pumpEventsForFilter(int32_t id, $Conditional* cond, $EventFilter* filter) {
	addEventFilter(filter);
	this->doDispatch = true;
	while (true) {
		bool var$0 = this->doDispatch && !isInterrupted();
		if (!(var$0 && $nc(cond)->evaluate())) {
			break;
		}
		{
			pumpOneEventForFilters(id);
		}
	}
	removeEventFilter(filter);
}

void EventDispatchThread::addEventFilter($EventFilter* filter) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(EventDispatchThread::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(EventDispatchThread::eventLog)->finest($$str({"adding the event filter: "_s, filter}));
	}
	$synchronized(this->eventFilters) {
		if (!$nc(this->eventFilters)->contains(filter)) {
			if ($instanceOf($ModalEventFilter, filter)) {
				$var($ModalEventFilter, newFilter, $cast($ModalEventFilter, filter));
				int32_t k = 0;
				for (k = 0; k < $nc(this->eventFilters)->size(); ++k) {
					$var($EventFilter, f, $cast($EventFilter, $nc(this->eventFilters)->get(k)));
					if ($instanceOf($ModalEventFilter, f)) {
						$var($ModalEventFilter, cf, $cast($ModalEventFilter, f));
						if ($nc(cf)->compareTo(newFilter) > 0) {
							break;
						}
					}
				}
				$nc(this->eventFilters)->add(k, filter);
			} else {
				$nc(this->eventFilters)->add(filter);
			}
		}
	}
}

void EventDispatchThread::removeEventFilter($EventFilter* filter) {
	$init($PlatformLogger$Level);
	if ($nc(EventDispatchThread::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(EventDispatchThread::eventLog)->finest($$str({"removing the event filter: "_s, filter}));
	}
	$synchronized(this->eventFilters) {
		$nc(this->eventFilters)->remove($of(filter));
	}
}

bool EventDispatchThread::filterAndCheckEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	bool eventOK = true;
	$synchronized(this->eventFilters) {
		for (int32_t i = $nc(this->eventFilters)->size() - 1; i >= 0; --i) {
			$var($EventFilter, f, $cast($EventFilter, $nc(this->eventFilters)->get(i)));
			$EventFilter$FilterAction* accept = $nc(f)->acceptEvent(event);
			$init($EventFilter$FilterAction);
			if (accept == $EventFilter$FilterAction::REJECT) {
				eventOK = false;
				break;
			} else {
				if (accept == $EventFilter$FilterAction::ACCEPT_IMMEDIATELY) {
					break;
				}
			}
		}
	}
	return eventOK && $SunDragSourceContextPeer::checkEvent(event);
}

void EventDispatchThread::pumpOneEventForFilters(int32_t id) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEvent, event, nullptr);
	bool eventOK = false;
	try {
		$var($EventQueue, eq, nullptr);
		do {
			$assign(eq, getEventQueue());
			$assign(event, (id == EventDispatchThread::ANY_EVENT) ? $nc(eq)->getNextEvent() : eq->getNextEvent(id));
			eventOK = filterAndCheckEvent(event);
			if (!eventOK) {
				$nc(event)->consume();
			}
		} while (eventOK == false);
		$init($PlatformLogger$Level);
		if ($nc(EventDispatchThread::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(EventDispatchThread::eventLog)->finest($$str({"Dispatching: "_s, event}));
		}
		$nc(eq)->dispatchEvent(event);
	} catch ($ThreadDeath& death) {
		this->doDispatch = false;
		$throw(death);
	} catch ($InterruptedException& interruptedException) {
		this->doDispatch = false;
	} catch ($Throwable& e) {
		processException(e);
	}
}

void EventDispatchThread::processException($Throwable* e) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(EventDispatchThread::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(EventDispatchThread::eventLog)->fine($$str({"Processing exception: "_s, e}));
	}
	$nc($(getUncaughtExceptionHandler()))->uncaughtException(this, e);
}

$EventQueue* EventDispatchThread::getEventQueue() {
	$synchronized(this) {
		return this->theQueue;
	}
}

void EventDispatchThread::setEventQueue($EventQueue* eq) {
	$synchronized(this) {
		$set(this, theQueue, eq);
	}
}

void clinit$EventDispatchThread($Class* class$) {
	$assignStatic(EventDispatchThread::eventLog, $PlatformLogger::getLogger("java.awt.event.EventDispatchThread"_s));
}

EventDispatchThread::EventDispatchThread() {
}

$Class* EventDispatchThread::load$($String* name, bool initialize) {
	$loadClass(EventDispatchThread, name, initialize, &_EventDispatchThread_ClassInfo_, clinit$EventDispatchThread, allocate$EventDispatchThread);
	return class$;
}

$Class* EventDispatchThread::class$ = nullptr;

	} // awt
} // java