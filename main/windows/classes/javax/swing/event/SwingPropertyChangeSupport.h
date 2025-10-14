#ifndef _javax_swing_event_SwingPropertyChangeSupport_h_
#define _javax_swing_event_SwingPropertyChangeSupport_h_
//$ class javax.swing.event.SwingPropertyChangeSupport
//$ extends java.beans.PropertyChangeSupport

#include <java/beans/PropertyChangeSupport.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export SwingPropertyChangeSupport : public ::java::beans::PropertyChangeSupport {
	$class(SwingPropertyChangeSupport, $NO_CLASS_INIT, ::java::beans::PropertyChangeSupport)
public:
	SwingPropertyChangeSupport();
	using ::java::beans::PropertyChangeSupport::firePropertyChange;
	void init$(Object$* sourceBean);
	void init$(Object$* sourceBean, bool notifyOnEDT);
	virtual void firePropertyChange(::java::beans::PropertyChangeEvent* evt) override;
	bool isNotifyOnEDT();
	static const int64_t serialVersionUID = (int64_t)0x6366C23E8F83118C;
	bool notifyOnEDT = false;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_SwingPropertyChangeSupport_h_