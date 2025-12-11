#ifndef _com_apple_laf_AquaComboBoxUI$10_h_
#define _com_apple_laf_AquaComboBoxUI$10_h_
//$ class com.apple.laf.AquaComboBoxUI$10
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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

class AquaComboBoxUI$10 : public ::javax::swing::AbstractAction {
	$class(AquaComboBoxUI$10, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaComboBoxUI$10();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$10_h_