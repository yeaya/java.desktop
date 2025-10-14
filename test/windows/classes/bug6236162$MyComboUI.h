#ifndef _bug6236162$MyComboUI_h_
#define _bug6236162$MyComboUI_h_
//$ class bug6236162$MyComboUI
//$ extends javax.swing.plaf.metal.MetalComboBoxUI

#include <javax/swing/plaf/metal/MetalComboBoxUI.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class ComboPopup;
			}
		}
	}
}

class bug6236162$MyComboUI : public ::javax::swing::plaf::metal::MetalComboBoxUI {
	$class(bug6236162$MyComboUI, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalComboBoxUI)
public:
	bug6236162$MyComboUI();
	void init$();
	virtual ::javax::swing::plaf::basic::ComboPopup* getComboPopup();
};

#endif // _bug6236162$MyComboUI_h_