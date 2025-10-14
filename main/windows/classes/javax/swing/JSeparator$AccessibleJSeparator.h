#ifndef _javax_swing_JSeparator$AccessibleJSeparator_h_
#define _javax_swing_JSeparator$AccessibleJSeparator_h_
//$ class javax.swing.JSeparator$AccessibleJSeparator
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JSeparator;
	}
}

namespace javax {
	namespace swing {

class $export JSeparator$AccessibleJSeparator : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JSeparator$AccessibleJSeparator, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JSeparator$AccessibleJSeparator();
	void init$(::javax::swing::JSeparator* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JSeparator* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSeparator$AccessibleJSeparator_h_