#ifndef _javax_swing_tree_TreeCellRenderer_h_
#define _javax_swing_tree_TreeCellRenderer_h_
//$ interface javax.swing.tree.TreeCellRenderer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
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

class $export TreeCellRenderer : public ::java::lang::Object {
	$interface(TreeCellRenderer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {return nullptr;}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_TreeCellRenderer_h_