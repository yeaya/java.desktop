#ifndef _javax_swing_JPanel$AccessibleJPanel_h_
#define _javax_swing_JPanel$AccessibleJPanel_h_
//$ class javax.swing.JPanel$AccessibleJPanel
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JPanel;
	}
}

namespace javax {
	namespace swing {

class $export JPanel$AccessibleJPanel : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JPanel$AccessibleJPanel, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JPanel$AccessibleJPanel();
	void init$(::javax::swing::JPanel* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JPanel* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JPanel$AccessibleJPanel_h_