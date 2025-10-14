#ifndef _javax_swing_plaf_OptionPaneUI_h_
#define _javax_swing_plaf_OptionPaneUI_h_
//$ class javax.swing.plaf.OptionPaneUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace javax {
	namespace swing {
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export OptionPaneUI : public ::javax::swing::plaf::ComponentUI {
	$class(OptionPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	OptionPaneUI();
	void init$();
	virtual bool containsCustomComponents(::javax::swing::JOptionPane* op) {return false;}
	virtual void selectInitialValue(::javax::swing::JOptionPane* op) {}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_OptionPaneUI_h_