#ifndef _TestJTextPaneHTMLRendering$1_h_
#define _TestJTextPaneHTMLRendering$1_h_
//$ class TestJTextPaneHTMLRendering$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TestJTextPaneHTMLRendering$1 : public ::java::awt::event::WindowAdapter {
	$class(TestJTextPaneHTMLRendering$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestJTextPaneHTMLRendering$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TestJTextPaneHTMLRendering$1_h_