#ifndef _com_apple_eawt_event_GestureAdapter_h_
#define _com_apple_eawt_event_GestureAdapter_h_
//$ class com.apple.eawt.event.GestureAdapter
//$ extends com.apple.eawt.event.GesturePhaseListener
//$ implements com.apple.eawt.event.MagnificationListener,com.apple.eawt.event.RotationListener,com.apple.eawt.event.SwipeListener

#include <com/apple/eawt/event/GesturePhaseListener.h>
#include <com/apple/eawt/event/MagnificationListener.h>
#include <com/apple/eawt/event/RotationListener.h>
#include <com/apple/eawt/event/SwipeListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class GesturePhaseEvent;
				class MagnificationEvent;
				class RotationEvent;
				class SwipeEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureAdapter : public ::com::apple::eawt::event::GesturePhaseListener, public ::com::apple::eawt::event::MagnificationListener, public ::com::apple::eawt::event::RotationListener, public ::com::apple::eawt::event::SwipeListener {
	$class(GestureAdapter, $NO_CLASS_INIT, ::com::apple::eawt::event::GesturePhaseListener, ::com::apple::eawt::event::MagnificationListener, ::com::apple::eawt::event::RotationListener, ::com::apple::eawt::event::SwipeListener)
public:
	GestureAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void gestureBegan(::com::apple::eawt::event::GesturePhaseEvent* e) override;
	virtual void gestureEnded(::com::apple::eawt::event::GesturePhaseEvent* e) override;
	virtual void magnify(::com::apple::eawt::event::MagnificationEvent* e) override;
	virtual void rotate(::com::apple::eawt::event::RotationEvent* e) override;
	virtual void swipedDown(::com::apple::eawt::event::SwipeEvent* e) override;
	virtual void swipedLeft(::com::apple::eawt::event::SwipeEvent* e) override;
	virtual void swipedRight(::com::apple::eawt::event::SwipeEvent* e) override;
	virtual void swipedUp(::com::apple::eawt::event::SwipeEvent* e) override;
	virtual $String* toString() override;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureAdapter_h_