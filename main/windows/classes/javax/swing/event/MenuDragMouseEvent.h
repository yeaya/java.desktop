#ifndef _javax_swing_event_MenuDragMouseEvent_h_
#define _javax_swing_event_MenuDragMouseEvent_h_
//$ class javax.swing.event.MenuDragMouseEvent
//$ extends java.awt.event.MouseEvent

#include <java/awt/event/MouseEvent.h>
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

class $export MenuDragMouseEvent : public ::java::awt::event::MouseEvent {
	$class(MenuDragMouseEvent, $NO_CLASS_INIT, ::java::awt::event::MouseEvent)
public:
	MenuDragMouseEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, $Array<::javax::swing::MenuElement>* p, ::javax::swing::MenuSelectionManager* m);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, $Array<::javax::swing::MenuElement>* p, ::javax::swing::MenuSelectionManager* m);
	virtual ::javax::swing::MenuSelectionManager* getMenuSelectionManager();
	virtual $Array<::javax::swing::MenuElement>* getPath();
	$Array<::javax::swing::MenuElement>* path = nullptr;
	::javax::swing::MenuSelectionManager* manager = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuDragMouseEvent_h_