#ifndef _IconifyTest$1$1_h_
#define _IconifyTest$1$1_h_
//$ class IconifyTest$1$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

class IconifyTest$1;
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class IconifyTest$1$1 : public ::java::awt::event::WindowAdapter {
	$class(IconifyTest$1$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	IconifyTest$1$1();
	void init$(::IconifyTest$1* this$0);
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	::IconifyTest$1* this$0 = nullptr;
};

#endif // _IconifyTest$1$1_h_