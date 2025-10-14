#ifndef _java_awt_event_WindowEvent_h_
#define _java_awt_event_WindowEvent_h_
//$ class java.awt.event.WindowEvent
//$ extends java.awt.event.ComponentEvent

#include <java/awt/event/ComponentEvent.h>

#pragma push_macro("WINDOW_ACTIVATED")
#undef WINDOW_ACTIVATED
#pragma push_macro("WINDOW_CLOSED")
#undef WINDOW_CLOSED
#pragma push_macro("WINDOW_CLOSING")
#undef WINDOW_CLOSING
#pragma push_macro("WINDOW_DEACTIVATED")
#undef WINDOW_DEACTIVATED
#pragma push_macro("WINDOW_DEICONIFIED")
#undef WINDOW_DEICONIFIED
#pragma push_macro("WINDOW_FIRST")
#undef WINDOW_FIRST
#pragma push_macro("WINDOW_GAINED_FOCUS")
#undef WINDOW_GAINED_FOCUS
#pragma push_macro("WINDOW_ICONIFIED")
#undef WINDOW_ICONIFIED
#pragma push_macro("WINDOW_LAST")
#undef WINDOW_LAST
#pragma push_macro("WINDOW_LOST_FOCUS")
#undef WINDOW_LOST_FOCUS
#pragma push_macro("WINDOW_OPENED")
#undef WINDOW_OPENED
#pragma push_macro("WINDOW_STATE_CHANGED")
#undef WINDOW_STATE_CHANGED

namespace java {
	namespace awt {
		class Window;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export WindowEvent : public ::java::awt::event::ComponentEvent {
	$class(WindowEvent, $NO_CLASS_INIT, ::java::awt::event::ComponentEvent)
public:
	WindowEvent();
	void init$(::java::awt::Window* source, int32_t id, ::java::awt::Window* opposite, int32_t oldState, int32_t newState);
	void init$(::java::awt::Window* source, int32_t id, ::java::awt::Window* opposite);
	void init$(::java::awt::Window* source, int32_t id, int32_t oldState, int32_t newState);
	void init$(::java::awt::Window* source, int32_t id);
	virtual int32_t getNewState();
	virtual int32_t getOldState();
	virtual ::java::awt::Window* getOppositeWindow();
	virtual ::java::awt::Window* getWindow();
	virtual $String* paramString() override;
	static const int32_t WINDOW_FIRST = 200;
	static const int32_t WINDOW_OPENED = WINDOW_FIRST;
	static const int32_t WINDOW_CLOSING = 201; // 1 + WINDOW_FIRST
	static const int32_t WINDOW_CLOSED = 202; // 2 + WINDOW_FIRST
	static const int32_t WINDOW_ICONIFIED = 203; // 3 + WINDOW_FIRST
	static const int32_t WINDOW_DEICONIFIED = 204; // 4 + WINDOW_FIRST
	static const int32_t WINDOW_ACTIVATED = 205; // 5 + WINDOW_FIRST
	static const int32_t WINDOW_DEACTIVATED = 206; // 6 + WINDOW_FIRST
	static const int32_t WINDOW_GAINED_FOCUS = 207; // 7 + WINDOW_FIRST
	static const int32_t WINDOW_LOST_FOCUS = 208; // 8 + WINDOW_FIRST
	static const int32_t WINDOW_STATE_CHANGED = 209; // 9 + WINDOW_FIRST
	static const int32_t WINDOW_LAST = WINDOW_STATE_CHANGED;
	::java::awt::Window* opposite = nullptr;
	int32_t oldState = 0;
	int32_t newState = 0;
	static const int64_t serialVersionUID = (int64_t)0xEA3D7D79CE63A841;
};

		} // event
	} // awt
} // java

#pragma pop_macro("WINDOW_ACTIVATED")
#pragma pop_macro("WINDOW_CLOSED")
#pragma pop_macro("WINDOW_CLOSING")
#pragma pop_macro("WINDOW_DEACTIVATED")
#pragma pop_macro("WINDOW_DEICONIFIED")
#pragma pop_macro("WINDOW_FIRST")
#pragma pop_macro("WINDOW_GAINED_FOCUS")
#pragma pop_macro("WINDOW_ICONIFIED")
#pragma pop_macro("WINDOW_LAST")
#pragma pop_macro("WINDOW_LOST_FOCUS")
#pragma pop_macro("WINDOW_OPENED")
#pragma pop_macro("WINDOW_STATE_CHANGED")

#endif // _java_awt_event_WindowEvent_h_