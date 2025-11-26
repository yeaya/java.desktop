#ifndef _javax_swing_plaf_basic_BasicMenuBarUI$Actions_h_
#define _javax_swing_plaf_basic_BasicMenuBarUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicMenuBarUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("TAKE_FOCUS")
#undef TAKE_FOCUS

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

class BasicMenuBarUI$Actions : public ::sun::swing::UIAction {
	$class(BasicMenuBarUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicMenuBarUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static $String* TAKE_FOCUS;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("TAKE_FOCUS")

#endif // _javax_swing_plaf_basic_BasicMenuBarUI$Actions_h_