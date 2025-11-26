#ifndef _javax_swing_plaf_multi_MultiTreeUI_h_
#define _javax_swing_plaf_multi_MultiTreeUI_h_
//$ class javax.swing.plaf.multi.MultiTreeUI
//$ extends javax.swing.plaf.TreeUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/TreeUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
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
			namespace multi {

class $export MultiTreeUI : public ::javax::swing::plaf::TreeUI {
	$class(MultiTreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::TreeUI)
public:
	MultiTreeUI();
	void init$();
	virtual void cancelEditing(::javax::swing::JTree* a) override;
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual ::javax::swing::tree::TreePath* getClosestPathForLocation(::javax::swing::JTree* a, int32_t b, int32_t c) override;
	virtual ::javax::swing::tree::TreePath* getEditingPath(::javax::swing::JTree* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Rectangle* getPathBounds(::javax::swing::JTree* a, ::javax::swing::tree::TreePath* b) override;
	virtual ::javax::swing::tree::TreePath* getPathForRow(::javax::swing::JTree* a, int32_t b) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual int32_t getRowCount(::javax::swing::JTree* a) override;
	virtual int32_t getRowForPath(::javax::swing::JTree* a, ::javax::swing::tree::TreePath* b) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual bool isEditing(::javax::swing::JTree* a) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void startEditingAtPath(::javax::swing::JTree* a, ::javax::swing::tree::TreePath* b) override;
	virtual bool stopEditing(::javax::swing::JTree* a) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiTreeUI_h_