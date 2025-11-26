#ifndef _ContextMenuScrollTest$7_h_
#define _ContextMenuScrollTest$7_h_
//$ class ContextMenuScrollTest$7
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$7 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$7, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$7();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$7_h_