#ifndef _java_awt_EventQueue_h_
#define _java_awt_EventQueue_h_
//$ class java.awt.EventQueue
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CACHE_LENGTH")
#undef CACHE_LENGTH
#pragma push_macro("DRAG")
#undef DRAG
#pragma push_macro("HIGH_PRIORITY")
#undef HIGH_PRIORITY
#pragma push_macro("LOW_PRIORITY")
#undef LOW_PRIORITY
#pragma push_macro("MOVE")
#undef MOVE
#pragma push_macro("NORM_PRIORITY")
#undef NORM_PRIORITY
#pragma push_macro("NUM_PRIORITIES")
#undef NUM_PRIORITIES
#pragma push_macro("PAINT")
#undef PAINT
#pragma push_macro("PEER")
#undef PEER
#pragma push_macro("ULTIMATE_PRIORITY")
#undef ULTIMATE_PRIORITY
#pragma push_macro("UPDATE")
#undef UPDATE

namespace java {
	namespace awt {
		class AWTEvent;
		class Conditional;
		class EventDispatchThread;
		class EventFilter;
		class Queue;
		class SecondaryLoop;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
			class PaintEvent;
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Runnable;
		class ThreadGroup;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class Lock;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class EventQueueItem;
		class FwDispatcher;
		class PeerEvent;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $export EventQueue : public ::java::lang::Object {
	$class(EventQueue, 0, ::java::lang::Object)
public:
	EventQueue();
	void init$();
	void cacheEQItem(::sun::awt::EventQueueItem* entry);
	bool coalesceEvent(::java::awt::AWTEvent* e, int32_t priority);
	bool coalesceMouseEvent(::java::awt::event::MouseEvent* e);
	bool coalesceOtherEvent(::java::awt::AWTEvent* e, int32_t priority);
	bool coalescePaintEvent(::java::awt::event::PaintEvent* e);
	bool coalescePeerEvent(::sun::awt::PeerEvent* e);
	virtual ::java::awt::SecondaryLoop* createSecondaryLoop();
	virtual ::java::awt::SecondaryLoop* createSecondaryLoop(::java::awt::Conditional* cond, ::java::awt::EventFilter* filter, int64_t interval);
	void detachDispatchThread(::java::awt::EventDispatchThread* edt);
	virtual void dispatchEvent(::java::awt::AWTEvent* event);
	void dispatchEventImpl(::java::awt::AWTEvent* event, Object$* src);
	static int32_t eventToCacheIndex(::java::awt::AWTEvent* e);
	static ::java::security::AccessControlContext* getAccessControlContextFrom(Object$* src);
	static ::java::awt::AWTEvent* getCurrentEvent();
	::java::awt::AWTEvent* getCurrentEventImpl();
	::java::awt::EventDispatchThread* getDispatchThread();
	static ::sun::util::logging::PlatformLogger* getEventLog();
	static int64_t getMostRecentEventTime();
	virtual int64_t getMostRecentEventTimeEx();
	int64_t getMostRecentEventTimeImpl();
	virtual int64_t getMostRecentKeyEventTime();
	virtual ::java::awt::AWTEvent* getNextEvent();
	virtual ::java::awt::AWTEvent* getNextEvent(int32_t id);
	virtual ::java::awt::AWTEvent* getNextEventPrivate();
	static int32_t getPriority(::java::awt::AWTEvent* theEvent);
	void initDispatchThread();
	static void invokeAndWait(::java::lang::Runnable* runnable);
	static void invokeAndWait(Object$* source, ::java::lang::Runnable* runnable);
	static void invokeLater(::java::lang::Runnable* runnable);
	static bool isDispatchThread();
	bool isDispatchThreadImpl();
	::java::awt::event::PaintEvent* mergePaintEvents(::java::awt::event::PaintEvent* a, ::java::awt::event::PaintEvent* b);
	bool noEvents();
	virtual ::java::awt::AWTEvent* peekEvent();
	virtual ::java::awt::AWTEvent* peekEvent(int32_t id);
	virtual void pop();
	virtual void postEvent(::java::awt::AWTEvent* theEvent);
	void postEvent(::java::awt::AWTEvent* theEvent, int32_t priority);
	void postEventPrivate(::java::awt::AWTEvent* theEvent);
	virtual void push(::java::awt::EventQueue* newEventQueue);
	void removeSourceEvents(Object$* source, bool removeAllEvents);
	static void setCurrentEventAndMostRecentTime(::java::awt::AWTEvent* e);
	void setCurrentEventAndMostRecentTimeImpl(::java::awt::AWTEvent* e);
	void setFwDispatcher(::sun::awt::FwDispatcher* dispatcher);
	void uncacheEQItem(::sun::awt::EventQueueItem* entry);
	void wakeup(bool isShutdown);
	static ::java::util::concurrent::atomic::AtomicInteger* threadInitNumber;
	static const int32_t LOW_PRIORITY = 0;
	static const int32_t NORM_PRIORITY = 1;
	static const int32_t HIGH_PRIORITY = 2;
	static const int32_t ULTIMATE_PRIORITY = 3;
	static const int32_t NUM_PRIORITIES = 4; // ULTIMATE_PRIORITY + 1
	$Array<::java::awt::Queue>* queues = nullptr;
	::java::awt::EventQueue* nextQueue = nullptr;
	::java::awt::EventQueue* previousQueue = nullptr;
	::java::util::concurrent::locks::Lock* pushPopLock = nullptr;
	::java::util::concurrent::locks::Condition* pushPopCond = nullptr;
	static ::java::lang::Runnable* dummyRunnable;
	::java::awt::EventDispatchThread* dispatchThread = nullptr;
	::java::lang::ThreadGroup* threadGroup = nullptr;
	::java::lang::ClassLoader* classLoader = nullptr;
	int64_t mostRecentEventTime = 0;
	int64_t mostRecentKeyEventTime = 0;
	::java::lang::ref::WeakReference* currentEvent = nullptr;
	$volatile(int32_t) waitForID = 0;
	::sun::awt::AppContext* appContext = nullptr;
	$String* name = nullptr;
	::sun::awt::FwDispatcher* fwDispatcher = nullptr;
	static $volatile(::sun::util::logging::PlatformLogger*) eventLog;
	static bool fxAppThreadIsDispatchThread;
	static const int32_t PAINT = 0;
	static const int32_t UPDATE = 1;
	static const int32_t MOVE = 2;
	static const int32_t DRAG = 3;
	static const int32_t PEER = 4;
	static const int32_t CACHE_LENGTH = 5;
	static ::jdk::internal::access::JavaSecurityAccess* javaSecurityAccess;
};

	} // awt
} // java

#pragma pop_macro("CACHE_LENGTH")
#pragma pop_macro("DRAG")
#pragma pop_macro("HIGH_PRIORITY")
#pragma pop_macro("LOW_PRIORITY")
#pragma pop_macro("MOVE")
#pragma pop_macro("NORM_PRIORITY")
#pragma pop_macro("NUM_PRIORITIES")
#pragma pop_macro("PAINT")
#pragma pop_macro("PEER")
#pragma pop_macro("ULTIMATE_PRIORITY")
#pragma pop_macro("UPDATE")

#endif // _java_awt_EventQueue_h_