#ifndef _javax_swing_tree_PathPlaceHolder_h_
#define _javax_swing_tree_PathPlaceHolder_h_
//$ class javax.swing.tree.PathPlaceHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class PathPlaceHolder : public ::java::lang::Object {
	$class(PathPlaceHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PathPlaceHolder();
	void init$(::javax::swing::tree::TreePath* path, bool isNew);
	bool isNew = false;
	::javax::swing::tree::TreePath* path = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_PathPlaceHolder_h_