#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardHomeHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardHomeHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardHomeHandler
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
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneUI$KeyboardHomeHandler : public ::java::awt::event::ActionListener {
	$class(BasicSplitPaneUI$KeyboardHomeHandler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicSplitPaneUI$KeyboardHomeHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardHomeHandler_h_