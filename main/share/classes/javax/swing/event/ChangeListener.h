#ifndef _javax_swing_event_ChangeListener_h_
#define _javax_swing_event_ChangeListener_h_
//$ interface javax.swing.event.ChangeListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export ChangeListener : public ::java::util::EventListener {
	$interface(ChangeListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_ChangeListener_h_