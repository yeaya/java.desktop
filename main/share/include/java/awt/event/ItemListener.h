#ifndef _java_awt_event_ItemListener_h_
#define _java_awt_event_ItemListener_h_
//$ interface java.awt.event.ItemListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import ItemListener : public ::java::util::EventListener {
	$interface(ItemListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ItemListener_h_