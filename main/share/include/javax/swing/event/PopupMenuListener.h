#ifndef _javax_swing_event_PopupMenuListener_h_
#define _javax_swing_event_PopupMenuListener_h_
//$ interface javax.swing.event.PopupMenuListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import PopupMenuListener : public ::java::util::EventListener {
	$interface(PopupMenuListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) {}
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) {}
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_PopupMenuListener_h_