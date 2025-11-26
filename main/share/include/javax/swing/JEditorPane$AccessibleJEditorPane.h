#ifndef _javax_swing_JEditorPane$AccessibleJEditorPane_h_
#define _javax_swing_JEditorPane$AccessibleJEditorPane_h_
//$ class javax.swing.JEditorPane$AccessibleJEditorPane
//$ extends javax.swing.text.JTextComponent$AccessibleJTextComponent

#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

namespace javax {
	namespace swing {

class $import JEditorPane$AccessibleJEditorPane : public ::javax::swing::text::JTextComponent$AccessibleJTextComponent {
	$class(JEditorPane$AccessibleJEditorPane, $NO_CLASS_INIT, ::javax::swing::text::JTextComponent$AccessibleJTextComponent)
public:
	JEditorPane$AccessibleJEditorPane();
	void init$(::javax::swing::JEditorPane* this$0);
	virtual $String* getAccessibleDescription() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$AccessibleJEditorPane_h_