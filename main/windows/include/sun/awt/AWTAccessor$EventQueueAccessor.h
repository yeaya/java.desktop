#ifndef _sun_awt_AWTAccessor$EventQueueAccessor_h_
#define _sun_awt_AWTAccessor$EventQueueAccessor_h_
//$ interface sun.awt.AWTAccessor$EventQueueAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace awt {

class $import AWTAccessor$EventQueueAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$EventQueueAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Thread* getDispatchThread(::java::awt::EventQueue* eventQueue) {return nullptr;}
	virtual int64_t getMostRecentEventTime(::java::awt::EventQueue* eventQueue) {return 0;}
	virtual void invokeAndWait(Object$* source, ::java::lang::Runnable* r) {}
	virtual bool isDispatchThreadImpl(::java::awt::EventQueue* eventQueue) {return false;}
	virtual bool noEvents(::java::awt::EventQueue* eventQueue) {return false;}
	virtual void removeSourceEvents(::java::awt::EventQueue* eventQueue, Object$* source, bool removeAllEvents) {}
	virtual void setFwDispatcher(::java::awt::EventQueue* eventQueue, ::sun::awt::FwDispatcher* dispatcher) {}
	virtual void wakeup(::java::awt::EventQueue* eventQueue, bool isShutdown) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$EventQueueAccessor_h_