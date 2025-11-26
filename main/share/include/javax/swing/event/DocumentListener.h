#ifndef _javax_swing_event_DocumentListener_h_
#define _javax_swing_event_DocumentListener_h_
//$ interface javax.swing.event.DocumentListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import DocumentListener : public ::java::util::EventListener {
	$interface(DocumentListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) {}
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) {}
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_DocumentListener_h_