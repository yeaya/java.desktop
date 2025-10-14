#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$CloseAction_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$CloseAction_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$CloseAction
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

class $import BasicInternalFrameTitlePane$CloseAction : public ::javax::swing::AbstractAction {
	$class(BasicInternalFrameTitlePane$CloseAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicInternalFrameTitlePane$CloseAction();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$CloseAction_h_