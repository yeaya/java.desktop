#ifndef _javax_swing_event_TreeExpansionListener_h_
#define _javax_swing_event_TreeExpansionListener_h_
//$ interface javax.swing.event.TreeExpansionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import TreeExpansionListener : public ::java::util::EventListener {
	$interface(TreeExpansionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* event) {}
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* event) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeExpansionListener_h_