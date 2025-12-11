#ifndef _com_apple_laf_AquaListUI$AquaHomeEndAction_h_
#define _com_apple_laf_AquaListUI$AquaHomeEndAction_h_
//$ class com.apple.laf.AquaListUI$AquaHomeEndAction
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

class AquaListUI$AquaHomeEndAction : public ::javax::swing::AbstractAction {
	$class(AquaListUI$AquaHomeEndAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaListUI$AquaHomeEndAction();
	void init$(bool isHomeAction);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool fHomeAction = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI$AquaHomeEndAction_h_