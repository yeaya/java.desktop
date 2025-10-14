#ifndef _javax_swing_plaf_basic_BasicTableUI$Actions_h_
#define _javax_swing_plaf_basic_BasicTableUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicTableUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("ADD_TO_SELECTION")
#undef ADD_TO_SELECTION
#pragma push_macro("CANCEL_EDITING")
#undef CANCEL_EDITING
#pragma push_macro("CLEAR_SELECTION")
#undef CLEAR_SELECTION
#pragma push_macro("EXTEND_TO")
#undef EXTEND_TO
#pragma push_macro("FIRST_COLUMN")
#undef FIRST_COLUMN
#pragma push_macro("FIRST_COLUMN_EXTEND_SELECTION")
#undef FIRST_COLUMN_EXTEND_SELECTION
#pragma push_macro("FIRST_ROW")
#undef FIRST_ROW
#pragma push_macro("FIRST_ROW_EXTEND_SELECTION")
#undef FIRST_ROW_EXTEND_SELECTION
#pragma push_macro("FOCUS_HEADER")
#undef FOCUS_HEADER
#pragma push_macro("LAST_COLUMN")
#undef LAST_COLUMN
#pragma push_macro("LAST_COLUMN_EXTEND_SELECTION")
#undef LAST_COLUMN_EXTEND_SELECTION
#pragma push_macro("LAST_ROW")
#undef LAST_ROW
#pragma push_macro("LAST_ROW_EXTEND_SELECTION")
#undef LAST_ROW_EXTEND_SELECTION
#pragma push_macro("MOVE_SELECTION_TO")
#undef MOVE_SELECTION_TO
#pragma push_macro("NEXT_COLUMN")
#undef NEXT_COLUMN
#pragma push_macro("NEXT_COLUMN_CELL")
#undef NEXT_COLUMN_CELL
#pragma push_macro("NEXT_COLUMN_CHANGE_LEAD")
#undef NEXT_COLUMN_CHANGE_LEAD
#pragma push_macro("NEXT_COLUMN_EXTEND_SELECTION")
#undef NEXT_COLUMN_EXTEND_SELECTION
#pragma push_macro("NEXT_ROW")
#undef NEXT_ROW
#pragma push_macro("NEXT_ROW_CELL")
#undef NEXT_ROW_CELL
#pragma push_macro("NEXT_ROW_CHANGE_LEAD")
#undef NEXT_ROW_CHANGE_LEAD
#pragma push_macro("NEXT_ROW_EXTEND_SELECTION")
#undef NEXT_ROW_EXTEND_SELECTION
#pragma push_macro("PREVIOUS_COLUMN")
#undef PREVIOUS_COLUMN
#pragma push_macro("PREVIOUS_COLUMN_CELL")
#undef PREVIOUS_COLUMN_CELL
#pragma push_macro("PREVIOUS_COLUMN_CHANGE_LEAD")
#undef PREVIOUS_COLUMN_CHANGE_LEAD
#pragma push_macro("PREVIOUS_COLUMN_EXTEND_SELECTION")
#undef PREVIOUS_COLUMN_EXTEND_SELECTION
#pragma push_macro("PREVIOUS_ROW")
#undef PREVIOUS_ROW
#pragma push_macro("PREVIOUS_ROW_CELL")
#undef PREVIOUS_ROW_CELL
#pragma push_macro("PREVIOUS_ROW_CHANGE_LEAD")
#undef PREVIOUS_ROW_CHANGE_LEAD
#pragma push_macro("PREVIOUS_ROW_EXTEND_SELECTION")
#undef PREVIOUS_ROW_EXTEND_SELECTION
#pragma push_macro("SCROLL_DOWN_CHANGE_SELECTION")
#undef SCROLL_DOWN_CHANGE_SELECTION
#pragma push_macro("SCROLL_DOWN_EXTEND_SELECTION")
#undef SCROLL_DOWN_EXTEND_SELECTION
#pragma push_macro("SCROLL_LEFT_CHANGE_SELECTION")
#undef SCROLL_LEFT_CHANGE_SELECTION
#pragma push_macro("SCROLL_LEFT_EXTEND_SELECTION")
#undef SCROLL_LEFT_EXTEND_SELECTION
#pragma push_macro("SCROLL_RIGHT_CHANGE_SELECTION")
#undef SCROLL_RIGHT_CHANGE_SELECTION
#pragma push_macro("SCROLL_RIGHT_EXTEND_SELECTION")
#undef SCROLL_RIGHT_EXTEND_SELECTION
#pragma push_macro("SCROLL_UP_CHANGE_SELECTION")
#undef SCROLL_UP_CHANGE_SELECTION
#pragma push_macro("SCROLL_UP_EXTEND_SELECTION")
#undef SCROLL_UP_EXTEND_SELECTION
#pragma push_macro("SELECT_ALL")
#undef SELECT_ALL
#pragma push_macro("START_EDITING")
#undef START_EDITING
#pragma push_macro("TOGGLE_AND_ANCHOR")
#undef TOGGLE_AND_ANCHOR

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JTable;
		class ListSelectionModel;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTableUI$Actions : public ::sun::swing::UIAction {
	$class(BasicTableUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicTableUI$Actions();
	void init$($String* name);
	void init$($String* name, int32_t dx, int32_t dy, bool extend, bool inSelection);
	void init$($String* name, bool extend, bool forwards, bool vertically, bool toLimit);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void calcNextPos(int32_t dx, int32_t minX, int32_t maxX, int32_t dy, int32_t minY, int32_t maxY);
	static int32_t clipToRange(int32_t i, int32_t a, int32_t b);
	bool moveWithinSelectedRange(::javax::swing::JTable* table, int32_t dx, int32_t dy, ::javax::swing::ListSelectionModel* rsm, ::javax::swing::ListSelectionModel* csm);
	void moveWithinTableRange(::javax::swing::JTable* table, int32_t dx, int32_t dy);
	static int32_t sign(int32_t num);
	static bool $assertionsDisabled;
	static $String* CANCEL_EDITING;
	static $String* SELECT_ALL;
	static $String* CLEAR_SELECTION;
	static $String* START_EDITING;
	static $String* NEXT_ROW;
	static $String* NEXT_ROW_CELL;
	static $String* NEXT_ROW_EXTEND_SELECTION;
	static $String* NEXT_ROW_CHANGE_LEAD;
	static $String* PREVIOUS_ROW;
	static $String* PREVIOUS_ROW_CELL;
	static $String* PREVIOUS_ROW_EXTEND_SELECTION;
	static $String* PREVIOUS_ROW_CHANGE_LEAD;
	static $String* NEXT_COLUMN;
	static $String* NEXT_COLUMN_CELL;
	static $String* NEXT_COLUMN_EXTEND_SELECTION;
	static $String* NEXT_COLUMN_CHANGE_LEAD;
	static $String* PREVIOUS_COLUMN;
	static $String* PREVIOUS_COLUMN_CELL;
	static $String* PREVIOUS_COLUMN_EXTEND_SELECTION;
	static $String* PREVIOUS_COLUMN_CHANGE_LEAD;
	static $String* SCROLL_LEFT_CHANGE_SELECTION;
	static $String* SCROLL_LEFT_EXTEND_SELECTION;
	static $String* SCROLL_RIGHT_CHANGE_SELECTION;
	static $String* SCROLL_RIGHT_EXTEND_SELECTION;
	static $String* SCROLL_UP_CHANGE_SELECTION;
	static $String* SCROLL_UP_EXTEND_SELECTION;
	static $String* SCROLL_DOWN_CHANGE_SELECTION;
	static $String* SCROLL_DOWN_EXTEND_SELECTION;
	static $String* FIRST_COLUMN;
	static $String* FIRST_COLUMN_EXTEND_SELECTION;
	static $String* LAST_COLUMN;
	static $String* LAST_COLUMN_EXTEND_SELECTION;
	static $String* FIRST_ROW;
	static $String* FIRST_ROW_EXTEND_SELECTION;
	static $String* LAST_ROW;
	static $String* LAST_ROW_EXTEND_SELECTION;
	static $String* ADD_TO_SELECTION;
	static $String* TOGGLE_AND_ANCHOR;
	static $String* EXTEND_TO;
	static $String* MOVE_SELECTION_TO;
	static $String* FOCUS_HEADER;
	int32_t dx = 0;
	int32_t dy = 0;
	bool extend = false;
	bool inSelection = false;
	bool forwards = false;
	bool vertically = false;
	bool toLimit = false;
	int32_t leadRow = 0;
	int32_t leadColumn = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ADD_TO_SELECTION")
#pragma pop_macro("CANCEL_EDITING")
#pragma pop_macro("CLEAR_SELECTION")
#pragma pop_macro("EXTEND_TO")
#pragma pop_macro("FIRST_COLUMN")
#pragma pop_macro("FIRST_COLUMN_EXTEND_SELECTION")
#pragma pop_macro("FIRST_ROW")
#pragma pop_macro("FIRST_ROW_EXTEND_SELECTION")
#pragma pop_macro("FOCUS_HEADER")
#pragma pop_macro("LAST_COLUMN")
#pragma pop_macro("LAST_COLUMN_EXTEND_SELECTION")
#pragma pop_macro("LAST_ROW")
#pragma pop_macro("LAST_ROW_EXTEND_SELECTION")
#pragma pop_macro("MOVE_SELECTION_TO")
#pragma pop_macro("NEXT_COLUMN")
#pragma pop_macro("NEXT_COLUMN_CELL")
#pragma pop_macro("NEXT_COLUMN_CHANGE_LEAD")
#pragma pop_macro("NEXT_COLUMN_EXTEND_SELECTION")
#pragma pop_macro("NEXT_ROW")
#pragma pop_macro("NEXT_ROW_CELL")
#pragma pop_macro("NEXT_ROW_CHANGE_LEAD")
#pragma pop_macro("NEXT_ROW_EXTEND_SELECTION")
#pragma pop_macro("PREVIOUS_COLUMN")
#pragma pop_macro("PREVIOUS_COLUMN_CELL")
#pragma pop_macro("PREVIOUS_COLUMN_CHANGE_LEAD")
#pragma pop_macro("PREVIOUS_COLUMN_EXTEND_SELECTION")
#pragma pop_macro("PREVIOUS_ROW")
#pragma pop_macro("PREVIOUS_ROW_CELL")
#pragma pop_macro("PREVIOUS_ROW_CHANGE_LEAD")
#pragma pop_macro("PREVIOUS_ROW_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_DOWN_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_DOWN_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_LEFT_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_LEFT_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_RIGHT_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_RIGHT_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_UP_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_UP_EXTEND_SELECTION")
#pragma pop_macro("SELECT_ALL")
#pragma pop_macro("START_EDITING")
#pragma pop_macro("TOGGLE_AND_ANCHOR")

#endif // _javax_swing_plaf_basic_BasicTableUI$Actions_h_