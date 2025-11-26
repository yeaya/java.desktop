#ifndef _ContextMenuScrollTest$6_h_
#define _ContextMenuScrollTest$6_h_
//$ class ContextMenuScrollTest$6
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$6 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$6, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$6();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$6_h_