#ifndef _java_awt_event_TextEvent_h_
#define _java_awt_event_TextEvent_h_
//$ class java.awt.event.TextEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("TEXT_FIRST")
#undef TEXT_FIRST
#pragma push_macro("TEXT_LAST")
#undef TEXT_LAST
#pragma push_macro("TEXT_VALUE_CHANGED")
#undef TEXT_VALUE_CHANGED

namespace java {
	namespace awt {
		namespace event {

class $export TextEvent : public ::java::awt::AWTEvent {
	$class(TextEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	TextEvent();
	void init$(Object$* source, int32_t id);
	virtual $String* paramString() override;
	static const int32_t TEXT_FIRST = 900;
	static const int32_t TEXT_LAST = 900;
	static const int32_t TEXT_VALUE_CHANGED = TEXT_FIRST;
	static const int64_t serialVersionUID = (int64_t)0x57032AEA1E6B8CFB;
};

		} // event
	} // awt
} // java

#pragma pop_macro("TEXT_FIRST")
#pragma pop_macro("TEXT_LAST")
#pragma pop_macro("TEXT_VALUE_CHANGED")

#endif // _java_awt_event_TextEvent_h_