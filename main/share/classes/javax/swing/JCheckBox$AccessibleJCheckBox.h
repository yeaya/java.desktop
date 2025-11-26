#ifndef _javax_swing_JCheckBox$AccessibleJCheckBox_h_
#define _javax_swing_JCheckBox$AccessibleJCheckBox_h_
//$ class javax.swing.JCheckBox$AccessibleJCheckBox
//$ extends javax.swing.JToggleButton$AccessibleJToggleButton

#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
	}
}

namespace javax {
	namespace swing {

class $export JCheckBox$AccessibleJCheckBox : public ::javax::swing::JToggleButton$AccessibleJToggleButton {
	$class(JCheckBox$AccessibleJCheckBox, $NO_CLASS_INIT, ::javax::swing::JToggleButton$AccessibleJToggleButton)
public:
	JCheckBox$AccessibleJCheckBox();
	void init$(::javax::swing::JCheckBox* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JCheckBox* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JCheckBox$AccessibleJCheckBox_h_