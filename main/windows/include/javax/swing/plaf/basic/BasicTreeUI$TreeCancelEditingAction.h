#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeCancelEditingAction_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeCancelEditingAction_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction
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
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$TreeCancelEditingAction : public ::javax::swing::AbstractAction {
	$class(BasicTreeUI$TreeCancelEditingAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicTreeUI$TreeCancelEditingAction();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, $String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeCancelEditingAction_h_