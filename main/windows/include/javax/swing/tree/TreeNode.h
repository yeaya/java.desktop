#ifndef _javax_swing_tree_TreeNode_h_
#define _javax_swing_tree_TreeNode_h_
//$ interface javax.swing.tree.TreeNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import TreeNode : public ::java::lang::Object {
	$interface(TreeNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Enumeration* children() {return nullptr;}
	virtual bool getAllowsChildren() {return false;}
	virtual ::javax::swing::tree::TreeNode* getChildAt(int32_t childIndex) {return nullptr;}
	virtual int32_t getChildCount() {return 0;}
	virtual int32_t getIndex(::javax::swing::tree::TreeNode* node) {return 0;}
	virtual ::javax::swing::tree::TreeNode* getParent() {return nullptr;}
	virtual bool isLeaf() {return false;}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_TreeNode_h_