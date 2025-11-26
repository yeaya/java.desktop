#ifndef _javax_swing_JButton$AccessibleJButton_h_
#define _javax_swing_JButton$AccessibleJButton_h_
//$ class javax.swing.JButton$AccessibleJButton
//$ extends javax.swing.AbstractButton$AccessibleAbstractButton

#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}

namespace javax {
	namespace swing {

class $import JButton$AccessibleJButton : public ::javax::swing::AbstractButton$AccessibleAbstractButton {
	$class(JButton$AccessibleJButton, $NO_CLASS_INIT, ::javax::swing::AbstractButton$AccessibleAbstractButton)
public:
	JButton$AccessibleJButton();
	void init$(::javax::swing::JButton* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JButton$AccessibleJButton_h_