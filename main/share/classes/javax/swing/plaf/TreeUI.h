#ifndef _javax_swing_plaf_TreeUI_h_
#define _javax_swing_plaf_TreeUI_h_
//$ class javax.swing.plaf.TreeUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JTree;
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
		namespace plaf {

class $export TreeUI : public ::javax::swing::plaf::ComponentUI {
	$class(TreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	TreeUI();
	void init$();
	virtual void cancelEditing(::javax::swing::JTree* tree) {}
	virtual ::javax::swing::tree::TreePath* getClosestPathForLocation(::javax::swing::JTree* tree, int32_t x, int32_t y) {return nullptr;}
	virtual ::javax::swing::tree::TreePath* getEditingPath(::javax::swing::JTree* tree) {return nullptr;}
	virtual ::java::awt::Rectangle* getPathBounds(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) {return nullptr;}
	virtual ::javax::swing::tree::TreePath* getPathForRow(::javax::swing::JTree* tree, int32_t row) {return nullptr;}
	virtual int32_t getRowCount(::javax::swing::JTree* tree) {return 0;}
	virtual int32_t getRowForPath(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) {return 0;}
	virtual bool isEditing(::javax::swing::JTree* tree) {return false;}
	virtual void startEditingAtPath(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) {}
	virtual bool stopEditing(::javax::swing::JTree* tree) {return false;}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_TreeUI_h_