#ifndef _javax_swing_plaf_basic_BasicComboPopup$AutoScrollActionHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$AutoScrollActionHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboPopup$AutoScrollActionHandler : public ::java::awt::event::ActionListener {
	$class(BasicComboPopup$AutoScrollActionHandler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicComboPopup$AutoScrollActionHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0, int32_t direction);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
	int32_t direction = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$AutoScrollActionHandler_h_