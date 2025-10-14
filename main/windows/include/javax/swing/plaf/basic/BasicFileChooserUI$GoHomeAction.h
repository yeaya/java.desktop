#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$GoHomeAction_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$GoHomeAction_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$GoHomeAction
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

class $import BasicFileChooserUI$GoHomeAction : public ::javax::swing::AbstractAction {
	$class(BasicFileChooserUI$GoHomeAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicFileChooserUI$GoHomeAction();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$GoHomeAction_h_