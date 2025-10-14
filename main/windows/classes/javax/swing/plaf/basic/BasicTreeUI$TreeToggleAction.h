#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeToggleAction_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeToggleAction_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeToggleAction
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

class $export BasicTreeUI$TreeToggleAction : public ::javax::swing::AbstractAction {
	$class(BasicTreeUI$TreeToggleAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicTreeUI$TreeToggleAction();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, $String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeToggleAction_h_