#ifndef _java_awt_event_ActionListener_h_
#define _java_awt_event_ActionListener_h_
//$ interface java.awt.event.ActionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export ActionListener : public ::java::util::EventListener {
	$interface(ActionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ActionListener_h_