#ifndef _javax_swing_JInternalFrame$FocusPropertyChangeListener_h_
#define _javax_swing_JInternalFrame$FocusPropertyChangeListener_h_
//$ class javax.swing.JInternalFrame$FocusPropertyChangeListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace javax {
	namespace swing {

class JInternalFrame$FocusPropertyChangeListener : public ::java::beans::PropertyChangeListener {
	$class(JInternalFrame$FocusPropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JInternalFrame$FocusPropertyChangeListener();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_JInternalFrame$FocusPropertyChangeListener_h_