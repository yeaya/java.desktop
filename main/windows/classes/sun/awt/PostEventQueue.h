#ifndef _sun_awt_PostEventQueue_h_
#define _sun_awt_PostEventQueue_h_
//$ class sun.awt.PostEventQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class EventQueue;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace sun {
	namespace awt {
		class EventQueueItem;
	}
}

namespace sun {
	namespace awt {

class PostEventQueue : public ::java::lang::Object {
	$class(PostEventQueue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PostEventQueue();
	void init$(::java::awt::EventQueue* eq);
	virtual void flush();
	virtual void postEvent(::java::awt::AWTEvent* event);
	::sun::awt::EventQueueItem* queueHead = nullptr;
	::sun::awt::EventQueueItem* queueTail = nullptr;
	::java::awt::EventQueue* eventQueue = nullptr;
	$Thread* flushThread = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_PostEventQueue_h_