#ifndef _javax_swing_plaf_basic_BasicSliderUI$ChangeHandler_h_
#define _javax_swing_plaf_basic_BasicSliderUI$ChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$ChangeHandler
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
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSliderUI$ChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(BasicSliderUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicSliderUI$ChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$ChangeHandler_h_