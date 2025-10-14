#ifndef _bug8021253$3_h_
#define _bug8021253$3_h_
//$ class bug8021253$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug8021253$3 : public ::java::awt::event::ActionListener {
	$class(bug8021253$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug8021253$3();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

#endif // _bug8021253$3_h_