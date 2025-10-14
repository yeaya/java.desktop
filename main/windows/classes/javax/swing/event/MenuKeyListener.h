#ifndef _javax_swing_event_MenuKeyListener_h_
#define _javax_swing_event_MenuKeyListener_h_
//$ interface javax.swing.event.MenuKeyListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class MenuKeyEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export MenuKeyListener : public ::java::util::EventListener {
	$interface(MenuKeyListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void menuKeyPressed(::javax::swing::event::MenuKeyEvent* e) {}
	virtual void menuKeyReleased(::javax::swing::event::MenuKeyEvent* e) {}
	virtual void menuKeyTyped(::javax::swing::event::MenuKeyEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuKeyListener_h_