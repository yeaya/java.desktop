#ifndef _TestBrowserBGColor$1_h_
#define _TestBrowserBGColor$1_h_
//$ class TestBrowserBGColor$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TestBrowserBGColor$1 : public ::java::awt::event::WindowAdapter {
	$class(TestBrowserBGColor$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestBrowserBGColor$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TestBrowserBGColor$1_h_