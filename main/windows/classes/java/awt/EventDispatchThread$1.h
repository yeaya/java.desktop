#ifndef _java_awt_EventDispatchThread$1_h_
#define _java_awt_EventDispatchThread$1_h_
//$ class java.awt.EventDispatchThread$1
//$ extends java.awt.Conditional

#include <java/awt/Conditional.h>

namespace java {
	namespace awt {
		class EventDispatchThread;
	}
}

namespace java {
	namespace awt {

class EventDispatchThread$1 : public ::java::awt::Conditional {
	$class(EventDispatchThread$1, $NO_CLASS_INIT, ::java::awt::Conditional)
public:
	EventDispatchThread$1();
	void init$(::java::awt::EventDispatchThread* this$0);
	virtual bool evaluate() override;
	::java::awt::EventDispatchThread* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventDispatchThread$1_h_