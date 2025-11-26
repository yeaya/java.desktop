#include <java/awt/EventQueue.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/ActiveEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue$1.h>
#include <java/awt/EventQueue$1AWTInvocationLock.h>
#include <java/awt/EventQueue$2.h>
#include <java/awt/EventQueue$3.h>
#include <java/awt/EventQueue$4.h>
#include <java/awt/EventQueue$5.h>
#include <java/awt/EventQueue$6.h>
#include <java/awt/EventQueue$FwSecondaryLoopWrapper.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Queue.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/SentEvent.h>
#include <java/awt/SequencedEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/WaitDispatchSupport.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/EmptyStackException.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/awt/AWTAccessor$EventQueueAccessor.h>
#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/EventQueueItem.h>
#include <sun/awt/FwDispatcher.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CACHE_LENGTH
#undef DRAG
#undef EVENT_QUEUE_COND_KEY
#undef EVENT_QUEUE_KEY
#undef EVENT_QUEUE_LOCK_KEY
#undef FINE
#undef HIGH_PRIORITY
#undef LOW_PRIORITY
#undef LOW_PRIORITY_EVENT
#undef MIN_VALUE
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef MOVE
#undef NORM_PRIORITY
#undef NUM_PRIORITIES
#undef PAINT
#undef PAINT_FIRST
#undef PAINT_LAST
#undef PEER
#undef PRIORITY_EVENT
#undef ULTIMATE_PRIORITY
#undef ULTIMATE_PRIORITY_EVENT
#undef UPDATE

