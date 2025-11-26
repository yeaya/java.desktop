#ifndef _javax_swing_event_PopupMenuEvent_h_
#define _javax_swing_event_PopupMenuEvent_h_
//$ class javax.swing.event.PopupMenuEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace event {

class $export PopupMenuEvent : public ::java::util::EventObject {
	$class(PopupMenuEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	PopupMenuEvent();
	void init$(Object$* source);
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_PopupMenuEvent_h_