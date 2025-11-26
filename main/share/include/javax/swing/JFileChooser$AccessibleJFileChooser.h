#ifndef _javax_swing_JFileChooser$AccessibleJFileChooser_h_
#define _javax_swing_JFileChooser$AccessibleJFileChooser_h_
//$ class javax.swing.JFileChooser$AccessibleJFileChooser
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

namespace javax {
	namespace swing {

class $import JFileChooser$AccessibleJFileChooser : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JFileChooser$AccessibleJFileChooser, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JFileChooser$AccessibleJFileChooser();
	void init$(::javax::swing::JFileChooser* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::JFileChooser* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFileChooser$AccessibleJFileChooser_h_