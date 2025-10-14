#ifndef _javax_swing_event_ListDataListener_h_
#define _javax_swing_event_ListDataListener_h_
//$ interface javax.swing.event.ListDataListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export ListDataListener : public ::java::util::EventListener {
	$interface(ListDataListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) {}
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) {}
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_ListDataListener_h_