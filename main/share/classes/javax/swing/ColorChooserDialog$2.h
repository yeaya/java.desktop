#ifndef _javax_swing_ColorChooserDialog$2_h_
#define _javax_swing_ColorChooserDialog$2_h_
//$ class javax.swing.ColorChooserDialog$2
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ColorChooserDialog;
	}
}

namespace javax {
	namespace swing {

class ColorChooserDialog$2 : public ::javax::swing::AbstractAction {
	$class(ColorChooserDialog$2, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	ColorChooserDialog$2();
	void init$(::javax::swing::ColorChooserDialog* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::ColorChooserDialog* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ColorChooserDialog$2_h_