#ifndef _javax_swing_event_TreeModelListener_h_
#define _javax_swing_event_TreeModelListener_h_
//$ interface javax.swing.event.TreeModelListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeModelEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import TreeModelListener : public ::java::util::EventListener {
	$interface(TreeModelListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeModelListener_h_