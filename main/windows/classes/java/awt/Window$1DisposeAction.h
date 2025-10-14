#ifndef _java_awt_Window$1DisposeAction_h_
#define _java_awt_Window$1DisposeAction_h_
//$ class java.awt.Window$1DisposeAction
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Window;
	}
}

namespace java {
	namespace awt {

class Window$1DisposeAction : public ::java::lang::Runnable {
	$class(Window$1DisposeAction, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Window$1DisposeAction();
	void init$(::java::awt::Window* this$0);
	virtual void run() override;
	::java::awt::Window* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Window$1DisposeAction_h_