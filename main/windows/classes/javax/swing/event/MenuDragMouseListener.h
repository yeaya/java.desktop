#ifndef _javax_swing_event_MenuDragMouseListener_h_
#define _javax_swing_event_MenuDragMouseListener_h_
//$ interface javax.swing.event.MenuDragMouseListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class MenuDragMouseEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export MenuDragMouseListener : public ::java::util::EventListener {
	$interface(MenuDragMouseListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void menuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent* e) {}
	virtual void menuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent* e) {}
	virtual void menuDragMouseExited(::javax::swing::event::MenuDragMouseEvent* e) {}
	virtual void menuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuDragMouseListener_h_