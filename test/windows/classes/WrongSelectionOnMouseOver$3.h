#ifndef _WrongSelectionOnMouseOver$3_h_
#define _WrongSelectionOnMouseOver$3_h_
//$ class WrongSelectionOnMouseOver$3
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

class WrongSelectionOnMouseOver$3 : public ::javax::swing::event::MenuListener {
	$class(WrongSelectionOnMouseOver$3, $NO_CLASS_INIT, ::javax::swing::event::MenuListener)
public:
	WrongSelectionOnMouseOver$3();
	void init$(::WrongSelectionOnMouseOver* this$0);
	virtual void menuCanceled(::javax::swing::event::MenuEvent* e) override;
	virtual void menuDeselected(::javax::swing::event::MenuEvent* e) override;
	virtual void menuSelected(::javax::swing::event::MenuEvent* e) override;
	::WrongSelectionOnMouseOver* this$0 = nullptr;
};

#endif // _WrongSelectionOnMouseOver$3_h_