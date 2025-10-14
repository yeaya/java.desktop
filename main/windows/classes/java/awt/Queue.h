#ifndef _java_awt_Queue_h_
#define _java_awt_Queue_h_
//$ class java.awt.Queue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		class EventQueueItem;
	}
}

namespace java {
	namespace awt {

class Queue : public ::java::lang::Object {
	$class(Queue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Queue();
	void init$();
	::sun::awt::EventQueueItem* head = nullptr;
	::sun::awt::EventQueueItem* tail = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Queue_h_