#ifndef _java_awt_event_AWTEventListenerProxy_h_
#define _java_awt_event_AWTEventListenerProxy_h_
//$ class java.awt.event.AWTEventListenerProxy
//$ extends java.util.EventListenerProxy
//$ implements java.awt.event.AWTEventListener

#include <java/awt/event/AWTEventListener.h>
#include <java/util/EventListenerProxy.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import AWTEventListenerProxy : public ::java::util::EventListenerProxy, public ::java::awt::event::AWTEventListener {
	$class(AWTEventListenerProxy, $NO_CLASS_INIT, ::java::util::EventListenerProxy, ::java::awt::event::AWTEventListener)
public:
	AWTEventListenerProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t eventMask, ::java::awt::event::AWTEventListener* listener);
	virtual void eventDispatched(::java::awt::AWTEvent* event) override;
	virtual int64_t getEventMask();
	virtual $String* toString() override;
	int64_t eventMask = 0;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_AWTEventListenerProxy_h_