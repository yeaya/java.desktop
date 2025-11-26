#ifndef _javax_swing_Autoscroller_h_
#define _javax_swing_Autoscroller_h_
//$ class javax.swing.Autoscroller
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class Timer;
	}
}

namespace javax {
	namespace swing {

class Autoscroller : public ::java::awt::event::ActionListener {
	$class(Autoscroller, 0, ::java::awt::event::ActionListener)
public:
	Autoscroller();
	void init$();
	bool _isRunning(::javax::swing::JComponent* c);
	void _processMouseDragged(::java::awt::event::MouseEvent* e);
	void _stop(::javax::swing::JComponent* c);
	virtual void actionPerformed(::java::awt::event::ActionEvent* x) override;
	static bool isRunning(::javax::swing::JComponent* c);
	static void processMouseDragged(::java::awt::event::MouseEvent* e);
	void start(::javax::swing::JComponent* c, ::java::awt::event::MouseEvent* e);
	static void stop(::javax::swing::JComponent* c);
	static ::javax::swing::Autoscroller* sharedInstance;
	static ::java::awt::event::MouseEvent* event;
	static ::javax::swing::Timer* timer;
	static ::javax::swing::JComponent* component;
};

	} // swing
} // javax

#endif // _javax_swing_Autoscroller_h_