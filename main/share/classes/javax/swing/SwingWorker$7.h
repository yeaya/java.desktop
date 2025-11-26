#ifndef _javax_swing_SwingWorker$7_h_
#define _javax_swing_SwingWorker$7_h_
//$ class javax.swing.SwingWorker$7
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

namespace javax {
	namespace swing {

class SwingWorker$7 : public ::java::beans::PropertyChangeListener {
	$class(SwingWorker$7, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	SwingWorker$7();
	void init$(::java::util::concurrent::ExecutorService* val$es);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	::java::util::concurrent::ExecutorService* val$es = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$7_h_