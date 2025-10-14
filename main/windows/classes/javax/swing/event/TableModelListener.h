#ifndef _javax_swing_event_TableModelListener_h_
#define _javax_swing_event_TableModelListener_h_
//$ interface javax.swing.event.TableModelListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TableModelEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export TableModelListener : public ::java::util::EventListener {
	$interface(TableModelListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TableModelListener_h_