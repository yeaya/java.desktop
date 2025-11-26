#ifndef _javax_swing_event_TreeSelectionEvent_h_
#define _javax_swing_event_TreeSelectionEvent_h_
//$ class javax.swing.event.TreeSelectionEvent
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

class $import TreeSelectionEvent : public ::java::util::EventObject {
	$class(TreeSelectionEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	TreeSelectionEvent();
	void init$(Object$* source, $Array<::javax::swing::tree::TreePath>* paths, $booleans* areNew, ::javax::swing::tree::TreePath* oldLeadSelectionPath, ::javax::swing::tree::TreePath* newLeadSelectionPath);
	void init$(Object$* source, ::javax::swing::tree::TreePath* path, bool isNew, ::javax::swing::tree::TreePath* oldLeadSelectionPath, ::javax::swing::tree::TreePath* newLeadSelectionPath);
	virtual $Object* cloneWithSource(Object$* newSource);
	virtual ::javax::swing::tree::TreePath* getNewLeadSelectionPath();
	virtual ::javax::swing::tree::TreePath* getOldLeadSelectionPath();
	virtual ::javax::swing::tree::TreePath* getPath();
	virtual $Array<::javax::swing::tree::TreePath>* getPaths();
	virtual bool isAddedPath();
	virtual bool isAddedPath(::javax::swing::tree::TreePath* path);
	virtual bool isAddedPath(int32_t index);
	$Array<::javax::swing::tree::TreePath>* paths = nullptr;
	$booleans* areNew = nullptr;
	::javax::swing::tree::TreePath* oldLeadSelectionPath = nullptr;
	::javax::swing::tree::TreePath* newLeadSelectionPath = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_TreeSelectionEvent_h_