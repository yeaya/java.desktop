#ifndef _javax_swing_event_TreeExpansionEvent_h_
#define _javax_swing_event_TreeExpansionEvent_h_
//$ class javax.swing.event.TreeExpansionEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export TreeExpansionEvent : public ::java::util::EventObject {
	$class(TreeExpansionEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	TreeExpansionEvent();
	void init$(Object$* source, ::javax::swing::tree::TreePath* path);
	virtual ::javax::swing::tree::TreePath* getPath();
	::javax::swing::tree::TreePath* path = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeExpansionEvent_h_