#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("SCROLL_DOWN")
#undef SCROLL_DOWN
#pragma push_macro("SCROLL_END")
#undef SCROLL_END
#pragma push_macro("SCROLL_HOME")
#undef SCROLL_HOME
#pragma push_macro("SCROLL_LEFT")
#undef SCROLL_LEFT
#pragma push_macro("SCROLL_RIGHT")
#undef SCROLL_RIGHT
#pragma push_macro("SCROLL_UP")
#undef SCROLL_UP
#pragma push_macro("UNIT_SCROLL_DOWN")
#undef UNIT_SCROLL_DOWN
#pragma push_macro("UNIT_SCROLL_LEFT")
#undef UNIT_SCROLL_LEFT
#pragma push_macro("UNIT_SCROLL_RIGHT")
#undef UNIT_SCROLL_RIGHT
#pragma push_macro("UNIT_SCROLL_UP")
#undef UNIT_SCROLL_UP

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JScrollPane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicScrollPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicScrollPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicScrollPaneUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void scroll(::javax::swing::JScrollPane* scrollpane, int32_t orientation, int32_t direction, bool block);
	void scrollEnd(::javax::swing::JScrollPane* scrollpane);
	void scrollHome(::javax::swing::JScrollPane* scrollpane);
	static $String* SCROLL_UP;
	static $String* SCROLL_DOWN;
	static $String* SCROLL_HOME;
	static $String* SCROLL_END;
	static $String* UNIT_SCROLL_UP;
	static $String* UNIT_SCROLL_DOWN;
	static $String* SCROLL_LEFT;
	static $String* SCROLL_RIGHT;
	static $String* UNIT_SCROLL_LEFT;
	static $String* UNIT_SCROLL_RIGHT;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SCROLL_DOWN")
#pragma pop_macro("SCROLL_END")
#pragma pop_macro("SCROLL_HOME")
#pragma pop_macro("SCROLL_LEFT")
#pragma pop_macro("SCROLL_RIGHT")
#pragma pop_macro("SCROLL_UP")
#pragma pop_macro("UNIT_SCROLL_DOWN")
#pragma pop_macro("UNIT_SCROLL_LEFT")
#pragma pop_macro("UNIT_SCROLL_RIGHT")
#pragma pop_macro("UNIT_SCROLL_UP")

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI$Actions_h_