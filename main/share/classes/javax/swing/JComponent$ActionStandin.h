#ifndef _javax_swing_JComponent$ActionStandin_h_
#define _javax_swing_JComponent$ActionStandin_h_
//$ class javax.swing.JComponent$ActionStandin
//$ extends javax.swing.Action

#include <javax/swing/Action.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
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
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class $export JComponent$ActionStandin : public ::javax::swing::Action {
	$class(JComponent$ActionStandin, $NO_CLASS_INIT, ::javax::swing::Action)
public:
	JComponent$ActionStandin();
	void init$(::javax::swing::JComponent* this$0, ::java::awt::event::ActionListener* actionListener, $String* command);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual $Object* getValue($String* key) override;
	virtual bool isEnabled() override;
	virtual void putValue($String* key, Object$* value) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setEnabled(bool b) override;
	::javax::swing::JComponent* this$0 = nullptr;
	::java::awt::event::ActionListener* actionListener = nullptr;
	$String* command = nullptr;
	::javax::swing::Action* action = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$ActionStandin_h_