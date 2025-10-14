#ifndef _bug4760494$1_h_
#define _bug4760494$1_h_
//$ class bug4760494$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class bug4760494$1 : public ::java::awt::event::MouseAdapter {
	$class(bug4760494$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	bug4760494$1();
	void init$();
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
};

#endif // _bug4760494$1_h_