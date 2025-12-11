#ifndef _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField$1_h_
#define _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField$1_h_
//$ class com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
			class AquaComboBoxUI$AquaCustomComboTextField;
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
namespace javax {
	namespace swing {
		class Action;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$AquaCustomComboTextField$1 : public ::javax::swing::AbstractAction {
	$class(AquaComboBoxUI$AquaCustomComboTextField$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaComboBoxUI$AquaCustomComboTextField$1();
	void init$(::com::apple::laf::AquaComboBoxUI$AquaCustomComboTextField* this$1, ::com::apple::laf::AquaComboBoxUI* val$this$0, ::javax::swing::Action* val$action);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::apple::laf::AquaComboBoxUI$AquaCustomComboTextField* this$1 = nullptr;
	::javax::swing::Action* val$action = nullptr;
	::com::apple::laf::AquaComboBoxUI* val$this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField$1_h_