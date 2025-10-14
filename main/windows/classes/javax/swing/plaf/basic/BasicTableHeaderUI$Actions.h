#ifndef _javax_swing_plaf_basic_BasicTableHeaderUI$Actions_h_
#define _javax_swing_plaf_basic_BasicTableHeaderUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicTableHeaderUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("FOCUS_TABLE")
#undef FOCUS_TABLE
#pragma push_macro("MOVE_COLUMN_LEFT")
#undef MOVE_COLUMN_LEFT
#pragma push_macro("MOVE_COLUMN_RIGHT")
#undef MOVE_COLUMN_RIGHT
#pragma push_macro("RESIZE_LEFT")
#undef RESIZE_LEFT
#pragma push_macro("RESIZE_RIGHT")
#undef RESIZE_RIGHT
#pragma push_macro("SELECT_COLUMN_TO_LEFT")
#undef SELECT_COLUMN_TO_LEFT
#pragma push_macro("SELECT_COLUMN_TO_RIGHT")
#undef SELECT_COLUMN_TO_RIGHT
#pragma push_macro("TOGGLE_SORT_ORDER")
#undef TOGGLE_SORT_ORDER

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTableHeaderUI;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTableHeaderUI$Actions : public ::sun::swing::UIAction {
	$class(BasicTableHeaderUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicTableHeaderUI$Actions();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool maybeMoveColumn(bool leftArrow, ::javax::swing::table::JTableHeader* th, ::javax::swing::plaf::basic::BasicTableHeaderUI* ui, bool doIt);
	void moveColumn(bool leftArrow, ::javax::swing::table::JTableHeader* th, ::javax::swing::plaf::basic::BasicTableHeaderUI* ui);
	void resize(bool leftArrow, ::javax::swing::table::JTableHeader* th, ::javax::swing::plaf::basic::BasicTableHeaderUI* ui);
	static $String* TOGGLE_SORT_ORDER;
	static $String* SELECT_COLUMN_TO_LEFT;
	static $String* SELECT_COLUMN_TO_RIGHT;
	static $String* MOVE_COLUMN_LEFT;
	static $String* MOVE_COLUMN_RIGHT;
	static $String* RESIZE_LEFT;
	static $String* RESIZE_RIGHT;
	static $String* FOCUS_TABLE;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FOCUS_TABLE")
#pragma pop_macro("MOVE_COLUMN_LEFT")
#pragma pop_macro("MOVE_COLUMN_RIGHT")
#pragma pop_macro("RESIZE_LEFT")
#pragma pop_macro("RESIZE_RIGHT")
#pragma pop_macro("SELECT_COLUMN_TO_LEFT")
#pragma pop_macro("SELECT_COLUMN_TO_RIGHT")
#pragma pop_macro("TOGGLE_SORT_ORDER")

#endif // _javax_swing_plaf_basic_BasicTableHeaderUI$Actions_h_