#ifndef _TestTranslucentLabelText$1_h_
#define _TestTranslucentLabelText$1_h_
//$ class TestTranslucentLabelText$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TestTranslucentLabelText$1 : public ::java::awt::event::WindowAdapter {
	$class(TestTranslucentLabelText$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestTranslucentLabelText$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TestTranslucentLabelText$1_h_