#ifndef _javax_swing_event_MenuListener_h_
#define _javax_swing_event_MenuListener_h_
//$ interface javax.swing.event.MenuListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class MenuEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import MenuListener : public ::java::util::EventListener {
	$interface(MenuListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void menuCanceled(::javax::swing::event::MenuEvent* e) {}
	virtual void menuDeselected(::javax::swing::event::MenuEvent* e) {}
	virtual void menuSelected(::javax::swing::event::MenuEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuListener_h_