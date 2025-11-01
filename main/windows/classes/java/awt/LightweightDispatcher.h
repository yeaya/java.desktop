#ifndef _java_awt_LightweightDispatcher_h_
#define _java_awt_LightweightDispatcher_h_
//$ class java.awt.LightweightDispatcher
//$ extends java.io.Serializable
//$ implements java.awt.event.AWTEventListener

#include <java/awt/AWTEvent.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/io/Serializable.h>

#pragma push_macro("BUTTONS_DOWN_MASK")
#undef BUTTONS_DOWN_MASK
#pragma push_macro("FOCUS_EVENT_MASK")
#undef FOCUS_EVENT_MASK
#pragma push_macro("KEY_EVENT_MASK")
#undef KEY_EVENT_MASK
#pragma push_macro("LWD_MOUSE_DRAGGED_OVER")
#undef LWD_MOUSE_DRAGGED_OVER
#pragma push_macro("MOUSE_EVENT_MASK")
#undef MOUSE_EVENT_MASK
#pragma push_macro("MOUSE_MASK")
#undef MOUSE_MASK
#pragma push_macro("MOUSE_MOTION_EVENT_MASK")
#undef MOUSE_MOTION_EVENT_MASK
#pragma push_macro("MOUSE_WHEEL_EVENT_MASK")
#undef MOUSE_WHEEL_EVENT_MASK
#pragma push_macro("PROXY_EVENT_MASK")
#undef PROXY_EVENT_MASK

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Cursor;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class LightweightDispatcher : public ::java::io::Serializable, public ::java::awt::event::AWTEventListener {
	$class(LightweightDispatcher, 0, ::java::io::Serializable, ::java::awt::event::AWTEventListener)
public:
	LightweightDispatcher();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container* nativeContainer);
	virtual bool dispatchEvent(::java::awt::AWTEvent* e);
	virtual void dispose();
	virtual void enableEvents(int64_t events);
	virtual void eventDispatched(::java::awt::AWTEvent* e) override;
	bool isMouseGrab(::java::awt::event::MouseEvent* e);
	bool processDropTargetEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	bool processMouseEvent(::java::awt::event::MouseEvent* e);
	::java::awt::Component* retargetMouseEnterExit(::java::awt::Component* targetOver, ::java::awt::event::MouseEvent* e, ::java::awt::Component* lastEntered, bool inNativeContainer);
	virtual void retargetMouseEvent(::java::awt::Component* target, int32_t id, ::java::awt::event::MouseEvent* e);
	void startListeningForOtherDrags();
	void stopListeningForOtherDrags();
	virtual $String* toString() override;
	void trackDropTargetEnterExit(::java::awt::Component* targetOver, ::java::awt::event::MouseEvent* e);
	void trackMouseEnterExit(::java::awt::Component* targetOver, ::java::awt::event::MouseEvent* e);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x47F24DAB87DAD089;
	static const int32_t LWD_MOUSE_DRAGGED_OVER = 1500;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static int32_t BUTTONS_DOWN_MASK;
	::java::awt::Container* nativeContainer = nullptr;
	::java::awt::Component* focus = nullptr;
	::java::lang::ref::WeakReference* mouseEventTarget = nullptr;
	::java::lang::ref::WeakReference* targetLastEntered = nullptr;
	::java::lang::ref::WeakReference* targetLastEnteredDT = nullptr;
	bool isMouseInNativeContainer = false;
	bool isMouseDTInNativeContainer = false;
	::java::awt::Cursor* nativeCursor = nullptr;
	int64_t eventMask = 0;
	static const int64_t PROXY_EVENT_MASK = 131132; // ::java::awt::AWTEvent::FOCUS_EVENT_MASK | ::java::awt::AWTEvent::KEY_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_MOTION_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_WHEEL_EVENT_MASK
	static const int64_t MOUSE_MASK = 131120; // ::java::awt::AWTEvent::MOUSE_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_MOTION_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_WHEEL_EVENT_MASK
};

	} // awt
} // java

#pragma pop_macro("BUTTONS_DOWN_MASK")
#pragma pop_macro("FOCUS_EVENT_MASK")
#pragma pop_macro("KEY_EVENT_MASK")
#pragma pop_macro("LWD_MOUSE_DRAGGED_OVER")
#pragma pop_macro("MOUSE_EVENT_MASK")
#pragma pop_macro("MOUSE_MASK")
#pragma pop_macro("MOUSE_MOTION_EVENT_MASK")
#pragma pop_macro("MOUSE_WHEEL_EVENT_MASK")
#pragma pop_macro("PROXY_EVENT_MASK")

#endif // _java_awt_LightweightDispatcher_h_