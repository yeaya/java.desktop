#ifndef _javax_swing_tree_VariableHeightLayoutCache$TreeStateNode_h_
#define _javax_swing_tree_VariableHeightLayoutCache$TreeStateNode_h_
//$ class javax.swing.tree.VariableHeightLayoutCache$TreeStateNode
//$ extends javax.swing.tree.DefaultMutableTreeNode

#include <javax/swing/tree/DefaultMutableTreeNode.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class MutableTreeNode;
			class TreePath;
			class VariableHeightLayoutCache;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class VariableHeightLayoutCache$TreeStateNode : public ::javax::swing::tree::DefaultMutableTreeNode {
	$class(VariableHeightLayoutCache$TreeStateNode, $NO_CLASS_INIT, ::javax::swing::tree::DefaultMutableTreeNode)
public:
	VariableHeightLayoutCache$TreeStateNode();
	void init$(::javax::swing::tree::VariableHeightLayoutCache* this$0, Object$* value);
	virtual ::java::util::Enumeration* children() override;
	virtual void collapse();
	virtual void collapse(bool adjustTree);
	virtual void deepMarkSizeInvalid();
	virtual void didAdjustTree();
	virtual void expand();
	virtual void expand(bool adjustTree);
	virtual void expandParentAndReceiver();
	virtual ::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* getLastVisibleNode();
	virtual ::java::util::Enumeration* getLoadedChildren(bool createIfNeeded);
	virtual int32_t getModelChildCount();
	virtual ::java::awt::Rectangle* getNodeBounds(::java::awt::Rectangle* placeIn);
	virtual int32_t getPreferredHeight();
	virtual int32_t getPreferredWidth();
	virtual int32_t getRow();
	virtual ::javax::swing::tree::TreePath* getTreePath();
	virtual $Object* getValue();
	virtual int32_t getVisibleChildCount();
	virtual int32_t getXOrigin();
	virtual int32_t getYOrigin();
	virtual bool hasBeenExpanded();
	virtual bool hasValidSize();
	virtual bool isExpanded();
	virtual bool isLeaf() override;
	virtual bool isVisible();
	virtual void makeVisible();
	virtual void markSizeInvalid();
	using ::javax::swing::tree::DefaultMutableTreeNode::remove;
	virtual void remove(int32_t childIndex) override;
	virtual void removeFromMapping();
	virtual void resetChildrenPaths(::javax::swing::tree::TreePath* parentPath);
	virtual void setParent(::javax::swing::tree::MutableTreeNode* parent) override;
	virtual void setUserObject(Object$* o) override;
	virtual void setYOrigin(int32_t newYOrigin);
	virtual void shiftYOriginBy(int32_t offset);
	virtual void toggleExpanded();
	virtual void updatePreferredSize();
	virtual void updatePreferredSize(int32_t index);
	::javax::swing::tree::VariableHeightLayoutCache* this$0 = nullptr;
	int32_t preferredWidth = 0;
	int32_t preferredHeight = 0;
	int32_t xOrigin = 0;
	int32_t yOrigin = 0;
	bool expanded = false;
	bool hasBeenExpanded$ = false;
	::javax::swing::tree::TreePath* path = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_VariableHeightLayoutCache$TreeStateNode_h_