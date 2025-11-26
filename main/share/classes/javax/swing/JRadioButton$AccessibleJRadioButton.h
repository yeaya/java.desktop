#ifndef _javax_swing_JRadioButton$AccessibleJRadioButton_h_
#define _javax_swing_JRadioButton$AccessibleJRadioButton_h_
//$ class javax.swing.JRadioButton$AccessibleJRadioButton
//$ extends javax.swing.JToggleButton$AccessibleJToggleButton

#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JRadioButton;
	}
}

namespace javax {
	namespace swing {

class $export JRadioButton$AccessibleJRadioButton : public ::javax::swing::JToggleButton$AccessibleJToggleButton {
	$class(JRadioButton$AccessibleJRadioButton, $NO_CLASS_INIT, ::javax::swing::JToggleButton$AccessibleJToggleButton)
public:
	JRadioButton$AccessibleJRadioButton();
	void init$(::javax::swing::JRadioButton* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JRadioButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JRadioButton$AccessibleJRadioButton_h_