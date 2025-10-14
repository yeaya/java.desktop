#ifndef _javax_swing_plaf_basic_BasicTextUI$FocusAction_h_
#define _javax_swing_plaf_basic_BasicTextUI$FocusAction_h_
//$ class javax.swing.plaf.basic.BasicTextUI$FocusAction
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
				class BasicTextUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI$FocusAction : public ::javax::swing::AbstractAction {
	$class(BasicTextUI$FocusAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicTextUI$FocusAction();
	void init$(::javax::swing::plaf::basic::BasicTextUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTextUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$FocusAction_h_