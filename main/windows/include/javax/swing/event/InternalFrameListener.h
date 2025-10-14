#ifndef _javax_swing_event_InternalFrameListener_h_
#define _javax_swing_event_InternalFrameListener_h_
//$ interface javax.swing.event.InternalFrameListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class InternalFrameEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import InternalFrameListener : public ::java::util::EventListener {
	$interface(InternalFrameListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void internalFrameActivated(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameClosed(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameDeactivated(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameDeiconified(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameIconified(::javax::swing::event::InternalFrameEvent* e) {}
	virtual void internalFrameOpened(::javax::swing::event::InternalFrameEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_InternalFrameListener_h_