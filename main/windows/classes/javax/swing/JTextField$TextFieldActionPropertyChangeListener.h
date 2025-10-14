#ifndef _javax_swing_JTextField$TextFieldActionPropertyChangeListener_h_
#define _javax_swing_JTextField$TextFieldActionPropertyChangeListener_h_
//$ class javax.swing.JTextField$TextFieldActionPropertyChangeListener
//$ extends javax.swing.ActionPropertyChangeListener

#include <javax/swing/ActionPropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JComponent;
		class JTextField;
	}
}

namespace javax {
	namespace swing {

class JTextField$TextFieldActionPropertyChangeListener : public ::javax::swing::ActionPropertyChangeListener {
	$class(JTextField$TextFieldActionPropertyChangeListener, $NO_CLASS_INIT, ::javax::swing::ActionPropertyChangeListener)
public:
	JTextField$TextFieldActionPropertyChangeListener();
	void init$(::javax::swing::JTextField* tf, ::javax::swing::Action* a);
	virtual void actionPropertyChanged(::javax::swing::JTextField* textField, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e);
	virtual void actionPropertyChanged(::javax::swing::JComponent* textField, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_JTextField$TextFieldActionPropertyChangeListener_h_