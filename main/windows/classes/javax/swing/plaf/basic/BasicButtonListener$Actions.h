#ifndef _javax_swing_plaf_basic_BasicButtonListener$Actions_h_
#define _javax_swing_plaf_basic_BasicButtonListener$Actions_h_
//$ class javax.swing.plaf.basic.BasicButtonListener$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("PRESS")
#undef PRESS
#pragma push_macro("RELEASE")
#undef RELEASE

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

class BasicButtonListener$Actions : public ::sun::swing::UIAction {
	$class(BasicButtonListener$Actions, 0, ::sun::swing::UIAction)
public:
	BasicButtonListener$Actions();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static $String* PRESS;
	static $String* RELEASE;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("PRESS")
#pragma pop_macro("RELEASE")

#endif // _javax_swing_plaf_basic_BasicButtonListener$Actions_h_