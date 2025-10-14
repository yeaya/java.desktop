#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$TabSelectionHandler_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$TabSelectionHandler_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler
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
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTabbedPaneUI$TabSelectionHandler : public ::javax::swing::event::ChangeListener {
	$class(BasicTabbedPaneUI$TabSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicTabbedPaneUI$TabSelectionHandler();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$TabSelectionHandler_h_