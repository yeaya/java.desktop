#ifndef _PopupMenuTest$MousePopupListener_h_
#define _PopupMenuTest$MousePopupListener_h_
//$ class PopupMenuTest$MousePopupListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class PopupMenuTest;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class $export PopupMenuTest$MousePopupListener : public ::java::awt::event::MouseAdapter {
	$class(PopupMenuTest$MousePopupListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	PopupMenuTest$MousePopupListener();
	void init$(::PopupMenuTest* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void showPopup(::java::awt::event::MouseEvent* e);
	::PopupMenuTest* this$0 = nullptr;
};

#endif // _PopupMenuTest$MousePopupListener_h_