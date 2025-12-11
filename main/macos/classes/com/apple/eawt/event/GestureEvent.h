#ifndef _com_apple_eawt_event_GestureEvent_h_
#define _com_apple_eawt_event_GestureEvent_h_
//$ class com.apple.eawt.event.GestureEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureEvent : public ::java::lang::Object {
	$class(GestureEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GestureEvent();
	void init$();
	virtual void consume();
	virtual bool isConsumed();
	bool consumed = false;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureEvent_h_