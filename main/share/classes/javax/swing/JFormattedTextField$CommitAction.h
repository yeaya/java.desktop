#ifndef _javax_swing_JFormattedTextField$CommitAction_h_
#define _javax_swing_JFormattedTextField$CommitAction_h_
//$ class javax.swing.JFormattedTextField$CommitAction
//$ extends javax.swing.JTextField$NotifyAction

#include <javax/swing/JTextField$NotifyAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $export JFormattedTextField$CommitAction : public ::javax::swing::JTextField$NotifyAction {
	$class(JFormattedTextField$CommitAction, $NO_CLASS_INIT, ::javax::swing::JTextField$NotifyAction)
public:
	JFormattedTextField$CommitAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$CommitAction_h_