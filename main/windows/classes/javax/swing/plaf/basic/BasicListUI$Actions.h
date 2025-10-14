#ifndef _javax_swing_plaf_basic_BasicListUI$Actions_h_
#define _javax_swing_plaf_basic_BasicListUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicListUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("ADD_TO_SELECTION")
#undef ADD_TO_SELECTION
#pragma push_macro("CLEAR_SELECTION")
#undef CLEAR_SELECTION
#pragma push_macro("EXTEND_TO")
#undef EXTEND_TO
#pragma push_macro("MOVE_SELECTION_TO")
#undef MOVE_SELECTION_TO
#pragma push_macro("SCROLL_DOWN")
#undef SCROLL_DOWN
#pragma push_macro("SCROLL_DOWN_CHANGE_LEAD")
#undef SCROLL_DOWN_CHANGE_LEAD
#pragma push_macro("SCROLL_DOWN_EXTEND")
#undef SCROLL_DOWN_EXTEND
#pragma push_macro("SCROLL_UP")
#undef SCROLL_UP
#pragma push_macro("SCROLL_UP_CHANGE_LEAD")
#undef SCROLL_UP_CHANGE_LEAD
#pragma push_macro("SCROLL_UP_EXTEND")
#undef SCROLL_UP_EXTEND
#pragma push_macro("SELECT_ALL")
#undef SELECT_ALL
#pragma push_macro("SELECT_FIRST_ROW")
#undef SELECT_FIRST_ROW
#pragma push_macro("SELECT_FIRST_ROW_CHANGE_LEAD")
#undef SELECT_FIRST_ROW_CHANGE_LEAD
#pragma push_macro("SELECT_FIRST_ROW_EXTEND")
#undef SELECT_FIRST_ROW_EXTEND
#pragma push_macro("SELECT_LAST_ROW")
#undef SELECT_LAST_ROW
#pragma push_macro("SELECT_LAST_ROW_CHANGE_LEAD")
#undef SELECT_LAST_ROW_CHANGE_LEAD
#pragma push_macro("SELECT_LAST_ROW_EXTEND")
#undef SELECT_LAST_ROW_EXTEND
#pragma push_macro("SELECT_NEXT_COLUMN")
#undef SELECT_NEXT_COLUMN
#pragma push_macro("SELECT_NEXT_COLUMN_CHANGE_LEAD")
#undef SELECT_NEXT_COLUMN_CHANGE_LEAD
#pragma push_macro("SELECT_NEXT_COLUMN_EXTEND")
#undef SELECT_NEXT_COLUMN_EXTEND
#pragma push_macro("SELECT_NEXT_ROW")
#undef SELECT_NEXT_ROW
#pragma push_macro("SELECT_NEXT_ROW_CHANGE_LEAD")
#undef SELECT_NEXT_ROW_CHANGE_LEAD
#pragma push_macro("SELECT_NEXT_ROW_EXTEND")
#undef SELECT_NEXT_ROW_EXTEND
#pragma push_macro("SELECT_PREVIOUS_COLUMN")
#undef SELECT_PREVIOUS_COLUMN
#pragma push_macro("SELECT_PREVIOUS_COLUMN_CHANGE_LEAD")
#undef SELECT_PREVIOUS_COLUMN_CHANGE_LEAD
#pragma push_macro("SELECT_PREVIOUS_COLUMN_EXTEND")
#undef SELECT_PREVIOUS_COLUMN_EXTEND
#pragma push_macro("SELECT_PREVIOUS_ROW")
#undef SELECT_PREVIOUS_ROW
#pragma push_macro("SELECT_PREVIOUS_ROW_CHANGE_LEAD")
#undef SELECT_PREVIOUS_ROW_CHANGE_LEAD
#pragma push_macro("SELECT_PREVIOUS_ROW_EXTEND")
#undef SELECT_PREVIOUS_ROW_EXTEND
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
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicListUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicListUI$Actions : public ::sun::swing::UIAction {
	$class(BasicListUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicListUI$Actions();
	void init$($String* name);
	virtual bool accept(Object$* c) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void adjustScrollPositionIfNecessary(::javax::swing::JList* list, int32_t index, int32_t direction);
	void changeSelection(::javax::swing::JList* list, int32_t type, int32_t index, int32_t direction);
	void clearSelection(::javax::swing::JList* list);
	int32_t getNextColumnIndex(::javax::swing::JList* list, ::javax::swing::plaf::basic::BasicListUI* ui, int32_t amount);
	int32_t getNextIndex(::javax::swing::JList* list, ::javax::swing::plaf::basic::BasicListUI* ui, int32_t amount);
	int32_t getNextPageIndex(::javax::swing::JList* list, int32_t direction);
	void selectAll(::javax::swing::JList* list);
	static $String* SELECT_PREVIOUS_COLUMN;
	static $String* SELECT_PREVIOUS_COLUMN_EXTEND;
	static $String* SELECT_PREVIOUS_COLUMN_CHANGE_LEAD;
	static $String* SELECT_NEXT_COLUMN;
	static $String* SELECT_NEXT_COLUMN_EXTEND;
	static $String* SELECT_NEXT_COLUMN_CHANGE_LEAD;
	static $String* SELECT_PREVIOUS_ROW;
	static $String* SELECT_PREVIOUS_ROW_EXTEND;
	static $String* SELECT_PREVIOUS_ROW_CHANGE_LEAD;
	static $String* SELECT_NEXT_ROW;
	static $String* SELECT_NEXT_ROW_EXTEND;
	static $String* SELECT_NEXT_ROW_CHANGE_LEAD;
	static $String* SELECT_FIRST_ROW;
	static $String* SELECT_FIRST_ROW_EXTEND;
	static $String* SELECT_FIRST_ROW_CHANGE_LEAD;
	static $String* SELECT_LAST_ROW;
	static $String* SELECT_LAST_ROW_EXTEND;
	static $String* SELECT_LAST_ROW_CHANGE_LEAD;
	static $String* SCROLL_UP;
	static $String* SCROLL_UP_EXTEND;
	static $String* SCROLL_UP_CHANGE_LEAD;
	static $String* SCROLL_DOWN;
	static $String* SCROLL_DOWN_EXTEND;
	static $String* SCROLL_DOWN_CHANGE_LEAD;
	static $String* SELECT_ALL;
	static $String* CLEAR_SELECTION;
	static $String* ADD_TO_SELECTION;
	static $String* TOGGLE_AND_ANCHOR;
	static $String* EXTEND_TO;
	static $String* MOVE_SELECTION_TO;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ADD_TO_SELECTION")
#pragma pop_macro("CLEAR_SELECTION")
#pragma pop_macro("EXTEND_TO")
#pragma pop_macro("MOVE_SELECTION_TO")
#pragma pop_macro("SCROLL_DOWN")
#pragma pop_macro("SCROLL_DOWN_CHANGE_LEAD")
#pragma pop_macro("SCROLL_DOWN_EXTEND")
#pragma pop_macro("SCROLL_UP")
#pragma pop_macro("SCROLL_UP_CHANGE_LEAD")
#pragma pop_macro("SCROLL_UP_EXTEND")
#pragma pop_macro("SELECT_ALL")
#pragma pop_macro("SELECT_FIRST_ROW")
#pragma pop_macro("SELECT_FIRST_ROW_CHANGE_LEAD")
#pragma pop_macro("SELECT_FIRST_ROW_EXTEND")
#pragma pop_macro("SELECT_LAST_ROW")
#pragma pop_macro("SELECT_LAST_ROW_CHANGE_LEAD")
#pragma pop_macro("SELECT_LAST_ROW_EXTEND")
#pragma pop_macro("SELECT_NEXT_COLUMN")
#pragma pop_macro("SELECT_NEXT_COLUMN_CHANGE_LEAD")
#pragma pop_macro("SELECT_NEXT_COLUMN_EXTEND")
#pragma pop_macro("SELECT_NEXT_ROW")
#pragma pop_macro("SELECT_NEXT_ROW_CHANGE_LEAD")
#pragma pop_macro("SELECT_NEXT_ROW_EXTEND")
#pragma pop_macro("SELECT_PREVIOUS_COLUMN")
#pragma pop_macro("SELECT_PREVIOUS_COLUMN_CHANGE_LEAD")
#pragma pop_macro("SELECT_PREVIOUS_COLUMN_EXTEND")
#pragma pop_macro("SELECT_PREVIOUS_ROW")
#pragma pop_macro("SELECT_PREVIOUS_ROW_CHANGE_LEAD")
#pragma pop_macro("SELECT_PREVIOUS_ROW_EXTEND")
#pragma pop_macro("TOGGLE_AND_ANCHOR")

#endif // _javax_swing_plaf_basic_BasicListUI$Actions_h_