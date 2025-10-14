#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("CLOSE")
#undef CLOSE

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

class BasicOptionPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicOptionPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicOptionPaneUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static $String* CLOSE;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CLOSE")

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$Actions_h_