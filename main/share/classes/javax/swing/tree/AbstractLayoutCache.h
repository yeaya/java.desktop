#ifndef _javax_swing_tree_AbstractLayoutCache_h_
#define _javax_swing_tree_AbstractLayoutCache_h_
//$ class javax.swing.tree.AbstractLayoutCache
//$ extends javax.swing.tree.RowMapper

#include <java/lang/Array.h>
#include <javax/swing/tree/RowMapper.h>

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
			class TreeSelectionModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export AbstractLayoutCache : public ::javax::swing::tree::RowMapper {
	$class(AbstractLayoutCache, $NO_CLASS_INIT, ::javax::swing::tree::RowMapper)
public:
	AbstractLayoutCache();
	void init$();
	virtual ::java::awt::Rectangle* getBounds(::javax::swing::tree::TreePath* path, ::java::awt::Rectangle* placeIn) {return nullptr;}
	virtual bool getExpandedState(::javax::swing::tree::TreePath* path) {return false;}
	virtual ::javax::swing::tree::TreeModel* getModel();
	virtual ::javax::swing::tree::AbstractLayoutCache$NodeDimensions* getNodeDimensions();
	virtual ::java::awt::Rectangle* getNodeDimensions(Object$* value, int32_t row, int32_t depth, bool expanded, ::java::awt::Rectangle* placeIn);
	virtual ::javax::swing::tree::TreePath* getPathClosestTo(int32_t x, int32_t y) {return nullptr;}
	virtual ::javax::swing::tree::TreePath* getPathForRow(int32_t row) {return nullptr;}
	virtual int32_t getPreferredHeight();
	virtual int32_t getPreferredWidth(::java::awt::Rectangle* bounds);
	virtual int32_t getRowCount() {return 0;}
	virtual int32_t getRowForPath(::javax::swing::tree::TreePath* path) {return 0;}
	virtual int32_t getRowHeight();
	virtual $ints* getRowsForPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	virtual ::javax::swing::tree::TreeSelectionModel* getSelectionModel();
	virtual int32_t getVisibleChildCount(::javax::swing::tree::TreePath* path) {return 0;}
	virtual ::java::util::Enumeration* getVisiblePathsFrom(::javax::swing::tree::TreePath* path) {return nullptr;}
	virtual void invalidatePathBounds(::javax::swing::tree::TreePath* path) {}
	virtual void invalidateSizes() {}
	virtual bool isExpanded(::javax::swing::tree::TreePath* path) {return false;}
	virtual bool isFixedRowHeight();
	virtual bool isRootVisible();
	virtual void setExpandedState(::javax::swing::tree::TreePath* path, bool isExpanded) {}
	virtual void setModel(::javax::swing::tree::TreeModel* newModel);
	virtual void setNodeDimensions(::javax::swing::tree::AbstractLayoutCache$NodeDimensions* nd);
	virtual void setRootVisible(bool rootVisible);
	virtual void setRowHeight(int32_t rowHeight);
	virtual void setSelectionModel(::javax::swing::tree::TreeSelectionModel* newLSM);
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) {}
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) {}
	::javax::swing::tree::AbstractLayoutCache$NodeDimensions* nodeDimensions = nullptr;
	::javax::swing::tree::TreeModel* treeModel = nullptr;
	::javax::swing::tree::TreeSelectionModel* treeSelectionModel = nullptr;
	bool rootVisible = false;
	int32_t rowHeight = 0;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_AbstractLayoutCache_h_