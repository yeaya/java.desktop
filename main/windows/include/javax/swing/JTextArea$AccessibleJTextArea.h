#ifndef _javax_swing_JTextArea$AccessibleJTextArea_h_
#define _javax_swing_JTextArea$AccessibleJTextArea_h_
//$ class javax.swing.JTextArea$AccessibleJTextArea
//$ extends javax.swing.text.JTextComponent$AccessibleJTextComponent

#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JTextArea;
	}
}

namespace javax {
	namespace swing {

class $import JTextArea$AccessibleJTextArea : public ::javax::swing::text::JTextComponent$AccessibleJTextComponent {
	$class(JTextArea$AccessibleJTextArea, $NO_CLASS_INIT, ::javax::swing::text::JTextComponent$AccessibleJTextComponent)
public:
	JTextArea$AccessibleJTextArea();
	void init$(::javax::swing::JTextArea* this$0);
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JTextArea* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTextArea$AccessibleJTextArea_h_