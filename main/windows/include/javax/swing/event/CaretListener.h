#ifndef _javax_swing_event_CaretListener_h_
#define _javax_swing_event_CaretListener_h_
//$ interface javax.swing.event.CaretListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import CaretListener : public ::java::util::EventListener {
	$interface(CaretListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_CaretListener_h_