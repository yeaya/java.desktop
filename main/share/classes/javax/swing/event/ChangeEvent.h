#ifndef _javax_swing_event_ChangeEvent_h_
#define _javax_swing_event_ChangeEvent_h_
//$ class javax.swing.event.ChangeEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace event {

class $export ChangeEvent : public ::java::util::EventObject {
	$class(ChangeEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	ChangeEvent();
	void init$(Object$* source);
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_ChangeEvent_h_