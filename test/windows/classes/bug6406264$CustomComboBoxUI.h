#ifndef _bug6406264$CustomComboBoxUI_h_
#define _bug6406264$CustomComboBoxUI_h_
//$ class bug6406264$CustomComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI

#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

class bug6406264;
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class ComboPopup;
			}
		}
	}
}

class bug6406264$CustomComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI {
	$class(bug6406264$CustomComboBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI)
public:
	bug6406264$CustomComboBoxUI();
	void init$(::bug6406264* this$0);
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	::bug6406264* this$0 = nullptr;
};

#endif // _bug6406264$CustomComboBoxUI_h_