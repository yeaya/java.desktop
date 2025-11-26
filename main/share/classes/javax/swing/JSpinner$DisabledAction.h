#ifndef _javax_swing_JSpinner$DisabledAction_h_
#define _javax_swing_JSpinner$DisabledAction_h_
//$ class javax.swing.JSpinner$DisabledAction
//$ extends javax.swing.Action

#include <javax/swing/Action.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}

namespace javax {
	namespace swing {

class JSpinner$DisabledAction : public ::javax::swing::Action {
	$class(JSpinner$DisabledAction, $NO_CLASS_INIT, ::javax::swing::Action)
public:
	JSpinner$DisabledAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual $Object* getValue($String* key) override;
	virtual bool isEnabled() override;
	virtual void putValue($String* key, Object$* value) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual void setEnabled(bool b) override;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$DisabledAction_h_