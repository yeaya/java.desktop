#ifndef _javax_swing_plaf_basic_BasicButtonUI$SelectNextBtn_h_
#define _javax_swing_plaf_basic_BasicButtonUI$SelectNextBtn_h_
//$ class javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn
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
				class BasicButtonUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicButtonUI$SelectNextBtn : public ::javax::swing::AbstractAction {
	$class(BasicButtonUI$SelectNextBtn, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicButtonUI$SelectNextBtn();
	void init$(::javax::swing::plaf::basic::BasicButtonUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicButtonUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicButtonUI$SelectNextBtn_h_