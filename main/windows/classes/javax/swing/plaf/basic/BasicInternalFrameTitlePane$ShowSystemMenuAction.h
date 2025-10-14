#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$ShowSystemMenuAction_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$ShowSystemMenuAction_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction
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
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicInternalFrameTitlePane$ShowSystemMenuAction : public ::javax::swing::AbstractAction {
	$class(BasicInternalFrameTitlePane$ShowSystemMenuAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicInternalFrameTitlePane$ShowSystemMenuAction();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0, bool show);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
	bool show = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$ShowSystemMenuAction_h_