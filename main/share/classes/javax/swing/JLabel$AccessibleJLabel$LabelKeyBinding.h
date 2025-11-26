#ifndef _javax_swing_JLabel$AccessibleJLabel$LabelKeyBinding_h_
#define _javax_swing_JLabel$AccessibleJLabel$LabelKeyBinding_h_
//$ class javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding
//$ extends javax.accessibility.AccessibleKeyBinding

#include <javax/accessibility/AccessibleKeyBinding.h>

namespace javax {
	namespace swing {
		class JLabel$AccessibleJLabel;
	}
}

namespace javax {
	namespace swing {

class $export JLabel$AccessibleJLabel$LabelKeyBinding : public ::javax::accessibility::AccessibleKeyBinding {
	$class(JLabel$AccessibleJLabel$LabelKeyBinding, $NO_CLASS_INIT, ::javax::accessibility::AccessibleKeyBinding)
public:
	JLabel$AccessibleJLabel$LabelKeyBinding();
	void init$(::javax::swing::JLabel$AccessibleJLabel* this$1, int32_t mnemonic);
	virtual $Object* getAccessibleKeyBinding(int32_t i) override;
	virtual int32_t getAccessibleKeyBindingCount() override;
	::javax::swing::JLabel$AccessibleJLabel* this$1 = nullptr;
	int32_t mnemonic = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JLabel$AccessibleJLabel$LabelKeyBinding_h_