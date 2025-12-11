#ifndef _com_apple_laf_AquaComboBoxUI$ComboBoxAction_h_
#define _com_apple_laf_AquaComboBoxUI$ComboBoxAction_h_
//$ class com.apple.laf.AquaComboBoxUI$ComboBoxAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$ComboBoxAction : public ::javax::swing::AbstractAction {
	$class(AquaComboBoxUI$ComboBoxAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaComboBoxUI$ComboBoxAction();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void performComboBoxAction(::com::apple::laf::AquaComboBoxUI* ui) {}
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$ComboBoxAction_h_