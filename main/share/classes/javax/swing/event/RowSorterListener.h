#ifndef _javax_swing_event_RowSorterListener_h_
#define _javax_swing_event_RowSorterListener_h_
//$ interface javax.swing.event.RowSorterListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class RowSorterEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export RowSorterListener : public ::java::util::EventListener {
	$interface(RowSorterListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void sorterChanged(::javax::swing::event::RowSorterEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_RowSorterListener_h_