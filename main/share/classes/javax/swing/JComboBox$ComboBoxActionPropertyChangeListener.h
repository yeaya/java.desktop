#ifndef _javax_swing_JComboBox$ComboBoxActionPropertyChangeListener_h_
#define _javax_swing_JComboBox$ComboBoxActionPropertyChangeListener_h_
//$ class javax.swing.JComboBox$ComboBoxActionPropertyChangeListener
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
		class JComboBox;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class JComboBox$ComboBoxActionPropertyChangeListener : public ::javax::swing::ActionPropertyChangeListener {
	$class(JComboBox$ComboBoxActionPropertyChangeListener, $NO_CLASS_INIT, ::javax::swing::ActionPropertyChangeListener)
public:
	JComboBox$ComboBoxActionPropertyChangeListener();
	void init$(::javax::swing::JComboBox* b, ::javax::swing::Action* a);
	virtual void actionPropertyChanged(::javax::swing::JComboBox* cb, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e);
	virtual void actionPropertyChanged(::javax::swing::JComponent* cb, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$ComboBoxActionPropertyChangeListener_h_