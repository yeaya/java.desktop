#ifndef _java_awt_event_FocusListener_h_
#define _java_awt_event_FocusListener_h_
//$ interface java.awt.event.FocusListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export FocusListener : public ::java::util::EventListener {
	$interface(FocusListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void focusGained(::java::awt::event::FocusEvent* e) {}
	virtual void focusLost(::java::awt::event::FocusEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_FocusListener_h_