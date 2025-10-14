#ifndef _bug4743225$1_h_
#define _bug4743225$1_h_
//$ class bug4743225$1
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

class bug4743225;
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

class bug4743225$1 : public ::javax::swing::event::PopupMenuListener {
	$class(bug4743225$1, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	bug4743225$1();
	void init$(::bug4743225* this$0);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::bug4743225* this$0 = nullptr;
};

#endif // _bug4743225$1_h_