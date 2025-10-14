#ifndef _bug6348946$Editor$1_h_
#define _bug6348946$Editor$1_h_
//$ class bug6348946$Editor$1
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

class bug6348946$Editor;
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class bug6348946$Editor$1 : public ::javax::swing::event::ChangeListener {
	$class(bug6348946$Editor$1, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	bug6348946$Editor$1();
	void init$(::bug6348946$Editor* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::bug6348946$Editor* this$0 = nullptr;
};

#endif // _bug6348946$Editor$1_h_