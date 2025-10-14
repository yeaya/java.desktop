#ifndef _javax_swing_JDialog$AccessibleJDialog_h_
#define _javax_swing_JDialog$AccessibleJDialog_h_
//$ class javax.swing.JDialog$AccessibleJDialog
//$ extends java.awt.Dialog$AccessibleAWTDialog

#include <java/awt/Dialog$AccessibleAWTDialog.h>

namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

namespace javax {
	namespace swing {

class $export JDialog$AccessibleJDialog : public ::java::awt::Dialog$AccessibleAWTDialog {
	$class(JDialog$AccessibleJDialog, $NO_CLASS_INIT, ::java::awt::Dialog$AccessibleAWTDialog)
public:
	JDialog$AccessibleJDialog();
	void init$(::javax::swing::JDialog* this$0);
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JDialog* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JDialog$AccessibleJDialog_h_