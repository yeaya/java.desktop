#ifndef _WrongSelectionOnMouseOver$2_h_
#define _WrongSelectionOnMouseOver$2_h_
//$ class WrongSelectionOnMouseOver$2
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class WrongSelectionOnMouseOver;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class WrongSelectionOnMouseOver$2 : public ::java::awt::event::MouseAdapter {
	$class(WrongSelectionOnMouseOver$2, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	WrongSelectionOnMouseOver$2();
	void init$(::WrongSelectionOnMouseOver* this$0);
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	::WrongSelectionOnMouseOver* this$0 = nullptr;
};

#endif // _WrongSelectionOnMouseOver$2_h_