#ifndef _javax_swing_JEditorPane$AccessibleJEditorPaneHTML_h_
#define _javax_swing_JEditorPane$AccessibleJEditorPaneHTML_h_
//$ class javax.swing.JEditorPane$AccessibleJEditorPaneHTML
//$ extends javax.swing.JEditorPane$AccessibleJEditorPane

#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleContext;
		class AccessibleText;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

namespace javax {
	namespace swing {

class $export JEditorPane$AccessibleJEditorPaneHTML : public ::javax::swing::JEditorPane$AccessibleJEditorPane {
	$class(JEditorPane$AccessibleJEditorPaneHTML, $NO_CLASS_INIT, ::javax::swing::JEditorPane$AccessibleJEditorPane)
public:
	JEditorPane$AccessibleJEditorPaneHTML();
	void init$(::javax::swing::JEditorPane* this$0);
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$AccessibleJEditorPaneHTML_h_