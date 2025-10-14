#ifndef _javax_swing_JColorChooser$AccessibleJColorChooser_h_
#define _javax_swing_JColorChooser$AccessibleJColorChooser_h_
//$ class javax.swing.JColorChooser$AccessibleJColorChooser
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
	}
}

namespace javax {
	namespace swing {

class $export JColorChooser$AccessibleJColorChooser : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JColorChooser$AccessibleJColorChooser, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JColorChooser$AccessibleJColorChooser();
	void init$(::javax::swing::JColorChooser* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JColorChooser* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JColorChooser$AccessibleJColorChooser_h_