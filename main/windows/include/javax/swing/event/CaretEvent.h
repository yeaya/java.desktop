#ifndef _javax_swing_event_CaretEvent_h_
#define _javax_swing_event_CaretEvent_h_
//$ class javax.swing.event.CaretEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace event {

class $import CaretEvent : public ::java::util::EventObject {
	$class(CaretEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	CaretEvent();
	void init$(Object$* source);
	virtual int32_t getDot() {return 0;}
	virtual int32_t getMark() {return 0;}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_CaretEvent_h_