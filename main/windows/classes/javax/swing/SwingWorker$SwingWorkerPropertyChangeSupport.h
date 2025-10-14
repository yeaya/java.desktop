#ifndef _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport_h_
#define _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport_h_
//$ class javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport
//$ extends java.beans.PropertyChangeSupport

#include <java/beans/PropertyChangeSupport.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class SwingWorker;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$SwingWorkerPropertyChangeSupport : public ::java::beans::PropertyChangeSupport {
	$class(SwingWorker$SwingWorkerPropertyChangeSupport, $NO_CLASS_INIT, ::java::beans::PropertyChangeSupport)
public:
	SwingWorker$SwingWorkerPropertyChangeSupport();
	using ::java::beans::PropertyChangeSupport::firePropertyChange;
	void init$(::javax::swing::SwingWorker* this$0, Object$* source);
	virtual void firePropertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::SwingWorker* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport_h_