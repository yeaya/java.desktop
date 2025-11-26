#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$FocusHandler_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$FocusHandler_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

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
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTabbedPaneUI$FocusHandler : public ::java::awt::event::FocusAdapter {
	$class(BasicTabbedPaneUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	BasicTabbedPaneUI$FocusHandler();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$FocusHandler_h_