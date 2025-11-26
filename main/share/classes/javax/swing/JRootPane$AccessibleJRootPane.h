#ifndef _javax_swing_JRootPane$AccessibleJRootPane_h_
#define _javax_swing_JRootPane$AccessibleJRootPane_h_
//$ class javax.swing.JRootPane$AccessibleJRootPane
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace javax {
	namespace swing {

class $export JRootPane$AccessibleJRootPane : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JRootPane$AccessibleJRootPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JRootPane$AccessibleJRootPane();
	void init$(::javax::swing::JRootPane* this$0);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JRootPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JRootPane$AccessibleJRootPane_h_