#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeTraverseAction_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeTraverseAction_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction
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

class $export BasicTreeUI$TreeTraverseAction : public ::javax::swing::AbstractAction {
	$class(BasicTreeUI$TreeTraverseAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicTreeUI$TreeTraverseAction();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, int32_t direction, $String* name);
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, int32_t direction, $String* name, bool changeSelection);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	int32_t direction = 0;
	bool changeSelection = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeTraverseAction_h_