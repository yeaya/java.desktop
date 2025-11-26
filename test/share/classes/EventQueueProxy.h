#ifndef _EventQueueProxy_h_
#define _EventQueueProxy_h_
//$ class EventQueueProxy
//$ extends java.awt.EventQueue

#include <java/awt/EventQueue.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

class EventQueueProxy : public ::java::awt::EventQueue {
	$class(EventQueueProxy, $NO_CLASS_INIT, ::java::awt::EventQueue)
public:
	EventQueueProxy();
	void init$();
	virtual void dispatchEvent(::java::awt::AWTEvent* evt) override;
};

#endif // _EventQueueProxy_h_