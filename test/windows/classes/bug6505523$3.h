#ifndef _bug6505523$3_h_
#define _bug6505523$3_h_
//$ class bug6505523$3
//$ extends javax.swing.event.TreeExpansionListener

#include <javax/swing/event/TreeExpansionListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
			class DefaultTreeModel;
		}
	}
}

class bug6505523$3 : public ::javax::swing::event::TreeExpansionListener {
	$class(bug6505523$3, $NO_CLASS_INIT, ::javax::swing::event::TreeExpansionListener)
public:
	bug6505523$3();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* val$problematic, ::javax::swing::tree::DefaultTreeModel* val$model);
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* event) override;
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* event) override;
	::javax::swing::tree::DefaultTreeModel* val$model = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode* val$problematic = nullptr;
};

#endif // _bug6505523$3_h_