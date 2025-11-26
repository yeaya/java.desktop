#ifndef _javax_swing_event_UndoableEditListener_h_
#define _javax_swing_event_UndoableEditListener_h_
//$ interface javax.swing.event.UndoableEditListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class UndoableEditEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import UndoableEditListener : public ::java::util::EventListener {
	$interface(UndoableEditListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void undoableEditHappened(::javax::swing::event::UndoableEditEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_UndoableEditListener_h_