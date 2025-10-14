#ifndef _javax_swing_tree_TreeSelectionModel_h_
#define _javax_swing_tree_TreeSelectionModel_h_
//$ interface javax.swing.tree.TreeSelectionModel
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONTIGUOUS_TREE_SELECTION")
#undef CONTIGUOUS_TREE_SELECTION
#pragma push_macro("DISCONTIGUOUS_TREE_SELECTION")
#undef DISCONTIGUOUS_TREE_SELECTION
#pragma push_macro("SINGLE_TREE_SELECTION")
#undef SINGLE_TREE_SELECTION

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class RowMapper;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import TreeSelectionModel : public ::java::lang::Object {
	$interface(TreeSelectionModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void addSelectionPath(::javax::swing::tree::TreePath* path) {}
	virtual void addSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) {}
	virtual void addTreeSelectionListener(::javax::swing::event::TreeSelectionListener* x) {}
	virtual void clearSelection() {}
	virtual ::javax::swing::tree::TreePath* getLeadSelectionPath() {return nullptr;}
	virtual int32_t getLeadSelectionRow() {return 0;}
	virtual int32_t getMaxSelectionRow() {return 0;}
	virtual int32_t getMinSelectionRow() {return 0;}
	virtual ::javax::swing::tree::RowMapper* getRowMapper() {return nullptr;}
	virtual int32_t getSelectionCount() {return 0;}
	virtual int32_t getSelectionMode() {return 0;}
	virtual ::javax::swing::tree::TreePath* getSelectionPath() {return nullptr;}
	virtual $Array<::javax::swing::tree::TreePath>* getSelectionPaths() {return nullptr;}
	virtual $ints* getSelectionRows() {return nullptr;}
	virtual bool isPathSelected(::javax::swing::tree::TreePath* path) {return false;}
	virtual bool isRowSelected(int32_t row) {return false;}
	virtual bool isSelectionEmpty() {return false;}
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void removeSelectionPath(::javax::swing::tree::TreePath* path) {}
	virtual void removeSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) {}
	virtual void removeTreeSelectionListener(::javax::swing::event::TreeSelectionListener* x) {}
	virtual void resetRowSelection() {}
	virtual void setRowMapper(::javax::swing::tree::RowMapper* newMapper) {}
	virtual void setSelectionMode(int32_t mode) {}
	virtual void setSelectionPath(::javax::swing::tree::TreePath* path) {}
	virtual void setSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) {}
	static const int32_t SINGLE_TREE_SELECTION = 1;
	static const int32_t CONTIGUOUS_TREE_SELECTION = 2;
	static const int32_t DISCONTIGUOUS_TREE_SELECTION = 4;
};

		} // tree
	} // swing
} // javax

#pragma pop_macro("CONTIGUOUS_TREE_SELECTION")
#pragma pop_macro("DISCONTIGUOUS_TREE_SELECTION")
#pragma pop_macro("SINGLE_TREE_SELECTION")

#endif // _javax_swing_tree_TreeSelectionModel_h_