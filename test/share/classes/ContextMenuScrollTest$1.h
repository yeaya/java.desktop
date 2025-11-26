#ifndef _ContextMenuScrollTest$1_h_
#define _ContextMenuScrollTest$1_h_
//$ class ContextMenuScrollTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$1 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$1();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$1_h_