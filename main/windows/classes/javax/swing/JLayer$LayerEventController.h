#ifndef _javax_swing_JLayer$LayerEventController_h_
#define _javax_swing_JLayer$LayerEventController_h_
//$ class javax.swing.JLayer$LayerEventController
//$ extends java.awt.event.AWTEventListener

#include <java/awt/AWTEvent.h>
#include <java/awt/event/AWTEventListener.h>

#pragma push_macro("ACCEPTED_EVENTS")
#undef ACCEPTED_EVENTS
#pragma push_macro("COMPONENT_EVENT_MASK")
#undef COMPONENT_EVENT_MASK
#pragma push_macro("CONTAINER_EVENT_MASK")
#undef CONTAINER_EVENT_MASK
#pragma push_macro("FOCUS_EVENT_MASK")
#undef FOCUS_EVENT_MASK
#pragma push_macro("HIERARCHY_BOUNDS_EVENT_MASK")
#undef HIERARCHY_BOUNDS_EVENT_MASK
#pragma push_macro("HIERARCHY_EVENT_MASK")
#undef HIERARCHY_EVENT_MASK
#pragma push_macro("INPUT_METHOD_EVENT_MASK")
#undef INPUT_METHOD_EVENT_MASK
#pragma push_macro("KEY_EVENT_MASK")
#undef KEY_EVENT_MASK
#pragma push_macro("MOUSE_EVENT_MASK")
#undef MOUSE_EVENT_MASK
#pragma push_macro("MOUSE_MOTION_EVENT_MASK")
#undef MOUSE_MOTION_EVENT_MASK
#pragma push_macro("MOUSE_WHEEL_EVENT_MASK")
#undef MOUSE_WHEEL_EVENT_MASK

namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace javax {
	namespace swing {

class JLayer$LayerEventController : public ::java::awt::event::AWTEventListener {
	$class(JLayer$LayerEventController, $NO_CLASS_INIT, ::java::awt::event::AWTEventListener)
public:
	JLayer$LayerEventController();
	void init$();
	void addAWTEventListener(int64_t eventMask);
	virtual void eventDispatched(::java::awt::AWTEvent* event) override;
	int64_t getCurrentEventMask();
	bool isEventEnabled(int64_t eventMask, int32_t id);
	void removeAWTEventListener();
	void updateAWTEventListener(int64_t oldEventMask, int64_t newEventMask);
	::java::util::ArrayList* layerMaskList = nullptr;
	int64_t currentEventMask = 0;
	static const int64_t ACCEPTED_EVENTS = 231487; // ::java::awt::AWTEvent::COMPONENT_EVENT_MASK | ::java::awt::AWTEvent::CONTAINER_EVENT_MASK | ::java::awt::AWTEvent::FOCUS_EVENT_MASK | ::java::awt::AWTEvent::KEY_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_WHEEL_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_MOTION_EVENT_MASK | ::java::awt::AWTEvent::MOUSE_EVENT_MASK | ::java::awt::AWTEvent::INPUT_METHOD_EVENT_MASK | ::java::awt::AWTEvent::HIERARCHY_EVENT_MASK | ::java::awt::AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK
};

	} // swing
} // javax

#pragma pop_macro("ACCEPTED_EVENTS")
#pragma pop_macro("COMPONENT_EVENT_MASK")
#pragma pop_macro("CONTAINER_EVENT_MASK")
#pragma pop_macro("FOCUS_EVENT_MASK")
#pragma pop_macro("HIERARCHY_BOUNDS_EVENT_MASK")
#pragma pop_macro("HIERARCHY_EVENT_MASK")
#pragma pop_macro("INPUT_METHOD_EVENT_MASK")
#pragma pop_macro("KEY_EVENT_MASK")
#pragma pop_macro("MOUSE_EVENT_MASK")
#pragma pop_macro("MOUSE_MOTION_EVENT_MASK")
#pragma pop_macro("MOUSE_WHEEL_EVENT_MASK")

#endif // _javax_swing_JLayer$LayerEventController_h_