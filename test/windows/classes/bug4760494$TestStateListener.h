#ifndef _bug4760494$TestStateListener_h_
#define _bug4760494$TestStateListener_h_
//$ class bug4760494$TestStateListener
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class $export bug4760494$TestStateListener : public ::java::awt::event::WindowAdapter {
	$class(bug4760494$TestStateListener, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	bug4760494$TestStateListener();
	void init$();
	virtual void windowOpened(::java::awt::event::WindowEvent* ev) override;
};

#endif // _bug4760494$TestStateListener_h_