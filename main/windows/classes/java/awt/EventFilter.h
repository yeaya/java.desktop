#ifndef _java_awt_EventFilter_h_
#define _java_awt_EventFilter_h_
//$ interface java.awt.EventFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class EventFilter$FilterAction;
	}
}

namespace java {
	namespace awt {

class EventFilter : public ::java::lang::Object {
	$interface(EventFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::EventFilter$FilterAction* acceptEvent(::java::awt::AWTEvent* ev) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_EventFilter_h_