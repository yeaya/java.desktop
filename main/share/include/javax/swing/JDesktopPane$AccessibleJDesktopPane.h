#ifndef _javax_swing_JDesktopPane$AccessibleJDesktopPane_h_
#define _javax_swing_JDesktopPane$AccessibleJDesktopPane_h_
//$ class javax.swing.JDesktopPane$AccessibleJDesktopPane
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
	}
}

namespace javax {
	namespace swing {

class $import JDesktopPane$AccessibleJDesktopPane : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JDesktopPane$AccessibleJDesktopPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JDesktopPane$AccessibleJDesktopPane();
	void init$(::javax::swing::JDesktopPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JDesktopPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JDesktopPane$AccessibleJDesktopPane_h_