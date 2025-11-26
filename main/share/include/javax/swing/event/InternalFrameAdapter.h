#ifndef _javax_swing_event_InternalFrameAdapter_h_
#define _javax_swing_event_InternalFrameAdapter_h_
//$ class javax.swing.event.InternalFrameAdapter
//$ extends javax.swing.event.InternalFrameListener

#include <javax/swing/event/InternalFrameListener.h>

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

class $import InternalFrameAdapter : public ::javax::swing::event::InternalFrameListener {
	$class(InternalFrameAdapter, $NO_CLASS_INIT, ::javax::swing::event::InternalFrameListener)
public:
	InternalFrameAdapter();
	void init$();
	virtual void internalFrameActivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosed(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeactivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeiconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameIconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameOpened(::javax::swing::event::InternalFrameEvent* e) override;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_InternalFrameAdapter_h_