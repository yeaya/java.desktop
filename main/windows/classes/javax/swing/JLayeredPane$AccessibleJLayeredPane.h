#ifndef _javax_swing_JLayeredPane$AccessibleJLayeredPane_h_
#define _javax_swing_JLayeredPane$AccessibleJLayeredPane_h_
//$ class javax.swing.JLayeredPane$AccessibleJLayeredPane
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JLayeredPane;
	}
}

namespace javax {
	namespace swing {

class $export JLayeredPane$AccessibleJLayeredPane : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JLayeredPane$AccessibleJLayeredPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JLayeredPane$AccessibleJLayeredPane();
	void init$(::javax::swing::JLayeredPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JLayeredPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JLayeredPane$AccessibleJLayeredPane_h_