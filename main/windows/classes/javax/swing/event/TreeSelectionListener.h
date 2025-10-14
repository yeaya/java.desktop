#ifndef _javax_swing_event_TreeSelectionListener_h_
#define _javax_swing_event_TreeSelectionListener_h_
//$ interface javax.swing.event.TreeSelectionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export TreeSelectionListener : public ::java::util::EventListener {
	$interface(TreeSelectionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeSelectionListener_h_