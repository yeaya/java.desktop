#ifndef _javax_swing_event_TreeWillExpandListener_h_
#define _javax_swing_event_TreeWillExpandListener_h_
//$ interface javax.swing.event.TreeWillExpandListener
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

class $export TreeWillExpandListener : public ::java::util::EventListener {
	$interface(TreeWillExpandListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void treeWillCollapse(::javax::swing::event::TreeExpansionEvent* event) {}
	virtual void treeWillExpand(::javax::swing::event::TreeExpansionEvent* event) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeWillExpandListener_h_