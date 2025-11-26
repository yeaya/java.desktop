#ifndef _javax_swing_tree_FixedHeightLayoutCache$FHTreeStateNode_h_
#define _javax_swing_tree_FixedHeightLayoutCache$FHTreeStateNode_h_
//$ class javax.swing.tree.FixedHeightLayoutCache$FHTreeStateNode
//$ extends javax.swing.tree.DefaultMutableTreeNode

#include <javax/swing/tree/DefaultMutableTreeNode.h>

namespace javax {
	namespace swing {
		namespace tree {
			class FixedHeightLayoutCache;
			class FixedHeightLayoutCache$SearchInfo;
			class MutableTreeNode;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class FixedHeightLayoutCache$FHTreeStateNode : public ::javax::swing::tree::DefaultMutableTreeNode {
	$class(FixedHeightLayoutCache$FHTreeStateNode, $NO_CLASS_INIT, ::javax::swing::tree::DefaultMutableTreeNode)
public:
	FixedHeightLayoutCache$FHTreeStateNode();
	void init$(::javax::swing::tree::FixedHeightLayoutCache* this$0, Object$* userObject, int32_t childIndex, int32_t row);
	virtual void addNode(::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* newChild);
	virtual void adjustChildIndexs(int32_t index, int32_t amount);
	virtual void adjustRowBy(int32_t amount);
	virtual void adjustRowBy(int32_t amount, int32_t startIndex);
	virtual void childInsertedAtModelIndex(int32_t index, bool isExpandedAndVisible);
	virtual void collapse(bool adjustRows);
	virtual ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* createChildFor(Object$* userObject);
	virtual void didAdjustTree();
	virtual void didExpand();
	virtual void expand();
	virtual void expandParentAndReceiver();
	virtual ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* getChildAtModelIndex(int32_t index);
	virtual int32_t getChildIndex();
	virtual int32_t getCountTo(int32_t stopIndex);
	virtual int32_t getNumExpandedChildrenTo(int32_t stopIndex);
	virtual bool getPathForRow(int32_t row, int32_t nextRow, ::javax::swing::tree::FixedHeightLayoutCache$SearchInfo* info);
	virtual int32_t getRow();
	virtual int32_t getRowToModelIndex(int32_t index);
	virtual int32_t getTotalChildCount();
	virtual ::javax::swing::tree::TreePath* getTreePath();
	virtual int32_t getVisibleLevel();
	virtual bool isExpanded();
	virtual bool isLeaf() override;
	virtual bool isVisible();
	virtual void makeVisible();
	using ::javax::swing::tree::DefaultMutableTreeNode::remove;
	virtual void remove(int32_t childIndex) override;
	virtual void removeChildAtModelIndex(int32_t modelIndex, bool isChildVisible);
	virtual void removeFromMapping();
	virtual void resetChildrenPaths(::javax::swing::tree::TreePath* parentPath);
	virtual void resetChildrenRowsFrom(int32_t newRow, int32_t childIndex, int32_t modelIndex);
	virtual void setParent(::javax::swing::tree::MutableTreeNode* parent) override;
	virtual int32_t setRowAndChildren(int32_t nextRow);
	virtual void setUserObject(Object$* o) override;
	::javax::swing::tree::FixedHeightLayoutCache* this$0 = nullptr;
	bool isExpanded$ = false;
	int32_t childIndex = 0;
	int32_t childCount = 0;
	int32_t row = 0;
	::javax::swing::tree::TreePath* path = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_FixedHeightLayoutCache$FHTreeStateNode_h_