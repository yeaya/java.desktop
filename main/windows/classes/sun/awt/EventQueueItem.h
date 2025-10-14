#ifndef _sun_awt_EventQueueItem_h_
#define _sun_awt_EventQueueItem_h_
//$ class sun.awt.EventQueueItem
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace sun {
	namespace awt {

class $export EventQueueItem : public ::java::lang::Object {
	$class(EventQueueItem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventQueueItem();
	void init$(::java::awt::AWTEvent* evt);
	::java::awt::AWTEvent* event = nullptr;
	::sun::awt::EventQueueItem* next = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_EventQueueItem_h_