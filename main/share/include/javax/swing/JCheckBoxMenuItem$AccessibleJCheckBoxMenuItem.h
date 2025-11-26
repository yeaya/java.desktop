#ifndef _javax_swing_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_h_
#define _javax_swing_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_h_
//$ class javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem
//$ extends javax.swing.JMenuItem$AccessibleJMenuItem

#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JCheckBoxMenuItem;
	}
}

namespace javax {
	namespace swing {

class $import JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem : public ::javax::swing::JMenuItem$AccessibleJMenuItem {
	$class(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, $NO_CLASS_INIT, ::javax::swing::JMenuItem$AccessibleJMenuItem)
public:
	JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem();
	void init$(::javax::swing::JCheckBoxMenuItem* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JCheckBoxMenuItem* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_h_