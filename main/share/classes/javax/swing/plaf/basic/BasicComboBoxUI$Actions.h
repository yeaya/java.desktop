#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$Actions_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("DOWN_2")
#undef DOWN_2
#pragma push_macro("END")
#undef END
#pragma push_macro("ENTER")
#undef ENTER
#pragma push_macro("HIDE")
#undef HIDE
#pragma push_macro("HOME")
#undef HOME
#pragma push_macro("PAGE_DOWN")
#undef PAGE_DOWN
#pragma push_macro("PAGE_UP")
#undef PAGE_UP
#pragma push_macro("TOGGLE")
#undef TOGGLE
#pragma push_macro("TOGGLE_2")
#undef TOGGLE_2
#pragma push_macro("UP")
#undef UP
#pragma push_macro("UP_2")
#undef UP_2

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboBoxUI$Actions : public ::sun::swing::UIAction {
	$class(BasicComboBoxUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicComboBoxUI$Actions();
	void init$($String* name);
	virtual bool accept(Object$* c) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	int32_t getNextIndex(::javax::swing::JComboBox* comboBox, $String* key);
	static $String* HIDE;
	static $String* DOWN;
	static $String* DOWN_2;
	static $String* TOGGLE;
	static $String* TOGGLE_2;
	static $String* UP;
	static $String* UP_2;
	static $String* ENTER;
	static $String* PAGE_DOWN;
	static $String* PAGE_UP;
	static $String* HOME;
	static $String* END;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DOWN")
#pragma pop_macro("DOWN_2")
#pragma pop_macro("END")
#pragma pop_macro("ENTER")
#pragma pop_macro("HIDE")
#pragma pop_macro("HOME")
#pragma pop_macro("PAGE_DOWN")
#pragma pop_macro("PAGE_UP")
#pragma pop_macro("TOGGLE")
#pragma pop_macro("TOGGLE_2")
#pragma pop_macro("UP")
#pragma pop_macro("UP_2")

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$Actions_h_