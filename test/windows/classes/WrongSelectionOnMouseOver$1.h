#ifndef _WrongSelectionOnMouseOver$1_h_
#define _WrongSelectionOnMouseOver$1_h_
//$ class WrongSelectionOnMouseOver$1
//$ extends javax.swing.event.MenuListener

#include <javax/swing/event/MenuListener.h>

class WrongSelectionOnMouseOver;
namespace javax {
	namespace swing {
		namespace event {
			class MenuEvent;
		}
	}
}

class WrongSelectionOnMouseOver$1 : public ::javax::swing::event::MenuListener {
	$class(WrongSelectionOnMouseOver$1, $NO_CLASS_INIT, ::javax::swing::event::MenuListener)
public:
	WrongSelectionOnMouseOver$1();
	void init$(::WrongSelectionOnMouseOver* this$0);
	virtual void menuCanceled(::javax::swing::event::MenuEvent* e) override;
	virtual void menuDeselected(::javax::swing::event::MenuEvent* e) override;
	virtual void menuSelected(::javax::swing::event::MenuEvent* e) override;
	::WrongSelectionOnMouseOver* this$0 = nullptr;
};

#endif // _WrongSelectionOnMouseOver$1_h_