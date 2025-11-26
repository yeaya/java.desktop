#ifndef _javax_swing_JTree$TreeModelHandler_h_
#define _javax_swing_JTree$TreeModelHandler_h_
//$ class javax.swing.JTree$TreeModelHandler
//$ extends javax.swing.event.TreeModelListener

#include <javax/swing/event/TreeModelListener.h>

namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeModelEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTree$TreeModelHandler : public ::javax::swing::event::TreeModelListener {
	$class(JTree$TreeModelHandler, $NO_CLASS_INIT, ::javax::swing::event::TreeModelListener)
public:
	JTree$TreeModelHandler();
	void init$(::javax::swing::JTree* this$0);
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	::javax::swing::JTree* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$TreeModelHandler_h_