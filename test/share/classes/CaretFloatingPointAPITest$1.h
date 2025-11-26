#ifndef _CaretFloatingPointAPITest$1_h_
#define _CaretFloatingPointAPITest$1_h_
//$ class CaretFloatingPointAPITest$1
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

class CaretFloatingPointAPITest$1 : public ::java::awt::event::ActionListener {
	$class(CaretFloatingPointAPITest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	CaretFloatingPointAPITest$1();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _CaretFloatingPointAPITest$1_h_