#ifndef _ContextMenuScrollTest$4_h_
#define _ContextMenuScrollTest$4_h_
//$ class ContextMenuScrollTest$4
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$4 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$4, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$4();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$4_h_