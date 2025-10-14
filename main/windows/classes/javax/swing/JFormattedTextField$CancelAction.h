#ifndef _javax_swing_JFormattedTextField$CancelAction_h_
#define _javax_swing_JFormattedTextField$CancelAction_h_
//$ class javax.swing.JFormattedTextField$CancelAction
//$ extends javax.swing.text.TextAction

#include <javax/swing/text/TextAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JFormattedTextField$CancelAction : public ::javax::swing::text::TextAction {
	$class(JFormattedTextField$CancelAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	JFormattedTextField$CancelAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$CancelAction_h_