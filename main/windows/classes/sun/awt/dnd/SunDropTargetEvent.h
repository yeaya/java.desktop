#ifndef _sun_awt_dnd_SunDropTargetEvent_h_
#define _sun_awt_dnd_SunDropTargetEvent_h_
//$ class sun.awt.dnd.SunDropTargetEvent
//$ extends java.awt.event.MouseEvent

#include <java/awt/event/MouseEvent.h>

#pragma push_macro("MOUSE_DROPPED")
#undef MOUSE_DROPPED
#pragma push_macro("MOUSE_RELEASED")
#undef MOUSE_RELEASED

namespace java {
	namespace awt {
		class Component;
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetContextPeer$EventDispatcher;
		}
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class $export SunDropTargetEvent : public ::java::awt::event::MouseEvent {
	$class(SunDropTargetEvent, $NO_CLASS_INIT, ::java::awt::event::MouseEvent)
public:
	SunDropTargetEvent();
	void init$(::java::awt::Component* source, int32_t id, int32_t x, int32_t y, ::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher* d);
	virtual void consume() override;
	void dispatch();
	void dispose();
	::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher* getDispatcher();
	virtual $String* paramString() override;
	static const int32_t MOUSE_DROPPED = ::java::awt::event::MouseEvent::MOUSE_RELEASED;
	::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher* dispatcher = nullptr;
};

		} // dnd
	} // awt
} // sun

#pragma pop_macro("MOUSE_DROPPED")
#pragma pop_macro("MOUSE_RELEASED")

#endif // _sun_awt_dnd_SunDropTargetEvent_h_