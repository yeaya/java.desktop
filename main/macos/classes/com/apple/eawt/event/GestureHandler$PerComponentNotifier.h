#ifndef _com_apple_eawt_event_GestureHandler$PerComponentNotifier_h_
#define _com_apple_eawt_event_GestureHandler$PerComponentNotifier_h_
//$ class com.apple.eawt.event.GestureHandler$PerComponentNotifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class GestureHandler;
				class GesturePhaseEvent;
				class MagnificationEvent;
				class RotationEvent;
				class SwipeEvent;
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureHandler$PerComponentNotifier : public ::java::lang::Object {
	$class(GestureHandler$PerComponentNotifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GestureHandler$PerComponentNotifier();
	void init$(::java::awt::Component* component, ::com::apple::eawt::event::GestureHandler* handler);
	virtual void recursivelyHandleMagnify(::com::apple::eawt::event::MagnificationEvent* e);
	virtual void recursivelyHandlePhaseChange(double phase, ::com::apple::eawt::event::GesturePhaseEvent* e);
	virtual void recursivelyHandleRotate(::com::apple::eawt::event::RotationEvent* e);
	virtual void recursivelyHandleSwipe(double x, double y, ::com::apple::eawt::event::SwipeEvent* e);
	::java::awt::Component* component = nullptr;
	::com::apple::eawt::event::GestureHandler* handler = nullptr;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureHandler$PerComponentNotifier_h_