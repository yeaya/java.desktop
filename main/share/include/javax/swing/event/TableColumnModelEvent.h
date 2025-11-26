#ifndef _javax_swing_event_TableColumnModelEvent_h_
#define _javax_swing_event_TableColumnModelEvent_h_
//$ class javax.swing.event.TableColumnModelEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace table {
			class TableColumnModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import TableColumnModelEvent : public ::java::util::EventObject {
	$class(TableColumnModelEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	TableColumnModelEvent();
	void init$(::javax::swing::table::TableColumnModel* source, int32_t from, int32_t to);
	virtual int32_t getFromIndex();
	virtual int32_t getToIndex();
	int32_t fromIndex = 0;
	int32_t toIndex = 0;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TableColumnModelEvent_h_