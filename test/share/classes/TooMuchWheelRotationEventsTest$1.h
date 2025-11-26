#ifndef _TooMuchWheelRotationEventsTest$1_h_
#define _TooMuchWheelRotationEventsTest$1_h_
//$ class TooMuchWheelRotationEventsTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class TooMuchWheelRotationEventsTest$1 : public ::java::awt::event::ActionListener {
	$class(TooMuchWheelRotationEventsTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TooMuchWheelRotationEventsTest$1();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _TooMuchWheelRotationEventsTest$1_h_