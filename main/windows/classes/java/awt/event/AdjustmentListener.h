#ifndef _java_awt_event_AdjustmentListener_h_
#define _java_awt_event_AdjustmentListener_h_
//$ interface java.awt.event.AdjustmentListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export AdjustmentListener : public ::java::util::EventListener {
	$interface(AdjustmentListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_AdjustmentListener_h_