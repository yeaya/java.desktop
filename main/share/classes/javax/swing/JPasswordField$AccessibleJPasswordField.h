#ifndef _javax_swing_JPasswordField$AccessibleJPasswordField_h_
#define _javax_swing_JPasswordField$AccessibleJPasswordField_h_
//$ class javax.swing.JPasswordField$AccessibleJPasswordField
//$ extends javax.swing.JTextField$AccessibleJTextField

#include <javax/swing/JTextField$AccessibleJTextField.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleText;
		class AccessibleTextSequence;
	}
}
namespace javax {
	namespace swing {
		class JPasswordField;
	}
}

namespace javax {
	namespace swing {

class $export JPasswordField$AccessibleJPasswordField : public ::javax::swing::JTextField$AccessibleJTextField {
	$class(JPasswordField$AccessibleJPasswordField, $NO_CLASS_INIT, ::javax::swing::JTextField$AccessibleJTextField)
public:
	JPasswordField$AccessibleJPasswordField();
	void init$(::javax::swing::JPasswordField* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	$String* getEchoString($String* str);
	virtual $String* getTextRange(int32_t startIndex, int32_t endIndex) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAfter(int32_t part, int32_t index) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAt(int32_t part, int32_t index) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceBefore(int32_t part, int32_t index) override;
	::javax::swing::JPasswordField* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JPasswordField$AccessibleJPasswordField_h_