#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("FOCUS_OUT_BACKWARD")
#undef FOCUS_OUT_BACKWARD
#pragma push_macro("FOCUS_OUT_FORWARD")
#undef FOCUS_OUT_FORWARD
#pragma push_macro("NEGATIVE_INCREMENT")
#undef NEGATIVE_INCREMENT
#pragma push_macro("POSITIVE_INCREMENT")
#undef POSITIVE_INCREMENT
#pragma push_macro("SELECT_MAX")
#undef SELECT_MAX
#pragma push_macro("SELECT_MIN")
#undef SELECT_MIN
#pragma push_macro("START_RESIZE")
#undef START_RESIZE
#pragma push_macro("TOGGLE_FOCUS")
#undef TOGGLE_FOCUS

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JSplitPane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSplitPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicSplitPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicSplitPaneUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
	::java::awt::Component* getFirstAvailableComponent(::java::awt::Component* c);
	::java::awt::Component* getNextSide(::javax::swing::JSplitPane* splitPane, ::java::awt::Component* focus);
	void moveFocus(::javax::swing::JSplitPane* splitPane, int32_t direction);
	void toggleFocus(::javax::swing::JSplitPane* splitPane);
	static $String* NEGATIVE_INCREMENT;
	static $String* POSITIVE_INCREMENT;
	static $String* SELECT_MIN;
	static $String* SELECT_MAX;
	static $String* START_RESIZE;
	static $String* TOGGLE_FOCUS;
	static $String* FOCUS_OUT_FORWARD;
	static $String* FOCUS_OUT_BACKWARD;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FOCUS_OUT_BACKWARD")
#pragma pop_macro("FOCUS_OUT_FORWARD")
#pragma pop_macro("NEGATIVE_INCREMENT")
#pragma pop_macro("POSITIVE_INCREMENT")
#pragma pop_macro("SELECT_MAX")
#pragma pop_macro("SELECT_MIN")
#pragma pop_macro("START_RESIZE")
#pragma pop_macro("TOGGLE_FOCUS")

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$Actions_h_