#ifndef _ContextMenuScrollTest$3_h_
#define _ContextMenuScrollTest$3_h_
//$ class ContextMenuScrollTest$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$3 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$3();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$3_h_