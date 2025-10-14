#ifndef _javax_swing_plaf_basic_BasicDesktopPaneUI$CloseAction_h_
#define _javax_swing_plaf_basic_BasicDesktopPaneUI$CloseAction_h_
//$ class javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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
				class BasicDesktopPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicDesktopPaneUI$CloseAction : public ::javax::swing::AbstractAction {
	$class(BasicDesktopPaneUI$CloseAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicDesktopPaneUI$CloseAction();
	void init$(::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDesktopPaneUI$CloseAction_h_