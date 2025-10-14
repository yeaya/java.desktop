#ifndef _javax_swing_tree_TreeModel_h_
#define _javax_swing_tree_TreeModel_h_
//$ interface javax.swing.tree.TreeModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeModelListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import TreeModel : public ::java::lang::Object {
	$interface(TreeModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addTreeModelListener(::javax::swing::event::TreeModelListener* l) {}
	virtual $Object* getChild(Object$* parent, int32_t index) {return nullptr;}
	virtual int32_t getChildCount(Object$* parent) {return 0;}
	virtual int32_t getIndexOfChild(Object$* parent, Object$* child) {return 0;}
	virtual $Object* getRoot() {return nullptr;}
	virtual bool isLeaf(Object$* node) {return false;}
	virtual void removeTreeModelListener(::javax::swing::event::TreeModelListener* l) {}
	virtual void valueForPathChanged(::javax::swing::tree::TreePath* path, Object$* newValue) {}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_TreeModel_h_