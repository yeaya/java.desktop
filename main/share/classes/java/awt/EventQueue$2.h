#ifndef _java_awt_EventQueue$2_h_
#define _java_awt_EventQueue$2_h_
//$ class java.awt.EventQueue$2
//$ extends sun.awt.AWTAccessor$EventQueueAccessor

#include <sun/awt/AWTAccessor$EventQueueAccessor.h>

namespace java {
	namespace awt {
		class EventQueue;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace sun {
	namespace awt {
		class FwDispatcher;
	}
}

namespace java {
	namespace awt {

class EventQueue$2 : public ::sun::awt::AWTAccessor$EventQueueAccessor {
	$class(EventQueue$2, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$EventQueueAccessor)
public:
	EventQueue$2();
	void init$();
	virtual $Thread* getDispatchThread(::java::awt::EventQueue* eventQueue) override;
	virtual int64_t getMostRecentEventTime(::java::awt::EventQueue* eventQueue) override;
	virtual void invokeAndWait(Object$* source, ::java::lang::Runnable* r) override;
	virtual bool isDispatchThreadImpl(::java::awt::EventQueue* eventQueue) override;
	virtual bool noEvents(::java::awt::EventQueue* eventQueue) override;
	virtual void removeSourceEvents(::java::awt::EventQueue* eventQueue, Object$* source, bool removeAllEvents) override;
	virtual void setFwDispatcher(::java::awt::EventQueue* eventQueue, ::sun::awt::FwDispatcher* dispatcher) override;
	virtual void wakeup(::java::awt::EventQueue* eventQueue, bool isShutdown) override;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$2_h_