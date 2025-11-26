#ifndef _javax_swing_JLayer$1_h_
#define _javax_swing_JLayer$1_h_
//$ class javax.swing.JLayer$1
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JLayer;
	}
}

namespace javax {
	namespace swing {

class JLayer$1 : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JLayer$1, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JLayer$1();
	void init$(::javax::swing::JLayer* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JLayer* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JLayer$1_h_