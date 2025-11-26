#ifndef _javax_swing_JToolTip$AccessibleJToolTip_h_
#define _javax_swing_JToolTip$AccessibleJToolTip_h_
//$ class javax.swing.JToolTip$AccessibleJToolTip
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JToolTip;
	}
}

namespace javax {
	namespace swing {

class $export JToolTip$AccessibleJToolTip : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JToolTip$AccessibleJToolTip, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JToolTip$AccessibleJToolTip();
	void init$(::javax::swing::JToolTip* this$0);
	virtual $String* getAccessibleDescription() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JToolTip* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolTip$AccessibleJToolTip_h_