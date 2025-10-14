#ifndef _javax_swing_JOptionPane$AccessibleJOptionPane_h_
#define _javax_swing_JOptionPane$AccessibleJOptionPane_h_
//$ class javax.swing.JOptionPane$AccessibleJOptionPane
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {

class $export JOptionPane$AccessibleJOptionPane : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JOptionPane$AccessibleJOptionPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JOptionPane$AccessibleJOptionPane();
	void init$(::javax::swing::JOptionPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JOptionPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$AccessibleJOptionPane_h_