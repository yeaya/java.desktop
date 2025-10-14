#ifndef _TooMuchWheelRotationEventsTest$2_h_
#define _TooMuchWheelRotationEventsTest$2_h_
//$ class TooMuchWheelRotationEventsTest$2
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class TooMuchWheelRotationEventsTest$2 : public ::java::awt::event::WindowAdapter {
	$class(TooMuchWheelRotationEventsTest$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TooMuchWheelRotationEventsTest$2();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _TooMuchWheelRotationEventsTest$2_h_