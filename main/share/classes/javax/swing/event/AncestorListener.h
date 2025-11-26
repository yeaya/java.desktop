#ifndef _javax_swing_event_AncestorListener_h_
#define _javax_swing_event_AncestorListener_h_
//$ interface javax.swing.event.AncestorListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export AncestorListener : public ::java::util::EventListener {
	$interface(AncestorListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* event) {}
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* event) {}
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* event) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_AncestorListener_h_