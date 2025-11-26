#ifndef _ContextMenuScrollTest$2_h_
#define _ContextMenuScrollTest$2_h_
//$ class ContextMenuScrollTest$2
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class ContextMenuScrollTest$2 : public ::java::awt::event::ActionListener {
	$class(ContextMenuScrollTest$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ContextMenuScrollTest$2();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
};

#endif // _ContextMenuScrollTest$2_h_