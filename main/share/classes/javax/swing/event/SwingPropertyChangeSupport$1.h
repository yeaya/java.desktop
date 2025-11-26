#ifndef _javax_swing_event_SwingPropertyChangeSupport$1_h_
#define _javax_swing_event_SwingPropertyChangeSupport$1_h_
//$ class javax.swing.event.SwingPropertyChangeSupport$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class SwingPropertyChangeSupport;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class SwingPropertyChangeSupport$1 : public ::java::lang::Runnable {
	$class(SwingPropertyChangeSupport$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SwingPropertyChangeSupport$1();
	void init$(::javax::swing::event::SwingPropertyChangeSupport* this$0, ::java::beans::PropertyChangeEvent* val$evt);
	virtual void run() override;
	::javax::swing::event::SwingPropertyChangeSupport* this$0 = nullptr;
	::java::beans::PropertyChangeEvent* val$evt = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_SwingPropertyChangeSupport$1_h_