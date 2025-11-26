#ifndef _java_awt_EventQueue$4$1_h_
#define _java_awt_EventQueue$4$1_h_
//$ class java.awt.EventQueue$4$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class EventQueue$4;
	}
}

namespace java {
	namespace awt {

class EventQueue$4$1 : public ::java::lang::Runnable {
	$class(EventQueue$4$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EventQueue$4$1();
	void init$(::java::awt::EventQueue$4* this$1);
	virtual void run() override;
	::java::awt::EventQueue$4* this$1 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$4$1_h_