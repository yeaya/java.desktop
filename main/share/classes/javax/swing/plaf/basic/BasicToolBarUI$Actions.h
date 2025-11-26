#ifndef _javax_swing_plaf_basic_BasicToolBarUI$Actions_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("NAVIGATE_DOWN")
#undef NAVIGATE_DOWN
#pragma push_macro("NAVIGATE_LEFT")
#undef NAVIGATE_LEFT
#pragma push_macro("NAVIGATE_RIGHT")
#undef NAVIGATE_RIGHT
#pragma push_macro("NAVIGATE_UP")
#undef NAVIGATE_UP

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

class BasicToolBarUI$Actions : public ::sun::swing::UIAction {
	$class(BasicToolBarUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicToolBarUI$Actions();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static $String* NAVIGATE_RIGHT;
	static $String* NAVIGATE_LEFT;
	static $String* NAVIGATE_UP;
	static $String* NAVIGATE_DOWN;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("NAVIGATE_DOWN")
#pragma pop_macro("NAVIGATE_LEFT")
#pragma pop_macro("NAVIGATE_RIGHT")
#pragma pop_macro("NAVIGATE_UP")

#endif // _javax_swing_plaf_basic_BasicToolBarUI$Actions_h_