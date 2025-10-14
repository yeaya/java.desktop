#ifndef _javax_swing_event_MenuEvent_h_
#define _javax_swing_event_MenuEvent_h_
//$ class javax.swing.event.MenuEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace event {

class $export MenuEvent : public ::java::util::EventObject {
	$class(MenuEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	MenuEvent();
	void init$(Object$* source);
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MenuEvent_h_