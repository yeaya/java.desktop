#ifndef _javax_swing_plaf_basic_BasicDesktopPaneUI$Actions_h_
#define _javax_swing_plaf_basic_BasicDesktopPaneUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicDesktopPaneUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("ESCAPE")
#undef ESCAPE
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("MAXIMIZE")
#undef MAXIMIZE
#pragma push_macro("MINIMIZE")
#undef MINIMIZE
#pragma push_macro("MOVE")
#undef MOVE
#pragma push_macro("MOVE_RESIZE_INCREMENT")
#undef MOVE_RESIZE_INCREMENT
#pragma push_macro("NAVIGATE_NEXT")
#undef NAVIGATE_NEXT
#pragma push_macro("NAVIGATE_PREVIOUS")
#undef NAVIGATE_PREVIOUS
#pragma push_macro("NEXT_FRAME")
#undef NEXT_FRAME
#pragma push_macro("PREVIOUS_FRAME")
#undef PREVIOUS_FRAME
#pragma push_macro("RESIZE")
#undef RESIZE
#pragma push_macro("RESTORE")
#undef RESTORE
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("SHRINK_DOWN")
#undef SHRINK_DOWN
#pragma push_macro("SHRINK_LEFT")
#undef SHRINK_LEFT
#pragma push_macro("SHRINK_RIGHT")
#undef SHRINK_RIGHT
#pragma push_macro("SHRINK_UP")
#undef SHRINK_UP
#pragma push_macro("UP")
#undef UP

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
		class JDesktopPane;
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDesktopPaneUI$Actions : public ::sun::swing::UIAction {
	$class(BasicDesktopPaneUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicDesktopPaneUI$Actions();
	void init$();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void setState(::javax::swing::JDesktopPane* dp, $String* state);
	static $String* CLOSE;
	static $String* ESCAPE;
	static $String* MAXIMIZE;
	static $String* MINIMIZE;
	static $String* MOVE;
	static $String* RESIZE;
	static $String* RESTORE;
	static $String* LEFT;
	static $String* RIGHT;
	static $String* UP;
	static $String* DOWN;
	static $String* SHRINK_LEFT;
	static $String* SHRINK_RIGHT;
	static $String* SHRINK_UP;
	static $String* SHRINK_DOWN;
	static $String* NEXT_FRAME;
	static $String* PREVIOUS_FRAME;
	static $String* NAVIGATE_NEXT;
	static $String* NAVIGATE_PREVIOUS;
	static const int32_t MOVE_RESIZE_INCREMENT = 10;
	static bool moving;
	static bool resizing;
	static ::javax::swing::JInternalFrame* sourceFrame;
	static ::java::awt::Component* focusOwner;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CLOSE")
#pragma pop_macro("DOWN")
#pragma pop_macro("ESCAPE")
#pragma pop_macro("LEFT")
#pragma pop_macro("MAXIMIZE")
#pragma pop_macro("MINIMIZE")
#pragma pop_macro("MOVE")
#pragma pop_macro("MOVE_RESIZE_INCREMENT")
#pragma pop_macro("NAVIGATE_NEXT")
#pragma pop_macro("NAVIGATE_PREVIOUS")
#pragma pop_macro("NEXT_FRAME")
#pragma pop_macro("PREVIOUS_FRAME")
#pragma pop_macro("RESIZE")
#pragma pop_macro("RESTORE")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SHRINK_DOWN")
#pragma pop_macro("SHRINK_LEFT")
#pragma pop_macro("SHRINK_RIGHT")
#pragma pop_macro("SHRINK_UP")
#pragma pop_macro("UP")

#endif // _javax_swing_plaf_basic_BasicDesktopPaneUI$Actions_h_