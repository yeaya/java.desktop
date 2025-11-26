#ifndef _JapaneseReadingAttributes$1_h_
#define _JapaneseReadingAttributes$1_h_
//$ class JapaneseReadingAttributes$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class JapaneseReadingAttributes$1 : public ::java::awt::event::WindowAdapter {
	$class(JapaneseReadingAttributes$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	JapaneseReadingAttributes$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
};

#endif // _JapaneseReadingAttributes$1_h_