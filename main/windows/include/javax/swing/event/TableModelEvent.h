#ifndef _javax_swing_event_TableModelEvent_h_
#define _javax_swing_event_TableModelEvent_h_
//$ class javax.swing.event.TableModelEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

#pragma push_macro("ALL_COLUMNS")
#undef ALL_COLUMNS
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("HEADER_ROW")
#undef HEADER_ROW
#pragma push_macro("INSERT")
#undef INSERT
#pragma push_macro("UPDATE")
#undef UPDATE

namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import TableModelEvent : public ::java::util::EventObject {
	$class(TableModelEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	TableModelEvent();
	void init$(::javax::swing::table::TableModel* source);
	void init$(::javax::swing::table::TableModel* source, int32_t row);
	void init$(::javax::swing::table::TableModel* source, int32_t firstRow, int32_t lastRow);
	void init$(::javax::swing::table::TableModel* source, int32_t firstRow, int32_t lastRow, int32_t column);
	void init$(::javax::swing::table::TableModel* source, int32_t firstRow, int32_t lastRow, int32_t column, int32_t type);
	virtual int32_t getColumn();
	virtual int32_t getFirstRow();
	virtual int32_t getLastRow();
	virtual int32_t getType();
	static const int32_t INSERT = 1;
	static const int32_t UPDATE = 0;
	static const int32_t DELETE = (-1);
	static const int32_t HEADER_ROW = (-1);
	static const int32_t ALL_COLUMNS = (-1);
	int32_t type = 0;
	int32_t firstRow = 0;
	int32_t lastRow = 0;
	int32_t column = 0;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("ALL_COLUMNS")
#pragma pop_macro("DELETE")
#pragma pop_macro("HEADER_ROW")
#pragma pop_macro("INSERT")
#pragma pop_macro("UPDATE")

#endif // _javax_swing_event_TableModelEvent_h_