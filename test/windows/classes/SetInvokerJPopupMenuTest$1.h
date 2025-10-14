#ifndef _SetInvokerJPopupMenuTest$1_h_
#define _SetInvokerJPopupMenuTest$1_h_
//$ class SetInvokerJPopupMenuTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class SetInvokerJPopupMenuTest$1 : public ::java::awt::event::ActionListener {
	$class(SetInvokerJPopupMenuTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	SetInvokerJPopupMenuTest$1();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
};

#endif // _SetInvokerJPopupMenuTest$1_h_