#ifndef _java_awt_event_MouseWheelEvent_h_
#define _java_awt_event_MouseWheelEvent_h_
//$ class java.awt.event.MouseWheelEvent
//$ extends java.awt.event.MouseEvent

#include <java/awt/event/MouseEvent.h>

#pragma push_macro("WHEEL_BLOCK_SCROLL")
#undef WHEEL_BLOCK_SCROLL
#pragma push_macro("WHEEL_UNIT_SCROLL")
#undef WHEEL_UNIT_SCROLL

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export MouseWheelEvent : public ::java::awt::event::MouseEvent {
	$class(MouseWheelEvent, $NO_CLASS_INIT, ::java::awt::event::MouseEvent)
public:
	MouseWheelEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation);
	virtual double getPreciseWheelRotation();
	virtual int32_t getScrollAmount();
	virtual int32_t getScrollType();
	virtual int32_t getUnitsToScroll();
	virtual int32_t getWheelRotation();
	virtual $String* paramString() override;
	static const int32_t WHEEL_UNIT_SCROLL = 0;
	static const int32_t WHEEL_BLOCK_SCROLL = 1;
	int32_t scrollType = 0;
	int32_t scrollAmount = 0;
	int32_t wheelRotation = 0;
	double preciseWheelRotation = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x59A61A146B898BFD;
};

		} // event
	} // awt
} // java

#pragma pop_macro("WHEEL_BLOCK_SCROLL")
#pragma pop_macro("WHEEL_UNIT_SCROLL")

#endif // _java_awt_event_MouseWheelEvent_h_