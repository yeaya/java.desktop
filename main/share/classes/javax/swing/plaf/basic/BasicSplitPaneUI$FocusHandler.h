#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$FocusHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$FocusHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$FocusHandler
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
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneUI$FocusHandler : public ::java::awt::event::FocusAdapter {
	$class(BasicSplitPaneUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	BasicSplitPaneUI$FocusHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* ev) override;
	virtual void focusLost(::java::awt::event::FocusEvent* ev) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$FocusHandler_h_