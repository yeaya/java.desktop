#ifndef _bug8003830$NullReturningTreeUI_h_
#define _bug8003830$NullReturningTreeUI_h_
//$ class bug8003830$NullReturningTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI

#include <javax/swing/plaf/basic/BasicTreeUI.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

class bug8003830$NullReturningTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI {
	$class(bug8003830$NullReturningTreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI)
public:
	bug8003830$NullReturningTreeUI();
	void init$();
	virtual ::java::awt::Rectangle* getPathBounds(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) override;
};

#endif // _bug8003830$NullReturningTreeUI_h_