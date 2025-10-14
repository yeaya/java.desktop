#ifndef _javax_swing_JToolBar$AccessibleJToolBar_h_
#define _javax_swing_JToolBar$AccessibleJToolBar_h_
//$ class javax.swing.JToolBar$AccessibleJToolBar
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JToolBar;
	}
}

namespace javax {
	namespace swing {

class $export JToolBar$AccessibleJToolBar : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JToolBar$AccessibleJToolBar, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JToolBar$AccessibleJToolBar();
	void init$(::javax::swing::JToolBar* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JToolBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolBar$AccessibleJToolBar_h_