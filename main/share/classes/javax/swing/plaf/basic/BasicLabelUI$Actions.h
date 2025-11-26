#ifndef _javax_swing_plaf_basic_BasicLabelUI$Actions_h_
#define _javax_swing_plaf_basic_BasicLabelUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicLabelUI$Actions
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
		class InputMap;
		class JLabel;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLabelUI$Actions : public ::sun::swing::UIAction {
	$class(BasicLabelUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicLabelUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void doPress(::javax::swing::JLabel* label);
	void doRelease(::javax::swing::JLabel* label, bool isCommand);
	void putOnRelease(::javax::swing::InputMap* inputMap, int32_t keyCode, int32_t modifiers);
	void removeOnRelease(::javax::swing::InputMap* inputMap, int32_t keyCode, int32_t modifiers);
	static $String* PRESS;
	static $String* RELEASE;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("PRESS")
#pragma pop_macro("RELEASE")

#endif // _javax_swing_plaf_basic_BasicLabelUI$Actions_h_