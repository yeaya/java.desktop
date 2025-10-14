#ifndef _java_awt_event_MouseEvent_h_
#define _java_awt_event_MouseEvent_h_
//$ class java.awt.event.MouseEvent
//$ extends java.awt.event.InputEvent

#include <java/awt/event/InputEvent.h>

#pragma push_macro("BUTTON1")
#undef BUTTON1
#pragma push_macro("BUTTON2")
#undef BUTTON2
#pragma push_macro("BUTTON3")
#undef BUTTON3
#pragma push_macro("MOUSE_CLICKED")
#undef MOUSE_CLICKED
#pragma push_macro("MOUSE_DRAGGED")
#undef MOUSE_DRAGGED
#pragma push_macro("MOUSE_ENTERED")
#undef MOUSE_ENTERED
#pragma push_macro("MOUSE_EXITED")
#undef MOUSE_EXITED
#pragma push_macro("MOUSE_FIRST")
#undef MOUSE_FIRST
#pragma push_macro("MOUSE_LAST")
#undef MOUSE_LAST
#pragma push_macro("MOUSE_MOVED")
#undef MOUSE_MOVED
#pragma push_macro("MOUSE_PRESSED")
#undef MOUSE_PRESSED
#pragma push_macro("MOUSE_RELEASED")
#undef MOUSE_RELEASED
#pragma push_macro("MOUSE_WHEEL")
#undef MOUSE_WHEEL
#pragma push_macro("NOBUTTON")
#undef NOBUTTON

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export MouseEvent : public ::java::awt::event::InputEvent {
	$class(MouseEvent, 0, ::java::awt::event::InputEvent)
public:
	MouseEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, int32_t button);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button);
	virtual int32_t getButton();
	virtual int32_t getClickCount();
	virtual ::java::awt::Point* getLocationOnScreen();
	virtual int32_t getModifiersEx() override;
	static $String* getMouseModifiersText(int32_t modifiers);
	virtual ::java::awt::Point* getPoint();
	virtual int32_t getX();
	virtual int32_t getXOnScreen();
	virtual int32_t getY();
	virtual int32_t getYOnScreen();
	static void initIDs();
	virtual bool isPopupTrigger();
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	void setNewModifiers();
	void setOldModifiers();
	virtual void translatePoint(int32_t x, int32_t y);
	static const int32_t MOUSE_FIRST = 500;
	static const int32_t MOUSE_LAST = 507;
	static const int32_t MOUSE_CLICKED = MOUSE_FIRST;
	static const int32_t MOUSE_PRESSED = 501; // 1 + MOUSE_FIRST
	static const int32_t MOUSE_RELEASED = 502; // 2 + MOUSE_FIRST
	static const int32_t MOUSE_MOVED = 503; // 3 + MOUSE_FIRST
	static const int32_t MOUSE_ENTERED = 504; // 4 + MOUSE_FIRST
	static const int32_t MOUSE_EXITED = 505; // 5 + MOUSE_FIRST
	static const int32_t MOUSE_DRAGGED = 506; // 6 + MOUSE_FIRST
	static const int32_t MOUSE_WHEEL = 507; // 7 + MOUSE_FIRST
	static const int32_t NOBUTTON = 0;
	static const int32_t BUTTON1 = 1;
	static const int32_t BUTTON2 = 2;
	static const int32_t BUTTON3 = 3;
	int32_t x = 0;
	int32_t y = 0;
	int32_t xAbs = 0;
	int32_t yAbs = 0;
	int32_t clickCount = 0;
	bool causedByTouchEvent = false;
	int32_t button = 0;
	bool popupTrigger = false;
	static const int64_t serialVersionUID = (int64_t)0xF23E7FFAA499B220;
	static int32_t cachedNumberOfButtons;
	bool shouldExcludeButtonFromExtModifiers = false;
};

		} // event
	} // awt
} // java

#pragma pop_macro("BUTTON1")
#pragma pop_macro("BUTTON2")
#pragma pop_macro("BUTTON3")
#pragma pop_macro("MOUSE_CLICKED")
#pragma pop_macro("MOUSE_DRAGGED")
#pragma pop_macro("MOUSE_ENTERED")
#pragma pop_macro("MOUSE_EXITED")
#pragma pop_macro("MOUSE_FIRST")
#pragma pop_macro("MOUSE_LAST")
#pragma pop_macro("MOUSE_MOVED")
#pragma pop_macro("MOUSE_PRESSED")
#pragma pop_macro("MOUSE_RELEASED")
#pragma pop_macro("MOUSE_WHEEL")
#pragma pop_macro("NOBUTTON")

#endif // _java_awt_event_MouseEvent_h_