#ifndef _javax_swing_tree_RowMapper_h_
#define _javax_swing_tree_RowMapper_h_
//$ interface javax.swing.tree.RowMapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export RowMapper : public ::java::lang::Object {
	$interface(RowMapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ints* getRowsForPaths($Array<::javax::swing::tree::TreePath>* path) {return nullptr;}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_RowMapper_h_