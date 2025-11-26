#ifndef _bug4529206$1_h_
#define _bug4529206$1_h_
//$ class bug4529206$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class bug4529206;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug4529206$1 : public ::java::awt::event::ActionListener {
	$class(bug4529206$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug4529206$1();
	void init$(::bug4529206* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4529206* this$0 = nullptr;
};

#endif // _bug4529206$1_h_