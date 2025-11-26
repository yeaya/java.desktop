#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$UpdateAction_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$UpdateAction_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction
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

class $import BasicFileChooserUI$UpdateAction : public ::javax::swing::AbstractAction {
	$class(BasicFileChooserUI$UpdateAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicFileChooserUI$UpdateAction();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$UpdateAction_h_