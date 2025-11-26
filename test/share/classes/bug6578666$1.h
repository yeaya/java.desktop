#ifndef _bug6578666$1_h_
#define _bug6578666$1_h_
//$ class bug6578666$1
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

class bug6578666$1 : public ::java::awt::event::KeyAdapter {
	$class(bug6578666$1, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	bug6578666$1();
	void init$();
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
};

#endif // _bug6578666$1_h_