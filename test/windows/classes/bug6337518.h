#ifndef _bug6337518_h_
#define _bug6337518_h_
//$ class bug6337518
//$ extends javax.swing.plaf.basic.BasicComboBoxUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

namespace javax {
	namespace swing {
		class JButton;
	}
}

class $export bug6337518 : public ::javax::swing::plaf::basic::BasicComboBoxUI {
	$class(bug6337518, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI)
public:
	bug6337518();
	void init$();
	virtual ::javax::swing::JButton* createArrowButton() override;
	static void main($StringArray* args);
};

#endif // _bug6337518_h_