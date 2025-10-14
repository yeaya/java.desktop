#ifndef _bug6520101$1_h_
#define _bug6520101$1_h_
//$ class bug6520101$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class bug6520101;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug6520101$1 : public ::java::awt::event::ActionListener {
	$class(bug6520101$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug6520101$1();
	void init$(::bug6520101* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug6520101* this$0 = nullptr;
};

#endif // _bug6520101$1_h_