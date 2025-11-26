#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeIncrementAction_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeIncrementAction_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction
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

class $import BasicTreeUI$TreeIncrementAction : public ::javax::swing::AbstractAction {
	$class(BasicTreeUI$TreeIncrementAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicTreeUI$TreeIncrementAction();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, int32_t direction, $String* name);
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	int32_t direction = 0;
	bool addToSelection = false;
	bool changeSelection = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeIncrementAction_h_