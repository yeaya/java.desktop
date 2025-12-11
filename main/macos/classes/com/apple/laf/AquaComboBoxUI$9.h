#ifndef _com_apple_laf_AquaComboBoxUI$9_h_
#define _com_apple_laf_AquaComboBoxUI$9_h_
//$ class com.apple.laf.AquaComboBoxUI$9
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

class AquaComboBoxUI$9 : public ::javax::swing::AbstractAction {
	$class(AquaComboBoxUI$9, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaComboBoxUI$9();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$9_h_