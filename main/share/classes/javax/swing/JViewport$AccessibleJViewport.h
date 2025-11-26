#ifndef _javax_swing_JViewport$AccessibleJViewport_h_
#define _javax_swing_JViewport$AccessibleJViewport_h_
//$ class javax.swing.JViewport$AccessibleJViewport
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JViewport;
	}
}

namespace javax {
	namespace swing {

class $export JViewport$AccessibleJViewport : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JViewport$AccessibleJViewport, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JViewport$AccessibleJViewport();
	void init$(::javax::swing::JViewport* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JViewport* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JViewport$AccessibleJViewport_h_