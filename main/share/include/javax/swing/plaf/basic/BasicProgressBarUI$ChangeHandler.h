#ifndef _javax_swing_plaf_basic_BasicProgressBarUI$ChangeHandler_h_
#define _javax_swing_plaf_basic_BasicProgressBarUI$ChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicProgressBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicProgressBarUI$ChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(BasicProgressBarUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicProgressBarUI$ChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicProgressBarUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicProgressBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicProgressBarUI$ChangeHandler_h_