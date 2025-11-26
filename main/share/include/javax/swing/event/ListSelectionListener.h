#ifndef _javax_swing_event_ListSelectionListener_h_
#define _javax_swing_event_ListSelectionListener_h_
//$ interface javax.swing.event.ListSelectionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import ListSelectionListener : public ::java::util::EventListener {
	$interface(ListSelectionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_ListSelectionListener_h_