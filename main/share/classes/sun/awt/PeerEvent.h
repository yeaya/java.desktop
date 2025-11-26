#ifndef _sun_awt_PeerEvent_h_
#define _sun_awt_PeerEvent_h_
//$ class sun.awt.PeerEvent
//$ extends java.awt.event.InvocationEvent

#include <java/awt/event/InvocationEvent.h>

#pragma push_macro("LOW_PRIORITY_EVENT")
#undef LOW_PRIORITY_EVENT
#pragma push_macro("PRIORITY_EVENT")
#undef PRIORITY_EVENT
#pragma push_macro("ULTIMATE_PRIORITY_EVENT")
#undef ULTIMATE_PRIORITY_EVENT

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace awt {

class $export PeerEvent : public ::java::awt::event::InvocationEvent {
	$class(PeerEvent, $NO_CLASS_INIT, ::java::awt::event::InvocationEvent)
public:
	PeerEvent();
	void init$(Object$* source, ::java::lang::Runnable* runnable, int64_t flags);
	void init$(Object$* source, ::java::lang::Runnable* runnable, Object$* notifier, bool catchExceptions, int64_t flags);
	virtual ::sun::awt::PeerEvent* coalesceEvents(::sun::awt::PeerEvent* newEvent);
	virtual int64_t getFlags();
	static const int64_t PRIORITY_EVENT = 1;
	static const int64_t ULTIMATE_PRIORITY_EVENT = 2;
	static const int64_t LOW_PRIORITY_EVENT = 4;
	int64_t flags = 0;
};

	} // awt
} // sun

#pragma pop_macro("LOW_PRIORITY_EVENT")
#pragma pop_macro("PRIORITY_EVENT")
#pragma pop_macro("ULTIMATE_PRIORITY_EVENT")

#endif // _sun_awt_PeerEvent_h_