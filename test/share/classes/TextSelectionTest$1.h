#ifndef _TextSelectionTest$1_h_
#define _TextSelectionTest$1_h_
//$ class TextSelectionTest$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class TextSelectionTest$1 : public ::java::awt::event::WindowAdapter {
	$class(TextSelectionTest$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TextSelectionTest$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
};

#endif // _TextSelectionTest$1_h_