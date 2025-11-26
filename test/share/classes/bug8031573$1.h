#ifndef _bug8031573$1_h_
#define _bug8031573$1_h_
//$ class bug8031573$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class bug8031573$1 : public ::java::awt::event::WindowAdapter {
	$class(bug8031573$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	bug8031573$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _bug8031573$1_h_