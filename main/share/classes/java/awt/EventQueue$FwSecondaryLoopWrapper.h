#ifndef _java_awt_EventQueue$FwSecondaryLoopWrapper_h_
#define _java_awt_EventQueue$FwSecondaryLoopWrapper_h_
//$ class java.awt.EventQueue$FwSecondaryLoopWrapper
//$ extends java.awt.SecondaryLoop

#include <java/awt/SecondaryLoop.h>

namespace java {
	namespace awt {
		class EventFilter;
		class EventQueue;
	}
}

namespace java {
	namespace awt {

class EventQueue$FwSecondaryLoopWrapper : public ::java::awt::SecondaryLoop {
	$class(EventQueue$FwSecondaryLoopWrapper, $NO_CLASS_INIT, ::java::awt::SecondaryLoop)
public:
	EventQueue$FwSecondaryLoopWrapper();
	void init$(::java::awt::EventQueue* this$0, ::java::awt::SecondaryLoop* loop, ::java::awt::EventFilter* filter);
	virtual bool enter() override;
	virtual bool exit() override;
	::java::awt::EventQueue* this$0 = nullptr;
	::java::awt::SecondaryLoop* loop = nullptr;
	::java::awt::EventFilter* filter = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$FwSecondaryLoopWrapper_h_