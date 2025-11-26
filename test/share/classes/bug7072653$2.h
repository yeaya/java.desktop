#ifndef _bug7072653$2_h_
#define _bug7072653$2_h_
//$ class bug7072653$2
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

class bug7072653$2 : public ::javax::swing::event::PopupMenuListener {
	$class(bug7072653$2, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	bug7072653$2();
	void init$($String* val$lookAndFeelString);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _bug7072653$2_h_