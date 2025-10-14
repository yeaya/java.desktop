#ifndef _bug4514858$Test$1_h_
#define _bug4514858$Test$1_h_
//$ class bug4514858$Test$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class bug4514858$Test;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug4514858$Test$1 : public ::java::awt::event::ActionListener {
	$class(bug4514858$Test$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug4514858$Test$1();
	void init$(::bug4514858$Test* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	::bug4514858$Test* this$0 = nullptr;
};

#endif // _bug4514858$Test$1_h_