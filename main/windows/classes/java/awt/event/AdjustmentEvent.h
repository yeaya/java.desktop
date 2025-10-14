#ifndef _java_awt_event_AdjustmentEvent_h_
#define _java_awt_event_AdjustmentEvent_h_
//$ class java.awt.event.AdjustmentEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("ADJUSTMENT_FIRST")
#undef ADJUSTMENT_FIRST
#pragma push_macro("ADJUSTMENT_LAST")
#undef ADJUSTMENT_LAST
#pragma push_macro("ADJUSTMENT_VALUE_CHANGED")
#undef ADJUSTMENT_VALUE_CHANGED
#pragma push_macro("BLOCK_DECREMENT")
#undef BLOCK_DECREMENT
#pragma push_macro("BLOCK_INCREMENT")
#undef BLOCK_INCREMENT
#pragma push_macro("TRACK")
#undef TRACK
#pragma push_macro("UNIT_DECREMENT")
#undef UNIT_DECREMENT
#pragma push_macro("UNIT_INCREMENT")
#undef UNIT_INCREMENT

namespace java {
	namespace awt {
		class Adjustable;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export AdjustmentEvent : public ::java::awt::AWTEvent {
	$class(AdjustmentEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	AdjustmentEvent();
	void init$(::java::awt::Adjustable* source, int32_t id, int32_t type, int32_t value);
	void init$(::java::awt::Adjustable* source, int32_t id, int32_t type, int32_t value, bool isAdjusting);
	virtual ::java::awt::Adjustable* getAdjustable();
	virtual int32_t getAdjustmentType();
	virtual int32_t getValue();
	virtual bool getValueIsAdjusting();
	virtual $String* paramString() override;
	static const int32_t ADJUSTMENT_FIRST = 601;
	static const int32_t ADJUSTMENT_LAST = 601;
	static const int32_t ADJUSTMENT_VALUE_CHANGED = ADJUSTMENT_FIRST;
	static const int32_t UNIT_INCREMENT = 1;
	static const int32_t UNIT_DECREMENT = 2;
	static const int32_t BLOCK_DECREMENT = 3;
	static const int32_t BLOCK_INCREMENT = 4;
	static const int32_t TRACK = 5;
	::java::awt::Adjustable* adjustable = nullptr;
	int32_t value = 0;
	int32_t adjustmentType = 0;
	bool isAdjusting = false;
	static const int64_t serialVersionUID = (int64_t)0x4F1B8023EFF164B1;
};

		} // event
	} // awt
} // java

#pragma pop_macro("ADJUSTMENT_FIRST")
#pragma pop_macro("ADJUSTMENT_LAST")
#pragma pop_macro("ADJUSTMENT_VALUE_CHANGED")
#pragma pop_macro("BLOCK_DECREMENT")
#pragma pop_macro("BLOCK_INCREMENT")
#pragma pop_macro("TRACK")
#pragma pop_macro("UNIT_DECREMENT")
#pragma pop_macro("UNIT_INCREMENT")

#endif // _java_awt_event_AdjustmentEvent_h_