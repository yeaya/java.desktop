#ifndef _java_awt_event_InvocationEvent$1_h_
#define _java_awt_event_InvocationEvent$1_h_
//$ class java.awt.event.InvocationEvent$1
//$ extends sun.awt.AWTAccessor$InvocationEventAccessor

#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>

namespace java {
	namespace awt {
		namespace event {
			class InvocationEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class InvocationEvent$1 : public ::sun::awt::AWTAccessor$InvocationEventAccessor {
	$class(InvocationEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$InvocationEventAccessor)
public:
	InvocationEvent$1();
	void init$();
	virtual void dispose(::java::awt::event::InvocationEvent* invocationEvent) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_InvocationEvent$1_h_