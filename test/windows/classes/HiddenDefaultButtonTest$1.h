#ifndef _HiddenDefaultButtonTest$1_h_
#define _HiddenDefaultButtonTest$1_h_
//$ class HiddenDefaultButtonTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class HiddenDefaultButtonTest$1 : public ::java::awt::event::ActionListener {
	$class(HiddenDefaultButtonTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	HiddenDefaultButtonTest$1();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

#endif // _HiddenDefaultButtonTest$1_h_