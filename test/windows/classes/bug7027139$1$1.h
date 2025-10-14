#ifndef _bug7027139$1$1_h_
#define _bug7027139$1$1_h_
//$ class bug7027139$1$1
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

class bug7027139$1;
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}

class bug7027139$1$1 : public ::javax::swing::event::ListSelectionListener {
	$class(bug7027139$1$1, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	bug7027139$1$1();
	void init$(::bug7027139$1* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::bug7027139$1* this$0 = nullptr;
};

#endif // _bug7027139$1$1_h_