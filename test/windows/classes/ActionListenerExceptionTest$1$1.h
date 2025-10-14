#ifndef _ActionListenerExceptionTest$1$1_h_
#define _ActionListenerExceptionTest$1$1_h_
//$ class ActionListenerExceptionTest$1$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class ActionListenerExceptionTest$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ActionListenerExceptionTest$1$1 : public ::java::awt::event::ActionListener {
	$class(ActionListenerExceptionTest$1$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ActionListenerExceptionTest$1$1();
	void init$(::ActionListenerExceptionTest$1* this$1);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::ActionListenerExceptionTest$1* this$1 = nullptr;
};

#endif // _ActionListenerExceptionTest$1$1_h_