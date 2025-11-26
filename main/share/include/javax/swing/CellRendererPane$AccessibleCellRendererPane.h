#ifndef _javax_swing_CellRendererPane$AccessibleCellRendererPane_h_
#define _javax_swing_CellRendererPane$AccessibleCellRendererPane_h_
//$ class javax.swing.CellRendererPane$AccessibleCellRendererPane
//$ extends java.awt.Container$AccessibleAWTContainer

#include <java/awt/Container$AccessibleAWTContainer.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class CellRendererPane;
	}
}

namespace javax {
	namespace swing {

class $import CellRendererPane$AccessibleCellRendererPane : public ::java::awt::Container$AccessibleAWTContainer {
	$class(CellRendererPane$AccessibleCellRendererPane, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer)
public:
	CellRendererPane$AccessibleCellRendererPane();
	void init$(::javax::swing::CellRendererPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::CellRendererPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_CellRendererPane$AccessibleCellRendererPane_h_