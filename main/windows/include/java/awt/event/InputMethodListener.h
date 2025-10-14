#ifndef _java_awt_event_InputMethodListener_h_
#define _java_awt_event_InputMethodListener_h_
//$ interface java.awt.event.InputMethodListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import InputMethodListener : public ::java::util::EventListener {
	$interface(InputMethodListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* event) {}
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* event) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_InputMethodListener_h_