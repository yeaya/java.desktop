#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$BasicInternalFrameListener
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
		namespace plaf {
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicInternalFrameUI$BasicInternalFrameListener : public ::javax::swing::event::InternalFrameListener {
	$class(BasicInternalFrameUI$BasicInternalFrameListener, $NO_CLASS_INIT, ::javax::swing::event::InternalFrameListener)
public:
	BasicInternalFrameUI$BasicInternalFrameListener();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void internalFrameActivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosed(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeactivated(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameDeiconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameIconified(::javax::swing::event::InternalFrameEvent* e) override;
	virtual void internalFrameOpened(::javax::swing::event::InternalFrameEvent* e) override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener_h_