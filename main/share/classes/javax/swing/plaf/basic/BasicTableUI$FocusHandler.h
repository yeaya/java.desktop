#ifndef _javax_swing_plaf_basic_BasicTableUI$FocusHandler_h_
#define _javax_swing_plaf_basic_BasicTableUI$FocusHandler_h_
//$ class javax.swing.plaf.basic.BasicTableUI$FocusHandler
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
				class BasicTableUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTableUI$FocusHandler : public ::java::awt::event::FocusListener {
	$class(BasicTableUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	BasicTableUI$FocusHandler();
	void init$(::javax::swing::plaf::basic::BasicTableUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::basic::BasicTableUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableUI$FocusHandler_h_