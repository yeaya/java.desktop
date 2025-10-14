#ifndef _javax_swing_JTextField$NotifyAction_h_
#define _javax_swing_JTextField$NotifyAction_h_
//$ class javax.swing.JTextField$NotifyAction
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

class $export JTextField$NotifyAction : public ::javax::swing::text::TextAction {
	$class(JTextField$NotifyAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	JTextField$NotifyAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
};

	} // swing
} // javax

#endif // _javax_swing_JTextField$NotifyAction_h_