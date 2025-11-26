#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("PAGE_DOWN")
#undef PAGE_DOWN
#pragma push_macro("PAGE_UP")
#undef PAGE_UP
#pragma push_macro("PREVIOUS")
#undef PREVIOUS
#pragma push_macro("REQUEST_FOCUS")
#undef REQUEST_FOCUS
#pragma push_macro("REQUEST_FOCUS_FOR_VISIBLE")
#undef REQUEST_FOCUS_FOR_VISIBLE
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("SCROLL_BACKWARD")
#undef SCROLL_BACKWARD
#pragma push_macro("SCROLL_FORWARD")
#undef SCROLL_FORWARD
#pragma push_macro("SELECT_FOCUSED")
#undef SELECT_FOCUSED
#pragma push_macro("SET_SELECTED")
#undef SET_SELECTED
#pragma push_macro("UP")
#undef UP

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

class BasicTabbedPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicTabbedPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicTabbedPaneUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static $String* NEXT;
	static $String* PREVIOUS;
	static $String* RIGHT;
	static $String* LEFT;
	static $String* UP;
	static $String* DOWN;
	static $String* PAGE_UP;
	static $String* PAGE_DOWN;
	static $String* REQUEST_FOCUS;
	static $String* REQUEST_FOCUS_FOR_VISIBLE;
	static $String* SET_SELECTED;
	static $String* SELECT_FOCUSED;
	static $String* SCROLL_FORWARD;
	static $String* SCROLL_BACKWARD;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DOWN")
#pragma pop_macro("LEFT")
#pragma pop_macro("NEXT")
#pragma pop_macro("PAGE_DOWN")
#pragma pop_macro("PAGE_UP")
#pragma pop_macro("PREVIOUS")
#pragma pop_macro("REQUEST_FOCUS")
#pragma pop_macro("REQUEST_FOCUS_FOR_VISIBLE")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SCROLL_BACKWARD")
#pragma pop_macro("SCROLL_FORWARD")
#pragma pop_macro("SELECT_FOCUSED")
#pragma pop_macro("SET_SELECTED")
#pragma pop_macro("UP")

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$Actions_h_