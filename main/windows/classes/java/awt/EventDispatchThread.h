#ifndef _java_awt_EventDispatchThread_h_
#define _java_awt_EventDispatchThread_h_
//$ class java.awt.EventDispatchThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

#pragma push_macro("ANY_EVENT")
#undef ANY_EVENT

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Conditional;
		class EventFilter;
		class EventQueue;
	}
}
namespace java {
	namespace lang {
		class ThreadGroup;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ArrayList;
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

class EventDispatchThread : public ::java::lang::Thread {
	$class(EventDispatchThread, 0, ::java::lang::Thread)
public:
	EventDispatchThread();
	void init$();
	void init$(::java::lang::ThreadGroup* group, $String* name, ::java::awt::EventQueue* queue);
	virtual void addEventFilter(::java::awt::EventFilter* filter);
	virtual bool filterAndCheckEvent(::java::awt::AWTEvent* event);
	virtual ::java::awt::EventQueue* getEventQueue();
	void processException($Throwable* e);
	virtual void pumpEvents(::java::awt::Conditional* cond);
	virtual void pumpEvents(int32_t id, ::java::awt::Conditional* cond);
	virtual void pumpEventsForFilter(::java::awt::Conditional* cond, ::java::awt::EventFilter* filter);
	virtual void pumpEventsForFilter(int32_t id, ::java::awt::Conditional* cond, ::java::awt::EventFilter* filter);
	virtual void pumpEventsForHierarchy(::java::awt::Conditional* cond, ::java::awt::Component* modalComponent);
	virtual void pumpEventsForHierarchy(int32_t id, ::java::awt::Conditional* cond, ::java::awt::Component* modalComponent);
	virtual void pumpOneEventForFilters(int32_t id);
	virtual void removeEventFilter(::java::awt::EventFilter* filter);
	virtual void run() override;
	virtual void setEventQueue(::java::awt::EventQueue* eq);
	virtual void stopDispatching();
	static ::sun::util::logging::PlatformLogger* eventLog;
	::java::awt::EventQueue* theQueue = nullptr;
	$volatile(bool) doDispatch = false;
	static const int32_t ANY_EVENT = (-1);
	::java::util::ArrayList* eventFilters = nullptr;
};

	} // awt
} // java

#pragma pop_macro("ANY_EVENT")

#endif // _java_awt_EventDispatchThread_h_