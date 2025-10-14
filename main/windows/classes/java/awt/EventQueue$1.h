#ifndef _java_awt_EventQueue$1_h_
#define _java_awt_EventQueue$1_h_
//$ class java.awt.EventQueue$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {

class EventQueue$1 : public ::java::lang::Runnable {
	$class(EventQueue$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EventQueue$1();
	void init$();
	virtual void run() override;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$1_h_