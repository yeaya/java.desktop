#ifndef _javax_swing_event_UndoableEditEvent_h_
#define _javax_swing_event_UndoableEditEvent_h_
//$ class javax.swing.event.UndoableEditEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace undo {
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import UndoableEditEvent : public ::java::util::EventObject {
	$class(UndoableEditEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	UndoableEditEvent();
	void init$(Object$* source, ::javax::swing::undo::UndoableEdit* edit);
	virtual ::javax::swing::undo::UndoableEdit* getEdit();
	::javax::swing::undo::UndoableEdit* myEdit = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_UndoableEditEvent_h_