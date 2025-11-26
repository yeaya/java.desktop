#ifndef _bug8057893$1_h_
#define _bug8057893$1_h_
//$ class bug8057893$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug8057893$1 : public ::java::awt::event::ActionListener {
	$class(bug8057893$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug8057893$1();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

#endif // _bug8057893$1_h_