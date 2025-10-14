#ifndef _javax_swing_tree_VariableHeightLayoutCache_h_
#define _javax_swing_tree_VariableHeightLayoutCache_h_
//$ class javax.swing.tree.VariableHeightLayoutCache
//$ extends javax.swing.tree.AbstractLayoutCache

#include <javax/swing/tree/AbstractLayoutCache.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Stack;
		class Vector;
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
		namespace tree {
			class AbstractLayoutCache$NodeDimensions;
			class TreeModel;
			class TreePath;
			class VariableHeightLayoutCache$TreeStateNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export VariableHeightLayoutCache : public ::javax::swing::tree::AbstractLayoutCache {
	$class(VariableHeightLayoutCache, $NO_CLASS_INIT, ::javax::swing::tree::AbstractLayoutCache)
public:
	VariableHeightLayoutCache();
	void init$();
	void addMapping(::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* node);
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* createNodeAt(::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* parent, int32_t childIndex);
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* createNodeForValue(Object$* value);
	void ensurePathIsExpanded(::javax::swing::tree::TreePath* aPath, bool expandLast);
	virtual ::java::awt::Rectangle* getBounds(::javax::swing::tree::TreePath* path, ::java::awt::Rectangle* placeIn) override;
	::java::awt::Rectangle* getBounds(int32_t row, ::java::awt::Rectangle* placeIn);
	virtual bool getExpandedState(::javax::swing::tree::TreePath* path) override;
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* getMapping(::javax::swing::tree::TreePath* path);
	int32_t getMaxNodeWidth();
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* getNode(int32_t row);
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* getNodeForPath(::javax::swing::tree::TreePath* path, bool onlyIfVisible, bool shouldCreate);
	virtual ::javax::swing::tree::TreePath* getPathClosestTo(int32_t x, int32_t y) override;
	virtual ::javax::swing::tree::TreePath* getPathForRow(int32_t row) override;
	virtual int32_t getPreferredHeight() override;
	virtual int32_t getPreferredWidth(::java::awt::Rectangle* bounds) override;
	int32_t getRowContainingYLocation(int32_t location);
	virtual int32_t getRowCount() override;
	virtual int32_t getRowForPath(::javax::swing::tree::TreePath* path) override;
	virtual int32_t getVisibleChildCount(::javax::swing::tree::TreePath* path) override;
	virtual ::java::util::Enumeration* getVisiblePathsFrom(::javax::swing::tree::TreePath* path) override;
	virtual void invalidatePathBounds(::javax::swing::tree::TreePath* path) override;
	virtual void invalidateSizes() override;
	virtual bool isExpanded(::javax::swing::tree::TreePath* path) override;
	void rebuild(bool clearSelection);
	void removeMapping(::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* node);
	virtual void setExpandedState(::javax::swing::tree::TreePath* path, bool isExpanded) override;
	virtual void setModel(::javax::swing::tree::TreeModel* newModel) override;
	virtual void setNodeDimensions(::javax::swing::tree::AbstractLayoutCache$NodeDimensions* nd) override;
	virtual void setRootVisible(bool rootVisible) override;
	virtual void setRowHeight(int32_t rowHeight) override;
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	void updateNodeSizes(bool updateAll);
	void updateYLocationsFrom(int32_t location);
	void visibleNodesChanged();
	::java::util::Vector* visibleNodes = nullptr;
	bool updateNodeSizes$ = false;
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* root = nullptr;
	::java::awt::Rectangle* boundsBuffer = nullptr;
	::java::util::Hashtable* treePathMapping = nullptr;
	::java::util::Stack* tempStacks = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_VariableHeightLayoutCache_h_