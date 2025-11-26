#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$ApproveSelectionAction_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$ApproveSelectionAction_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction
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
				class BasicFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicFileChooserUI$ApproveSelectionAction : public ::javax::swing::AbstractAction {
	$class(BasicFileChooserUI$ApproveSelectionAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicFileChooserUI$ApproveSelectionAction();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$ApproveSelectionAction_h_