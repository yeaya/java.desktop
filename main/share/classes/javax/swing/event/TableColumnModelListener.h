#ifndef _javax_swing_event_TableColumnModelListener_h_
#define _javax_swing_event_TableColumnModelListener_h_
//$ interface javax.swing.event.TableColumnModelListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ListSelectionEvent;
			class TableColumnModelEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export TableColumnModelListener : public ::java::util::EventListener {
	$interface(TableColumnModelListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void columnAdded(::javax::swing::event::TableColumnModelEvent* e) {}
	virtual void columnMarginChanged(::javax::swing::event::ChangeEvent* e) {}
	virtual void columnMoved(::javax::swing::event::TableColumnModelEvent* e) {}
	virtual void columnRemoved(::javax::swing::event::TableColumnModelEvent* e) {}
	virtual void columnSelectionChanged(::javax::swing::event::ListSelectionEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TableColumnModelListener_h_