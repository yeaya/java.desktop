#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardEndHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardEndHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler
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

class $import BasicSplitPaneUI$KeyboardEndHandler : public ::java::awt::event::ActionListener {
	$class(BasicSplitPaneUI$KeyboardEndHandler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicSplitPaneUI$KeyboardEndHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardEndHandler_h_