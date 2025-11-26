#ifndef _java_awt_event_PaintEvent_h_
#define _java_awt_event_PaintEvent_h_
//$ class java.awt.event.PaintEvent
//$ extends java.awt.event.ComponentEvent

#include <java/awt/event/ComponentEvent.h>

#pragma push_macro("PAINT")
#undef PAINT
#pragma push_macro("PAINT_FIRST")
#undef PAINT_FIRST
#pragma push_macro("PAINT_LAST")
#undef PAINT_LAST
#pragma push_macro("UPDATE")
#undef UPDATE

namespace java {
	namespace awt {
		class Component;
		class Rectangle;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import PaintEvent : public ::java::awt::event::ComponentEvent {
	$class(PaintEvent, $NO_CLASS_INIT, ::java::awt::event::ComponentEvent)
public:
	PaintEvent();
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::Rectangle* updateRect);
	virtual ::java::awt::Rectangle* getUpdateRect();
	virtual $String* paramString() override;
	virtual void setUpdateRect(::java::awt::Rectangle* updateRect);
	static const int32_t PAINT_FIRST = 800;
	static const int32_t PAINT_LAST = 801;
	static const int32_t PAINT = PAINT_FIRST;
	static const int32_t UPDATE = 801; // PAINT_FIRST + 1
	::java::awt::Rectangle* updateRect = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x119709485732F8F9;
};

		} // event
	} // awt
} // java

#pragma pop_macro("PAINT")
#pragma pop_macro("PAINT_FIRST")
#pragma pop_macro("PAINT_LAST")
#pragma pop_macro("UPDATE")

#endif // _java_awt_event_PaintEvent_h_