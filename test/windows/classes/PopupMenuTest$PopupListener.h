#ifndef _PopupMenuTest$PopupListener_h_
#define _PopupMenuTest$PopupListener_h_
//$ class PopupMenuTest$PopupListener
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

class PopupMenuTest;
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

class $export PopupMenuTest$PopupListener : public ::javax::swing::event::PopupMenuListener {
	$class(PopupMenuTest$PopupListener, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	PopupMenuTest$PopupListener();
	void init$(::PopupMenuTest* this$0);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::PopupMenuTest* this$0 = nullptr;
};

#endif // _PopupMenuTest$PopupListener_h_