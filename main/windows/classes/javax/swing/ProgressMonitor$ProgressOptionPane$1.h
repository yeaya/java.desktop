#ifndef _javax_swing_ProgressMonitor$ProgressOptionPane$1_h_
#define _javax_swing_ProgressMonitor$ProgressOptionPane$1_h_
//$ class javax.swing.ProgressMonitor$ProgressOptionPane$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ProgressMonitor$ProgressOptionPane;
	}
}

namespace javax {
	namespace swing {

class ProgressMonitor$ProgressOptionPane$1 : public ::java::awt::event::WindowAdapter {
	$class(ProgressMonitor$ProgressOptionPane$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	ProgressMonitor$ProgressOptionPane$1();
	void init$(::javax::swing::ProgressMonitor$ProgressOptionPane* this$1);
	virtual void windowActivated(::java::awt::event::WindowEvent* we) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* we) override;
	::javax::swing::ProgressMonitor$ProgressOptionPane* this$1 = nullptr;
	bool gotFocus = false;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitor$ProgressOptionPane$1_h_