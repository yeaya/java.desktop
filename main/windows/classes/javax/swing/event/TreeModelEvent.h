#ifndef _javax_swing_event_TreeModelEvent_h_
#define _javax_swing_event_TreeModelEvent_h_
//$ class javax.swing.event.TreeModelEvent
//$ extends java.util.EventObject

#include <java/lang/Array.h>
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

class $export TreeModelEvent : public ::java::util::EventObject {
	$class(TreeModelEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	TreeModelEvent();
	void init$(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children);
	void init$(Object$* source, ::javax::swing::tree::TreePath* path, $ints* childIndices, $ObjectArray* children);
	void init$(Object$* source, $ObjectArray* path);
	void init$(Object$* source, ::javax::swing::tree::TreePath* path);
	virtual $ints* getChildIndices();
	virtual $ObjectArray* getChildren();
	virtual $ObjectArray* getPath();
	virtual ::javax::swing::tree::TreePath* getTreePath();
	virtual $String* toString() override;
	::javax::swing::tree::TreePath* path = nullptr;
	$ints* childIndices = nullptr;
	$ObjectArray* children = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeModelEvent_h_