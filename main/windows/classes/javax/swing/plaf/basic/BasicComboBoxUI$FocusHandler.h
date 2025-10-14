#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$FocusHandler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$FocusHandler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler
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
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxUI$FocusHandler : public ::java::awt::event::FocusListener {
	$class(BasicComboBoxUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	BasicComboBoxUI$FocusHandler();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$FocusHandler_h_