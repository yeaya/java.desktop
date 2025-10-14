#ifndef _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_h_
#define _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComboBox$AccessibleJComboBox;
	}
}

namespace javax {
	namespace swing {

class JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener : public ::java::beans::PropertyChangeListener {
	$class(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener();
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::JComboBox$AccessibleJComboBox* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_h_