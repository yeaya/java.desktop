#ifndef _javax_swing_tree_FixedHeightLayoutCache_h_
#define _javax_swing_tree_FixedHeightLayoutCache_h_
//$ class javax.swing.tree.FixedHeightLayoutCache
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
			class FixedHeightLayoutCache$FHTreeStateNode;
			class FixedHeightLayoutCache$SearchInfo;
			class TreeModel;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export FixedHeightLayoutCache : public ::javax::swing::tree::AbstractLayoutCache {
	$class(FixedHeightLayoutCache, $NO_CLASS_INIT, ::javax::swing::tree::AbstractLayoutCache)
public:
	FixedHeightLayoutCache();
	void init$();
	void addMapping(::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* node);
	void adjustRowCountBy(int32_t changeAmount);
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* createNodeForValue(Object$* value, int32_t childIndex);
	bool ensurePathIsExpanded(::javax::swing::tree::TreePath* aPath, bool expandLast);
	virtual ::java::awt::Rectangle* getBounds(::javax::swing::tree::TreePath* path, ::java::awt::Rectangle* placeIn) override;
	::java::awt::Rectangle* getBounds(::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* parent, int32_t childIndex, ::java::awt::Rectangle* placeIn);
	virtual bool getExpandedState(::javax::swing::tree::TreePath* path) override;
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* getMapping(::javax::swing::tree::TreePath* path);
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* getNodeForPath(::javax::swing::tree::TreePath* path, bool onlyIfVisible, bool shouldCreate);
	virtual ::javax::swing::tree::TreePath* getPathClosestTo(int32_t x, int32_t y) override;
	virtual ::javax::swing::tree::TreePath* getPathForRow(int32_t row) override;
	int32_t getRowContainingYLocation(int32_t location);
	virtual int32_t getRowCount() override;
	virtual int32_t getRowForPath(::javax::swing::tree::TreePath* path) override;
	virtual int32_t getVisibleChildCount(::javax::swing::tree::TreePath* path) override;
	virtual ::java::util::Enumeration* getVisiblePathsFrom(::javax::swing::tree::TreePath* path) override;
	virtual void invalidatePathBounds(::javax::swing::tree::TreePath* path) override;
	virtual void invalidateSizes() override;
	virtual bool isExpanded(::javax::swing::tree::TreePath* path) override;
	void rebuild(bool clearSelection);
	void removeMapping(::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* node);
	virtual void setExpandedState(::javax::swing::tree::TreePath* path, bool isExpanded) override;
	virtual void setModel(::javax::swing::tree::TreeModel* newModel) override;
	virtual void setRootVisible(bool rootVisible) override;
	virtual void setRowHeight(int32_t rowHeight) override;
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	void visibleNodesChanged();
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* root = nullptr;
	int32_t rowCount = 0;
	::java::awt::Rectangle* boundsBuffer = nullptr;
	::java::util::Hashtable* treePathMapping = nullptr;
	::javax::swing::tree::FixedHeightLayoutCache$SearchInfo* info = nullptr;
	::java::util::Stack* tempStacks = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_FixedHeightLayoutCache_h_