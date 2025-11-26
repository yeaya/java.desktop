#ifndef _javax_swing_event_CellEditorListener_h_
#define _javax_swing_event_CellEditorListener_h_
//$ interface javax.swing.event.CellEditorListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export CellEditorListener : public ::java::util::EventListener {
	$interface(CellEditorListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void editingCanceled(::javax::swing::event::ChangeEvent* e) {}
	virtual void editingStopped(::javax::swing::event::ChangeEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_CellEditorListener_h_