#ifndef _bug6432565$EventProcessor_h_
#define _bug6432565$EventProcessor_h_
//$ class bug6432565$EventProcessor
//$ extends java.awt.EventQueue

#include <java/awt/EventQueue.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

class bug6432565$EventProcessor : public ::java::awt::EventQueue {
	$class(bug6432565$EventProcessor, $NO_CLASS_INIT, ::java::awt::EventQueue)
public:
	bug6432565$EventProcessor();
	void init$();
	virtual void dispatchEvent(::java::awt::AWTEvent* event) override;
};

#endif // _bug6432565$EventProcessor_h_