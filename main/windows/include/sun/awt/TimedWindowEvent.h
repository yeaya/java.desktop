#ifndef _sun_awt_TimedWindowEvent_h_
#define _sun_awt_TimedWindowEvent_h_
//$ class sun.awt.TimedWindowEvent
//$ extends java.awt.event.WindowEvent

#include <java/awt/event/WindowEvent.h>

namespace java {
	namespace awt {
		class Window;
	}
}

namespace sun {
	namespace awt {

class $import TimedWindowEvent : public ::java::awt::event::WindowEvent {
	$class(TimedWindowEvent, $NO_CLASS_INIT, ::java::awt::event::WindowEvent)
public:
	TimedWindowEvent();
	void init$(::java::awt::Window* source, int32_t id, ::java::awt::Window* opposite, int64_t time);
	void init$(::java::awt::Window* source, int32_t id, ::java::awt::Window* opposite, int32_t oldState, int32_t newState, int64_t time);
	virtual int64_t getWhen();
	int64_t time = 0;
};

	} // awt
} // sun

#endif // _sun_awt_TimedWindowEvent_h_