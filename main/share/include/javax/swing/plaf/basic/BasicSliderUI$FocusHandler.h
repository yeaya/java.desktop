#ifndef _javax_swing_plaf_basic_BasicSliderUI$FocusHandler_h_
#define _javax_swing_plaf_basic_BasicSliderUI$FocusHandler_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$FocusHandler
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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

class $import BasicSliderUI$FocusHandler : public ::java::awt::event::FocusListener {
	$class(BasicSliderUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	BasicSliderUI$FocusHandler();
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$FocusHandler_h_