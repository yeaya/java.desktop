#ifndef _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport$1_h_
#define _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport$1_h_
//$ class javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class SwingWorker$SwingWorkerPropertyChangeSupport;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$SwingWorkerPropertyChangeSupport$1 : public ::java::lang::Runnable {
	$class(SwingWorker$SwingWorkerPropertyChangeSupport$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SwingWorker$SwingWorkerPropertyChangeSupport$1();
	void init$(::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport* this$1, ::java::beans::PropertyChangeEvent* val$evt);
	virtual void run() override;
	::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport* this$1 = nullptr;
	::java::beans::PropertyChangeEvent* val$evt = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$SwingWorkerPropertyChangeSupport$1_h_