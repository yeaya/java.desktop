#ifndef _javax_swing_plaf_basic_BasicMenuItemUI$Actions_h_
#define _javax_swing_plaf_basic_BasicMenuItemUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicMenuItemUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("CLICK")
#undef CLICK

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

class BasicMenuItemUI$Actions : public ::sun::swing::UIAction {
	$class(BasicMenuItemUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicMenuItemUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static $String* CLICK;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CLICK")

#endif // _javax_swing_plaf_basic_BasicMenuItemUI$Actions_h_