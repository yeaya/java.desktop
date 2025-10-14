#ifndef _TestJCheckBoxMenuItem$1_h_
#define _TestJCheckBoxMenuItem$1_h_
//$ class TestJCheckBoxMenuItem$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TestJCheckBoxMenuItem$1 : public ::java::awt::event::WindowAdapter {
	$class(TestJCheckBoxMenuItem$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestJCheckBoxMenuItem$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TestJCheckBoxMenuItem$1_h_