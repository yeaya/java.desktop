#ifndef _ContextualMenuClearsTextSelectionTest$1_h_
#define _ContextualMenuClearsTextSelectionTest$1_h_
//$ class ContextualMenuClearsTextSelectionTest$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class ContextualMenuClearsTextSelectionTest$1 : public ::java::awt::event::MouseAdapter {
	$class(ContextualMenuClearsTextSelectionTest$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	ContextualMenuClearsTextSelectionTest$1();
	void init$();
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void showPopupMenu(::java::awt::event::MouseEvent* e);
};

#endif // _ContextualMenuClearsTextSelectionTest$1_h_