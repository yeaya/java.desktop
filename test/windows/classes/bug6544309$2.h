#ifndef _bug6544309$2_h_
#define _bug6544309$2_h_
//$ class bug6544309$2
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class bug6544309;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug6544309$2 : public ::java::awt::event::ActionListener {
	$class(bug6544309$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug6544309$2();
	void init$(::bug6544309* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug6544309* this$0 = nullptr;
};

#endif // _bug6544309$2_h_