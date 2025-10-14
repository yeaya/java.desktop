#ifndef _java_awt_event_ActionEvent_h_
#define _java_awt_event_ActionEvent_h_
//$ class java.awt.event.ActionEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("ACTION_FIRST")
#undef ACTION_FIRST
#pragma push_macro("ACTION_LAST")
#undef ACTION_LAST
#pragma push_macro("ACTION_PERFORMED")
#undef ACTION_PERFORMED
#pragma push_macro("ALT_MASK")
#undef ALT_MASK
#pragma push_macro("CTRL_MASK")
#undef CTRL_MASK
#pragma push_macro("META_MASK")
#undef META_MASK
#pragma push_macro("SHIFT_MASK")
#undef SHIFT_MASK

namespace java {
	namespace awt {
		namespace event {

class $export ActionEvent : public ::java::awt::AWTEvent {
	$class(ActionEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	ActionEvent();
	void init$(Object$* source, int32_t id, $String* command);
	void init$(Object$* source, int32_t id, $String* command, int32_t modifiers);
	void init$(Object$* source, int32_t id, $String* command, int64_t when, int32_t modifiers);
	virtual $String* getActionCommand();
	virtual int32_t getModifiers();
	virtual int64_t getWhen();
	virtual $String* paramString() override;
	static const int32_t SHIFT_MASK = 1; // 1 << 0
	static const int32_t CTRL_MASK = 2; // 1 << 1
	static const int32_t META_MASK = 4; // 1 << 2
	static const int32_t ALT_MASK = 8; // 1 << 3
	static const int32_t ACTION_FIRST = 1001;
	static const int32_t ACTION_LAST = 1001;
	static const int32_t ACTION_PERFORMED = ACTION_FIRST;
	$String* actionCommand = nullptr;
	int64_t when = 0;
	int32_t modifiers = 0;
	static const int64_t serialVersionUID = (int64_t)0x958ADA7A58112F2B;
};

		} // event
	} // awt
} // java

#pragma pop_macro("ACTION_FIRST")
#pragma pop_macro("ACTION_LAST")
#pragma pop_macro("ACTION_PERFORMED")
#pragma pop_macro("ALT_MASK")
#pragma pop_macro("CTRL_MASK")
#pragma pop_macro("META_MASK")
#pragma pop_macro("SHIFT_MASK")

#endif // _java_awt_event_ActionEvent_h_