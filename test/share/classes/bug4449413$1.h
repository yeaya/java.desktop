#ifndef _bug4449413$1_h_
#define _bug4449413$1_h_
//$ class bug4449413$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

class bug4449413;
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class bug4449413$1 : public ::java::awt::event::WindowAdapter {
	$class(bug4449413$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	bug4449413$1();
	void init$(::bug4449413* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::bug4449413* this$0 = nullptr;
};

#endif // _bug4449413$1_h_