using $QueueArray = $Array<::java::awt::Queue>;
using $EventQueueItemArray = $Array<::sun::awt::EventQueueItem>;
using $AWTEvent = ::java::awt::AWTEvent;
using $ActiveEvent = ::java::awt::ActiveEvent;
using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $EventQueue$1 = ::java::awt::EventQueue$1;
using $EventQueue$1AWTInvocationLock = ::java::awt::EventQueue$1AWTInvocationLock;
using $EventQueue$2 = ::java::awt::EventQueue$2;
using $EventQueue$3 = ::java::awt::EventQueue$3;
using $EventQueue$4 = ::java::awt::EventQueue$4;
using $EventQueue$5 = ::java::awt::EventQueue$5;
using $EventQueue$6 = ::java::awt::EventQueue$6;
using $EventQueue$FwSecondaryLoopWrapper = ::java::awt::EventQueue$FwSecondaryLoopWrapper;
using $MenuComponent = ::java::awt::MenuComponent;
using $Queue = ::java::awt::Queue;
using $Rectangle = ::java::awt::Rectangle;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $SentEvent = ::java::awt::SentEvent;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EmptyStackException = ::java::util::EmptyStackException;
using $EventObject = ::java::util::EventObject;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$EventQueueAccessor = ::sun::awt::AWTAccessor$EventQueueAccessor;
using $AWTAccessor$InvocationEventAccessor = ::sun::awt::AWTAccessor$InvocationEventAccessor;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AppContext = ::sun::awt::AppContext;
using $EventQueueItem = ::sun::awt::EventQueueItem;
using $FwDispatcher = ::sun::awt::FwDispatcher;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _EventQueue_FieldInfo_[] = {
	{"threadInitNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EventQueue, threadInitNumber)},
	{"LOW_PRIORITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, LOW_PRIORITY)},
	{"NORM_PRIORITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, NORM_PRIORITY)},
	{"HIGH_PRIORITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, HIGH_PRIORITY)},
	{"ULTIMATE_PRIORITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, ULTIMATE_PRIORITY)},
	{"NUM_PRIORITIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, NUM_PRIORITIES)},
	{"queues", "[Ljava/awt/Queue;", nullptr, $PRIVATE, $field(EventQueue, queues)},
	{"nextQueue", "Ljava/awt/EventQueue;", nullptr, $PRIVATE, $field(EventQueue, nextQueue)},
	{"previousQueue", "Ljava/awt/EventQueue;", nullptr, $PRIVATE, $field(EventQueue, previousQueue)},
	{"pushPopLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, pushPopLock)},
	{"pushPopCond", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, pushPopCond)},
	{"dummyRunnable", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EventQueue, dummyRunnable)},
	{"dispatchThread", "Ljava/awt/EventDispatchThread;", nullptr, $PRIVATE, $field(EventQueue, dispatchThread)},
	{"threadGroup", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, threadGroup)},
	{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, classLoader)},
	{"mostRecentEventTime", "J", nullptr, $PRIVATE, $field(EventQueue, mostRecentEventTime)},
	{"mostRecentKeyEventTime", "J", nullptr, $PRIVATE, $field(EventQueue, mostRecentKeyEventTime)},
	{"currentEvent", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/AWTEvent;>;", $PRIVATE, $field(EventQueue, currentEvent)},
	{"waitForID", "I", nullptr, $PRIVATE | $VOLATILE, $field(EventQueue, waitForID)},
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, appContext)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EventQueue, name)},
	{"fwDispatcher", "Lsun/awt/FwDispatcher;", nullptr, $PRIVATE, $field(EventQueue, fwDispatcher)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(EventQueue, eventLog)},
	{"fxAppThreadIsDispatchThread", "Z", nullptr, $PRIVATE | $STATIC, $staticField(EventQueue, fxAppThreadIsDispatchThread)},
	{"PAINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, PAINT)},
	{"UPDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, UPDATE)},
	{"MOVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, MOVE)},
	{"DRAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, DRAG)},
	{"PEER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, PEER)},
	{"CACHE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, CACHE_LENGTH)},
	{"javaSecurityAccess", "Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EventQueue, javaSecurityAccess)},
	{}
};

$MethodInfo _EventQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EventQueue::*)()>(&EventQueue::init$))},
	{"cacheEQItem", "(Lsun/awt/EventQueueItem;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($EventQueueItem*)>(&EventQueue::cacheEQItem))},
	{"coalesceEvent", "(Ljava/awt/AWTEvent;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)($AWTEvent*,int32_t)>(&EventQueue::coalesceEvent))},
	{"coalesceMouseEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)($MouseEvent*)>(&EventQueue::coalesceMouseEvent))},
	{"coalesceOtherEvent", "(Ljava/awt/AWTEvent;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)($AWTEvent*,int32_t)>(&EventQueue::coalesceOtherEvent))},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)($PaintEvent*)>(&EventQueue::coalescePaintEvent))},
	{"coalescePeerEvent", "(Lsun/awt/PeerEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)($PeerEvent*)>(&EventQueue::coalescePeerEvent))},
	{"createSecondaryLoop", "()Ljava/awt/SecondaryLoop;", nullptr, $PUBLIC},
	{"createSecondaryLoop", "(Ljava/awt/Conditional;Ljava/awt/EventFilter;J)Ljava/awt/SecondaryLoop;", nullptr, 0},
	{"detachDispatchThread", "(Ljava/awt/EventDispatchThread;)V", nullptr, $FINAL, $method(static_cast<void(EventQueue::*)($EventDispatchThread*)>(&EventQueue::detachDispatchThread))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"dispatchEventImpl", "(Ljava/awt/AWTEvent;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($AWTEvent*,Object$*)>(&EventQueue::dispatchEventImpl))},
	{"eventToCacheIndex", "(Ljava/awt/AWTEvent;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($AWTEvent*)>(&EventQueue::eventToCacheIndex))},
	{"getAccessControlContextFrom", "(Ljava/lang/Object;)Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AccessControlContext*(*)(Object$*)>(&EventQueue::getAccessControlContextFrom))},
	{"getCurrentEvent", "()Ljava/awt/AWTEvent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTEvent*(*)()>(&EventQueue::getCurrentEvent))},
	{"getCurrentEventImpl", "()Ljava/awt/AWTEvent;", nullptr, $PRIVATE, $method(static_cast<$AWTEvent*(EventQueue::*)()>(&EventQueue::getCurrentEventImpl))},
	{"getDispatchThread", "()Ljava/awt/EventDispatchThread;", nullptr, $FINAL, $method(static_cast<$EventDispatchThread*(EventQueue::*)()>(&EventQueue::getDispatchThread))},
	{"getEventLog", "()Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$PlatformLogger*(*)()>(&EventQueue::getEventLog))},
	{"getMostRecentEventTime", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&EventQueue::getMostRecentEventTime))},
	{"getMostRecentEventTimeEx", "()J", nullptr, 0},
	{"getMostRecentEventTimeImpl", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(EventQueue::*)()>(&EventQueue::getMostRecentEventTimeImpl))},
	{"getMostRecentKeyEventTime", "()J", nullptr, $SYNCHRONIZED},
	{"getNextEvent", "()Ljava/awt/AWTEvent;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"getNextEvent", "(I)Ljava/awt/AWTEvent;", nullptr, 0, nullptr, "java.lang.InterruptedException"},
	{"getNextEventPrivate", "()Ljava/awt/AWTEvent;", nullptr, 0, nullptr, "java.lang.InterruptedException"},
	{"getPriority", "(Ljava/awt/AWTEvent;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($AWTEvent*)>(&EventQueue::getPriority))},
	{"initDispatchThread", "()V", nullptr, $FINAL, $method(static_cast<void(EventQueue::*)()>(&EventQueue::initDispatchThread))},
	{"invokeAndWait", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*)>(&EventQueue::invokeAndWait)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"invokeAndWait", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,$Runnable*)>(&EventQueue::invokeAndWait)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"invokeLater", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*)>(&EventQueue::invokeLater))},
	{"isDispatchThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&EventQueue::isDispatchThread))},
	{"isDispatchThreadImpl", "()Z", nullptr, $FINAL, $method(static_cast<bool(EventQueue::*)()>(&EventQueue::isDispatchThreadImpl))},
	{"mergePaintEvents", "(Ljava/awt/event/PaintEvent;Ljava/awt/event/PaintEvent;)Ljava/awt/event/PaintEvent;", nullptr, $PRIVATE, $method(static_cast<$PaintEvent*(EventQueue::*)($PaintEvent*,$PaintEvent*)>(&EventQueue::mergePaintEvents))},
	{"noEvents", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(EventQueue::*)()>(&EventQueue::noEvents))},
	{"peekEvent", "()Ljava/awt/AWTEvent;", nullptr, $PUBLIC},
	{"peekEvent", "(I)Ljava/awt/AWTEvent;", nullptr, $PUBLIC},
	{"pop", "()V", nullptr, $PROTECTED, nullptr, "java.util.EmptyStackException"},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"postEvent", "(Ljava/awt/AWTEvent;I)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($AWTEvent*,int32_t)>(&EventQueue::postEvent))},
	{"postEventPrivate", "(Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($AWTEvent*)>(&EventQueue::postEventPrivate))},
	{"push", "(Ljava/awt/EventQueue;)V", nullptr, $PUBLIC},
	{"removeSourceEvents", "(Ljava/lang/Object;Z)V", nullptr, $FINAL, $method(static_cast<void(EventQueue::*)(Object$*,bool)>(&EventQueue::removeSourceEvents))},
	{"setCurrentEventAndMostRecentTime", "(Ljava/awt/AWTEvent;)V", nullptr, $STATIC, $method(static_cast<void(*)($AWTEvent*)>(&EventQueue::setCurrentEventAndMostRecentTime))},
	{"setCurrentEventAndMostRecentTimeImpl", "(Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($AWTEvent*)>(&EventQueue::setCurrentEventAndMostRecentTimeImpl))},
	{"setFwDispatcher", "(Lsun/awt/FwDispatcher;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($FwDispatcher*)>(&EventQueue::setFwDispatcher))},
	{"uncacheEQItem", "(Lsun/awt/EventQueueItem;)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)($EventQueueItem*)>(&EventQueue::uncacheEQItem))},
	{"wakeup", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(EventQueue::*)(bool)>(&EventQueue::wakeup))},
	{}
};

$InnerClassInfo _EventQueue_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$FwSecondaryLoopWrapper", "java.awt.EventQueue", "FwSecondaryLoopWrapper", $PRIVATE},
	{"java.awt.EventQueue$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{"java.awt.EventQueue$6", nullptr, nullptr, 0},
	{"java.awt.EventQueue$5", nullptr, nullptr, 0},
	{"java.awt.EventQueue$4", nullptr, nullptr, 0},
	{"java.awt.EventQueue$3", nullptr, nullptr, 0},
	{"java.awt.EventQueue$2", nullptr, nullptr, 0},
	{"java.awt.EventQueue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.EventQueue",
	"java.lang.Object",
	nullptr,
	_EventQueue_FieldInfo_,
	_EventQueue_MethodInfo_,
	nullptr,
	nullptr,
	_EventQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.EventQueue$FwSecondaryLoopWrapper,java.awt.EventQueue$1AWTInvocationLock,java.awt.EventQueue$6,java.awt.EventQueue$5,java.awt.EventQueue$4,java.awt.EventQueue$4$1,java.awt.EventQueue$3,java.awt.EventQueue$2,java.awt.EventQueue$1"
};

$Object* allocate$EventQueue($Class* clazz) {
	return $of($alloc(EventQueue));
}

$AtomicInteger* EventQueue::threadInitNumber = nullptr;
$Runnable* EventQueue::dummyRunnable = nullptr;
$volatile($PlatformLogger*) EventQueue::eventLog = nullptr;
bool EventQueue::fxAppThreadIsDispatchThread = false;
$JavaSecurityAccess* EventQueue::javaSecurityAccess = nullptr;

$PlatformLogger* EventQueue::getEventLog() {
	$init(EventQueue);
	if (EventQueue::eventLog == nullptr) {
		$assignStatic(EventQueue::eventLog, $PlatformLogger::getLogger("java.awt.event.EventQueue"_s));
	}
	return EventQueue::eventLog;
}

void EventQueue::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, queues, $new($QueueArray, EventQueue::NUM_PRIORITIES));
	$set(this, threadGroup, $($Thread::currentThread())->getThreadGroup());
	$set(this, classLoader, $($Thread::currentThread())->getContextClassLoader());
	this->mostRecentEventTime = $System::currentTimeMillis();
	this->mostRecentKeyEventTime = $System::currentTimeMillis();
	$set(this, name, $str({"AWT-EventQueue-"_s, $$str($nc(EventQueue::threadInitNumber)->getAndIncrement())}));
	for (int32_t i = 0; i < EventQueue::NUM_PRIORITIES; ++i) {
		$nc(this->queues)->set(i, $$new($Queue));
	}
	$set(this, appContext, $AppContext::getAppContext());
	$set(this, pushPopLock, $cast($Lock, $nc(this->appContext)->get($AppContext::EVENT_QUEUE_LOCK_KEY)));
	$set(this, pushPopCond, $cast($Condition, $nc(this->appContext)->get($AppContext::EVENT_QUEUE_COND_KEY)));
}

void EventQueue::postEvent($AWTEvent* theEvent) {
	$SunToolkit::flushPendingEvents(this->appContext);
	postEventPrivate(theEvent);
}

void EventQueue::postEventPrivate($AWTEvent* theEvent) {
	$nc(theEvent)->isPosted = true;
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->nextQueue != nullptr) {
				$nc(this->nextQueue)->postEventPrivate(theEvent);
				return$1 = true;
				goto $finally;
			}
			if (this->dispatchThread == nullptr) {
				if ($equals(theEvent->getSource(), $AWTAutoShutdown::getInstance())) {
					return$1 = true;
					goto $finally;
				} else {
					initDispatchThread();
				}
			}
			postEvent(theEvent, getPriority(theEvent));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int32_t EventQueue::getPriority($AWTEvent* theEvent) {
	$init(EventQueue);
	if ($instanceOf($PeerEvent, theEvent)) {
		$var($PeerEvent, peerEvent, $cast($PeerEvent, theEvent));
		if (((int64_t)($nc(peerEvent)->getFlags() & (uint64_t)$PeerEvent::ULTIMATE_PRIORITY_EVENT)) != 0) {
			return EventQueue::ULTIMATE_PRIORITY;
		}
		if (((int64_t)($nc(peerEvent)->getFlags() & (uint64_t)$PeerEvent::PRIORITY_EVENT)) != 0) {
			return EventQueue::HIGH_PRIORITY;
		}
		if (((int64_t)($nc(peerEvent)->getFlags() & (uint64_t)$PeerEvent::LOW_PRIORITY_EVENT)) != 0) {
			return EventQueue::LOW_PRIORITY;
		}
	}
	int32_t id = $nc(theEvent)->getID();
	if ((id >= $PaintEvent::PAINT_FIRST) && (id <= $PaintEvent::PAINT_LAST)) {
		return EventQueue::LOW_PRIORITY;
	}
	return EventQueue::NORM_PRIORITY;
}

void EventQueue::postEvent($AWTEvent* theEvent, int32_t priority) {
	$useLocalCurrentObjectStackCache();
	if (coalesceEvent(theEvent, priority)) {
		return;
	}
	$var($EventQueueItem, newItem, $new($EventQueueItem, theEvent));
	cacheEQItem(newItem);
	bool notifyID = ($nc(theEvent)->getID() == this->waitForID);
	if ($nc($nc(this->queues)->get(priority))->head == nullptr) {
		bool shouldNotify = noEvents();
		$set($nc($nc(this->queues)->get(priority)), head, ($set($nc($nc(this->queues)->get(priority)), tail, newItem)));
		if (shouldNotify) {
			if (!$equals(theEvent->getSource(), $AWTAutoShutdown::getInstance())) {
				$nc($($AWTAutoShutdown::getInstance()))->notifyThreadBusy(this->dispatchThread);
			}
			$nc(this->pushPopCond)->signalAll();
		} else if (notifyID) {
			$nc(this->pushPopCond)->signalAll();
		}
	} else {
		$set($nc($nc($nc(this->queues)->get(priority))->tail), next, newItem);
		$set($nc($nc(this->queues)->get(priority)), tail, newItem);
		if (notifyID) {
			$nc(this->pushPopCond)->signalAll();
		}
	}
}

bool EventQueue::coalescePaintEvent($PaintEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, sourcePeer, $nc(($cast($Component, $($nc(e)->getSource()))))->peer);
	if (sourcePeer != nullptr) {
		sourcePeer->coalescePaintEvent(e);
	}
	$var($EventQueueItemArray, cache, $nc(($cast($Component, $(e->getSource()))))->eventCache);
	if (cache == nullptr) {
		return false;
	}
	int32_t index = eventToCacheIndex(e);
	if (index != -1 && $nc(cache)->get(index) != nullptr) {
		$var($PaintEvent, merged, mergePaintEvents(e, $cast($PaintEvent, $nc(cache->get(index))->event)));
		if (merged != nullptr) {
			$set($nc(cache->get(index)), event, merged);
			return true;
		}
	}
	return false;
}

$PaintEvent* EventQueue::mergePaintEvents($PaintEvent* a, $PaintEvent* b) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, aRect, $nc(a)->getUpdateRect());
	$var($Rectangle, bRect, $nc(b)->getUpdateRect());
	if ($nc(bRect)->contains(aRect)) {
		return b;
	}
	if ($nc(aRect)->contains(bRect)) {
		return a;
	}
	return nullptr;
}

bool EventQueue::coalesceMouseEvent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($EventQueueItemArray, cache, $nc(($cast($Component, $($nc(e)->getSource()))))->eventCache);
	if (cache == nullptr) {
		return false;
	}
	int32_t index = eventToCacheIndex(e);
	if (index != -1 && $nc(cache)->get(index) != nullptr) {
		$set($nc(cache->get(index)), event, e);
		return true;
	}
	return false;
}

bool EventQueue::coalescePeerEvent($PeerEvent* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($PeerEvent, e, e$renamed);
	$var($EventQueueItemArray, cache, $nc(($cast($Component, $($nc(e)->getSource()))))->eventCache);
	if (cache == nullptr) {
		return false;
	}
	int32_t index = eventToCacheIndex(e);
	if (index != -1 && $nc(cache)->get(index) != nullptr) {
		$assign(e, e->coalesceEvents($cast($PeerEvent, $nc(cache->get(index))->event)));
		if (e != nullptr) {
			$set($nc(cache->get(index)), event, e);
			return true;
		} else {
			cache->set(index, nullptr);
		}
	}
	return false;
}

bool EventQueue::coalesceOtherEvent($AWTEvent* e, int32_t priority) {
	$useLocalCurrentObjectStackCache();
	int32_t id = $nc(e)->getID();
	$var($Component, source, $cast($Component, e->getSource()));
	{
		$var($EventQueueItem, entry, $nc($nc(this->queues)->get(priority))->head);
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			bool var$0 = $equals($nc(entry->event)->getSource(), source);
			if (var$0 && $nc(entry->event)->getID() == id) {
				$var($AWTEvent, coalescedEvent, $nc(source)->coalesceEvents(entry->event, e));
				if (coalescedEvent != nullptr) {
					$set(entry, event, coalescedEvent);
					return true;
				}
			}
		}
	}
	return false;
}

bool EventQueue::coalesceEvent($AWTEvent* e, int32_t priority) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Component, $($nc(e)->getSource())))) {
		return false;
	}
	if ($instanceOf($PeerEvent, e)) {
		return coalescePeerEvent($cast($PeerEvent, e));
	}
	bool var$0 = $nc(($cast($Component, $($nc(e)->getSource()))))->isCoalescingEnabled();
	if (var$0 && coalesceOtherEvent(e, priority)) {
		return true;
	}
	if ($instanceOf($PaintEvent, e)) {
		return coalescePaintEvent($cast($PaintEvent, e));
	}
	if ($instanceOf($MouseEvent, e)) {
		return coalesceMouseEvent($cast($MouseEvent, e));
	}
	return false;
}

void EventQueue::cacheEQItem($EventQueueItem* entry) {
	$useLocalCurrentObjectStackCache();
	int32_t index = eventToCacheIndex($nc(entry)->event);
	if (index != -1 && $instanceOf($Component, $($nc($nc(entry)->event)->getSource()))) {
		$var($Component, source, $cast($Component, $nc(entry->event)->getSource()));
		if ($nc(source)->eventCache == nullptr) {
			$set(source, eventCache, $new($EventQueueItemArray, EventQueue::CACHE_LENGTH));
		}
		$nc($nc(source)->eventCache)->set(index, entry);
	}
}

void EventQueue::uncacheEQItem($EventQueueItem* entry) {
	$useLocalCurrentObjectStackCache();
	int32_t index = eventToCacheIndex($nc(entry)->event);
	if (index != -1 && $instanceOf($Component, $($nc($nc(entry)->event)->getSource()))) {
		$var($Component, source, $cast($Component, $nc(entry->event)->getSource()));
		if ($nc(source)->eventCache == nullptr) {
			return;
		}
		$nc($nc(source)->eventCache)->set(index, nullptr);
	}
}

int32_t EventQueue::eventToCacheIndex($AWTEvent* e) {
	$init(EventQueue);
	switch ($nc(e)->getID()) {
	case $PaintEvent::PAINT:
		{
			return EventQueue::PAINT;
		}
	case $PaintEvent::UPDATE:
		{
			return EventQueue::UPDATE;
		}
	case $MouseEvent::MOUSE_MOVED:
		{
			return EventQueue::MOVE;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			return $instanceOf($SunDropTargetEvent, e) ? -1 : EventQueue::DRAG;
		}
	default:
		{
			return $instanceOf($PeerEvent, e) ? EventQueue::PEER : -1;
		}
	}
}

bool EventQueue::noEvents() {
	for (int32_t i = 0; i < EventQueue::NUM_PRIORITIES; ++i) {
		if ($nc($nc(this->queues)->get(i))->head != nullptr) {
			return false;
		}
	}
	return true;
}

$AWTEvent* EventQueue::getNextEvent() {
	$useLocalCurrentObjectStackCache();
	do {
		$SunToolkit::flushPendingEvents(this->appContext);
		$nc(this->pushPopLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			$var($AWTEvent, var$2, nullptr);
			bool return$1 = false;
			try {
				$var($AWTEvent, event, getNextEventPrivate());
				if (event != nullptr) {
					$assign(var$2, event);
					return$1 = true;
					goto $finally;
				}
				$nc($($AWTAutoShutdown::getInstance()))->notifyThreadFree(this->dispatchThread);
				$nc(this->pushPopCond)->await();
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$nc(this->pushPopLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} while (true);
	$shouldNotReachHere();
}

$AWTEvent* EventQueue::getNextEventPrivate() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = EventQueue::NUM_PRIORITIES - 1; i >= 0; --i) {
		if ($nc($nc(this->queues)->get(i))->head != nullptr) {
			$var($EventQueueItem, entry, $nc($nc(this->queues)->get(i))->head);
			$set($nc($nc(this->queues)->get(i)), head, $nc(entry)->next);
			if (entry->next == nullptr) {
				$set($nc($nc(this->queues)->get(i)), tail, nullptr);
			}
			uncacheEQItem(entry);
			return entry->event;
		}
	}
	return nullptr;
}

$AWTEvent* EventQueue::getNextEvent(int32_t id) {
	$useLocalCurrentObjectStackCache();
	do {
		$SunToolkit::flushPendingEvents(this->appContext);
		$nc(this->pushPopLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			$var($AWTEvent, var$2, nullptr);
			bool return$1 = false;
			try {
				for (int32_t i = 0; i < EventQueue::NUM_PRIORITIES; ++i) {
					{
						$var($EventQueueItem, entry, $nc($nc(this->queues)->get(i))->head);
						$var($EventQueueItem, prev, nullptr);
						for (; entry != nullptr; $assign(prev, entry), $assign(entry, $nc(entry)->next)) {
							if ($nc(entry->event)->getID() == id) {
								if (prev == nullptr) {
									$set($nc($nc(this->queues)->get(i)), head, entry->next);
								} else {
									$set($nc(prev), next, entry->next);
								}
								if ($nc($nc(this->queues)->get(i))->tail == entry) {
									$set($nc($nc(this->queues)->get(i)), tail, prev);
								}
								uncacheEQItem(entry);
								$assign(var$2, entry->event);
								return$1 = true;
								goto $finally;
							}
						}
					}
				}
				this->waitForID = id;
				$nc(this->pushPopCond)->await();
				this->waitForID = 0;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$nc(this->pushPopLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} while (true);
	$shouldNotReachHere();
}

$AWTEvent* EventQueue::peekEvent() {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($AWTEvent, var$2, nullptr);
		bool return$1 = false;
		try {
			for (int32_t i = EventQueue::NUM_PRIORITIES - 1; i >= 0; --i) {
				if ($nc($nc(this->queues)->get(i))->head != nullptr) {
					$assign(var$2, $nc($nc($nc(this->queues)->get(i))->head)->event);
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

$AWTEvent* EventQueue::peekEvent(int32_t id) {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($AWTEvent, var$2, nullptr);
		bool return$1 = false;
		try {
			for (int32_t i = EventQueue::NUM_PRIORITIES - 1; i >= 0; --i) {
				$var($EventQueueItem, q, $nc($nc(this->queues)->get(i))->head);
				for (; q != nullptr; $assign(q, $nc(q)->next)) {
					if ($nc(q->event)->getID() == id) {
						$assign(var$2, q->event);
						return$1 = true;
						goto $finally;
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

void EventQueue::dispatchEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Object, src, $nc(event)->getSource());
	$var($PrivilegedAction, action, $new($EventQueue$4, this, event, src));
	$var($AccessControlContext, stack, $AccessController::getContext());
	$var($AccessControlContext, srcAcc, getAccessControlContextFrom(src));
	$var($AccessControlContext, eventAcc, event->getAccessControlContext());
	if (srcAcc == nullptr) {
		$nc(EventQueue::javaSecurityAccess)->doIntersectionPrivilege(action, stack, eventAcc);
	} else {
		$nc(EventQueue::javaSecurityAccess)->doIntersectionPrivilege($$new($EventQueue$5, this, action, eventAcc), stack, srcAcc);
	}
}

$AccessControlContext* EventQueue::getAccessControlContextFrom(Object$* src) {
	$init(EventQueue);
	return $instanceOf($Component, src) ? $nc(($cast($Component, src)))->getAccessControlContext() : $instanceOf($MenuComponent, src) ? $nc(($cast($MenuComponent, src)))->getAccessControlContext() : $instanceOf($TrayIcon, src) ? $nc(($cast($TrayIcon, src)))->getAccessControlContext() : ($AccessControlContext*)nullptr;
}

void EventQueue::dispatchEventImpl($AWTEvent* event, Object$* src) {
	$useLocalCurrentObjectStackCache();
	$nc(event)->isPosted = true;
	if ($instanceOf($ActiveEvent, event)) {
		setCurrentEventAndMostRecentTimeImpl(event);
		$nc(($cast($ActiveEvent, event)))->dispatch();
	} else if ($instanceOf($Component, src)) {
		$nc(($cast($Component, src)))->dispatchEvent(event);
		event->dispatched();
	} else if ($instanceOf($MenuComponent, src)) {
		$nc(($cast($MenuComponent, src)))->dispatchEvent(event);
	} else if ($instanceOf($TrayIcon, src)) {
		$nc(($cast($TrayIcon, src)))->dispatchEvent(event);
	} else if ($instanceOf($AWTAutoShutdown, src)) {
		if (noEvents()) {
			$nc(this->dispatchThread)->stopDispatching();
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc($(getEventLog()))->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($(getEventLog()))->fine($$str({"Unable to dispatch event: "_s, event}));
		}
	}
}

int64_t EventQueue::getMostRecentEventTime() {
	$init(EventQueue);
	return $nc($($Toolkit::getEventQueue()))->getMostRecentEventTimeImpl();
}

int64_t EventQueue::getMostRecentEventTimeImpl() {
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = ($equals($Thread::currentThread(), this->dispatchThread)) ? this->mostRecentEventTime : $System::currentTimeMillis();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t EventQueue::getMostRecentEventTimeEx() {
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->mostRecentEventTime;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$AWTEvent* EventQueue::getCurrentEvent() {
	$init(EventQueue);
	return $nc($($Toolkit::getEventQueue()))->getCurrentEventImpl();
}

$AWTEvent* EventQueue::getCurrentEventImpl() {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($AWTEvent, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($equals($Thread::currentThread(), this->dispatchThread) || EventQueue::fxAppThreadIsDispatchThread) {
				$assign(var$2, (this->currentEvent != nullptr) ? $cast($AWTEvent, $nc(this->currentEvent)->get()) : ($AWTEvent*)nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void EventQueue::push(EventQueue* newEventQueue) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc($(getEventLog()))->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($(getEventLog()))->fine($$str({"EventQueue.push("_s, newEventQueue, ")"_s}));
	}
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var(EventQueue, topQueue, this);
			while ($nc(topQueue)->nextQueue != nullptr) {
				$assign(topQueue, topQueue->nextQueue);
			}
			if ($nc(topQueue)->fwDispatcher != nullptr) {
				$throwNew($RuntimeException, "push() to queue with fwDispatcher"_s);
			}
			if (($nc(topQueue)->dispatchThread != nullptr) && ($nc(topQueue->dispatchThread)->getEventQueue() == this)) {
				$set($nc(newEventQueue), dispatchThread, topQueue->dispatchThread);
				$nc(topQueue->dispatchThread)->setEventQueue(newEventQueue);
			}
			while ($nc(topQueue)->peekEvent() != nullptr) {
				try {
					$nc(newEventQueue)->postEventPrivate($(topQueue->getNextEventPrivate()));
				} catch ($InterruptedException& ie) {
					if ($nc($(getEventLog()))->isLoggable($PlatformLogger$Level::FINE)) {
						$nc($(getEventLog()))->fine("Interrupted push"_s, static_cast<$Throwable*>(ie));
					}
				}
			}
			if ($nc(topQueue)->dispatchThread != nullptr) {
				topQueue->postEventPrivate($$new($InvocationEvent, topQueue, EventQueue::dummyRunnable));
			}
			$set($nc(newEventQueue), previousQueue, topQueue);
			$set($nc(topQueue), nextQueue, newEventQueue);
			$init($AppContext);
			if ($equals($nc(this->appContext)->get($AppContext::EVENT_QUEUE_KEY), topQueue)) {
				$nc(this->appContext)->put($AppContext::EVENT_QUEUE_KEY, newEventQueue);
			}
			$nc(this->pushPopCond)->signalAll();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void EventQueue::pop() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc($(getEventLog()))->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($(getEventLog()))->fine($$str({"EventQueue.pop("_s, this, ")"_s}));
	}
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var(EventQueue, topQueue, this);
			while ($nc(topQueue)->nextQueue != nullptr) {
				$assign(topQueue, topQueue->nextQueue);
			}
			$var(EventQueue, prevQueue, $nc(topQueue)->previousQueue);
			if (prevQueue == nullptr) {
				$throwNew($EmptyStackException);
			}
			$set(topQueue, previousQueue, nullptr);
			$set($nc(prevQueue), nextQueue, nullptr);
			while (topQueue->peekEvent() != nullptr) {
				try {
					prevQueue->postEventPrivate($(topQueue->getNextEventPrivate()));
				} catch ($InterruptedException& ie) {
					if ($nc($(getEventLog()))->isLoggable($PlatformLogger$Level::FINE)) {
						$nc($(getEventLog()))->fine("Interrupted pop"_s, static_cast<$Throwable*>(ie));
					}
				}
			}
			if ((topQueue->dispatchThread != nullptr) && ($nc(topQueue->dispatchThread)->getEventQueue() == this)) {
				$set(prevQueue, dispatchThread, topQueue->dispatchThread);
				$nc(topQueue->dispatchThread)->setEventQueue(prevQueue);
			}
			$init($AppContext);
			if ($equals($nc(this->appContext)->get($AppContext::EVENT_QUEUE_KEY), this)) {
				$nc(this->appContext)->put($AppContext::EVENT_QUEUE_KEY, prevQueue);
			}
			topQueue->postEventPrivate($$new($InvocationEvent, topQueue, EventQueue::dummyRunnable));
			$nc(this->pushPopCond)->signalAll();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$SecondaryLoop* EventQueue::createSecondaryLoop() {
	return createSecondaryLoop(nullptr, nullptr, 0);
}

$SecondaryLoop* EventQueue::createSecondaryLoop($Conditional* cond, $EventFilter* filter, int64_t interval) {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SecondaryLoop, var$2, nullptr);
		bool return$1 = false;
		try {
			if (this->nextQueue != nullptr) {
				$assign(var$2, $nc(this->nextQueue)->createSecondaryLoop(cond, filter, interval));
				return$1 = true;
				goto $finally;
			}
			if (this->fwDispatcher != nullptr) {
				$assign(var$2, $new($EventQueue$FwSecondaryLoopWrapper, this, $($nc(this->fwDispatcher)->createSecondaryLoop()), filter));
				return$1 = true;
				goto $finally;
			}
			if (this->dispatchThread == nullptr) {
				initDispatchThread();
			}
			$assign(var$2, $new($WaitDispatchSupport, this->dispatchThread, cond, filter, interval));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool EventQueue::isDispatchThread() {
	$init(EventQueue);
	$var(EventQueue, eq, $Toolkit::getEventQueue());
	return $nc(eq)->isDispatchThreadImpl();
}

bool EventQueue::isDispatchThreadImpl() {
	$useLocalCurrentObjectStackCache();
	$var(EventQueue, eq, this);
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var(EventQueue, next, eq->nextQueue);
			while (next != nullptr) {
				$assign(eq, next);
				$assign(next, eq->nextQueue);
			}
			if ($nc(eq)->fwDispatcher != nullptr) {
				var$2 = $nc(eq->fwDispatcher)->isDispatchThread();
				return$1 = true;
				goto $finally;
			}
			var$2 = ($equals($Thread::currentThread(), $nc(eq)->dispatchThread));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void EventQueue::initDispatchThread() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool var$1 = this->dispatchThread == nullptr && !$nc(this->threadGroup)->isDestroyed();
			if (var$1 && !$nc(this->appContext)->isDisposed()) {
				$set(this, dispatchThread, $cast($EventDispatchThread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($EventQueue$6, this)))));
				$nc(this->dispatchThread)->start();
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void EventQueue::detachDispatchThread($EventDispatchThread* edt) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::flushPendingEvents(this->appContext);
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (edt == this->dispatchThread) {
				$set(this, dispatchThread, nullptr);
			}
			$nc($($AWTAutoShutdown::getInstance()))->notifyThreadFree(edt);
			if (peekEvent() != nullptr) {
				initDispatchThread();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$EventDispatchThread* EventQueue::getDispatchThread() {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($EventDispatchThread, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, this->dispatchThread);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void EventQueue::removeSourceEvents(Object$* source, bool removeAllEvents) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::flushPendingEvents(this->appContext);
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < EventQueue::NUM_PRIORITIES; ++i) {
				$var($EventQueueItem, entry, $nc($nc(this->queues)->get(i))->head);
				$var($EventQueueItem, prev, nullptr);
				while (entry != nullptr) {
					if (($equals($nc(entry->event)->getSource(), source)) && (removeAllEvents || !($instanceOf($SequencedEvent, entry->event) || $instanceOf($SentEvent, entry->event) || $instanceOf($FocusEvent, entry->event) || $instanceOf($WindowEvent, entry->event) || $instanceOf($KeyEvent, entry->event) || $instanceOf($InputMethodEvent, entry->event)))) {
						if ($instanceOf($SequencedEvent, entry->event)) {
							$nc(($cast($SequencedEvent, entry->event)))->dispose();
						}
						if ($instanceOf($SentEvent, entry->event)) {
							$nc(($cast($SentEvent, entry->event)))->dispose();
						}
						if ($instanceOf($InvocationEvent, entry->event)) {
							$nc($($AWTAccessor::getInvocationEventAccessor()))->dispose($cast($InvocationEvent, entry->event));
						}
						if ($instanceOf($SunDropTargetEvent, entry->event)) {
							$nc(($cast($SunDropTargetEvent, entry->event)))->dispose();
						}
						if (prev == nullptr) {
							$set($nc($nc(this->queues)->get(i)), head, entry->next);
						} else {
							$set($nc(prev), next, entry->next);
						}
						uncacheEQItem(entry);
					} else {
						$assign(prev, entry);
					}
					$assign(entry, entry->next);
				}
				$set($nc($nc(this->queues)->get(i)), tail, prev);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t EventQueue::getMostRecentKeyEventTime() {
	$synchronized(this) {
		$nc(this->pushPopLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				var$2 = this->mostRecentKeyEventTime;
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$nc(this->pushPopLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void EventQueue::setCurrentEventAndMostRecentTime($AWTEvent* e) {
	$init(EventQueue);
	$nc($($Toolkit::getEventQueue()))->setCurrentEventAndMostRecentTimeImpl(e);
}

void EventQueue::setCurrentEventAndMostRecentTimeImpl($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!EventQueue::fxAppThreadIsDispatchThread && !$equals($Thread::currentThread(), this->dispatchThread)) {
				return$1 = true;
				goto $finally;
			}
			$set(this, currentEvent, $new($WeakReference, e));
			int64_t mostRecentEventTime2 = $Long::MIN_VALUE;
			if ($instanceOf($InputEvent, e)) {
				$var($InputEvent, ie, $cast($InputEvent, e));
				mostRecentEventTime2 = $nc(ie)->getWhen();
				if ($instanceOf($KeyEvent, e)) {
					this->mostRecentKeyEventTime = ie->getWhen();
				}
			} else if ($instanceOf($InputMethodEvent, e)) {
				$var($InputMethodEvent, ime, $cast($InputMethodEvent, e));
				mostRecentEventTime2 = $nc(ime)->getWhen();
			} else if ($instanceOf($ActionEvent, e)) {
				$var($ActionEvent, ae, $cast($ActionEvent, e));
				mostRecentEventTime2 = $nc(ae)->getWhen();
			} else if ($instanceOf($InvocationEvent, e)) {
				$var($InvocationEvent, ie, $cast($InvocationEvent, e));
				mostRecentEventTime2 = $nc(ie)->getWhen();
			}
			this->mostRecentEventTime = $Math::max(this->mostRecentEventTime, mostRecentEventTime2);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void EventQueue::invokeLater($Runnable* runnable) {
	$init(EventQueue);
	$useLocalCurrentObjectStackCache();
	$nc($($Toolkit::getEventQueue()))->postEvent($$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), runnable));
}

void EventQueue::invokeAndWait($Runnable* runnable) {
	$init(EventQueue);
	invokeAndWait($($Toolkit::getDefaultToolkit()), runnable);
}

void EventQueue::invokeAndWait(Object$* source, $Runnable* runnable) {
	$init(EventQueue);
	$useLocalCurrentObjectStackCache();
	if (EventQueue::isDispatchThread()) {
		$throwNew($Error, "Cannot call invokeAndWait from the event dispatcher thread"_s);
	}
	{
	}
	$var($Object, lock, $new($EventQueue$1AWTInvocationLock));
	$var($InvocationEvent, event, $new($InvocationEvent, source, runnable, lock, true));
	$synchronized(lock) {
		$nc($($Toolkit::getEventQueue()))->postEvent(event);
		while (!event->isDispatched()) {
			$of(lock)->wait();
		}
	}
	$var($Throwable, eventThrowable, event->getThrowable());
	if (eventThrowable != nullptr) {
		$throwNew($InvocationTargetException, eventThrowable);
	}
}

void EventQueue::wakeup(bool isShutdown) {
	$nc(this->pushPopLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->nextQueue != nullptr) {
				$nc(this->nextQueue)->wakeup(isShutdown);
			} else if (this->dispatchThread != nullptr) {
				$nc(this->pushPopCond)->signalAll();
			} else if (!isShutdown) {
				initDispatchThread();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->pushPopLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void EventQueue::setFwDispatcher($FwDispatcher* dispatcher) {
	if (this->nextQueue != nullptr) {
		$nc(this->nextQueue)->setFwDispatcher(dispatcher);
	} else {
		$set(this, fwDispatcher, dispatcher);
	}
}

void clinit$EventQueue($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(EventQueue::threadInitNumber, $new($AtomicInteger));
	$assignStatic(EventQueue::dummyRunnable, $new($EventQueue$1));
	{
		$AWTAccessor::setEventQueueAccessor($$new($EventQueue$2));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($EventQueue$3)));
	}
	$assignStatic(EventQueue::javaSecurityAccess, $SharedSecrets::getJavaSecurityAccess());
}

EventQueue::EventQueue() {
}

$Class* EventQueue::load$($String* name, bool initialize) {
	$loadClass(EventQueue, name, initialize, &_EventQueue_ClassInfo_, clinit$EventQueue, allocate$EventQueue);
	return class$;
}

$Class* EventQueue::class$ = nullptr;

	} // awt
} // java