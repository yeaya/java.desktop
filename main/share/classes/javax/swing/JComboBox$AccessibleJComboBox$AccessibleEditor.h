#ifndef _javax_swing_JComboBox$AccessibleJComboBox$AccessibleEditor_h_
#define _javax_swing_JComboBox$AccessibleJComboBox$AccessibleEditor_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor
//$ extends javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JComboBox$AccessibleJComboBox;
	}
}

namespace javax {
	namespace swing {

class JComboBox$AccessibleJComboBox$AccessibleEditor : public ::javax::accessibility::Accessible {
	$class(JComboBox$AccessibleJComboBox$AccessibleEditor, $NO_CLASS_INIT, ::javax::accessibility::Accessible)
public:
	JComboBox$AccessibleJComboBox$AccessibleEditor();
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::javax::swing::JComboBox$AccessibleJComboBox* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox$AccessibleEditor_h_