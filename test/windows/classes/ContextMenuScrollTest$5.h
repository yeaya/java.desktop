#ifndef _ContextMenuScrollTest$5_h_
#define _ContextMenuScrollTest$5_h_
//$ class ContextMenuScrollTest$5
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$5 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$5, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$5();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$5_h_