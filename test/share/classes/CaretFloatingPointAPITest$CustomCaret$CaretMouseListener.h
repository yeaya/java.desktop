#ifndef _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_h_
#define _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_h_
//$ class CaretFloatingPointAPITest$CustomCaret$CaretMouseListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class CaretFloatingPointAPITest$CustomCaret;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class CaretFloatingPointAPITest$CustomCaret$CaretMouseListener : public ::java::awt::event::MouseAdapter {
	$class(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	CaretFloatingPointAPITest$CustomCaret$CaretMouseListener();
	void init$(::CaretFloatingPointAPITest$CustomCaret* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::CaretFloatingPointAPITest$CustomCaret* this$0 = nullptr;
};

#endif // _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_h_