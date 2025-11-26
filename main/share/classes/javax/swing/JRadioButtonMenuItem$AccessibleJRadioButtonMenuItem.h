#ifndef _javax_swing_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_h_
#define _javax_swing_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_h_
//$ class javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem
//$ extends javax.swing.JMenuItem$AccessibleJMenuItem

#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JRadioButtonMenuItem;
	}
}

namespace javax {
	namespace swing {

class $export JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem : public ::javax::swing::JMenuItem$AccessibleJMenuItem {
	$class(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, $NO_CLASS_INIT, ::javax::swing::JMenuItem$AccessibleJMenuItem)
public:
	JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem();
	void init$(::javax::swing::JRadioButtonMenuItem* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JRadioButtonMenuItem* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_h_