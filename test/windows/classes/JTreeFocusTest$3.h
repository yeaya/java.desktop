#ifndef _JTreeFocusTest$3_h_
#define _JTreeFocusTest$3_h_
//$ class JTreeFocusTest$3
//$ extends javax.swing.event.TreeSelectionListener

#include <javax/swing/event/TreeSelectionListener.h>

class JTreeFocusTest;
namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionEvent;
		}
	}
}

class JTreeFocusTest$3 : public ::javax::swing::event::TreeSelectionListener {
	$class(JTreeFocusTest$3, $NO_CLASS_INIT, ::javax::swing::event::TreeSelectionListener)
public:
	JTreeFocusTest$3();
	void init$(::JTreeFocusTest* this$0);
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) override;
	::JTreeFocusTest* this$0 = nullptr;
};

#endif // _JTreeFocusTest$3_h_