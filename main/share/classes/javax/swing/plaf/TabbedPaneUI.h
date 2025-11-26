#ifndef _javax_swing_plaf_TabbedPaneUI_h_
#define _javax_swing_plaf_TabbedPaneUI_h_
//$ class javax.swing.plaf.TabbedPaneUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JTabbedPane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export TabbedPaneUI : public ::javax::swing::plaf::ComponentUI {
	$class(TabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	TabbedPaneUI();
	void init$();
	virtual ::java::awt::Rectangle* getTabBounds(::javax::swing::JTabbedPane* pane, int32_t index) {return nullptr;}
	virtual int32_t getTabRunCount(::javax::swing::JTabbedPane* pane) {return 0;}
	virtual int32_t tabForCoordinate(::javax::swing::JTabbedPane* pane, int32_t x, int32_t y) {return 0;}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_TabbedPaneUI_h_