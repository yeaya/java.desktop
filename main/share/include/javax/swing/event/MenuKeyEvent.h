#ifndef _javax_swing_event_MenuKeyEvent_h_
#define _javax_swing_event_MenuKeyEvent_h_
//$ class javax.swing.event.MenuKeyEvent
//$ extends java.awt.event.KeyEvent

#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class MenuElement;
		class MenuSelectionManager;
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import MenuKeyEvent : public ::java::awt::event::KeyEvent {
	$class(MenuKeyEvent, $NO_CLASS_INIT, ::java::awt::event::KeyEvent)
public:
	MenuKeyEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, $Array<::javax::swing::MenuElement>* p, ::javax::swing::MenuSelectionManager* m);
	virtual ::javax::swing::MenuSelectionManager* getMenuSelectionManager();
	virtual $Array<::javax::swing::MenuElement>* getPath();
	$Array<::javax::swing::MenuElement>* path = nullptr;
	::javax::swing::MenuSelectionManager* manager = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuKeyEvent_h_