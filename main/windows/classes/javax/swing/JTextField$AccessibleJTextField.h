#ifndef _javax_swing_JTextField$AccessibleJTextField_h_
#define _javax_swing_JTextField$AccessibleJTextField_h_
//$ class javax.swing.JTextField$AccessibleJTextField
//$ extends javax.swing.text.JTextComponent$AccessibleJTextComponent

#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JTextField;
	}
}

namespace javax {
	namespace swing {

class $export JTextField$AccessibleJTextField : public ::javax::swing::text::JTextComponent$AccessibleJTextComponent {
	$class(JTextField$AccessibleJTextField, $NO_CLASS_INIT, ::javax::swing::text::JTextComponent$AccessibleJTextComponent)
public:
	JTextField$AccessibleJTextField();
	void init$(::javax::swing::JTextField* this$0);
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JTextField* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTextField$AccessibleJTextField_h_