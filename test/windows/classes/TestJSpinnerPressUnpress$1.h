#ifndef _TestJSpinnerPressUnpress$1_h_
#define _TestJSpinnerPressUnpress$1_h_
//$ class TestJSpinnerPressUnpress$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TestJSpinnerPressUnpress$1 : public ::java::awt::event::WindowAdapter {
	$class(TestJSpinnerPressUnpress$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestJSpinnerPressUnpress$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TestJSpinnerPressUnpress$1_h_