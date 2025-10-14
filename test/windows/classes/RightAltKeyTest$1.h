#ifndef _RightAltKeyTest$1_h_
#define _RightAltKeyTest$1_h_
//$ class RightAltKeyTest$1
//$ extends javax.swing.event.MenuListener

#include <javax/swing/event/MenuListener.h>

class RightAltKeyTest;
namespace javax {
	namespace swing {
		namespace event {
			class MenuEvent;
		}
	}
}

class RightAltKeyTest$1 : public ::javax::swing::event::MenuListener {
	$class(RightAltKeyTest$1, $NO_CLASS_INIT, ::javax::swing::event::MenuListener)
public:
	RightAltKeyTest$1();
	void init$(::RightAltKeyTest* this$0);
	virtual void menuCanceled(::javax::swing::event::MenuEvent* e) override;
	virtual void menuDeselected(::javax::swing::event::MenuEvent* e) override;
	virtual void menuSelected(::javax::swing::event::MenuEvent* e) override;
	::RightAltKeyTest* this$0 = nullptr;
};

#endif // _RightAltKeyTest$1_h_