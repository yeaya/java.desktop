#ifndef _javax_swing_plaf_ComboBoxUI_h_
#define _javax_swing_plaf_ComboBoxUI_h_
//$ class javax.swing.plaf.ComboBoxUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import ComboBoxUI : public ::javax::swing::plaf::ComponentUI {
	$class(ComboBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	ComboBoxUI();
	void init$();
	virtual bool isFocusTraversable(::javax::swing::JComboBox* c) {return false;}
	virtual bool isPopupVisible(::javax::swing::JComboBox* c) {return false;}
	virtual void setPopupVisible(::javax::swing::JComboBox* c, bool v) {}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_ComboBoxUI_h_