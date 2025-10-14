#ifndef _javax_swing_plaf_basic_BasicRootPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicRootPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicRootPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("POST_POPUP")
#undef POST_POPUP
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

class $import BasicRootPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicRootPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicRootPaneUI$Actions();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static $String* PRESS;
	static $String* RELEASE;
	static $String* POST_POPUP;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("POST_POPUP")
#pragma pop_macro("PRESS")
#pragma pop_macro("RELEASE")

#endif // _javax_swing_plaf_basic_BasicRootPaneUI$Actions_h_