#ifndef _java_awt_event_TextListener_h_
#define _java_awt_event_TextListener_h_
//$ interface java.awt.event.TextListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class TextEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import TextListener : public ::java::util::EventListener {
	$interface(TextListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void textValueChanged(::java::awt::event::TextEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_TextListener_h_