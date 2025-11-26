#ifndef _javax_swing_JOptionPane$2_h_
#define _javax_swing_JOptionPane$2_h_
//$ class javax.swing.JOptionPane$2
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {

class JOptionPane$2 : public ::java::awt::event::WindowAdapter {
	$class(JOptionPane$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	JOptionPane$2();
	void init$(::javax::swing::JOptionPane* this$0, ::java::beans::PropertyChangeListener* val$listener, ::javax::swing::JDialog* val$dialog);
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* we) override;
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* we) override;
	::javax::swing::JOptionPane* this$0 = nullptr;
	::javax::swing::JDialog* val$dialog = nullptr;
	::java::beans::PropertyChangeListener* val$listener = nullptr;
	bool gotFocus = false;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$2_h_