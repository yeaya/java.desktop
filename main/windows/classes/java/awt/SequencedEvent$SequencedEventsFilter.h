#ifndef _java_awt_SequencedEvent$SequencedEventsFilter_h_
#define _java_awt_SequencedEvent$SequencedEventsFilter_h_
//$ class java.awt.SequencedEvent$SequencedEventsFilter
//$ extends java.awt.EventFilter

#include <java/awt/EventFilter.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class EventFilter$FilterAction;
		class SequencedEvent;
	}
}

namespace java {
	namespace awt {

class SequencedEvent$SequencedEventsFilter : public ::java::awt::EventFilter {
	$class(SequencedEvent$SequencedEventsFilter, $NO_CLASS_INIT, ::java::awt::EventFilter)
public:
	SequencedEvent$SequencedEventsFilter();
	void init$(::java::awt::SequencedEvent* currentSequencedEvent);
	virtual ::java::awt::EventFilter$FilterAction* acceptEvent(::java::awt::AWTEvent* ev) override;
	::java::awt::SequencedEvent* currentSequencedEvent = nullptr;
};

	} // awt
} // java

#endif // _java_awt_SequencedEvent$SequencedEventsFilter_h_