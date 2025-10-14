#ifndef _javax_swing_plaf_basic_BasicTreeUI$Actions_h_
#define _javax_swing_plaf_basic_BasicTreeUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("ADD_TO_SELECTION")
#undef ADD_TO_SELECTION
#pragma push_macro("CANCEL_EDITING")
#undef CANCEL_EDITING
#pragma push_macro("CLEAR_SELECTION")
#undef CLEAR_SELECTION
#pragma push_macro("COLLAPSE")
#undef COLLAPSE
#pragma push_macro("EXPAND")
#undef EXPAND
#pragma push_macro("EXTEND_TO")
#undef EXTEND_TO
#pragma push_macro("MOVE_SELECTION_TO")
#undef MOVE_SELECTION_TO
#pragma push_macro("MOVE_SELECTION_TO_PARENT")
#undef MOVE_SELECTION_TO_PARENT
#pragma push_macro("SCROLL_DOWN_CHANGE_LEAD")
#undef SCROLL_DOWN_CHANGE_LEAD
#pragma push_macro("SCROLL_DOWN_CHANGE_SELECTION")
#undef SCROLL_DOWN_CHANGE_SELECTION
#pragma push_macro("SCROLL_DOWN_EXTEND_SELECTION")
#undef SCROLL_DOWN_EXTEND_SELECTION
#pragma push_macro("SCROLL_LEFT")
#undef SCROLL_LEFT
#pragma push_macro("SCROLL_LEFT_CHANGE_LEAD")
#undef SCROLL_LEFT_CHANGE_LEAD
#pragma push_macro("SCROLL_LEFT_EXTEND_SELECTION")
#undef SCROLL_LEFT_EXTEND_SELECTION
#pragma push_macro("SCROLL_RIGHT")
#undef SCROLL_RIGHT
#pragma push_macro("SCROLL_RIGHT_CHANGE_LEAD")
#undef SCROLL_RIGHT_CHANGE_LEAD
#pragma push_macro("SCROLL_RIGHT_EXTEND_SELECTION")
#undef SCROLL_RIGHT_EXTEND_SELECTION
#pragma push_macro("SCROLL_UP_CHANGE_LEAD")
#undef SCROLL_UP_CHANGE_LEAD
#pragma push_macro("SCROLL_UP_CHANGE_SELECTION")
#undef SCROLL_UP_CHANGE_SELECTION
#pragma push_macro("SCROLL_UP_EXTEND_SELECTION")
#undef SCROLL_UP_EXTEND_SELECTION
#pragma push_macro("SELECT_ALL")
#undef SELECT_ALL
#pragma push_macro("SELECT_CHILD")
#undef SELECT_CHILD
#pragma push_macro("SELECT_CHILD_CHANGE_LEAD")
#undef SELECT_CHILD_CHANGE_LEAD
#pragma push_macro("SELECT_FIRST")
#undef SELECT_FIRST
#pragma push_macro("SELECT_FIRST_CHANGE_LEAD")
#undef SELECT_FIRST_CHANGE_LEAD
#pragma push_macro("SELECT_FIRST_EXTEND_SELECTION")
#undef SELECT_FIRST_EXTEND_SELECTION
#pragma push_macro("SELECT_LAST")
#undef SELECT_LAST
#pragma push_macro("SELECT_LAST_CHANGE_LEAD")
#undef SELECT_LAST_CHANGE_LEAD
#pragma push_macro("SELECT_LAST_EXTEND_SELECTION")
#undef SELECT_LAST_EXTEND_SELECTION
#pragma push_macro("SELECT_NEXT")
#undef SELECT_NEXT
#pragma push_macro("SELECT_NEXT_CHANGE_LEAD")
#undef SELECT_NEXT_CHANGE_LEAD
#pragma push_macro("SELECT_NEXT_EXTEND_SELECTION")
#undef SELECT_NEXT_EXTEND_SELECTION
#pragma push_macro("SELECT_PARENT")
#undef SELECT_PARENT
#pragma push_macro("SELECT_PARENT_CHANGE_LEAD")
#undef SELECT_PARENT_CHANGE_LEAD
#pragma push_macro("SELECT_PREVIOUS")
#undef SELECT_PREVIOUS
#pragma push_macro("SELECT_PREVIOUS_CHANGE_LEAD")
#undef SELECT_PREVIOUS_CHANGE_LEAD
#pragma push_macro("SELECT_PREVIOUS_EXTEND_SELECTION")
#undef SELECT_PREVIOUS_EXTEND_SELECTION
#pragma push_macro("START_EDITING")
#undef START_EDITING
#pragma push_macro("TOGGLE")
#undef TOGGLE
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
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTreeUI$Actions : public ::sun::swing::UIAction {
	$class(BasicTreeUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicTreeUI$Actions();
	void init$();
	void init$($String* key);
	virtual bool accept(Object$* o) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void cancelEditing(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void collapse(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void expand(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void extendSelection(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void home(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection);
	void increment(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection);
	void moveSelectionToParent(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void page(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection);
	void scroll(::javax::swing::JTree* component, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, int32_t amount);
	void scrollChangeSelection(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection);
	void selectAll(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, bool selectAll);
	void startEditing(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void toggle(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui);
	void traverse(::javax::swing::JTree* tree, ::javax::swing::plaf::basic::BasicTreeUI* ui, int32_t direction, bool changeSelection);
	static $String* SELECT_PREVIOUS;
	static $String* SELECT_PREVIOUS_CHANGE_LEAD;
	static $String* SELECT_PREVIOUS_EXTEND_SELECTION;
	static $String* SELECT_NEXT;
	static $String* SELECT_NEXT_CHANGE_LEAD;
	static $String* SELECT_NEXT_EXTEND_SELECTION;
	static $String* SELECT_CHILD;
	static $String* SELECT_CHILD_CHANGE_LEAD;
	static $String* SELECT_PARENT;
	static $String* SELECT_PARENT_CHANGE_LEAD;
	static $String* SCROLL_UP_CHANGE_SELECTION;
	static $String* SCROLL_UP_CHANGE_LEAD;
	static $String* SCROLL_UP_EXTEND_SELECTION;
	static $String* SCROLL_DOWN_CHANGE_SELECTION;
	static $String* SCROLL_DOWN_EXTEND_SELECTION;
	static $String* SCROLL_DOWN_CHANGE_LEAD;
	static $String* SELECT_FIRST;
	static $String* SELECT_FIRST_CHANGE_LEAD;
	static $String* SELECT_FIRST_EXTEND_SELECTION;
	static $String* SELECT_LAST;
	static $String* SELECT_LAST_CHANGE_LEAD;
	static $String* SELECT_LAST_EXTEND_SELECTION;
	static $String* TOGGLE;
	static $String* CANCEL_EDITING;
	static $String* START_EDITING;
	static $String* SELECT_ALL;
	static $String* CLEAR_SELECTION;
	static $String* SCROLL_LEFT;
	static $String* SCROLL_RIGHT;
	static $String* SCROLL_LEFT_EXTEND_SELECTION;
	static $String* SCROLL_RIGHT_EXTEND_SELECTION;
	static $String* SCROLL_RIGHT_CHANGE_LEAD;
	static $String* SCROLL_LEFT_CHANGE_LEAD;
	static $String* EXPAND;
	static $String* COLLAPSE;
	static $String* MOVE_SELECTION_TO_PARENT;
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
#pragma pop_macro("CANCEL_EDITING")
#pragma pop_macro("CLEAR_SELECTION")
#pragma pop_macro("COLLAPSE")
#pragma pop_macro("EXPAND")
#pragma pop_macro("EXTEND_TO")
#pragma pop_macro("MOVE_SELECTION_TO")
#pragma pop_macro("MOVE_SELECTION_TO_PARENT")
#pragma pop_macro("SCROLL_DOWN_CHANGE_LEAD")
#pragma pop_macro("SCROLL_DOWN_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_DOWN_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_LEFT")
#pragma pop_macro("SCROLL_LEFT_CHANGE_LEAD")
#pragma pop_macro("SCROLL_LEFT_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_RIGHT")
#pragma pop_macro("SCROLL_RIGHT_CHANGE_LEAD")
#pragma pop_macro("SCROLL_RIGHT_EXTEND_SELECTION")
#pragma pop_macro("SCROLL_UP_CHANGE_LEAD")
#pragma pop_macro("SCROLL_UP_CHANGE_SELECTION")
#pragma pop_macro("SCROLL_UP_EXTEND_SELECTION")
#pragma pop_macro("SELECT_ALL")
#pragma pop_macro("SELECT_CHILD")
#pragma pop_macro("SELECT_CHILD_CHANGE_LEAD")
#pragma pop_macro("SELECT_FIRST")
#pragma pop_macro("SELECT_FIRST_CHANGE_LEAD")
#pragma pop_macro("SELECT_FIRST_EXTEND_SELECTION")
#pragma pop_macro("SELECT_LAST")
#pragma pop_macro("SELECT_LAST_CHANGE_LEAD")
#pragma pop_macro("SELECT_LAST_EXTEND_SELECTION")
#pragma pop_macro("SELECT_NEXT")
#pragma pop_macro("SELECT_NEXT_CHANGE_LEAD")
#pragma pop_macro("SELECT_NEXT_EXTEND_SELECTION")
#pragma pop_macro("SELECT_PARENT")
#pragma pop_macro("SELECT_PARENT_CHANGE_LEAD")
#pragma pop_macro("SELECT_PREVIOUS")
#pragma pop_macro("SELECT_PREVIOUS_CHANGE_LEAD")
#pragma pop_macro("SELECT_PREVIOUS_EXTEND_SELECTION")
#pragma pop_macro("START_EDITING")
#pragma pop_macro("TOGGLE")
#pragma pop_macro("TOGGLE_AND_ANCHOR")

#endif // _javax_swing_plaf_basic_BasicTreeUI$Actions_h_